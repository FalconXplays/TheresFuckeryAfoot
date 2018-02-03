///////////////////////////////////////////////////////////////////////////////
// Static Objects
///////////////////////////////////////////////////////////////////////////////

// Taken away for now
//#include "initServer.sqf"

if (!hasInterface || isServer) exitWith {};

///////////////////////////////////////////////////////////////////////////
// START FALCON'S MODS!
///////////////////////////////////////////////////////////////////////////

// 22 NPCs
private _npcs = [
["Exile_Trader_Office", ["InBaseMoves_table1"], "Exile_Trader_Office", "WhiteHead_07", [[],[],[],["U_B_CombatUniform_mcam_worn",[]],["V_PlateCarrierGL_blk",[]],[],"H_Beret_Colonel","",[],["","","","","",""]], [14599.8, 16775.1, 23.0289], [-0.69919, -0.714936, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", ["HubBriefing_think"], "Exile_Trader_SpecialOperations", "WhiteHead_21", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [14579, 16756.4, 18.0456], [0.731699, 0.681628, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms2", ["HubStandingUC_move3"], "Exile_Trader_CommunityCustoms2", "WhiteHead_10", [[],[],[],["U_C_Mechanic_01_F",[]],["V_DeckCrew_yellow_F",[]],[],"H_Construction_headset_yellow_F","G_Respirator_yellow_F",[],["","","","","",""]], [14591.7, 16757, 17.9994], [0.719401, -0.694596, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", ["HubSittingChairUB_idle1"], "Exile_Trader_AircraftCustoms", "TanoanHead_A3_07", [[],[],[],["U_I_pilotCoveralls",[]],["V_LegStrapBag_black_F",[]],[],"","G_Aviator",[],["","","","","",""]], [14625, 16759.5, 18.2874], [0.984598, 0.174834, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", ["LHD_krajPaluby"], "Exile_Trader_Aircraft", "WhiteHead_12", [[],[],[],["U_O_PilotCoveralls",[]],[],[],"H_PilotHelmetHeli_I","",[],["","","","","",""]], [14629.1, 16757.8, 17.9114], [0.651291, -0.758828, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["HubSittingAtTableU_idle2"], "Exile_Trader_Equipment", "WhiteHead_09", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","G_Tactical_Black",[],["","","","","",""]], [14583.2, 16752.4, 18.0396], [0.633286, 0.773918, 0], [0, 0, 1]],
["Exile_Trader_Food", ["Acts_CivilListening_2"], "Exile_Trader_Food", "WhiteHead_07", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","",[],["","","","","",""]], [14577.4, 16765.8, 18.0094], [-0.639974, 0.768396, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["HubSittingHighB_move1"], "Exile_Trader_Armory", "WhiteHead_05", [["arifle_MXM_F","","","",["30Rnd_65x39_caseless_mag",30],[],""],[],[],["U_O_CombatUniform_oucamo",[["30Rnd_65x39_caseless_mag",1,30]]],["V_Rangemaster_belt",[["30Rnd_65x39_caseless_mag",2,30]]],[],"H_Booniehat_khk_hs","G_Sport_BlackWhite",[],["","","","","",""]], [14586, 16755.9, 17.9857], [-0.442069, -0.896981, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", ["HubSittingChairUB_idle1"], "Exile_Trader_WasteDump", "Sturrock", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","G_Aviator",[],["","","","","",""]], [14563.2, 16742.5, 18.2039], [0.639667, 0.768652, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", ["InBaseMoves_table1"], "Exile_Trader_CommunityCustoms", "WhiteHead_08", [[],[],[],["U_C_IDAP_Man_cargo_F",[]],[],[],"H_Cap_Orange_IDAP_F","G_Respirator_white_F",[],["","","","","",""]], [14571.9, 16725, 17.9114], [0.961758, 0.273902, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", ["Acts_carFixingWheel"], "Exile_Trader_VehicleCustoms", "GreekHead_A3_02", [[],[],[],["U_C_WorkerCoveralls",[]],[],[],"","G_EyeProtectors_Earpiece_F",[],["","","","","",""]], [14600.2, 16922.3, 17.7365], [0.796456, 0.604696, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["HubSittingChairUC_idle3"], "Exile_Trader_Vehicle", "WhiteHead_18", [[],[],[],["U_Marshal",[]],[],[],"","",[],["","","","","",""]], [14613.1, 16922.8, 18.7346], [-0.624793, -0.78079, 0], [0, 0, 1]],
["Exile_Guard_03", ["HubBriefing_loop"], "", "WhiteHead_15", [[],[],[],["U_O_CombatUniform_oucamo",[]],[],[],"","G_Spectacles",[],["","","","","",""]], [14528.7, 16751.4, 17.9114], [0.5, 0.866025, 0], [0, 0, 1]],
["Exile_Trader_BoatCustoms", ["Acts_carFixingWheel"], "Exile_Trader_BoatCustoms", "WhiteHead_13", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_Watchcap_cbr","",[],["","","","","",""]], [15451.4, 15746.1, 4.35975], [0.0561451, -0.998423, 0], [0, 0, 1]],
["Exile_Guard_01", ["HubStanding_idle1"], "", "GreekHead_A3_09", [["srifle_DMR_02_sniper_F","muzzle_snds_338_sand","acc_pointer_IR","optic_Nightstalker",["10Rnd_338_Mag",10],[],"bipod_01_F_snd"],[],[],["U_BG_Guerrilla_6_1",[["10Rnd_338_Mag",1,10]]],["V_PlateCarrierGL_blk",[["10Rnd_338_Mag",2,10]]],[],"H_HeadSet_black_F","",[],["","","","","",""]], [15401.3, 15753.4, 24.2129], [0.656559, 0.754274, 0], [0, 0, 1]],
["Exile_Trader_Boat", ["HubBriefing_stretch"], "Exile_Trader_Boat", "WhiteHead_18", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_LegStrapBag_black_F",[]],[],"H_Bandanna_gry","",[],["","","","","",""]], [15442.8, 15741.2, 4.34977], [0.112648, 0.993635, 0], [0, 0, 1]],
["Exile_Guard_03", [], "", "WhiteHead_10", [["arifle_MX_SW_Black_F","muzzle_snds_65_TI_blk_F","acc_pointer_IR","optic_Arco_blk_F",["100Rnd_65x39_caseless_mag",100],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_PlateCarrier1_blk",[]],[],"H_Booniehat_khk_hs","",[],["","","","","",""]], [15453.8, 15753.9, 7.28551], [-0.655932, 0.75482, 0], [0, 0, 1]],
["Exile_Trader_Diving", ["HubSittingChairA_idle2"], "Exile_Trader_Diving", "AfricanHead_03", [["arifle_SDAR_F","","","",[],[],""],[],[],["U_O_Wetsuit",[]],["V_RebreatherB",[]],[],"","G_I_Diving",[],["","","","","",""]], [15445.6, 15740.9, 4.35078], [-0.684318, 0.729184, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["HubStandingUC_move1"], "Exile_Trader_Hardware", "WhiteHead_17", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Tactical_Clear",[],["","","","","",""]], [14574.8, 16760.6, 18.0144], [-0.707107, 0.707107, 0], [0, 0, 1]],
["Exile_Guard_01", ["HubSittingChairB_idle3"], "", "WhiteHead_07", [[],[],[],["U_BG_Guerrilla_6_1",[]],["V_LegStrapBag_black_F",[]],[],"","G_Aviator",[],["","","","","",""]], [14594.8, 16774, 23.0464], [0.707107, -0.707107, 0], [0, 0, 1]],
["Exile_Guard_03", ["InBaseMoves_table1"], "", "TanoanHead_A3_02", [[],[],[],["U_B_GEN_Soldier_F",[]],[],[],"","G_Spectacles",[],["","","","","",""]], [14527.7, 16754.9, 17.9114], [0.707107, -0.707107, 0], [0, 0, 1]],
["Exile_Guard_03", ["HubStandingUA_move1"], "", "AsianHead_A3_03", [[],[],[],["U_C_Man_casual_2_F",[]],[],[],"","",[],["","","","","",""]], [14529.3, 16752.3, 17.9114], [-0.5, -0.866025, 0], [0, 0, 1]]
];

{
    private _logic = "Logic" createVehicleLocal [0, 0, 0];
    private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
    private _animations = _x select 1;
    
    _logic setPosWorld (_x select 5);
    _logic setVectorDirAndUp [_x select 6, _x select 7];
    
    _trader setVariable ["BIS_enableRandomization", false];
    _trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _trader setVariable ["ExileAnimations", _animations];
    _trader setVariable ["ExileTraderType", _x select 2];
    _trader disableAI "ANIM";
    _trader disableAI "MOVE";
    _trader disableAI "FSM";
    _trader disableAI "AUTOTARGET";
    _trader disableAI "TARGET";
    _trader disableAI "CHECKVISIBLE";
    _trader allowDamage false;
    _trader setFace (_x select 3);
    _trader setUnitLoadOut (_x select 4);
    _trader setPosWorld (_x select 5);
    _trader setVectorDirAndUp [_x select 6, _x select 7];
    _trader reveal _logic;
    _trader attachTo [_logic, [0, 0, 0]];
    _trader switchMove (_animations select 0);
    _trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
}
forEach _npcs;

///////////////////////////////////////////////////////////////////////////
// END FALCON'S MODS
///////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////
//Hardware Trader
/////////////////////////////////////////////////////////////////////////
// _workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
// _workBench setDir 45.4546;
// _workBench setPosATL [14587.8, 16758.7, 0.0938587];

// _trader = 
// [
    // "Exile_Trader_Hardware",
    // "Exile_Trader_Hardware",
    // "WhiteHead_17",
    // ["InBaseMoves_sitHighUp1"],
    // [0, 0, -0.5],
    // 170,
    // _workBench
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Fast Food Trader
/////////////////////////////////////////////////////////////////////////
// _cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
// _cashDesk setDir 131.818;
// _cashDesk setPosATL [14589.8, 16778.2, -0.0701294];

// _microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
// _cashDesk disableCollisionWith _microwave;         
// _microwave disableCollisionWith _cashDesk; 
// _microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

// _ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
// _cashDesk disableCollisionWith _ketchup;         
// _ketchup disableCollisionWith _cashDesk; 
// _ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

// _mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
// _cashDesk disableCollisionWith _mustard;         
// _mustard disableCollisionWith _cashDesk; 
// _mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

// _trader = 
// [
    // "Exile_Trader_Food",
    // "Exile_Trader_Food",
    // "GreekHead_A3_01",
    // ["InBaseMoves_table1"],
    // [0.1, 0.5, 0.2],
    // 170,
    // _cashDesk
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Armory Trader
/////////////////////////////////////////////////////////////////////////
// _chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
// _chair setDir 208.182;    
// _chair setPosATL [14568.1, 16764.3, 0.084837];

// _trader = 
// [
    // "Exile_Trader_Armory",
    // "Exile_Trader_Armory",
    // "PersianHead_A3_02",
    // ["InBaseMoves_SittingRifle1"],
    // [0, -0.15, -0.45],
    // 180,
    // _chair
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Equipment Trader
/////////////////////////////////////////////////////////////////////////
// _trader = 
// [
    // "Exile_Trader_Equipment",
    // "Exile_Trader_Equipment",
    // "WhiteHead_19",
    // ["InBaseMoves_Lean1"],
    // [14571.5, 16759.1, 0.126438],
    // 0
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Specops Trader
/////////////////////////////////////////////////////////////////////////
// _trader = 
// [
    // "Exile_Trader_SpecialOperations",
    // "Exile_Trader_SpecialOperations",
    // "AfricanHead_02",
    // ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    // [14566.3, 16773.2, 0.126438],
    // 140
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Office Trader
/////////////////////////////////////////////////////////////////////////
// _trader = 
// [
    // "Exile_Trader_Office",
    // "Exile_Trader_Office",
    // "GreekHead_A3_04",
    // ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    // [14599.6, 16774.6, 5.12644],
    // 220
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Waste Dump Trader
/////////////////////////////////////////////////////////////////////////
// _trader = 
// [
    // "Exile_Trader_WasteDump",
    // "Exile_Trader_WasteDump",
    // "GreekHead_A3_01",
    // ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    // [14608.4, 16901.3, 0],
    // 270
// ]
// call ExileClient_object_trader_create;


/////////////////////////////////////////////////////////////////////////
//Aircraft Trader
/////////////////////////////////////////////////////////////////////////
// _trader = 
// [
    // "Exile_Trader_Aircraft",
    // "Exile_Trader_Aircraft",
    // "WhiteHead_17",
    // ["LHD_krajPaluby"],
    // [14596.5, 16752.9, 0.12644],
    // 133
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Aircraft Customs Trader
/////////////////////////////////////////////////////////////////////////
// _trader = 
// [
    // "Exile_Trader_AircraftCustoms",
    // "Exile_Trader_AircraftCustoms",
    // "GreekHead_A3_07",
    // ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    // [14635, 16790.3, 0],
    // 156.294
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Vehicle Trader
/////////////////////////////////////////////////////////////////////////

// _trader = 
// [
    // "Exile_Trader_Vehicle",
    // "Exile_Trader_Vehicle",
    // "WhiteHead_11",
    // ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    // [14603.7, 16877.3, 0.00143433],
    // 90
// ]
// call ExileClient_object_trader_create;

// _carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
// _carWreck setDir 355.455;
// _carWreck setPosATL [14605.6, 16877.3, 0.0208359];

/////////////////////////////////////////////////////////////////////////
//Vehicle Customs Trader
/////////////////////////////////////////////////////////////////////////
// _trader = 
// [
    // "Exile_Trader_VehicleCustoms",
    // "Exile_Trader_VehicleCustoms",
    // "WhiteHead_11",
    // ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    // [14617.2, 16888.4, 0],
    // 269.96
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Guard 01
/////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_01",
    "",
    "WhiteHead_17",
    ["InBaseMoves_patrolling1"],
    [14564.9,16923.4,0.00146294],
    323.53
]
call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Guard 02
/////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_02",
    "",
    "WhiteHead_03",
    ["InBaseMoves_patrolling2"],
    [14626.3,16834.6,4.72644],
    326.455
]
call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Guard 03
/////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_03",
    "",
    "AfricanHead_03",
    ["InBaseMoves_patrolling1"],
    [14577.1,16793.1,3.75118],
    313.349
]
call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Western Guard 01
/////////////////////////////////////////////////////////////////////////
// _trader = 
// [
    // "Exile_Guard_02",
    // "",
    // "WhiteHead_03",
    // ["InBaseMoves_patrolling2"],
    // [2950.52,18195.3,4.93399],
    // 179.092
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Western Boat Trader
/////////////////////////////////////////////////////////////////////////

// _trader = 
// [
    // "Exile_Trader_Boat",
    // "Exile_Trader_Boat",
    // "WhiteHead_17",
    // ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    // [2914.35,18192.9,8.51858],
    // 88.3346
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Western Vehicle Trader
/////////////////////////////////////////////////////////////////////////

// _trader = 
// [
    // "Exile_Trader_Vehicle",
    // "Exile_Trader_Vehicle",
    // "WhiteHead_11",
    // ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    // [2980.19,18146.2,1.06391],
    // 222.352
// ]
// call ExileClient_object_trader_create;

// _carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
// _carWreck setDir 130.966;    
// _carWreck setPosATL [2978.76,18144.5,1.13293];

/////////////////////////////////////////////////////////////////////////
//Western Waste Dump Trader
/////////////////////////////////////////////////////////////////////////
// _trader = 
// [
    // "Exile_Trader_WasteDump",
    // "Exile_Trader_WasteDump",
    // "GreekHead_A3_01",
    // ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    // [2984.05,18133.4,0.00107765],
    // 29.3856
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Western Fast Food Trader
/////////////////////////////////////////////////////////////////////////

// _trader = 
// [
    // "Exile_Trader_Food",
    // "Exile_Trader_Food",
    // "GreekHead_A3_01",
    // ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    // [2979.87,18184.9,2.55185],
    // 89.2952
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Western Equipment Trader
/////////////////////////////////////////////////////////////////////////

// _trader = 
// [
    // "Exile_Trader_Equipment",
    // "Exile_Trader_Equipment",
    // "WhiteHead_19",
    // ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    // [2980.7,18192.9,2.49853],
    // 130.535
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Western Armory Trader
/////////////////////////////////////////////////////////////////////////

// _trader = 
// [
    // "Exile_Trader_Armory",
    // "Exile_Trader_Armory",
    // "PersianHead_A3_02",
    // ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    // [2986.43,18178.5,1.66267],
    // 296.855
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Western Guard 02
/////////////////////////////////////////////////////////////////////////
// _trader = 
// [
    // "Exile_Guard_03",
    // "",
    // "AfricanHead_03",
    // ["InBaseMoves_patrolling1"],
    // [2993.2,18167,0.353821],
    // 109.888
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Eastern Fast Food Trader
/////////////////////////////////////////////////////////////////////////
// _cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
// _cashDesk setDir 222.727;
// _cashDesk setPosATL [23353.1, 24168, 0.16585];

// _microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
// _cashDesk disableCollisionWith _microwave;         
// _microwave disableCollisionWith _cashDesk; 
// _microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

// _ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
// _cashDesk disableCollisionWith _ketchup;         
// _ketchup disableCollisionWith _cashDesk; 
// _ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

// _mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
// _cashDesk disableCollisionWith _mustard;         
// _mustard disableCollisionWith _cashDesk; 
// _mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

// _trader = 
// [
    // "Exile_Trader_Food",
    // "Exile_Trader_Food",
    // "GreekHead_A3_01",
    // ["InBaseMoves_table1"],
    // [0.1, 0.5, 0.2],
    // 170,
    // _cashDesk
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Eastern Boat Trader
/////////////////////////////////////////////////////////////////////////

// _trader = 
// [
    // "Exile_Trader_Boat",
    // "Exile_Trader_Boat",
    // "WhiteHead_17",
    // ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    // [23296.6,24189.8,5.61213],
    // 96
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Eastern Vehicle Trader
/////////////////////////////////////////////////////////////////////////

// _trader = 
// [
    // "Exile_Trader_Vehicle",
    // "Exile_Trader_Vehicle",
    // "WhiteHead_11",
    // ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    // [23385.6,24191.6,0.00136566],
    // 123
// ]
// call ExileClient_object_trader_create;

// _carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
// _carWreck setDir 47.2728;    
// _carWreck setPosATL [23387.3, 24190.3, 0.05];

/////////////////////////////////////////////////////////////////////////
//Eastern Hardware Trader
/////////////////////////////////////////////////////////////////////////
// _workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
// _workBench setDir 279.545;
// _workBench setPosATL [23371.6, 24188, 0.89873];

// _trader = 
// [
    // "Exile_Trader_Hardware",
    // "Exile_Trader_Hardware",
    // "WhiteHead_17",
    // ["InBaseMoves_sitHighUp1"],
    // [0, 0, -0.5],
    // 170,
    // _workBench
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Eastern Equipment Trader
/////////////////////////////////////////////////////////////////////////
// _trader = 
// [
    // "Exile_Trader_Equipment",
    // "Exile_Trader_Equipment",
    // "WhiteHead_19",
    // ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    // [23379.9, 24169.3, 0.199955],
    // 206
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Eastern Armory Trader
/////////////////////////////////////////////////////////////////////////
// _chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
// _chair setDir 12.7272;
// _chair setPosATL [23379.6, 24169.3, 4.56662];

// _trader = 
// [
    // "Exile_Trader_Armory",
    // "Exile_Trader_Armory",
    // "PersianHead_A3_02",
    // ["InBaseMoves_SittingRifle1"],
    // [0, -0.15, -0.45],
    // 180,
    // _chair
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Eastern Waste Dump Trader
/////////////////////////////////////////////////////////////////////////
// _trader = 
// [
    // "Exile_Trader_WasteDump",
    // "Exile_Trader_WasteDump",
    // "GreekHead_A3_01",
    // ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    // [23336.6,24214.4,0.00115061],
    // 346
// ]
// call ExileClient_object_trader_create;

/////////////////////////////////////////////////////////////////////////
//Russian Roulette
/////////////////////////////////////////////////////////////////////////
// [
    // "Exile_Trader_RussianRoulette",
    // "",
    // "GreekHead_A3_01",
    // ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    // [14622.6, 16820.1, 0.126],
    // 187.428
// ]
// call ExileClient_object_trader_create;
