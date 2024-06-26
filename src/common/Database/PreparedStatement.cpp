#include "PreparedStatement.h"
#include "DbConnection.h"

#include <MySqlConnector.h>

#include <string.h>
#include <sstream>
#include <cassert>

Sapphire::Db::PreparedStatement::PreparedStatement( uint32_t index ) :
  m_stmt( nullptr ),
  m_index( index )
{
}

Sapphire::Db::PreparedStatement::~PreparedStatement()
{
}

void Sapphire::Db::PreparedStatement::bindParameters()
{
  assert( m_stmt );

  uint8_t i = 1;
  for( ; i < m_statementData.size(); i++ )
  {
    switch( m_statementData[ i ].type )
    {
      case TYPE_BOOL:
        m_stmt->setBoolean( i, m_statementData[ i ].data.boolean );
        break;
      case TYPE_UI:
        m_stmt->setUInt( i, m_statementData[ i ].data.ui32 );
        break;
      case TYPE_I:
        m_stmt->setInt( i, m_statementData[ i ].data.i32 );
        break;
      case TYPE_UI64:
        m_stmt->setUInt64( i, m_statementData[ i ].data.ui64 );
        break;
      case TYPE_I64:
        m_stmt->setInt64( i, m_statementData[ i ].data.i64 );
        break;
      case TYPE_DOUBLE:
        m_stmt->setDouble( i, m_statementData[ i ].data.d );
        break;
      case TYPE_STRING:
        m_stmt->setString( i, std::string( reinterpret_cast< char* >( m_statementData[ i ].binary.data() ) ) );
        break;
      case TYPE_BINARY:
      {
        std::stringstream* is = new std::stringstream;

        for( auto entry : m_statementData[ i ].binary )
          is->rdbuf()->sputc( static_cast< char > ( entry ) );

        m_stmt->setBlob( i, is );
      }
        break;
      case TYPE_NULL:
        m_stmt->setNull( i, 0 );
        break;
    }
  }
}

//- Bind to buffer
void Sapphire::Db::PreparedStatement::setBool( uint8_t index, const bool value )
{
  if( index >= m_statementData.size() )
    m_statementData.resize( index + 1 );

  m_statementData[ index ].data.boolean = value;
  m_statementData[ index ].type = TYPE_BOOL;
}

void Sapphire::Db::PreparedStatement::setUInt( uint8_t index, uint32_t value )
{
  if( index >= m_statementData.size() )
    m_statementData.resize( index + 1 );

  m_statementData[ index ].data.ui32 = value;
  m_statementData[ index ].type = TYPE_UI;
}

void Sapphire::Db::PreparedStatement::setUInt64( uint8_t index, uint64_t value )
{
  if( index >= m_statementData.size() )
    m_statementData.resize( index + 1 );

  m_statementData[ index ].data.ui64 = value;
  m_statementData[ index ].type = TYPE_UI64;
}

void Sapphire::Db::PreparedStatement::setInt( uint8_t index, int32_t value )
{
  if( index >= m_statementData.size() )
    m_statementData.resize( index + 1 );

  m_statementData[ index ].data.i32 = value;
  m_statementData[ index ].type = TYPE_I;
}

void Sapphire::Db::PreparedStatement::setInt64( uint8_t index, int64_t value )
{
  if( index >= m_statementData.size() )
    m_statementData.resize( index + 1 );

  m_statementData[ index ].data.i64 = value;
  m_statementData[ index ].type = TYPE_I64;
}

void Sapphire::Db::PreparedStatement::setDouble( uint8_t index, double value )
{
  if( index >= m_statementData.size() )
    m_statementData.resize( index + 1 );

  m_statementData[ index ].data.d = value;
  m_statementData[ index ].type = TYPE_DOUBLE;
}

void Sapphire::Db::PreparedStatement::setString( uint8_t index, const std::string& value )
{
  if( index >= m_statementData.size() )
    m_statementData.resize( index + 1 );

  m_statementData[ index ].binary.resize( value.length() + 1 );
  memcpy( m_statementData[ index ].binary.data(), value.c_str(), value.length() + 1 );
  m_statementData[ index ].type = TYPE_STRING;
}

void Sapphire::Db::PreparedStatement::setBinary( uint8_t index, const std::vector< uint8_t >& value )
{
  if( index >= m_statementData.size() )
    m_statementData.resize( index + 1 );

  m_statementData[ index ].binary = value;
  m_statementData[ index ].type = TYPE_BINARY;
}

void Sapphire::Db::PreparedStatement::setNull( uint8_t index )
{
  if( index >= m_statementData.size() )
    m_statementData.resize( index + 1 );

  m_statementData[ index ].type = TYPE_NULL;
}

uint32_t Sapphire::Db::PreparedStatement::getIndex() const
{
  return m_index;
}

void Sapphire::Db::PreparedStatement::setMysqlPS( std::shared_ptr< Mysql::PreparedStatement > pStmt )
{
  m_stmt = pStmt;
}

template<>
void Sapphire::Db::PreparedStatement::set( uint8_t index, bool value )
{
  setBool( index, value );
}

template<>
void Sapphire::Db::PreparedStatement::set( uint8_t index, uint32_t value )
{
  setUInt( index, value );
}

template<>
void Sapphire::Db::PreparedStatement::set( uint8_t index, uint64_t value )
{
  setUInt64( index, value );
}

template<>
void Sapphire::Db::PreparedStatement::set( uint8_t index, int32_t value )
{
  setInt( index, value );
}

template<>
void Sapphire::Db::PreparedStatement::set( uint8_t index, int64_t value )
{
  setInt64( index, value );
}

template<>
void Sapphire::Db::PreparedStatement::set( uint8_t index, const std::string& value )
{
  setString( index, value );
}

template<>
void Sapphire::Db::PreparedStatement::set( uint8_t index, const std::vector< uint8_t >& value )
{
  setBinary( index, value );
}