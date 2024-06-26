#include <ScriptObject.h>
#include <Territory/InstanceContent.h>

using namespace Sapphire;

class TheBindingCoilofBahamutTurn1 : public Sapphire::ScriptAPI::InstanceContentScript
{
public:
  TheBindingCoilofBahamutTurn1() : Sapphire::ScriptAPI::InstanceContentScript( 30002 )
  { }

  void onInit( InstanceContent& instance ) override
  {
    instance.addEObj( "sgvf_w_lvd_b0118", 2000620, 4293369, 4293424, 4, { -1.810616f, 13.164380f, 57.682442f }, 1.000000f, 0.000000f, 0); 
    // States -> vf_bextwall_on (id: 3) vf_bextwall_of (id: 4) 
    instance.addEObj( "sgvf_w_lvd_b0094", 2000619, 4293368, 4293425, 4, { -3.276026f, 13.164380f, 57.488449f }, 1.000000f, 0.000000f, 0); 
    // States -> vf_line_on (id: 12) vf_line_of (id: 13) 
    instance.addEObj( "unknown_0", 2000680, 0, 4311943, 4, { 0.000000f, 5.245687f, 4.314113f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "sgpl_s1b1_bosswall", 2000620, 4293633, 4293637, 4, { 8.673634f, 4.398203f, -361.720886f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "sgvf_w_lvd_b0249", 2000619, 4293632, 4293638, 4, { 7.539745f, 4.948945f, -366.654388f }, 0.991760f, 0.000048f, 0); 
    // States -> vf_line_on (id: 10) vf_line_of (id: 11) 
    instance.addEObj( "unknown_1", 2001137, 0, 4328192, 4, { -8.048342f, 1.700000f, -412.088593f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_2", 2001696, 0, 4328189, 4, { -23.791620f, 1.300000f, -414.239990f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Shortcut", 2000700, 0, 4294878, 4, { -45.330261f, 25.136589f, 134.093399f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "sgpl_s1b1_door_col", 2000486, 4374535, 4329418, 4, { -5.435945f, 12.209330f, 0.953091f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_3", 2000746, 4312523, 4313788, 4, { 57.321320f, 2.000001f, -254.168396f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_4", 2000746, 4312527, 4313789, 4, { 36.303661f, 2.815034f, -341.235992f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Allaganterminal", 2001154, 4083745, 4330640, 4, { -38.633110f, 0.899952f, -414.162201f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_5", 2001167, 4329693, 4333433, 4, { -50.832001f, 59.871399f, -332.417511f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "sgpl_s1b1_lightwall", 2002712, 4374479, 4374481, 4, { 52.174641f, 2.740428f, -248.752899f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "sgpl_s1b1_lightwall_1", 2002712, 4374482, 4374483, 4, { 44.598309f, 1.549361f, -340.584991f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "sgpl_f1r1_bossplusfloor", 2001152, 4374713, 4374705, 4, { -4.591531f, 4.500000f, -379.052795f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "sgpl_f1r1_bossplusfloor_1", 2001152, 4374714, 4374706, 4, { -47.199150f, 4.900000f, -430.581299f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "sgpl_f1r1_bossplusfloor_2", 2001152, 4374715, 4374707, 4, { -12.391370f, -0.160584f, -378.187805f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "sgpl_f1r1_bossplusfloor_3", 2001152, 4374749, 4374750, 4, { -12.091370f, -0.160584f, -376.087799f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_6", 2000681, 4312291, 4312502, 4, { 0.534759f, 4.500000f, -374.000000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_7", 2000681, 4312292, 4312503, 4, { -7.437989f, 0.900002f, -387.547607f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_8", 2000681, 4312293, 4312504, 4, { -23.117430f, 0.472961f, -387.472412f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_9", 2000681, 4312297, 4312505, 4, { -46.428509f, 0.500000f, -400.448212f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_10", 2000681, 4312296, 4312506, 4, { -30.738091f, 0.099998f, -400.874908f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_11", 2000681, 4312295, 4312507, 4, { -14.994600f, -0.299999f, -400.505615f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_12", 2000681, 4312294, 4312508, 4, { 0.589670f, -0.700001f, -400.720093f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_13", 2000681, 4312298, 4312509, 4, { -7.442382f, 1.700001f, -414.361389f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_14", 2000681, 4312299, 4312510, 4, { -22.934330f, 1.296936f, -414.053589f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_15", 2000681, 4312300, 4312511, 4, { -38.631561f, 0.900004f, -414.153595f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_16", 2000681, 4312303, 4312512, 4, { -49.847839f, 4.899996f, -429.440002f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_17", 2000681, 4312302, 4312513, 4, { -30.867050f, 2.500000f, -428.009308f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_18", 2000681, 4312301, 4312514, 4, { -15.123560f, 2.100006f, -427.852295f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Entrance", 2000627, 4293311, 4293422, 5, { -57.085258f, 25.136589f, 146.983200f }, 1.000000f, 0.000000f, 0); 
    // States -> vf_lock_on (id: 11) vf_lock_of (id: 12) 

  }

  void onUpdate( InstanceContent& instance, uint64_t tickCount ) override
  {

  }

  void onEnterTerritory( InstanceContent& instance, Entity::Player& player, uint32_t eventId, uint16_t param1,
                         uint16_t param2 ) override
  {

  }

};

EXPOSE_SCRIPT( TheBindingCoilofBahamutTurn1 );