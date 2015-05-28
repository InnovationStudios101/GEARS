class CfgPatches
{
	 class GEARS_CB
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};
class CfgVehicleClasses
{
	class GEARS_CB_C
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
	class gear_B_Soldier_CB_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
	};
	class gear_B_Soldier_CB_02: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
	};
	class gear_B_Soldier_CB_03: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_02_co.paa"};
	};
	class gear_B_Soldier_CB_04: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_02_co.paa"};
	};
	class gear_B_Soldier_CB_05: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_03_co.paa"};
	};
	class gear_B_Soldier_CB_06: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_03_co.paa"};
	};
	class gear_B_Soldier_CB_07: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_04_co.paa"};
	};
	class gear_B_Soldier_CB_08: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_04_co.paa"};
	};
	class gear_B_Soldier_CB_09: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_05_co.paa"};
	};
	class gear_B_Soldier_CB_10: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_05_co.paa"};
	};
	class gear_B_Soldier_CB_11: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_06_co.paa"};
	};
	class gear_B_Soldier_CB_12: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_06_co.paa"};
	};
	class gear_B_Soldier_CB_13: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_07_co.paa"};
	};
	class gear_B_Soldier_CB_14: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_07_co.paa"};
	};
	class gear_B_Soldier_CB_15: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_08_co.paa"};
	};
	class gear_B_Soldier_CB_16: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_08_co.paa"};
	};
	class gear_B_Soldier_CB_17: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_09_co.paa"};
	};
	class gear_B_Soldier_CB_18: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_09_co.paa"};
	};
	class gear_B_Soldier_CB_19: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_10_co.paa"};
	};
	class gear_B_Soldier_CB_20: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_10_co.paa"};
	};
	class gear_B_Soldier_CB_21: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_11_co.paa"};
	};
	class gear_B_Soldier_CB_22: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_11_co.paa"};
	};
	class gear_B_Soldier_CB_23: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_12_co.paa"};
	};
	class gear_B_Soldier_CB_24: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_12_co.paa"};
	};
	class gear_B_Soldier_CB_25: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_13_co.paa"};
	};
	class gear_B_Soldier_CB_26: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_13_co.paa"};
	};
	class gear_B_Soldier_CB_27: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_14_co.paa"};
	};
	class gear_B_Soldier_CB_28: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_14_co.paa"};
	};
	class gear_B_Soldier_CB_29: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_15_co.paa"};
	};
	class gear_B_Soldier_CB_30: gear_B_Soldier_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_kit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_15_co.paa"};
	};
        class gear_B_Commando_CB_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_02: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_03: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_04: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_05: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_06: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_07: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_08: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_09: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_10: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_11: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_12: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_13: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_14: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_15: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_16: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_17: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_18: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_19: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_20: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_21: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_22: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_23: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_24: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_25: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_26: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_27: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_28: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_29: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_CB_30: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "gear_CB_commandokit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Garrison_CB_01: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 01A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_01";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_01_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_02: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 01A, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_02";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_02_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_03: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 01A, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_03";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_03_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_04: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 01A, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_04";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_04_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_05: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 01A, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_05";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_05_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_06: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 02A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_06";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_06_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_07: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 02B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_07";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_07_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_08: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 02C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_08";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_08_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_09: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 02D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_09";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_09_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_10: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 02E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_10";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_10_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_CB_11: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 03A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_11";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_11_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_12: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 03B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_12";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_12_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_13: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 03C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_13";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_13_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_14: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 03D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_14";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_14_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_15: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 03E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_15";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_15_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_CB_16: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 04A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_16";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_16_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_17: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 04B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_17";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_17_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_18: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 04C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_18";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_18_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_19: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 04D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_19";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_19_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_20: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 04E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_20";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_20_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_CB_21: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 05A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_21";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_21_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_22: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 05B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_22";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_22_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_23: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 05C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_23";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_23_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_24: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 05D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_24";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_24_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_CB_25: gear_B_Commando_CB_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Garrison HQ Uniform 05E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "garrison_CB_25";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\garrison\cb\data\garrison_CB_25_co.paa","\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_GhillieShirt_CB_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_CB_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_CB_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_CB_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_CB_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_CB_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_06_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_CB_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_07_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_CB_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_08_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_CB_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_09_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_CB_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_10_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_CB_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_11_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_CB_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_12_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_CB_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_13_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_CB_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_14_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_CB_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Combat Uniform 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghillieshirt_CB_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\combatshirt\cb\data\combatshirt_CB_15_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieMando_CB_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_CB_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_CB_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_CB_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_CB_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_CB_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_CB_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_CB_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_CB_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_CB_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_CB_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_CB_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_CB_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_CB_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_CB_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Commando Sweater 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "ghilliemando_CB_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\commando\cb\data\commando_CB_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_01_co.paa"}; 
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_02_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_03_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_04_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_06_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_07_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_08_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_09_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_10_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_11_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_12_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_13_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_14_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_CB_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeGhillie_CB_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_15_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
			class gear_B_Crye_CB_01: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_01_co.paa"};
	};
		class gear_B_Crye_CB_02: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_01_co.paa"};
	};
		class gear_B_Crye_CB_03: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_02_co.paa"};
	};
		class gear_B_Crye_CB_04: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 01B Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_02_co.paa"};
	};
		class gear_B_Crye_CB_05: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_03_co.paa"};
	};
		class gear_B_Crye_CB_06: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_03_co.paa"};
	};
		class gear_B_Crye_CB_07: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_04_co.paa"};
	};
		class gear_B_Crye_CB_08: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_04_co.paa"};
	};
		class gear_B_Crye_CB_09: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_05_co.paa"};
	};
		class gear_B_Crye_CB_10: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_05_co.paa"};
	};
		class gear_B_Crye_CB_11: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_06_co.paa"};
	};
		class gear_B_Crye_CB_12: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_06_co.paa"};
	};
		class gear_B_Crye_CB_13: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_07_co.paa"};
	};
		class gear_B_Crye_CB_14: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_07_co.paa"};
	};
		class gear_B_Crye_CB_15: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_08_co.paa"};
	};
		class gear_B_Crye_CB_16: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_08_co.paa"};
	};
		class gear_B_Crye_CB_17: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_09_co.paa"};
	};
		class gear_B_Crye_CB_18: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_09_co.paa"};
	};
		class gear_B_Crye_CB_19: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_10_co.paa"};
	};
		class gear_B_Crye_CB_20: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_10_co.paa"};
	};
		class gear_B_Crye_CB_21: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_11_co.paa"};
	};
		class gear_B_Crye_CB_22: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_11_co.paa"};
	};
		class gear_B_Crye_CB_23: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_12_co.paa"};
	};
		class gear_B_Crye_CB_24: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_12_co.paa"};
	};
		class gear_B_Crye_CB_25: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_13_co.paa"};
	};
		class gear_B_Crye_CB_26: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_13_co.paa"};
	};
		class gear_B_Crye_CB_27: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_14_co.paa"};
	};
		class gear_B_Crye_CB_28: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_14_co.paa"};
	};
		class gear_B_Crye_CB_29: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_15_co.paa"};
	};
		class gear_B_Crye_CB_30: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "Crye_CB_kit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\Crye_CB_15_co.paa"};
	};
			class gear_B_CryeScuba_CB_01: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 01A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_01";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_01_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_CB_02: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 01B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_02";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_02_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_CB_03: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 01C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_03";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_03_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_CB_04: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 02A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_04";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_04_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_CB_05: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 02B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_05";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_05_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_CB_06: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 02C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_06";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_06_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_CB_07: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 03A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_07";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_07_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_CB_08: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 03B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_08";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_08_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_CB_09: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 03C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_09";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_09_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_CB_10: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 04A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_10";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_10_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_CB_11: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 04B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_11";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_11_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_CB_12: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 04C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_12";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_12_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_CB_13: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 05A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_13";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_13_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_CB_14: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 05B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_14";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_14_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_CB_15: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform 05C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "CryeScuba_CB_15";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_15_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_CB_01: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_01";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_01_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_CB_02: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_02";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_01_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_03: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_03";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_01_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_04: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_04";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_01_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_05: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_05";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_01_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_CB_06: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_06";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_02_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_CB_07: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_07";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_02_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_08: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_08";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_02_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_09: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_09";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_02_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_10: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_10";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_02_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_CB_11: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_11";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_03_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_CB_12: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_12";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_03_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_13: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_13";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_03_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_14: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_14";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_03_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_15: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 01C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_15";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_03_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_CB_16: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_16";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_04_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_CB_17: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_17";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_04_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_18: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_18";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_04_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_19: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_19";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_04_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_20: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_20";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_04_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_CB_21: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_21";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_05_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_CB_22: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_22";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_05_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_23: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_23";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_05_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_24: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_24";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_05_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_25: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_25";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_05_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_CB_26: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_26";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_06_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_CB_27: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_27";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_06_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_28: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_28";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_06_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_29: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_29";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_06_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_30: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 02C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_30";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_06_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_CB_31: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_31";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_07_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_CB_32: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_32";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_07_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_33: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_33";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_07_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_34: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_34";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_07_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_35: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_35";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_07_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_CB_36: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_36";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_08_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_CB_37: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_37";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_08_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_38: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_38";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_08_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_39: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_39";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_08_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_40: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_40";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_08_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_CB_41: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_41";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_09_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_CB_42: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_42";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_09_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_43: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_43";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_09_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_44: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_44";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_09_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_45: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 03C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_45";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_09_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_CB_46: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_46";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_10_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_CB_47: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_47";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_10_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_48: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_48";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_10_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_49: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_49";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_10_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_50: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_50";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_10_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_CB_51: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_51";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_11_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_CB_52: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_52";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_11_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_53: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_53";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_11_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_54: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_54";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_11_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_55: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_55";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_11_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_CB_56: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_56";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_12_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_CB_57: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_57";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_12_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_58: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_58";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_12_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_59: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_59";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_12_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_60: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 04C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_60";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_12_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
	
		class gear_B_CryeS_CB_61: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_61";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_13_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_CB_62: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_62";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_13_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_63: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_63";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_13_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_64: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_64";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_13_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_65: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_65";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_13_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_CB_66: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_66";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_14_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_CB_67: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_67";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_14_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_68: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_68";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_14_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_69: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_69";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_14_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_70: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_70";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_14_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_CB_71: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_71";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_15_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_CB_72: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_72";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_15_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_CB_73: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_73";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_15_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_CB_74: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_74";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_15_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_CB_75: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR CB Crye Uniform U-Shirt 05C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CB_C";
		uniformClass = "cryeS_CB_75";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CB\clothing\crye\cb\data\crye_CB_15_co.paa","\GEARS_CB\clothing\cryeshirts\cb\data\basicbody_bk.paa"};
	};
	class gear_assaultpack_CB_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\GEARS_CB\rucksack\assault\cb\data\assaultpack_CB_01_co.paa"};
		displayName = "GEAR CB CQB Kit Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
		class gear_assaultpack_CB_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\rucksack\assault\cb\data\assaultpack_CB_02_co.paa","\GEARS_CB\rucksack\assault\cb\data\assaultpack_CB_01_co.paa","\GEARS_CB\rucksack\assault\cb\data\assaultpack_CB_02_co.paa"};
		displayName = "GEAR CB CQB Kit Rucksack 01B";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};

	class gear_Carryall_CB_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"\GEARS_CB\rucksack\carryall\cb\data\carryall_CB_01_co.paa"};
		displayName = "GEAR CB Infantry Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
	class gear_FastPack_CB_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\GEARS_CB\rucksack\fast\cb\data\FastPack_CB_01_co.paa"};
		displayName = "GEAR CB F.A.S.T. Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
	class gear_FieldPack_CB_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		hiddenSelectionsTextures[] = {"\GEARS_CB\rucksack\field\cb\data\FieldPack_CB_01_co.paa"};
		displayName = "GEAR CB Camping Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
	class gear_largesize_CB_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\drones_f\Weapons_F_Gamma\Ammoboxes\bags\UAV_backpack_F";
		displayName = "GEAR CB Full-Size Rucksack 01A";
		hiddenSelectionsTextures[] = {"\GEARS_CB\rucksack\lrrp\cb\data\largesize_CB_01_co.paa"};
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
	class gear_Tacticalpack_CB_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		hiddenSelectionsTextures[] = {"\GEARS_CB\rucksack\Tactical\cb\data\Tacticalpack_CB_01_co.paa"};
		displayName = "GEAR CB Tactical Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
		class gear_backbelt_CB_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_01_co.paa"};
		displayName = "GEAR CB Combat Belt 01A, BK";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_CB_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_02_co.paa"};
		displayName = "GEAR CB Combat Belt 01A, CB";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_CB_03: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_03_co.paa"};
		displayName = "GEAR CB Combat Belt 01A, OD";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_CB_04: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_04_co.paa"};
		displayName = "GEAR CB Combat Belt 01A, SG";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_CB_05: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_05_co.paa"};
		displayName = "GEAR CB Combat Belt 01A, TN";
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
	class gear_CB_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 01A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 01A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 01B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 01B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 01C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 01C, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 02A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 02A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 02B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 02B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 02C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 02C, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 03A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 03A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 03B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 03B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 03C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 03C, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 04A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 04A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 04B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 04B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 04C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 04C, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 05A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 05A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 05B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_27";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 05B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_28";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 05C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_29";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_kit30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 05C, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_CB_30";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

			class gear_CB_commandokit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 01A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 01A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 01B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 01B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 01C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 01C, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 02A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 02A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 02B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 02B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 02C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 02C, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 03A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 03A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 03B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 03B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 03C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 03C, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 04A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 04A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 04B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 04B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 04C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 04C, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 05A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 05A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 05B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_27";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 05B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_28";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 05C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_29";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_commandokit30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 05C, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_CB_30";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 01A, TN Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 01B, SG Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 01C, CB Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 01D, OD Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 01E, BK Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 02A, TN Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 02B, SG Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 02C, CB Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 02D, OD Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 02E, BK Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 03A, TN Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 03B, SG Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 03C, CB Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 03D, OD Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 03E, BK Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 04A, TN Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 04B, SG Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 04C, CB Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 04D, OD Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 04E, BK Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 05A, TN Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 05B, SG Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 05C, CB Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 05D, OD Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_CB_25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Garrison HQ Uniform 05E, BK Shirt";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_CB_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 01A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 01B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 01C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 02A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 02B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 02C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 03A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 03B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 03C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 04A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 04B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 04C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 05A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 05B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghillieshirt15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Combat Uniform 05C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_CB_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

			class gear_CB_ghilliemando01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 01A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghilliemando02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 01B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghilliemando03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 01C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghilliemando04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 02A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghilliemando05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 02B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghilliemando06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 02C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghilliemando07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 03A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghilliemando08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 03B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghilliemando09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 03C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghilliemando10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 04A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghilliemando11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 04B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghilliemando12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 04C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghilliemando13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 05A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghilliemando14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 05B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_ghilliemando15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Commando Sweater 05C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_CB_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

		class CryeGhillie_CB_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 01A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_CB_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 01B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_CB_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 01C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeGhillie_CB_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 02A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_CB_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 02B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_CB_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 02C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeGhillie_CB_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 03A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_CB_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 03B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_CB_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 03C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeGhillie_CB_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 04A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_CB_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 04B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_CB_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 04C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeGhillie_CB_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 05A, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_CB_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 05B, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_CB_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 05C, Ghillie Suit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_CB_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

	        class gear_CB_crye01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 01A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 01A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 01B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 01B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 01C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 01C, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 02A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 02A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 02B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 02B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 02C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 02C, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 03A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 03A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 03B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 03B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 03C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 03C, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 04A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 04A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 04B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 04B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 04C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 04C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 05A, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 05A, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 05B, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_27";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 05B, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_28";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 05C, Sleeves Down";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_29";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_CB_crye30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 05C, Sleeves Up";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_CB_30";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

		        class CryeScuba_CB_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 01A, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_CB_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 01B, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_CB_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 01C, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_CB_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 02A, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_CB_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 02B, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_CB_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 02C, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_CB_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 03A, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_CB_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 03B, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_CB_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 03C, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_CB_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 04A, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_CB_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 04B, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_CB_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 04C, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_CB_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 05A, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_CB_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 05B, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_CB_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR CB Crye Uniform 05C, Scuba Kit";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_CB_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

		class gear_CB_cryeS01: Uniform_Base
	{
		scope = 2;
        author = "KetsuCorp";
		displayName = "GEAR CB Crye Uniform U-Shirt 01A, TN";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS02: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 01A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS03: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 01A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS04: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 01A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS05: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 01A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS06: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 01B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS07: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 01B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS08: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 01B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS09: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 01B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS10: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 01B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS11: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 01C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS12: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 01C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS13: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 01C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS14: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 01C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS15: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 01C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS16: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS17: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS18: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS19: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS20: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS21: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS22: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS23: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS24: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS25: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS26: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS27: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_27";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS28: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_28";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS29: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_29";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS30: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 02C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_30";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS31: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_31";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS32: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_32";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS33: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_33";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS34: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_34";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS35: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_35";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS36: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_36";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS37: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_37";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS38: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_38";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS39: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_39";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS40: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_40";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS41: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_41";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS42: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_42";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS43: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_43";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS44: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_44";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS45: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 03C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_45";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS46: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_46";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS47: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_47";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS48: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_48";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS49: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_49";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS50: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_50";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS51: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_51";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS52: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_52";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS53: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_53";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS54: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_54";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS55: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_55";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS56: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS57: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_57";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS58: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_58";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS59: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_59";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS60: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 04C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_60";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS61: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_61";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS62: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_62";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS63: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_63";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS64: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_64";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS65: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_65";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS66: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_66";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS67: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_67";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS68: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_68";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS69: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_69";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS70: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_70";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS71: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_71";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS72: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_72";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS73: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_73";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS74: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_74";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_CB_cryeS75: gear_CB_cryeS01
	{
		displayName = "GEAR CB Crye Uniform U-Shirt 05C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_CB.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_CB_75";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_infantry_CB_01: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		displayName = "GEAR CB Infantry Carrier 01A";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\infantry\cb\data\infantry_CB_01_co.paa"};
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
		class gear_infantry_CB_02: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		displayName = "GEAR CB Infantry Carrier 01B";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\infantry\cb\data\infantry_CB_01_co.paa"};
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
	class gear_platecarrier_CB_01: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR CB Plate Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_05_co.paa"};
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
		class gear_platecarrier_CB_02: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		displayName = "GEAR CB Plate Carrier 01B, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_05_co.paa"};
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
		class gear_platecarrier_CB_03: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		displayName = "GEAR CB Plate Carrier 02A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_05_co.paa"};
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
	class gear_platecarrier_CB_04: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR CB Plate Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_04_co.paa"};
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
		class gear_platecarrier_CB_05: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		displayName = "GEAR CB Plate Carrier 01B, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_04_co.paa"};
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
		class gear_platecarrier_CB_06: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		displayName = "GEAR CB Plate Carrier 02A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_04_co.paa"};
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
		class gear_platecarrier_CB_07: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR CB Plate Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_02_co.paa"};
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
		class gear_platecarrier_CB_08: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		displayName = "GEAR CB Plate Carrier 01B, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_02_co.paa"};
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
		class gear_platecarrier_CB_09: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		displayName = "GEAR CB Plate Carrier 02A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_02_co.paa"};
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
		class gear_platecarrier_CB_10: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR CB Plate Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_03_co.paa"};
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
		class gear_platecarrier_CB_11: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		displayName = "GEAR CB Plate Carrier 01B, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_03_co.paa"};
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
	
		class gear_platecarrier_CB_12: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		displayName = "GEAR CB Plate Carrier 02A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_03_co.paa"};
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
		class gear_platecarrier_CB_13: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR CB Plate Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_01_co.paa"};
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
		class gear_platecarrier_CB_14: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		displayName = "GEAR CB Plate Carrier 01B, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_01_co.paa"};
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
		class gear_platecarrier_CB_15: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		displayName = "GEAR CB Plate Carrier 02A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_01_co.paa"};
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
		class gear_vestbelt_CB_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR CB Combat Belt 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_05_co.paa"};
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
		class gear_bandolier_CB_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR CB Pouch-Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_05_co.paa"};
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
  		class gear_vestbelt_CB_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR CB Combat Belt 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_04_co.paa"};
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
		class gear_bandolier_CB_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR CB Pouch-Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_04_co.paa"};
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
        class gear_vestbelt_CB_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR CB Combat Belt 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_02_co.paa"};
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
		class gear_bandolier_CB_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR CB Pouch-Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_02_co.paa"};
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
        class gear_vestbelt_CB_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR CB Combat Belt 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_03_co.paa"};
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
		class gear_bandolier_CB_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR CB Pouch-Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_03_co.paa"};
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
         class gear_vestbelt_CB_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR CB Combat Belt 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_01_co.paa"};
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
		class gear_bandolier_CB_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR CB Pouch-Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\platecarrier\cb\data\platecarrier_CB_01_co.paa"};
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
	class gear_tacvest_CB_01: V_TacVestCamo_khk
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		displayName = "GEAR CB Webbed Tac-Vest 01A";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\armor\tacvest\cb\data\tacvest_CB_01_co.paa"};
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
		class gear_balaclavaH_CB_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Issue Balaclava, 01A";
		picture = "\GEARS_CORE\ui\CB_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_06";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\CB\data\balaclava_CB_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_BalaclavaH_CB_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_balaclava_core_06";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
	    };
	};	
	class gear_balaclavaH_CB_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Issue Balaclava, 01B";
		picture = "\GEARS_CORE\ui\CB_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_08";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\CB\data\balaclava_CB_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_BalaclavaH_CB_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_balaclava_core_08";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
	    };
    };
	class gear_ballcap_CB_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Headwear, Cap 02";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\common\capb.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GEARS_CB\headwear\ballcap\cb\data\ballcap_CB_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_CB_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ballcap_CB_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Headwear, Cap 01";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "A3\Characters_F_EPB\common\capb_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GEARS_CB\headwear\ballcap\cb\data\ballcap_CB_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_CB_02";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\common\capb_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_Bandana_CB_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Headwear, Bandana 01";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\headwear\bandana\cb\data\bandana_CB_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_CB_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Bandana_CB_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Headwear, Bandana 02";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\headwear\bandana\cb\data\bandana_CB_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_CB_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_beanie_cb_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Headwear, Beanie Hat 01";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Civil\headgear_beaniehat01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\headwear\beanie\cb\data\beanie_CB_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_beanie_cb_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
    class gear_beanie_CB_core: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Headwear, Beanie Hat 02";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\GEARS_CB\headwear\common\gear_beanie_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\headwear\beanie\cb\data\beanie_CB_01_co.paa"};
		hiddenSelectionMaterials[] = {"\a3\characters_f\common\data\woolhat.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_beanie_cb_02";		
		    mass = 1;
			uniformModel = "\GEARS_CB\headwear\common\gear_beanie_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };

	class gear_Boonie_CB_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Headwear, Boonie 01";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\headwear\boonie\cb\data\Boonie_CB_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_CB_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Boonie_CB_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Headwear, Boonie 02";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\headwear\boonie\cb\data\Boonie_CB_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_CB_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_capcom_CB_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Headwear, ComTac II Cap 01";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\headwear\capcom\cb\data\capcom_CB_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_CB_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_capcom_CB_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Headwear, ComTac II Cap 02";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\headwear\capcom\cb\data\capcom_CB_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_CB_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   };
	class gear_capcom_CB_03: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Headwear, ComTac II Cap 03";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\headwear\capcom\cb\data\capcom_CB_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_CB_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};
	class gear_cover_CB_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Headwear, Cover 01";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\GEARS_CB\headwear\common\cover.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\headwear\cover\cb\data\cover_CB_01_co.paa"};
        hiddenSelectionsMaterials[] = {"\GEARS_CB\headwear\ca\us_officer_equip.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_cover_CB_01";		
		    mass = 1;
			uniformModel = "\GEARS_CB\headwear\common\cover.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_patrolcap_CB_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Headwear, Patrol Cap 01";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\headwear\patrolcap\cb\data\patrolcap_CB_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_CB_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   class gear_patrolcap_CB_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Headwear, Patrol Cap 02";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\headwear\patrolcap\cb\data\patrolcap_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_F\Common\Data\cappatrol.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_CB_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
		class gear_ach_CB_00: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB MICH 2000, 01A";
		picture = "\GEARS_CORE\ui\CB_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_00";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ACH\core\data\ACH_CB_04_co.paa","\GEARS_CORE\helmets\ACH\core\data\ACH_CB_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\ach3.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_CB_00";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_00";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
	class gear_ach_CB_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB MICH 2000, 01D";
		picture = "\GEARS_CORE\ui\CB_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_04";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ACH\core\data\ACH_CB_01_co.paa","\GEARS_CORE\helmets\ACH\core\data\ACH_CB_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_CB_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_04";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
   		class gear_ach_CB_02: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB MICH 2000, 01C";
		picture = "\GEARS_CORE\ui\CB_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_00";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ACH\core\data\ACH_CB_01_co.paa","\GEARS_CORE\helmets\ACH\core\data\ACH_CB_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\ach1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_CB_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_00";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
	class gear_ach_CB_03: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB MICH 2000, 01B";
		picture = "\GEARS_CORE\ui\CB_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_04";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ACH\core\data\ACH_CB_03_co.paa","\GEARS_CORE\helmets\ACH\core\data\ACH_CB_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\ach2.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_CB_03";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_04";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
	class gear_mich_CB_00: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB MICH 2001, 01A";
		picture = "\GEARS_CORE\ui\CB_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_mich_CORE_00";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\MICH\CORE\data\MICH_CB_01_co.paa","\GEARS_CORE\helmets\ACH\CORE\data\ACH_CB_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_mich_CB_00";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_mich_CORE_00";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
   	class gear_mich_CB_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB MICH 2001, 01B";
		picture = "\GEARS_CORE\ui\CB_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_mich_CORE_02";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\MICH\CORE\data\MICH_CB_03_co.paa","\GEARS_CORE\helmets\ACH\CORE\data\ACH_CB_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\mich3.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_mich_CB_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_mich_CORE_02";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
	class gear_ECH_CB_01: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2001, 01A BK";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ECH_CB_02: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2001, 01A CB";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_ECH_CB_03: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2001, 01A OD";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
      	class gear_ECH_CB_04: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2001, 01A SG";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_04";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_CB_05: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2001, 01A TN";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_05";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_CB_21: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2001, 01B BK";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_12_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CB\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_21";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CB\headwear\common\equipx1.rvmat"};
	    };
   };   
	class gear_ECH_CB_22: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2001, 01B CB";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_13_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CB\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_22";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CB\headwear\common\equipx1.rvmat"};
	    };
   };
   	class gear_ECH_CB_23: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2001, 01B OD";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_14_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CB\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_23";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CB\headwear\common\equipx1.rvmat"};	
	    };
   };
      	class gear_ECH_CB_24: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2001, 01B SG";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_15_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CB\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_24";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CB\headwear\common\equipx1.rvmat"};
	    };
   };   
         	class gear_ECH_CB_25: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2001, 01B TN";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_16_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CB\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_25";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CB\headwear\common\equipx1.rvmat"};
	    };
   };   
       	class gear_ECH_CB_06: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01B BK";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_06";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_CB_07: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01B CB";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_07";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_CB_08: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01B OD";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_08";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_CB_09: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01B SG";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_09";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_CB_10: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01B TN";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_10";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_CB_11: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01A BK";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_06_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_11";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_CB_12: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01A CB";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_07_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_12";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_CB_13: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01A OD";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_08_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_13";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_CB_14: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01A SG";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_09_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_14";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_CB_15: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01A TN";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_10_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_15";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_CB_16: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01C BK";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_01_co.paa","\GEARS_CB\helmets\ECH\cb\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_16";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_CB_17: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01C CB";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_02_co.paa","\GEARS_CB\helmets\ECH\cb\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_17";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_CB_18: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01C OD";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_03_co.paa","\GEARS_CB\helmets\ECH\cb\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_18";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_CB_19: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01C SG";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_04_co.paa","\GEARS_CB\helmets\ECH\cb\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_19";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };  
      	class gear_ECH_CB_20: gear_ECH_CB_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Ops-Core MICH 2000, 01C TN";
		picture = "\GEARS_CB\ui\CB_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\ECH\cb\data\ECH_CB_05_co.paa","\GEARS_CB\helmets\ECH\cb\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_CB_20";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	   };
   };   
   	class gear_pth_CORE_04: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Pro-Tec Helmet, 01A";
		picture = "\GEARS_CB\ui\CB_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_protec_CORE_04";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\PTH\CB\data\PTH_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\pp.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_pth_CORE_04";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_protec_CORE_04";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo"};
	    };
   };
      	class gear_pth_CORE_09: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR CB Pro-Tec Helmet, 01B";
		picture = "\GEARS_CB\ui\CB_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_protec_CORE_09";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CB\helmets\PTH\CB\data\PTH_CB_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\pp.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_pth_CORE_09";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_protec_CORE_09";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo"};
	    };
   };
};
   class CfgGlasses
{
	class None;

	class gear_balaclava_CB_01: None
	{
		scope = 2;
		author = "KetsuCorp";
		displayname = "GEAR CB Issue Balaclava, 01A";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\CB\data\balaclava_CB_01_co.paa"};
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_06";
		picture = "\GEARS_CORE\ui\CB_ui.paa";
        identityTypes[] = {"NoGlasses",1000};
   };
	class gear_balaclava_CB_08: None
	{
		scope = 2;
		author = "KetsuCorp";
		displayname = "GEAR CB Issue Balaclava, 01B";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\CB\data\balaclava_CB_01_co.paa"};
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_08";
		picture = "\GEARS_CORE\ui\CB_ui.paa";
        identityTypes[] = {"NoGlasses",1000};
    };
  };