/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

if (!hasInterface || isServer) exitWith {};

// 22 NPCs
private _npcs = [
["Exile_Trader_Office", ["InBaseMoves_table1"], "Exile_Trader_Office", "WhiteHead_07", [[],[],[],["U_B_CombatUniform_mcam_worn",[]],["V_PlateCarrierGL_blk",[]],[],"H_Beret_Colonel","",[],["","","","","",""]], [14599.8, 16775.1, 23.0289], [-0.69919, -0.714936, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", ["HubBriefing_think"], "Exile_Trader_SpecialOperations", "WhiteHead_21", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [14579, 16756.4, 18.0103], [0.731699, 0.681628, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms2", ["HubBriefing_stretch"], "Exile_Trader_CommunityCustoms2", "WhiteHead_10", [[],[],[],["U_C_Mechanic_01_F",[]],["V_DeckCrew_yellow_F",[]],[],"H_Construction_headset_yellow_F","G_Respirator_yellow_F",[],["","","","","",""]], [14591.7, 16757, 17.9994], [0.719401, -0.694596, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", ["HubSittingChairUB_idle1"], "Exile_Trader_AircraftCustoms", "TanoanHead_A3_07", [[],[],[],["U_I_pilotCoveralls",[]],["V_LegStrapBag_black_F",[]],[],"","G_Aviator",[],["","","","","",""]], [14625, 16759.5, 18.2874], [0.984598, 0.174834, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", ["LHD_krajPaluby"], "Exile_Trader_Aircraft", "WhiteHead_12", [[],[],[],["U_O_PilotCoveralls",[]],[],[],"H_PilotHelmetHeli_I","",[],["","","","","",""]], [14629.1, 16757.8, 17.9114], [0.651291, -0.758828, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["HubSittingAtTableU_idle2"], "Exile_Trader_Equipment", "WhiteHead_09", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","G_Tactical_Black",[],["","","","","",""]], [14583.2, 16752.4, 18.0396], [0.633286, 0.773918, 0], [0, 0, 1]],
["Exile_Trader_Food", ["Acts_CivilListening_2"], "Exile_Trader_Food", "WhiteHead_07", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","",[],["","","","","",""]], [14577.4, 16765.8, 18.0094], [-0.639974, 0.768396, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["HubSittingHighB_move1"], "Exile_Trader_Armory", "WhiteHead_05", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [14586, 16755.9, 17.9857], [-0.442069, -0.896981, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", ["HubSittingChairUB_idle1"], "Exile_Trader_WasteDump", "Sturrock", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","G_Aviator",[],["","","","","",""]], [14563.2, 16742.5, 18.2039], [0.639667, 0.768652, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", ["InBaseMoves_table1"], "Exile_Trader_CommunityCustoms", "WhiteHead_08", [[],[],[],["U_C_IDAP_Man_cargo_F",[]],[],[],"H_Cap_Orange_IDAP_F","G_Respirator_white_F",[],["","","","","",""]], [14571.9, 16724.9, 17.9114], [0.827267, 0.561809, 0], [0, 0, 1]],
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
