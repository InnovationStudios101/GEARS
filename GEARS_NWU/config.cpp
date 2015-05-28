class CfgPatches
{
	 class GEARS_NWU
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};
class CfgVehicleClasses
{
	class GEARS_NWU_C
	{
		displayName = "KetsuCorp";
	};
};
class CfgVehicles
{
	class B_BergenC_Base;
	class B_Soldier_base_F;
	class I_officer_F;
	class B_Soldier_sniper_base_F;
	class B_CTRG_soldier_GL_LAT_F;
	class B_CTRG_soldier_AR_A_F;
	class b_soldier_survival_F;
	class B_CTRG_soldier_engineer_exp_F;
	class gear_B_Soldier_NWU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
	};
	class gear_B_Soldier_NWU_02: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
	};
	class gear_B_Soldier_NWU_03: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_02_co.paa"};
	};
	class gear_B_Soldier_NWU_04: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_02_co.paa"};
	};
	class gear_B_Soldier_NWU_05: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_03_co.paa"};
	};
	class gear_B_Soldier_NWU_06: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_03_co.paa"};
	};
	class gear_B_Soldier_NWU_07: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_04_co.paa"};
	};
	class gear_B_Soldier_NWU_08: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_04_co.paa"};
	};
	class gear_B_Soldier_NWU_09: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_05_co.paa"};
	};
	class gear_B_Soldier_NWU_10: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_05_co.paa"};
	};
	class gear_B_Soldier_NWU_11: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_06_co.paa"};
	};
	class gear_B_Soldier_NWU_12: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_06_co.paa"};
	};
	class gear_B_Soldier_NWU_13: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_07_co.paa"};
	};
	class gear_B_Soldier_NWU_14: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_07_co.paa"};
	};
	class gear_B_Soldier_NWU_15: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_08_co.paa"};
	};
	class gear_B_Soldier_NWU_16: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_08_co.paa"};
	};
	class gear_B_Soldier_NWU_17: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_09_co.paa"};
	};
	class gear_B_Soldier_NWU_18: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_09_co.paa"};
	};
	class gear_B_Soldier_NWU_19: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_10_co.paa"};
	};
	class gear_B_Soldier_NWU_20: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_10_co.paa"};
	};
	class gear_B_Soldier_NWU_21: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_11_co.paa"};
	};
	class gear_B_Soldier_NWU_22: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_11_co.paa"};
	};
	class gear_B_Soldier_NWU_23: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_12_co.paa"};
	};
	class gear_B_Soldier_NWU_24: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_12_co.paa"};
	};
	class gear_B_Soldier_NWU_25: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_13_co.paa"};
	};
	class gear_B_Soldier_NWU_26: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_13_co.paa"};
	};
	class gear_B_Soldier_NWU_27: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_14_co.paa"};
	};
	class gear_B_Soldier_NWU_28: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_14_co.paa"};
	};
	class gear_B_Soldier_NWU_29: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_15_co.paa"};
	};
	class gear_B_Soldier_NWU_30: gear_B_Soldier_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_kit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_15_co.paa"};
	};
        class gear_B_Commando_NWU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_02: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_03: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_04: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_05: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_06: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_07: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_08: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_09: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_10: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_11: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_12: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_13: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_14: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_15: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_16: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_17: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_18: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_19: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_20: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_21: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_22: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_23: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_24: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_25: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_26: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_27: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_28: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_29: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_NWU_30: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "gear_NWU_commandokit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Garrison_NWU_01: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 01A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_01";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_01_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_02: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 01A, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_02";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_02_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_03: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 01A, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_03";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_03_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_04: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 01A, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_04";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_04_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_05: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 01A, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_05";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_05_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_06: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 02A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_06";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_06_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_07: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 02B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_07";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_07_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_08: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 02C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_08";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_08_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_09: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 02D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_09";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_09_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_10: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 02E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_10";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_10_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_NWU_11: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 03A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_11";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_11_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_12: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 03B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_12";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_12_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_13: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 03C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_13";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_13_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_14: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 03D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_14";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_14_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_15: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 03E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_15";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_15_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_NWU_16: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 04A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_16";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_16_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_17: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 04B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_17";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_17_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_18: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 04C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_18";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_18_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_19: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 04D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_19";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_19_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_20: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 04E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_20";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_20_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_NWU_21: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 05A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_21";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_21_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_22: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 05B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_22";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_22_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_23: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 05C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_23";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_23_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_24: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 05D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_24";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_24_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_NWU_25: gear_B_Commando_NWU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Garrison HQ Uniform 05E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "garrison_NWU_25";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\garrison\nwu\data\garrison_NWU_25_co.paa","\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_06_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_07_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_08_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_09_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_10_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_11_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_12_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_13_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_14_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_NWU_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Combat Uniform 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghillieshirt_NWU_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\combatshirt\nwu\data\combatshirt_NWU_15_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieMando_NWU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_NWU_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_NWU_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_NWU_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_NWU_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_NWU_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_NWU_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_NWU_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_NWU_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_NWU_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_NWU_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_NWU_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_NWU_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_NWU_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_NWU_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Commando Sweater 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "ghilliemando_NWU_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\commando\nwu\data\commando_NWU_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_01_co.paa"}; 
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_02_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_03_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_04_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_06_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_07_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_08_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_09_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_10_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_11_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_12_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_13_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_14_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_NWU_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeGhillie_NWU_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_15_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
			class gear_B_Crye_NWU_01: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_01_co.paa"};
	};
		class gear_B_Crye_NWU_02: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_01_co.paa"};
	};
		class gear_B_Crye_NWU_03: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_02_co.paa"};
	};
		class gear_B_Crye_NWU_04: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 01B Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_02_co.paa"};
	};
		class gear_B_Crye_NWU_05: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_03_co.paa"};
	};
		class gear_B_Crye_NWU_06: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_03_co.paa"};
	};
		class gear_B_Crye_NWU_07: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_04_co.paa"};
	};
		class gear_B_Crye_NWU_08: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_04_co.paa"};
	};
		class gear_B_Crye_NWU_09: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_05_co.paa"};
	};
		class gear_B_Crye_NWU_10: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_05_co.paa"};
	};
		class gear_B_Crye_NWU_11: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_06_co.paa"};
	};
		class gear_B_Crye_NWU_12: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_06_co.paa"};
	};
		class gear_B_Crye_NWU_13: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_07_co.paa"};
	};
		class gear_B_Crye_NWU_14: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_07_co.paa"};
	};
		class gear_B_Crye_NWU_15: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_08_co.paa"};
	};
		class gear_B_Crye_NWU_16: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_08_co.paa"};
	};
		class gear_B_Crye_NWU_17: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_09_co.paa"};
	};
		class gear_B_Crye_NWU_18: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_09_co.paa"};
	};
		class gear_B_Crye_NWU_19: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_10_co.paa"};
	};
		class gear_B_Crye_NWU_20: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_10_co.paa"};
	};
		class gear_B_Crye_NWU_21: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_11_co.paa"};
	};
		class gear_B_Crye_NWU_22: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_11_co.paa"};
	};
		class gear_B_Crye_NWU_23: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_12_co.paa"};
	};
		class gear_B_Crye_NWU_24: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_12_co.paa"};
	};
		class gear_B_Crye_NWU_25: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_13_co.paa"};
	};
		class gear_B_Crye_NWU_26: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_13_co.paa"};
	};
		class gear_B_Crye_NWU_27: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_14_co.paa"};
	};
		class gear_B_Crye_NWU_28: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_14_co.paa"};
	};
		class gear_B_Crye_NWU_29: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_15_co.paa"};
	};
		class gear_B_Crye_NWU_30: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "Crye_NWU_kit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\Crye_NWU_15_co.paa"};
	};
			class gear_B_CryeScuba_NWU_01: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 01A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_01";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_01_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_NWU_02: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 01B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_02";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_02_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_NWU_03: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 01C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_03";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_03_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_NWU_04: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 02A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_04";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_04_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_NWU_05: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 02B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_05";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_05_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_NWU_06: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 02C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_06";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_06_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_NWU_07: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 03A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_07";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_07_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_NWU_08: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 03B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_08";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_08_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_NWU_09: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 03C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_09";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_09_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_NWU_10: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 04A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_10";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_10_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_NWU_11: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 04B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_11";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_11_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_NWU_12: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 04C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_12";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_12_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_NWU_13: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 05A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_13";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_13_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_NWU_14: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 05B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_14";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_14_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_NWU_15: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform 05C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "CryeScuba_NWU_15";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_15_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_NWU_01: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_01";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_01_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_NWU_02: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_02";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_01_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_03: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_03";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_01_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_04: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_04";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_01_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_05: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_05";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_01_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_NWU_06: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_06";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_02_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_NWU_07: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_07";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_02_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_08: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_08";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_02_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_09: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_09";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_02_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_10: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_10";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_02_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_NWU_11: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_11";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_03_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_NWU_12: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_12";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_03_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_13: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_13";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_03_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_14: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_14";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_03_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_15: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 01C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_15";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_03_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_NWU_16: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_16";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_04_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_NWU_17: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_17";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_04_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_18: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_18";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_04_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_19: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_19";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_04_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_20: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_20";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_04_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_NWU_21: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_21";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_05_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_NWU_22: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_22";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_05_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_23: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_23";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_05_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_24: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_24";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_05_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_25: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_25";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_05_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_NWU_26: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_26";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_06_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_NWU_27: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_27";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_06_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_28: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_28";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_06_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_29: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_29";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_06_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_30: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 02C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_30";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_06_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_NWU_31: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_31";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_07_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_NWU_32: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_32";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_07_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_33: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_33";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_07_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_34: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_34";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_07_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_35: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_35";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_07_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_NWU_36: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_36";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_08_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_NWU_37: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_37";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_08_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_38: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_38";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_08_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_39: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_39";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_08_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_40: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_40";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_08_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_NWU_41: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_41";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_09_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_NWU_42: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_42";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_09_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_43: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_43";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_09_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_44: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_44";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_09_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_45: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 03C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_45";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_09_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_NWU_46: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_46";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_10_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_NWU_47: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_47";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_10_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_48: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_48";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_10_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_49: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_49";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_10_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_50: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_50";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_10_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_NWU_51: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_51";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_11_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_NWU_52: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_52";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_11_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_53: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_53";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_11_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_54: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_54";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_11_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_55: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_55";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_11_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_NWU_56: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_56";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_12_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_NWU_57: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_57";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_12_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_58: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_58";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_12_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_59: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_59";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_12_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_60: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 04C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_60";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_12_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
	
		class gear_B_CryeS_NWU_61: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_61";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_13_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_NWU_62: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_62";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_13_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_63: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_63";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_13_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_64: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_64";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_13_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_65: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_65";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_13_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_NWU_66: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_66";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_14_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_NWU_67: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_67";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_14_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_68: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_68";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_14_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_69: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_69";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_14_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_70: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_70";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_14_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_NWU_71: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_71";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_15_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_NWU_72: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_72";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_15_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_SG.paa"};
	};
		class gear_B_cryeS_NWU_73: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_73";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_15_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_NWU_74: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_74";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_15_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_NWU_75: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. NWU Crye Uniform U-Shirt 05C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_NWU_C";
		uniformClass = "cryeS_NWU_75";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_NWU\clothing\crye\nwu\data\crye_NWU_15_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
	class gear_assaultpack_NWU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\rucksack\assault\nwu\data\assaultpack_NWU_01_co.paa"};
		displayName = "U.S. NWU CQB Kit Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
		class gear_assaultpack_NWU_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\rucksack\assault\nwu\data\assaultpack_NWU_02_co.paa","\GEARS_NWU\rucksack\assault\nwu\data\assaultpack_NWU_01_co.paa","\GEARS_NWU\rucksack\assault\nwu\data\assaultpack_NWU_02_co.paa"};
		displayName = "U.S. NWU CQB Kit Rucksack 01B";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};

	class gear_Carryall_NWU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\rucksack\carryall\nwu\data\carryall_NWU_01_co.paa"};
		displayName = "U.S. NWU Infantry Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
	class gear_FastPack_NWU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\rucksack\fast\nwu\data\FastPack_NWU_01_co.paa"};
		displayName = "U.S. NWU F.A.S.T. Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
	class gear_FieldPack_NWU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\rucksack\field\nwu\data\FieldPack_NWU_01_co.paa"};
		displayName = "U.S. NWU Camping Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
	class gear_largesize_NWU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\drones_f\Weapons_F_Gamma\Ammoboxes\bags\UAV_backpack_F";
		displayName = "U.S. NWU Full-Size Rucksack 01A";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\rucksack\lrrp\nwu\data\largesize_NWU_01_co.paa"};
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
	class gear_Tacticalpack_NWU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\rucksack\Tactical\nwu\data\Tacticalpack_NWU_01_co.paa"};
		displayName = "U.S. NWU Tactical Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
		class gear_backbelt_NWU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_01_co.paa"};
		displayName = "U.S. NWU Combat Belt 01A, BK";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_NWU_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_02_co.paa"};
		displayName = "U.S. NWU Combat Belt 01A, CB";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_NWU_03: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_03_co.paa"};
		displayName = "U.S. NWU Combat Belt 01A, OD";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_NWU_04: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_04_co.paa"};
		displayName = "U.S. NWU Combat Belt 01A, SG";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_NWU_05: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_05_co.paa"};
		displayName = "U.S. NWU Combat Belt 01A, TN";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
};
class cfgWeapons
{
    class ItemInfo;  
    class ItemCore;
    class VestItem;
	class HeadgearItem;
	class Uniform_Base;
	class UniformItem;
	class Vest_Camo_Base;
	class V_HarnessO_brn;
	class V_Rangemaster_belt;
	class V_PlateCarrier1_rgr;
	class V_TacVestCamo_khk;
	class H_HelmetB;
	class H_HelmetB_light;
	class gear_NWU_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 01A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 01A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 01B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 01B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 01C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 01C, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 02A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 02A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 02B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 02B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 02C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 02C, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 03A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 03A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 03B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 03B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 03C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 03C, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 04A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 04A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 04B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 04B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 04C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 04C, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 05A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 05A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 05B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_27";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 05B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_28";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 05C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_29";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_kit30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 05C, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_NWU_30";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

			class gear_NWU_commandokit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 01A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 01A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 01B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 01B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 01C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 01C, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 02A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 02A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 02B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 02B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 02C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 02C, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 03A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 03A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 03B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 03B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 03C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 03C, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 04A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 04A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 04B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 04B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 04C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 04C, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 05A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 05A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 05B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_27";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 05B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_28";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 05C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_29";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_commandokit30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 05C, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_NWU_30";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 01A, TN Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 01B, SG Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 01C, CB Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 01D, OD Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 01E, BK Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 02A, TN Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 02B, SG Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 02C, CB Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 02D, OD Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 02E, BK Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 03A, TN Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 03B, SG Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 03C, CB Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 03D, OD Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 03E, BK Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 04A, TN Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 04B, SG Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 04C, CB Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 04D, OD Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 04E, BK Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 05A, TN Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 05B, SG Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 05C, CB Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 05D, OD Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_NWU_25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Garrison HQ Uniform 05E, BK Shirt";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_NWU_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 01A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 01B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 01C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 02A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 02B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 02C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 03A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 03B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 03C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 04A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 04B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 04C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 05A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 05B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghillieshirt15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Combat Uniform 05C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_NWU_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

			class gear_NWU_ghilliemando01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 01A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghilliemando02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 01B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghilliemando03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 01C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghilliemando04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 02A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghilliemando05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 02B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghilliemando06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 02C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghilliemando07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 03A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghilliemando08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 03B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghilliemando09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 03C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghilliemando10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 04A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghilliemando11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 04B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghilliemando12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 04C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghilliemando13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 05A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghilliemando14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 05B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_ghilliemando15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Commando Sweater 05C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_NWU_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

		class CryeGhillie_NWU_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 01A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_NWU_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 01B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_NWU_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 01C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeGhillie_NWU_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 02A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_NWU_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 02B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_NWU_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 02C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeGhillie_NWU_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 03A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_NWU_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 03B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_NWU_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 03C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeGhillie_NWU_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 04A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_NWU_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 04B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_NWU_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 04C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeGhillie_NWU_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 05A, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_NWU_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 05B, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_NWU_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 05C, Ghillie Suit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_NWU_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

	        class gear_NWU_crye01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 01A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 01A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 01B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 01B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 01C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 01C, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 02A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 02A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 02B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 02B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 02C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 02C, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 03A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 03A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 03B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 03B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 03C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 03C, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 04A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 04A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 04B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 04B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 04C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 04C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 05A, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 05A, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 05B, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_27";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 05B, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_28";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 05C, Sleeves Down";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_29";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_NWU_crye30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 05C, Sleeves Up";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_NWU_30";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

		        class CryeScuba_NWU_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 01A, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_NWU_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 01B, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_NWU_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 01C, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_NWU_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 02A, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_NWU_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 02B, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_NWU_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 02C, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_NWU_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 03A, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_NWU_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 03B, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_NWU_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 03C, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_NWU_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 04A, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_NWU_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 04B, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_NWU_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 04C, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_NWU_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 05A, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_NWU_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 05B, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_NWU_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. NWU Crye Uniform 05C, Scuba Kit";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_NWU_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

		class gear_NWU_cryeS01: Uniform_Base
	{
		scope = 2;
        author = "KetsuCorp";
		displayName = "U.S. NWU Crye Uniform U-Shirt 01A, TN";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS02: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 01A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS03: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 01A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS04: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 01A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS05: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 01A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS06: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 01B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS07: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 01B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS08: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 01B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS09: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 01B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS10: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 01B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS11: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 01C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS12: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 01C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS13: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 01C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS14: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 01C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS15: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 01C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS16: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS17: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS18: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS19: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS20: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS21: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS22: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS23: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS24: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS25: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS26: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS27: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_27";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS28: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_28";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS29: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_29";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS30: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 02C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_30";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS31: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_31";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS32: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_32";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS33: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_33";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS34: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_34";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS35: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_35";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS36: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_36";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS37: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_37";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS38: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_38";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS39: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_39";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS40: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_40";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS41: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_41";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS42: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_42";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS43: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_43";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS44: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_44";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS45: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 03C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_45";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS46: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_46";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS47: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_47";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS48: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_48";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS49: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_49";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS50: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_50";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS51: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_51";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS52: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_52";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS53: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_53";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS54: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_54";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS55: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_55";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS56: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS57: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_57";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS58: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_58";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS59: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_59";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS60: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 04C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_60";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS61: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_61";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS62: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_62";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS63: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_63";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS64: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_64";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS65: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_65";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS66: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_66";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS67: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_67";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS68: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_68";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS69: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_69";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS70: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_70";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS71: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_71";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS72: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_72";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS73: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_73";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS74: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_74";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_NWU_cryeS75: gear_NWU_cryeS01
	{
		displayName = "U.S. NWU Crye Uniform U-Shirt 05C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_NWU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_NWU_75";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_infantry_NWU_01: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		displayName = "U.S. NWU Infantry Carrier 01A";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\infantry\nwu\data\infantry_NWU_01_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			hiddenSelections[] = {"camo"};
		};
    };
		class gear_infantry_NWU_02: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		displayName = "U.S. NWU Infantry Carrier 01B";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\infantry\nwu\data\infantry_NWU_01_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[] = {"camo"};
		};
    };
	class gear_platecarrier_NWU_01: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. NWU Plate Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_05_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			hiddenSelections[] = {"camo"};
		};
    };
		class gear_platecarrier_NWU_02: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		displayName = "U.S. NWU Plate Carrier 01B, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_05_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_platecarrier_NWU_03: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		displayName = "U.S. NWU Plate Carrier 02A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_05_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
		};
	};
	class gear_platecarrier_NWU_04: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. NWU Plate Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_04_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			hiddenSelections[] = {"camo"};
		};
    };
		class gear_platecarrier_NWU_05: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		displayName = "U.S. NWU Plate Carrier 01B, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_04_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_platecarrier_NWU_06: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		displayName = "U.S. NWU Plate Carrier 02A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_04_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_platecarrier_NWU_07: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. NWU Plate Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_02_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			hiddenSelections[] = {"camo"};
		};
    };
		class gear_platecarrier_NWU_08: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		displayName = "U.S. NWU Plate Carrier 01B, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_02_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_platecarrier_NWU_09: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		displayName = "U.S. NWU Plate Carrier 02A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_02_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_platecarrier_NWU_10: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. NWU Plate Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_03_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			hiddenSelections[] = {"camo"};
		};
    };
		class gear_platecarrier_NWU_11: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		displayName = "U.S. NWU Plate Carrier 01B, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_03_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
		};
	};
	
		class gear_platecarrier_NWU_12: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		displayName = "U.S. NWU Plate Carrier 02A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_03_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_platecarrier_NWU_13: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. NWU Plate Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_01_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			hiddenSelections[] = {"camo"};
		};
    };
		class gear_platecarrier_NWU_14: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		displayName = "U.S. NWU Plate Carrier 01B, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_01_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_platecarrier_NWU_15: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		displayName = "U.S. NWU Plate Carrier 02A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_01_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_vestbelt_NWU_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. NWU Combat Belt 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_05_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_NWU_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. NWU Pouch-Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_05_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
	};
  };
  		class gear_vestbelt_NWU_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. NWU Combat Belt 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_04_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_NWU_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. NWU Pouch-Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_04_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
	};
  };
        class gear_vestbelt_NWU_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. NWU Combat Belt 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_02_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_NWU_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. NWU Pouch-Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_02_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
	};
  };
        class gear_vestbelt_NWU_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. NWU Combat Belt 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_03_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_NWU_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. NWU Pouch-Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_03_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
	};
  };
         class gear_vestbelt_NWU_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. NWU Combat Belt 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_01_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_NWU_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. NWU Pouch-Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\platecarrier\nwu\data\platecarrier_NWU_01_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
	};
  };
	class gear_tacvest_NWU_01: V_TacVestCamo_khk
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		displayName = "U.S. NWU Webbed Tac-Vest 01A";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\armor\tacvest\nwu\data\tacvest_NWU_01_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 30;
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			passthrough = 0.610;
			uniformmodel = "A3\Characters_F\Common\equip_tacticalvest";
			hiddenSelections[] = {"Camo"};
		};
    };
	class gear_ballcap_NWU_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Headwear, Cap 02";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\common\capb.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GEARS_NWU\headwear\ballcap\nwu\data\ballcap_NWU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_NWU_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ballcap_NWU_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Headwear, Cap 01";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "A3\Characters_F_EPB\common\capb_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GEARS_NWU\headwear\ballcap\nwu\data\ballcap_NWU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_NWU_02";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\common\capb_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_Bandana_NWU_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Headwear, Bandana 01";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\headwear\bandana\nwu\data\bandana_NWU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_NWU_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Bandana_NWU_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Headwear, Bandana 02";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\headwear\bandana\nwu\data\bandana_NWU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_NWU_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};
	class gear_Boonie_NWU_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Headwear, Boonie 01";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\headwear\boonie\nwu\data\Boonie_NWU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_NWU_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Boonie_NWU_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Headwear, Boonie 02";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\headwear\boonie\nwu\data\Boonie_NWU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_NWU_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_capcom_NWU_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Headwear, ComTac II Cap 01";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\headwear\capcom\nwu\data\capcom_NWU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_NWU_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_capcom_NWU_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Headwear, ComTac II Cap 02";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\headwear\capcom\nwu\data\capcom_NWU_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_NWU_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   };
	class gear_capcom_NWU_03: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Headwear, ComTac II Cap 03";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\headwear\capcom\nwu\data\capcom_NWU_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_NWU_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};
	class gear_cover_NWU_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Headwear, Cover 01";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\GEARS_CORE\headwear\common\cover.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\headwear\cover\nwu\data\cover_NWU_01_co.paa"};
        hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\us_officer_equip.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_cover_NWU_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\cover.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_patrolcap_NWU_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Headwear, Patrol Cap 01";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\headwear\patrolcap\nwu\data\patrolcap_NWU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_NWU_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   class gear_patrolcap_NWU_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Headwear, Patrol Cap 02";
		picture = "\GEARS_NWU\ui\NWU_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\headwear\patrolcap\nwu\data\patrolcap_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_F\Common\Data\cappatrol.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_NWU_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_ach_NWU_00: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU MICH 2000, 01A";
		picture = "\GEARS_CORE\ui\NWU_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_00";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ACH\NWU\data\ACH_NWU_01_co.paa","\GEARS_NWU\helmets\ACH\NWU\data\ACH_NWU_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_NWU_00";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_00";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
   	class gear_ach_NWU_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU MICH 2000, 01B";
		picture = "\GEARS_CORE\ui\NWU_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ACH\NWU\data\ACH_NWU_01_co.paa","\GEARS_NWU\helmets\ACH\NWU\data\ACH_NWU_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_NWU_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
	     class gear_ECH_NWU_01: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2001, 01B BK";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
	class gear_ECH_NWU_02: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2001, 01B CB";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };
   	class gear_ECH_NWU_03: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2001, 01B OD";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};	
	    };
   };
      	class gear_ECH_NWU_04: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2001, 01B SG";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_04";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         	class gear_ECH_NWU_05: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2001, 01B TN";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_05";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         class gear_ECH_NWU_06: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01B BK";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_06";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_NWU_07: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01B CB";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_07";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_NWU_08: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01B OD";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_08";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_NWU_09: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01B SG";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_09";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_NWU_10: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01B TN";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_10";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_NWU_11: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01A BK";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_11";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_NWU_12: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01A CB";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_12";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_NWU_13: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01A OD";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_13";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_NWU_14: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01A SG";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_14";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_NWU_15: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01A TN";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_15";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_NWU_16: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01C BK";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_01_co.paa","\GEARS_CORE\helmets\ECH\SG\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_16";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_NWU_17: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01C CB";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_02_co.paa","\GEARS_CORE\helmets\ECH\SG\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_17";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_NWU_18: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01C OD";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_03_co.paa","\GEARS_CORE\helmets\ECH\SG\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_18";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_NWU_19: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01C SG";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_04_co.paa","\GEARS_CORE\helmets\ECH\SG\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_19";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };  
      	class gear_ECH_NWU_20: gear_ECH_NWU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. NWU Ops-Core MICH 2000, 01C TN";
		picture = "\GEARS_NWU\ui\NWU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_NWU\helmets\ECH\NWU\data\ECH_NWU_05_co.paa","\GEARS_CORE\helmets\ECH\SG\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_NWU_20";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	   };
   };    
};