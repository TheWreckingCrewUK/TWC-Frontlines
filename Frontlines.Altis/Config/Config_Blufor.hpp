/*
	Faction: British Armed Forces
	Author: Ross
	Requires: UK3CB, RKSL,
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
		"UK3CB_BAF_LandRover_Amb_FFR_Green_A",
		"UK3CB_BAF_Merlin_HC4_CSAR"
	};
	
	AW_medicalBuildings[] = { //buildings to add heal actions onto
		"Land_Medevac_house_V1_F"
	};

	//Building menu options below, format {"Classname",{Supplies,Fuel,Ammo},"Any extra conditions"}
	AW_bluforLightVehicles[] = {
		{"B_UGV_02_Demining_F", {20,40,0}, ""},									// ED-1D

		{"I_G_Quadbike_01_F", {50,25,0}, ""},

		{"UK3CB_BAF_LandRover_Soft_Green_A", {60,25,0}, ""},					//Land Rover
		{"UK3CB_BAF_LandRover_Soft_FFR_Green_A", {60,25,0}, ""},                   
		{"UK3CB_BAF_LandRover_Hard_Green_A", {70,25,0}, ""},                      	
		{"UK3CB_BAF_LandRover_Hard_FFR_Green_A", {70,25,0}, ""},                   
		{"UK3CB_BAF_LandRover_Snatch_Green_A", {80,25,0}, ""},                     
		{"UK3CB_BAF_LandRover_Snatch_FFR_Green_A", {80,25,0}, ""},                 
		
		{"UK3CB_BAF_LandRover_WMIK_GPMG_Green_A", {75,25,50}, ""},				//WMIK
		{"UK3CB_BAF_LandRover_WMIK_GPMG_FFR_Green_A", {75,25,50}, ""},             
		{"UK3CB_BAF_LandRover_WMIK_HMG_Green_A", {80,25,50}, ""},                  
		{"UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_A", {80,25,50}, ""},              
		{"UK3CB_BAF_LandRover_WMIK_GMG_Green_A", {80,25,75}, ""},                  
		{"UK3CB_BAF_LandRover_WMIK_GMG_FFR_Green_A", {80,25,75}, ""},             
		{"UK3CB_BAF_LandRover_WMIK_Milan_Green_A", {100,25,100}, ""},              
		{"UK3CB_BAF_LandRover_WMIK_Milan_FFR_Green_A", {100,25,100}, ""},          
		
		{"UK3CB_BAF_Jackal2_L111A1_G", {100,50,75}, ""},						//Jackal 2
		{"UK3CB_BAF_Jackal2_L134A1_G", {100,50,100}, ""},
		
		{"UK3CB_BAF_Coyote_Passenger_L111A1_G", {100,50,75}, ""}, 				//Coyote
		{"UK3CB_BAF_Coyote_Passenger_L134A1_G", {100,50,100}, ""},
		{"UK3CB_BAF_Coyote_Logistics_L111A1_G", {100,50,75}, ""},
		{"UK3CB_BAF_Coyote_Logistics_L134A1_G", {100,50,100}, ""},

		{"UK3CB_BAF_Husky_Passenger_GPMG_Green", {150,50,50}, ""},				//Husky
		{"UK3CB_BAF_Husky_Passenger_HMG_Green", {150,50,75}, ""},
		{"UK3CB_BAF_Husky_Passenger_GMG_Green", {150,50,75}, ""},
		{"UK3CB_BAF_Husky_Logistics_GPMG_Green", {150,50,50}, ""},
		{"UK3CB_BAF_Husky_Logistics_HMG_Green", {150,50,75}, ""},
		{"UK3CB_BAF_Husky_Logistics_GMG_Green", {150,50,75}, ""},
		{"UK3CB_BAF_Panther_GPMG_Green_A", {150,50,50}, ""},

		{"UK3CB_BAF_MAN_HX60_Cargo_Green_A", {100,100,0}, ""},                       // MAN 4x4
		{"UK3CB_BAF_MAN_HX60_Transport_Green", {100,100,0}, ""},
		
		{"UK3CB_BAF_MAN_HX58_Cargo_Green_A", {120,100,0}, ""},                      // MAN 6x6
		{"UK3CB_BAF_MAN_HX58_Transport_Green", {120,100,0}, ""}
	};

	AW_bluforHeavyVehicles[] = {
		{"CUP_B_Mastiff_HMG_GB_W", {200,100,150}, ""},  							//Mastiff
		{"CUP_B_Mastiff_GMG_GB_W", {200,100,150}, ""},  
		
		{"UK3CB_BAF_FV432_Mk3_GPMG_Green", {200,100,150}, ""},                      // Bulldog
		{"UK3CB_BAF_FV432_Mk3_RWS_Green", {200,100,150}, ""},                                  	

		{"CUP_B_MCV80_GB_W", {250,150,250}, ""},									//Warrior
		{"CUP_B_MCV80_GB_W_SLAT", {250,150,250}, ""},
		
		{"CUP_B_Challenger2_Woodland_BAF", {500,300,500}, ""}						//Challenger 2
		
	};

	AW_bluforAirVehicles[] = {
		{"B_UAV_01_F", {50,100,0}, ""},                                             // AR-2 Darter
		{"B_UAV_06_F", {75,100,0}, ""},                                     		// AL-6 Pelican
		{"UK3CB_BAF_MQ9_Reaper", {300,200,200}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.35}}"},

		{"UK3CB_BAF_Wildcat_AH1_HEL_6A", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},							// Wildcats
		{"UK3CB_BAF_Wildcat_AH1_TRN_8A", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"UK3CB_BAF_Wildcat_AH1_CAS_8A", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		
		{"CUP_B_CH47F_GB", {250,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                              // Heavy Lift
		{"CUP_B_CH47F_VIV_GB", {250,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},   
		{"UK3CB_BAF_Merlin_HC3_32", {250,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"}, 
		{"UK3CB_BAF_Merlin_HC3_Cargo", {250,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"}, 

		{"UK3CB_BAF_Apache_AH1_DynamicLoadout", {500,200,500}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                // Apache

		{"CUP_B_C130J_GB", {600,300,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},											// C-130 (Transport)
		{"CUP_B_C130J_Cargo_GB", {600,300,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},										// C-130 (Cargo)
		
		{"CUP_B_F35B_BAF", {800,800,800}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.35}}}"}								// A-149 Gryphon / JAS 39 Gripen (similar to Typhoon)
	};

	AW_bluforNavalVehicles[] = {
		{"B_Boat_Transport_01_F", {40,25,0}, ""},
		{"UK3CB_BAF_RHIB_GPMG", {90,20,70}, ""},
		{"UK3CB_BAF_RHIB_HMG", {100,40,70}, ""}
	};

	AW_bluforDefences[] = {
		{"B_T_Static_AA_F", {100,0,100}, ""},                                	  	// Mini-Spike AA (similar to Starstreak MANPAD)
	};

	AW_bluforBuildings[] = {
		{"Land_Medevac_house_V1_F", {30,0,0}, ""},

		{"Camp", {10,0,0}, ""},
		{"CampEast", {15,0,0}, ""},
		{"Land_tent_east", {15,0,0}, ""},
		{"Land_GuardTower_02_F", {10,0,0}, ""},

		{"FlagCarrierBAF", {5,0,0}, ""},
		{"Flag_RedCrystal_F", {5,0,0}, ""},

		{"Land_CamoNet_NATO", {5,0,0}, ""},
		{"Land_CamoNetVar_NATO", {5,0,0}, ""},
		{"Land_CamoNetB_NATO", {10,0,0}, ""},

		{"Land_PortableLight_single_F", {10,0,0}, ""},
		{"Land_PortableLight_double_F", {10,0,0}, ""},
		{"PortableHelipadLight_01_blue_F", {10,0,0}, ""},
		{"PortableHelipadLight_01_green_F", {10,0,0}, ""},
		{"PortableHelipadLight_01_red_F", {10,0,0}, ""},
		{"Land_Camping_Light_F", {10,0,0}, ""},
		{"Land_TentLamp_01_standing_F", {10,0,0}, ""},
		{"Land_TentLamp_01_standing_red_F", {10,0,0}, ""},
		{"Land_TentLamp_01_suspended_F", {10,0,0}, ""},
		{"Land_TentLamp_01_suspended_red_F", {10,0,0}, ""},

		{"Land_BagFence_01_round_green_F", {10,0,0}, ""},
		{"Land_BagFence_01_long_green_F", {10,0,0}, ""},
		{"Land_BagFence_01_corner_green_F", {10,0,0}, ""},
		{"Land_BagFence_01_end_green_F", {10,0,0}, ""},
		{"Land_fort_bagfence_long", {10,0,0}, ""},
		{"Land_fort_bagfence_corner", {10,0,0}, ""},
		{"Land_fort_bagfence_round", {10,0,0}, ""},
		{"Land_fort_rampart", {25,0,0}, ""},
		{"Land_fort_artillery_nest", {50,0,0}, ""},
		{"Land_BagBunker_01_small_green_F", {15,0,0}, ""},
		{"Land_BagBunker_01_large_green_F", {15,0,0}, ""},
		{"Land_HBarrier_01_tower_green_F", {75,0,0}, ""},

		{"Land_HBarrier_01_line_1_green_F", {5,0,0}, ""},
		{"Land_HBarrier_01_line_3_green_F", {15,0,0}, ""},
		{"Land_HBarrier_01_line_5_green_F", {20,0,0}, ""},
		{"Land_HBarrier_01_big_4_green_F", {50,0,0}, ""},
		{"Land_HBarrier_01_wall_4_green_F", {20,0,0}, ""},
		{"Land_HBarrier_01_wall_corner_green_F", {25,0,0}, ""},
		{"Land_HBarrier_01_wall_6_green_F", {50,0,0}, ""},
		{"Land_HBarrier_01_wall_corridor_green_F", {25,0,0}, ""},
		{"Land_HBarrier_01_big_tower_green_F", {100,0,0}, ""},

		{"BlockConcrete_F", {30,0,0}, ""},
		{"Land_RampConcrete_F", {30,0,0}, ""},
		{"Land_RampConcreteHigh_F", {30,0,0}, ""},

		{"Land_Razorwire_F", {15,0,0}, ""},
		{"Land_Mil_WiredFence_F", {25,0,0}, ""},
		{"Land_ConcreteHedgehog_01_F", {15,0,0}, ""},
		{"Land_CzechHedgehog_01_old_F", {15,0,0}, ""},

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

		{"Box_Syndicate_Ammo_F", {5,0,0}, ""},

		{"UK3CB_BAF_MAN_HX58_Repair_Green", {300,0,0}, ""},
		{"UK3CB_BAF_MAN_HX58_Fuel_Green", {100,0,200}, ""},

		{{"UK3CB_BAF_LandRover_Amb_FFR_Green_A", "Mobile Respawn Vehicle"}, {200,100,0}, ""},
		{{"UK3CB_BAF_Merlin_HC4_CSAR", "Mobile Respawn Helicopter"}, {200,100,100}, ""},
		{{"UK3CB_BAF_Merlin_HC4_CSAR", "Mobile Respawn Helicopter (free - max 1)"}, {0,0,0}, "AW_mobileRespawns isEqualTo []"}, //air mobile respawn (first one free)

		{"B_Slingload_01_Repair_F", {600,0,0}, ""},
		{"B_Slingload_01_Fuel_F", {100,500,0}, ""},
		{"B_Slingload_01_Ammo_F", {100,0,500}, ""},


		{{"C_IDAP_Truck_02_water_F", "Relief Truck"}, {50,50,0}, "AW_secondaryActive isEqualTo ""Relief"""},
		{{"Land_PortableWeatherStation_01_olive_F", "Listening Post"}, {250,0,0}, "AW_secondaryActive isEqualTo ""listeningPost"" && {nearestObjects [player,[""Land_PortableWeatherStation_01_olive_F""],100] isEqualTo []}"}
	};

	AW_arsenalWeapons[] = {
	};

	AW_arsenalMagazines[] = {
		"UK3CB_BAF_762_L42_A1_10Rnd",
		"UK3CB_BAF_762_L42_A1_10Rnd_T",
		"ACE_5Rnd_127x99_Mag",
		"ACE_5Rnd_127x99_AMAX_Mag",
		"ACE_5Rnd_127x99_API_Mag",
		"UK3CB_BAF_9_30Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd_T",
		"UK3CB_BAF_338_5Rnd",
		"UK3CB_BAF_338_5Rnd_Tracer",
		"UK3CB_BAF_762_L42A1_20Rnd",
		"UK3CB_BAF_762_L42A1_20Rnd_T",
		"UK3CB_BAF_762_200Rnd_T",
		"UK3CB_BAF_762_200Rnd",
		"UK3CB_BAF_762_100Rnd_T",
		"UK3CB_BAF_762_100Rnd",
		"UK3CB_BAF_556_100Rnd",
		"UK3CB_BAF_556_100Rnd_T",
		"UK3CB_BAF_556_200Rnd",
		"UK3CB_BAF_556_200Rnd_T",
		"ACE_HuntIR_M203",
		"UK3CB_BAF_9_13Rnd",
		"UK3CB_BAF_9_15Rnd",

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
	};

	AW_arsenalBackpacks[] = {
	};

	AW_defaultLoadout[] = {
		{"UK3CB_BAF_L85A2_RIS_G","","","UK3CB_BAF_SpecterLDS",{"UK3CB_BAF_556_30Rnd",30},{},"UK3CB_underbarrel_acc_grippod"},
		{},
		{},
		{"UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve",{{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_fieldDressing",5},{"ACE_EarPlugs",1},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_morphine",1},{"ACE_CableTie",2}}},
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
			{"launch_NLAW_F",2},
			{"CUP_launch_M72A6",1}
		}},
		{"lightWeaponCrateCategory","Standard Resupply","medium",{50,0,0},{
			{"UK3CB_BAF_556_30Rnd",30},
			{"UK3CB_BAF_556_30Rnd_T",10},
			{"1Rnd_HE_Grenade_shell",10},
			{"UGL_FlareWhite_F",5},
			{"1Rnd_Smoke_Grenade_shell",3},
			{"UK3CB_BAF_762_L42A1_20Rnd",10},
			{"UK3CB_BAF_762_L42A1_20Rnd_T",5},
			{"UK3CB_BAF_556_200Rnd",10},		
			{"UK3CB_BAF_762_200Rnd",5},
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