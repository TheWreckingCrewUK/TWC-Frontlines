/*
	Faction: Modern Bundeswehr
	Author: Ross
	Requires: CUP
*/
class Blufor_Setup {
	AW_fobBuilding = "Land_Cargo_HQ_V1_F";

	AW_bluforCrates[] = { //the order links to the variable containing all resources
		"CargoNet_01_box_F", //supplies
		"CargoNet_01_barrels_F", //fuel
		"B_CargoNet_01_ammo_F" //ammo
	};

	AW_fobBoxes[] = { //vehicles that FOBs can be created from
		"UK3CB_BAF_MAN_HX58_Container_Green",
		"UK3CB_BAF_MAN_HX58_Cargo_Green_B"
	};

	AW_mobileRespawns[] = { //vehicles that act as mobile respawns
		"CUP_B_M113A3_Med_GER"
	};
	
	AW_medicalBuildings[] = { //buildings to add heal actions onto
		"RU_WarfarBFieldhHospital"
	};

	//Building menu options below, format {"Classname",{Supplies,Fuel,Ammo},"Any extra conditions"}
	AW_bluforLightVehicles[] = {
		{"B_UGV_02_Demining_F", {20,40,0}, ""},						// ED-1D

		{"I_G_Quadbike_01_F", {50,25,0}, ""},

		{"UK3CB_BAF_LandRover_Soft_Green_A", {60,25,0}, ""},				//Land Rover
		{"UK3CB_BAF_LandRover_Soft_FFR_Green_A", {60,25,0}, ""},                   
		{"UK3CB_BAF_LandRover_Hard_Green_A", {70,25,0}, ""},                      	
		{"UK3CB_BAF_LandRover_Hard_FFR_Green_A", {70,25,0}, ""},                   
		{"UK3CB_BAF_LandRover_Snatch_Green_A", {80,25,0}, ""},                     
		{"UK3CB_BAF_LandRover_Snatch_FFR_Green_A", {80,25,0}, ""},                 
		      
		{"CUP_B_Dingo_GER_Wld", {100,50,75}, ""},				//Dingo
		{"CUP_B_Dingo_GL_GER_Wld", {100,50,100}, ""},
		
		{"CUP_B_FENNEK_GER_Wld", {100,50,75}, ""}, 			//Fennek

		{"CUP_B_M113A3_GER", {150,50,50}, ""},			//M113

		{"UK3CB_BAF_MAN_HX60_Cargo_Green_A", {100,100,0}, ""},                       // MAN 4x4
		{"UK3CB_BAF_MAN_HX60_Transport_Green", {100,100,0}, ""},
		
		{"UK3CB_BAF_MAN_HX58_Cargo_Green_A", {120,100,0}, ""},                      // MAN 6x6
		{"UK3CB_BAF_MAN_HX58_Transport_Green", {120,100,0}, ""}
	};

	AW_bluforHeavyVehicles[] = {      
		{"CUP_B_Boxer_HMG_GER_Wld", {300,200,300}, ""},					//Boxer
		{"CUP_B_Boxer_GMG_GER_Wld", {400,200,400}, ""},
		
		{"UK3CB_BAF_Warrior_A3_W", {400,300,400}, ""},					//Warrior (Lynx)
		{"UK3CB_BAF_Warrior_A3_W_Cage", {500,400,500}, ""},
		
		{"CUP_B_Leopard2A6_GER", {1000,800,1000}, ""}				//Leopard 2
		
	};

	AW_bluforAirVehicles[] = {
		{"B_UAV_01_F", {50,100,0}, ""},                                             // AR-2 Darter
		{"B_UAV_06_F", {75,100,0}, ""},                                     		// AL-6 Pelican
		{"UK3CB_BAF_MQ9_Reaper", {300,200,200}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.35}}"},

		{"CUP_B_UH1D_GER_KSK", {150,100,150}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},							// Hueys
		{"CUP_B_UH1D_gunship_GER_KSK", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		
		{"CUP_B_CH53E_GER", {250,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                              // Heavy Lift
		{"CUP_B_CH53E_VIV_GER", {250,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},   

		{"UK3CB_BAF_Apache_AH1_DynamicLoadout", {800,400,800}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                // Apache

		{"CUP_B_C130J_GB", {800,400,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},											// C-130 (Transport)
		{"CUP_B_C130J_Cargo_GB", {800,400,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},										// C-130 (Cargo)
		
		{"CUP_B_F35B_BAF", {1200,1200,1200}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.35}}}"}								// A-149 Gryphon / JAS 39 Gripen (similar to Typhoon)
	};

	AW_bluforNavalVehicles[] = {
		{"B_Boat_Transport_01_F", {40,25,0}, ""},
		{"UK3CB_BAF_RHIB_GPMG", {90,20,70}, ""},
		{"UK3CB_BAF_RHIB_HMG", {100,40,70}, ""}
	};

	AW_bluforDefences[] = {
		{"B_T_Static_AA_F", {100,0,100}, ""},		// Mini-Spike AA (similar to Starstreak MANPAD)
		{"UK3CB_BAF_Static_L111A1_Deployed_High", {50,0,50}, ""},
		{"UK3CB_BAF_Static_L134A1_Deployed_High", {50,0,50}, ""}
	};

	AW_bluforBuildings[] = {
		{"RU_WarfareBFieldhHospital", {30,0,0}, ""},

		{"Camp", {10,0,0}, ""},
		{"CampEast", {15,0,0}, ""},
		{"Land_tent_east", {15,0,0}, ""},
		{"Land_GuardTower_02_F", {10,0,0}, ""},

		{"FlagCarrierBAF", {5,0,0}, ""},
		{"Flag_RedCrystal_F", {5,0,0}, ""},

		{"Land_CamoNet_NATO", {5,0,0}, ""},
		{"Land_CamoNetVar_NATO", {5,0,0}, ""},
		{"Land_CamoNetB_NATO", {10,0,0}, ""},

		{"Land_PortableLight_single_F", {0,0,0}, ""},
		{"Land_PortableLight_double_F", {0,0,0}, ""},
		{"PortableHelipadLight_01_blue_F", {0,0,0}, ""},
		{"PortableHelipadLight_01_green_F", {0,0,0}, ""},
		{"PortableHelipadLight_01_red_F", {0,0,0}, ""},
		{"Land_Camping_Light_F", {0,0,0}, ""},
		{"Land_TentLamp_01_standing_F", {10,0,0}, ""},
		{"Land_TentLamp_01_standing_red_F", {10,0,0}, ""},
		{"Land_TentLamp_01_suspended_F", {10,0,0}, ""},
		{"Land_TentLamp_01_suspended_red_F", {10,0,0}, ""},

		{"Land_BagFence_01_round_green_F", {0,0,0}, ""},
		{"Land_BagFence_01_long_green_F", {0,0,0}, ""},
		{"Land_BagFence_01_corner_green_F", {0,0,0}, ""},
		{"Land_BagFence_01_end_green_F", {0,0,0}, ""},
		{"Land_fort_bagfence_long", {0,0,0}, ""},
		{"Land_fort_bagfence_corner", {0,0,0}, ""},
		{"Land_fort_bagfence_round", {0,0,0}, ""},
		{"Land_fort_rampart", {0,0,0}, ""},
		{"Land_fort_artillery_nest", {10,0,0}, ""},
		{"Land_BagBunker_01_small_green_F", {5,0,0}, ""},
		{"Land_BagBunker_01_large_green_F", {10,0,0}, ""},
		{"Land_HBarrier_01_tower_green_F", {15,0,0}, ""},

		{"Land_HBarrier_01_line_1_green_F", {0,0,0}, ""},
		{"Land_HBarrier_01_line_3_green_F", {0,0,0}, ""},
		{"Land_HBarrier_01_line_5_green_F", {0,0,0}, ""},
		{"Land_HBarrier_01_big_4_green_F", {0,0,0}, ""},
		{"Land_HBarrier_01_wall_4_green_F", {0,0,0}, ""},
		{"Land_HBarrier_01_wall_corner_green_F", {0,0,0}, ""},
		{"Land_HBarrier_01_wall_6_green_F", {0,0,0}, ""},
		{"Land_HBarrier_01_wall_corridor_green_F", {0,0,0}, ""},
		{"Land_HBarrier_01_big_tower_green_F", {10,0,0}, ""},

		{"BlockConcrete_F", {30,0,0}, ""},
		{"Land_RampConcrete_F", {30,0,0}, ""},
		{"Land_RampConcreteHigh_F", {30,0,0}, ""},

		{"Land_Razorwire_F", {05,0,0}, ""},
		{"Land_Mil_WiredFence_F", {5,0,0}, ""},
		{"Land_ConcreteHedgehog_01_F", {0,0,0}, ""},
		{"Land_CzechHedgehog_01_old_F", {0,0,0}, ""},

		{"Land_CampingChair_V1_F", {5,0,0}, ""},
		{"Land_CampingChair_V2_F", {5,0,0}, ""},
		{"Land_CampingTable_F", {5,0,0}, ""},
		{"Land_ConnectorTent_01_floor_light_F", {5,0,0}, ""},

		{"Land_Sign_WarningMilitaryArea_F", {5,0,0}, ""},
		{"Land_SignM_WarningMilitaryArea_english_F", {5,0,0}, ""},
		{"Land_Sign_WarningMilAreaSmall_F", {5,0,0}, ""},
		{"Land_SignM_WarningMilAreaSmall_english_F", {5,0,0}, ""},
		{"Land_Sign_WarningMilitaryVehicles_F", {5,0,0}, ""},
		{"Land_SignM_WarningMilitaryVehicles_english_F", {5,0,0}, ""},
		{"Land_Sign_MinesDanger_English_F", { 5,0,0}, ""},

		{"Land_BarGate_01_open_F", { 10,0,0}, ""},
		{"Land_Mil_WiredFence_Gate_F", { 10,0,0}, ""}
	};

	//If first element is array, you can overwrite default name as shown below
	AW_bluforLogistics[] = {
		{{"Land_Pallet_MilBoxes_F", "Supply Box"}, {200,0,200}, ""},
		{{"UK3CB_BAF_Vehicles_Servicing_Ground_Point", "BAF Servicing Point"}, {200,0,200}, ""},
		{{"UK3CB_BAF_MAN_HX58_Container_Green", "FOB Container"}, {300,500,0}, "(count AW_fobDetails) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},
		{{"UK3CB_BAF_MAN_HX58_Cargo_Green_B", "FOB Truck"}, {350,500,0}, "(count AW_fobDetails) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},

		{{"Land_RepairDepot_01_tan_F", "Recycle Building"}, {250,0,0}, ""},
		{{"B_Radar_System_01_F", "Radar"}, {1000,0,0}, ""},
		{"Land_HelipadSquare_F", {250,0,0}, ""}, //Helipads to increase rotary capacity
		{"Land_HelipadCircle_F", {250,0,0}, ""},
		{"Land_HelipadRescue_F", {250,0,0}, ""},
		{"Land_TentHangar_V1_F", {500,0,0}, ""}, //Hangar to increase fixed wing capacity

		{"twc_public_medicalbox_small", {5,0,0}, ""}, //temporary ammo boxes until TWC put in to the repo
		{"CUP_BOX_GER_Ammo_F", {25,0,25}, ""},
		{"CUP_BOX_GER_WpsLaunch_F", {100,20,100}, ""},
		{"UK3CB_BAF_Box_L16", {200,10,200}, ""},
		{"UK3CB_BAF_Box_L16_Ammo_Mixed", {50,0,50}, ""},
		{"UK3CB_BAF_Box_M6", {100,5,100}, ""},
		{"UK3CB_BAF_Box_M6_Ammo_Mixed", {25,0,25}, ""},
		{"UK3CB_BAF_Box_L111A1_Ammo", {50,25,50}, ""},
		{"UK3CB_BAF_Box_L134A1_Ammo", {50,25,50}, ""},

		{"UK3CB_BAF_MAN_HX58_Repair_Green", {300,0,0}, ""},
		{"UK3CB_BAF_MAN_HX58_Fuel_Green", {100,0,200}, ""},

		{{"UK3CB_BAF_LandRover_Amb_FFR_Green_A", "Mobile Respawn Vehicle"}, {200,100,0}, ""},
		{{"UK3CB_BAF_LandRover_Amb_FFR_Green_A", "Mobile Respawn Ambulance(free - max 1)"}, {0,0,0}, "AW_mobileRespawns isEqualTo []"}, //Ambulance respawn (first one free)

		{"B_Slingload_01_Repair_F", {600,0,0}, ""},
		{"B_Slingload_01_Fuel_F", {100,500,0}, ""},
		{"B_Slingload_01_Ammo_F", {100,0,500}, ""},


		{{"C_IDAP_Truck_02_water_F", "Relief Truck"}, {50,50,0}, "AW_secondaryActive isEqualTo ""Relief"""},
		{{"Land_PortableWeatherStation_01_olive_F", "Listening Post"}, {250,0,0}, "AW_secondaryActive isEqualTo ""listeningPost"" && {nearestObjects [player,[""Land_PortableWeatherStation_01_olive_F""],100] isEqualTo []}"}
	};

	AW_arsenalWeapons[] = {
		"CUP_arifle_G36A",
		"CUP_arifle_G36A_RIS",
		"CUP_arifle_G36A_RIS_wdl",
		"CUP_arifle_G36A3",
		"CUP_arifle_G36A3_grip",
		"CUP_launch_HCPF3",
		"CUP_launch_PzF3",
		"CUP_launch_BF3",
		"CUP_launch_FIM92Stinger",
		"CUP_hgun_M9"
	};

	AW_arsenalMagazines[] = {
		"CUP_30Rnd_556x45_G36",
		"CUP_30Rnd_TE1_Red_Tracer_556x45_G36",
		"ACE_5Rnd_127x99_Mag",
		"ACE_5Rnd_127x99_AMAX_Mag",
		"ACE_5Rnd_127x99_API_Mag",
		"CUP_15Rnd_9x19_M9",
		"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
		"CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
		"CUP_20Rnd_TE1_Red_Tracer_762x51_HK417",
		"CUP_20Rnd_762x51_HK417",
		"ACE_HuntIR_M203",
		"CUP_Stinger_M",
		"CUP_MAAWS_HEDP_M",
		"CUP_MAAWS_HEAT_M",

		"DemoCharge_Remote_Mag",
		"ClaymoreDirectionalMine_Remote_Mag",
		"UK3CB_BAF_556_30Rnd",
		"UK3CB_BAF_556_30Rnd_T",
		"SatchelCharge_Remote_Mag",
		"ACE_40mm_Flare_white",
		"ACE_40mm_Flare_green",
		"ACE_Flare_red",
		"ACE_40mm_Flare_ir",
		"UK3CB_BAF_1Rnd_SmokeOrange_Grenade_shell",
		"UK3CB_BAF_1Rnd_SmokePurple_Grenade_shell",
		"UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell",
		"UK3CB_BAF_1Rnd_Smoke_Grenade_shell",
		"UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell"
	};

	AW_arsenalItems[] = {
	"ACE_NVG_Gen4",
	"UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve",
	"UK3CB_BAF_U_CombatUniform_MTP",
	"ACE_elasticBandage",
	"ACE_packingBandage",
	"ACE_fieldDressing",
	"ACE_EarPlugs",
	"ACE_tourniquet",
	"ACE_morphine",
	"ACE_CableTie",
	"Binocular"
	};

	AW_arsenalBackpacks[] = {
	};

	AW_defaultLoadout[] = {
		{"UK3CB_BAF_L85A2_RIS_G","","","UK3CB_BAF_SpecterLDS",{"UK3CB_BAF_556_30Rnd",30},{},"UK3CB_underbarrel_acc_grippod"},
		{},
		{},
		{"UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve",{{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_fieldDressing",5},{"ACE_EarPlugs",1},{"ACE_tourniquet",2},{"ACE_morphine",1},{"ACE_CableTie",2}}},
		{"UK3CB_BAF_V_Osprey_Rifleman_D",{{"ACE_EntrenchingTool",1},{"UK3CB_BAF_556_30Rnd",6,30},{"UK3CB_BAF_556_30Rnd_T",2,30}}},
		{},
		"UK3CB_BAF_H_Mk7_Camo_F","",
		{"ACE_Vector","","","",{},{},""},
		{"ItemMap","ItemGPS","ItemCompass","ItemWatch","UK3CB_BAF_HMNVS"}
	};

	//categories supported: medicalCrateCategory,lightWeaponCrateCategory,heavyWeaponCrateCategory,staticWeaponCrateCategory,miscWeaponCrateCategory
	AW_supplyCrates[] = { //format {"category","title","box size",{resources},{contents}}
		{"medicalCrateCategory","Medical Crate","medical",{25,0,0},{
			{"ACE_packingBandage",50},
			{"ACE_fieldDressing",50},
			{"ACE_quikclot",50},
			{"ACE_elasticBandage",50},
			{"ACE_tourniquet",20},
			{"ACE_morphine",20},
			{"ACE_epinephrine",10},
			{"ACE_salineIV",5},
			{"ACE_salineIV_500",8},
			{"ACE_salineIV_250",10},
			{"TWC_Item_Medical_SutureKit_25",1}
		}},
		{"medicalCrateCategory","Advanced Medical Crate","medical",{75,0,0},{
			{"ACE_packingBandage",100},
			{"ACE_fieldDressing",100},
			{"ACE_quikclot",100},
			{"ACE_elasticBandage",100},
			{"ACE_tourniquet",40},
			{"ACE_morphine",40},
			{"ACE_epinephrine",20},
			{"ACE_salineIV",10},
			{"ACE_salineIV_500",16},
			{"ACE_salineIV_250",20},
			{"TWC_Item_Medical_SutureKit_25",10}
		}},
		{"staticWeaponCrateCategory","M6 Mortar","large",{50,0,0},{
			{"ACE_MapTools",2},
			{"ACE_Vector",2},
			{"UK3CB_BAF_M6",1},
			{"UK3CB_BAF_1Rnd_60mm_Mo_Shells",20},
			{"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",10},
			{"UK3CB_BAF_1Rnd_60mm_Mo_AB_Shells",10},
			{"UK3CB_BAF_1Rnd_60mm_Mo_Flare_White",10},
			{"UK3CB_BAF_1Rnd_60mm_Mo_WPSmoke_White",10}
		}},
		{"staticWeaponCrateCategory","L16 Mortar","large",{50,0,0},{
			{"ACE_MapTools",2},
			{"ACE_Vector",2},
			{"UK3CB_BAF_L16",1},
			{"UK3CB_BAF_L16_Tripod",1},
			{"UK3CB_BAF_1Rnd_81mm_Mo_Shells",10},
			{"UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White",5},
			{"UK3CB_BAF_1Rnd_81mm_Mo_WPSmoke_White",5},
			{"UK3CB_BAF_1Rnd_81mm_Mo_Flare_White",5},
			{"UK3CB_BAF_1Rnd_81mm_Mo_IRFlare_White",5}
		}},
		{"staticWeaponCrateCategory","L111A1 HMG","large",{50,0,0},{
			{"UK3CB_BAF_L111A1",1},
			{"UK3CB_BAF_Tripod",1},
			{"UK3CB_BAF_127_100Rnd",5}
		}},
		{"staticWeaponCrateCategory","L134A1 HMG","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"UK3CB_BAF_L134A1",1},
			{"UK3CB_BAF_Tripod",1},
			{"UK3CB_BAF_32Rnd_40mm_G_Box",5}
		}},
		{"lightWeaponCrateCategory","Light AT","medium",{75,0,0},{
			{"CUP_launch_PzF3",2},
			{"CUP_MAAWS_HEAT_M",5}
		}},
		{"lightWeaponCrateCategory","Standard Resupply","medium",{50,0,0},{
			{"CUP_30Rnd_556x45_G36",30},
			{"CUP_30Rnd_TE1_Red_Tracer_556x45_G36",10},
			{"1Rnd_HE_Grenade_shell",10},
			{"CUP_MAAWS_HEAT_M",5},
			{"1Rnd_Smoke_Grenade_shell",3},
			{"CUP_20Rnd_TE1_Red_Tracer_762x51_HK417",10},
			{"CUP_20Rnd_762x51_HK417",5},
			{"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",10},		
			{"CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",5},
			{"ACE_packingBandage",20},
			{"ACE_fieldDressing",20},
			{"ACE_quikclot",20},
			{"ACE_elasticBandage",20},
			{"ACE_tourniquet",10},
			{"ACE_morphine",10},
			{"ACE_epinephrine",5}
		}},
		{"miscWeaponCrateCategory","Empty Crate (Small)","small",{5,0,0},{

		}},
		{"miscWeaponCrateCategory","Empty Crate (Medium)","medium",{5,0,0},{

		}},
		{"heavyWeaponCrateCategory","Javelin","medium",{50,0,50},{
			{"UK3CB_BAF_Javelin_CLU",1},
			{"UK3CB_BAF_Javelin_Slung_Tube",2}
		}},
		{"heavyWeaponCrateCategory","Javelin Ammo","medium",{0,0,75},{
			{"UK3CB_BAF_Javelin_Slung_Tube",5}
		}}
	};
};
