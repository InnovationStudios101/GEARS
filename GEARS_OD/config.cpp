class CfgPatches
{
	 class GEARS_OD
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};
class CfgVehicleClasses
{
	class GEARS_OD_C
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
	class gear_B_Soldier_OD_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
	};
	class gear_B_Soldier_OD_02: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
	};
	class gear_B_Soldier_OD_03: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_02_co.paa"};
	};
	class gear_B_Soldier_OD_04: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_02_co.paa"};
	};
	class gear_B_Soldier_OD_05: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_03_co.paa"};
	};
	class gear_B_Soldier_OD_06: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_03_co.paa"};
	};
	class gear_B_Soldier_OD_07: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_04_co.paa"};
	};
	class gear_B_Soldier_OD_08: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_04_co.paa"};
	};
	class gear_B_Soldier_OD_09: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_05_co.paa"};
	};
	class gear_B_Soldier_OD_10: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_05_co.paa"};
	};
	class gear_B_Soldier_OD_11: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_06_co.paa"};
	};
	class gear_B_Soldier_OD_12: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_06_co.paa"};
	};
	class gear_B_Soldier_OD_13: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_07_co.paa"};
	};
	class gear_B_Soldier_OD_14: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_07_co.paa"};
	};
	class gear_B_Soldier_OD_15: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_08_co.paa"};
	};
	class gear_B_Soldier_OD_16: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_08_co.paa"};
	};
	class gear_B_Soldier_OD_17: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_09_co.paa"};
	};
	class gear_B_Soldier_OD_18: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_09_co.paa"};
	};
	class gear_B_Soldier_OD_19: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_10_co.paa"};
	};
	class gear_B_Soldier_OD_20: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_10_co.paa"};
	};
	class gear_B_Soldier_OD_21: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_11_co.paa"};
	};
	class gear_B_Soldier_OD_22: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_11_co.paa"};
	};
	class gear_B_Soldier_OD_23: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_12_co.paa"};
	};
	class gear_B_Soldier_OD_24: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_12_co.paa"};
	};
	class gear_B_Soldier_OD_25: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_13_co.paa"};
	};
	class gear_B_Soldier_OD_26: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_13_co.paa"};
	};
	class gear_B_Soldier_OD_27: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_14_co.paa"};
	};
	class gear_B_Soldier_OD_28: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_14_co.paa"};
	};
	class gear_B_Soldier_OD_29: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_15_co.paa"};
	};
	class gear_B_Soldier_OD_30: gear_B_Soldier_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_kit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_15_co.paa"};
	};
        class gear_B_Commando_OD_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_02: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_03: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_04: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_05: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_06: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_07: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_08: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_09: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_10: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_11: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_12: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_13: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_14: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_15: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_16: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_17: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_18: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_19: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_20: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_21: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_22: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_23: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_24: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_25: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_26: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_27: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_28: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_29: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OD_30: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "gear_OD_commandokit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Garrison_OD_01: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 01A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_01";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_01_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_02: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 01A, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_02";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_02_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_03: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 01A, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_03";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_03_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_04: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 01A, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_04";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_04_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_05: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 01A, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_05";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_05_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_06: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 02A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_06";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_06_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_07: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 02B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_07";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_07_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_08: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 02C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_08";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_08_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_09: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 02D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_09";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_09_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_10: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 02E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_10";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_10_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_OD_11: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 03A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_11";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_11_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_12: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 03B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_12";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_12_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_13: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 03C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_13";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_13_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_14: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 03D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_14";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_14_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_15: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 03E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_15";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_15_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_OD_16: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 04A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_16";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_16_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_17: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 04B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_17";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_17_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_18: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 04C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_18";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_18_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_19: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 04D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_19";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_19_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_20: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 04E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_20";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_20_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_OD_21: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 05A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_21";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_21_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_22: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 05B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_22";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_22_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_23: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 05C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_23";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_23_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_24: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 05D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_24";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_24_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OD_25: gear_B_Commando_OD_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Garrison HQ Uniform 05E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "garrison_OD_25";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\garrison\od\data\garrison_OD_25_co.paa","\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\clothing\common\data\officer.rvmat"};
	};
		class gear_B_GhillieShirt_OD_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OD_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OD_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OD_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OD_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OD_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_06_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OD_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_07_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OD_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_08_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OD_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_09_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OD_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_10_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OD_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_11_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OD_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_12_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OD_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_13_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OD_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_14_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OD_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Combat Uniform 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghillieshirt_OD_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\combatshirt\od\data\combatshirt_OD_15_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieMando_OD_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OD_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OD_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OD_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OD_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OD_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OD_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OD_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OD_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OD_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OD_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OD_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OD_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OD_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OD_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Commando Sweater 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit8.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "ghilliemando_OD_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\commando\od\data\commando_OD_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_01_co.paa"}; 
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_02_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_03_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_04_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_06_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_07_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_08_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_09_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_10_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_11_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_12_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_13_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_14_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OD_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_OD\clothing\common\ghilliesuit16.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeGhillie_OD_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_15_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
			class gear_B_Crye_OD_01: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_01_co.paa"};
	};
		class gear_B_Crye_OD_02: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_01_co.paa"};
	};
		class gear_B_Crye_OD_03: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_02_co.paa"};
	};
		class gear_B_Crye_OD_04: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 01B Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_02_co.paa"};
	};
		class gear_B_Crye_OD_05: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_03_co.paa"};
	};
		class gear_B_Crye_OD_06: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_03_co.paa"};
	};
		class gear_B_Crye_OD_07: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_04_co.paa"};
	};
		class gear_B_Crye_OD_08: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_04_co.paa"};
	};
		class gear_B_Crye_OD_09: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_05_co.paa"};
	};
		class gear_B_Crye_OD_10: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_05_co.paa"};
	};
		class gear_B_Crye_OD_11: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_06_co.paa"};
	};
		class gear_B_Crye_OD_12: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_06_co.paa"};
	};
		class gear_B_Crye_OD_13: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_07_co.paa"};
	};
		class gear_B_Crye_OD_14: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_07_co.paa"};
	};
		class gear_B_Crye_OD_15: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_08_co.paa"};
	};
		class gear_B_Crye_OD_16: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_08_co.paa"};
	};
		class gear_B_Crye_OD_17: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_09_co.paa"};
	};
		class gear_B_Crye_OD_18: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_09_co.paa"};
	};
		class gear_B_Crye_OD_19: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_10_co.paa"};
	};
		class gear_B_Crye_OD_20: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_10_co.paa"};
	};
		class gear_B_Crye_OD_21: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_11_co.paa"};
	};
		class gear_B_Crye_OD_22: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_11_co.paa"};
	};
		class gear_B_Crye_OD_23: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_12_co.paa"};
	};
		class gear_B_Crye_OD_24: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_12_co.paa"};
	};
		class gear_B_Crye_OD_25: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_13_co.paa"};
	};
		class gear_B_Crye_OD_26: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_13_co.paa"};
	};
		class gear_B_Crye_OD_27: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_14_co.paa"};
	};
		class gear_B_Crye_OD_28: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_14_co.paa"};
	};
		class gear_B_Crye_OD_29: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_15_co.paa"};
	};
		class gear_B_Crye_OD_30: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "Crye_OD_kit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\Crye_OD_15_co.paa"};
	};
			class gear_B_CryeScuba_OD_01: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 01A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_01";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_01_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OD_02: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 01B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_02";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_02_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OD_03: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 01C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_03";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_03_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OD_04: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 02A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_04";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_04_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OD_05: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 02B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_05";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_05_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OD_06: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 02C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_06";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_06_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OD_07: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 03A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_07";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_07_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OD_08: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 03B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_08";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_08_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OD_09: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 03C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_09";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_09_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OD_10: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 04A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_10";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_10_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OD_11: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 04B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_11";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_11_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OD_12: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 04C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_12";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_12_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OD_13: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 05A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_13";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_13_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OD_14: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 05B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_14";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_14_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OD_15: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform 05C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "CryeScuba_OD_15";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_15_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_OD_01: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_01";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_01_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_OD_02: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_02";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_01_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_03: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_03";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_01_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_04: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_04";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_01_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_05: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_05";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_01_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_OD_06: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_06";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_02_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_OD_07: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_07";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_02_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_08: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_08";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_02_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_09: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_09";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_02_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_10: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_10";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_02_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_OD_11: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_11";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_03_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_OD_12: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_12";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_03_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_13: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_13";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_03_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_14: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_14";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_03_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_15: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 01C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_15";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_03_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_OD_16: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_16";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_04_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_OD_17: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_17";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_04_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_18: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_18";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_04_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_19: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_19";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_04_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_20: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_20";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_04_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_OD_21: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_21";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_05_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_OD_22: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_22";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_05_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_23: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_23";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_05_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_24: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_24";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_05_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_25: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_25";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_05_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_OD_26: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_26";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_06_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_OD_27: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_27";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_06_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_28: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_28";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_06_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_29: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_29";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_06_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_30: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 02C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_30";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_06_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_OD_31: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_31";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_07_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_OD_32: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_32";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_07_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_33: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_33";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_07_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_34: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_34";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_07_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_35: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_35";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_07_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_OD_36: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_36";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_08_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_OD_37: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_37";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_08_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_38: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_38";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_08_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_39: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_39";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_08_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_40: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_40";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_08_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_OD_41: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_41";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_09_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_OD_42: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_42";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_09_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_43: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_43";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_09_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_44: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_44";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_09_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_45: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 03C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_45";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_09_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_OD_46: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_46";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_10_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_OD_47: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_47";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_10_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_48: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_48";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_10_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_49: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_49";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_10_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_50: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_50";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_10_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_OD_51: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_51";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_11_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_OD_52: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_52";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_11_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_53: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_53";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_11_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_54: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_54";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_11_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_55: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_55";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_11_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_OD_56: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_56";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_12_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_OD_57: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_57";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_12_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_58: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_58";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_12_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_59: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_59";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_12_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_60: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 04C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_60";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_12_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
	
		class gear_B_CryeS_OD_61: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_61";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_13_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_OD_62: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_62";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_13_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_63: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_63";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_13_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_64: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_64";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_13_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_65: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_65";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_13_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_OD_66: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_66";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_14_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_OD_67: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_67";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_14_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_68: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_68";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_14_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_69: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_69";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_14_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_70: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_70";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_14_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_OD_71: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_71";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_15_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_OD_72: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_72";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_15_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_OD_73: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_73";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_15_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_OD_74: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_74";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_15_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_OD_75: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR OD Crye Uniform U-Shirt 05C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OD_C";
		uniformClass = "cryeS_OD_75";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\crye\od\data\crye_OD_15_co.paa","\GEARS_OD\clothing\cryeshirts\od\data\basicbody_bk.paa"};
	};
	class gear_assaultpack_OD_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\GEARS_OD\rucksack\assault\od\data\assaultpack_OD_01_co.paa"};
		displayName = "GEAR OD CQB Kit Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
		class gear_assaultpack_OD_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\rucksack\assault\od\data\assaultpack_OD_02_co.paa","\GEARS_OD\rucksack\assault\od\data\assaultpack_OD_01_co.paa","\GEARS_OD\rucksack\assault\od\data\assaultpack_OD_02_co.paa"};
		displayName = "GEAR OD CQB Kit Rucksack 01B";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};

	class gear_Carryall_OD_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"\GEARS_OD\rucksack\carryall\od\data\carryall_OD_01_co.paa"};
		displayName = "GEAR OD Infantry Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
	class gear_FastPack_OD_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\GEARS_OD\rucksack\fast\od\data\FastPack_OD_01_co.paa"};
		displayName = "GEAR OD F.A.S.T. Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
	class gear_FieldPack_OD_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		hiddenSelectionsTextures[] = {"\GEARS_OD\rucksack\field\od\data\FieldPack_OD_01_co.paa"};
		displayName = "GEAR OD Camping Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
	class gear_largesize_OD_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\drones_f\Weapons_F_Gamma\Ammoboxes\bags\UAV_backpack_F";
		displayName = "GEAR OD Full-Size Rucksack 01A";
		hiddenSelectionsTextures[] = {"\GEARS_OD\rucksack\lrrp\od\data\largesize_OD_01_co.paa"};
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
	class gear_Tacticalpack_OD_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		hiddenSelectionsTextures[] = {"\GEARS_OD\rucksack\Tactical\od\data\Tacticalpack_OD_01_co.paa"};
		displayName = "GEAR OD Tactical Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
		class gear_backbelt_OD_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_01_co.paa"};
		displayName = "GEAR OD Combat Belt 01A, BK";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_OD_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_02_co.paa"};
		displayName = "GEAR OD Combat Belt 01A, CB";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_OD_03: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_03_co.paa"};
		displayName = "GEAR OD Combat Belt 01A, OD";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_OD_04: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_04_co.paa"};
		displayName = "GEAR OD Combat Belt 01A, SG";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_OD_05: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_05_co.paa"};
		displayName = "GEAR OD Combat Belt 01A, TN";
	    containerClass = "Supply500";
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
	class gear_headset_core_01;
	class gear_OD_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 01A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 01A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 01B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 01B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 01C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 01C, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 02A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 02A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 02B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 02B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 02C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 02C, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 03A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 03A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 03B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 03B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 03C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 03C, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 04A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 04A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 04B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 04B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 04C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 04C, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 05A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 05A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 05B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_27";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 05B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_28";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 05C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_29";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_kit30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 05C, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OD_30";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

			class gear_OD_commandokit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 01A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 01A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 01B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 01B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 01C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 01C, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 02A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 02A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 02B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 02B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 02C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 02C, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 03A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 03A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 03B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 03B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 03C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 03C, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 04A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 04A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 04B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 04B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 04C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 04C, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 05A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 05A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 05B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_27";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 05B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_28";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 05C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_29";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_commandokit30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 05C, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OD_30";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 01A, TN Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 01B, SG Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 01C, CB Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 01D, OD Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 01E, BK Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 02A, TN Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 02B, SG Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 02C, CB Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 02D, OD Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 02E, BK Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 03A, TN Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 03B, SG Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 03C, CB Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 03D, OD Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 03E, BK Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 04A, TN Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 04B, SG Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 04C, CB Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 04D, OD Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 04E, BK Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 05A, TN Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 05B, SG Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 05C, CB Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 05D, OD Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_OD_25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Garrison HQ Uniform 05E, BK Shirt";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_OD_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 01A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 01B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 01C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 02A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 02B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 02C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 03A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 03B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 03C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 04A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 04B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 04C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 05A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 05B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghillieshirt15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Combat Uniform 05C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OD_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

			class gear_OD_ghilliemando01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 01A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghilliemando02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 01B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghilliemando03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 01C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghilliemando04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 02A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghilliemando05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 02B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghilliemando06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 02C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghilliemando07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 03A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghilliemando08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 03B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghilliemando09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 03C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghilliemando10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 04A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghilliemando11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 04B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghilliemando12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 04C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghilliemando13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 05A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghilliemando14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 05B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_ghilliemando15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Commando Sweater 05C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OD_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

		class CryeGhillie_OD_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 01A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_OD_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 01B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_OD_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 01C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeGhillie_OD_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 02A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_OD_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 02B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_OD_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 02C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeGhillie_OD_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 03A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_OD_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 03B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_OD_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 03C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeGhillie_OD_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 04A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_OD_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 04B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_OD_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 04C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeGhillie_OD_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 05A, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_OD_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 05B, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_OD_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 05C, Ghillie Suit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OD_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

	        class gear_OD_crye01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 01A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 01A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 01B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 01B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 01C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 01C, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 02A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 02A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 02B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 02B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 02C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 02C, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 03A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 03A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 03B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 03B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 03C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 03C, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 04A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 04A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 04B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 04B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 04C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 04C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 05A, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 05A, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 05B, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_27";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 05B, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_28";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 05C, Sleeves Down";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_29";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_OD_crye30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 05C, Sleeves Up";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OD_30";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

		        class CryeScuba_OD_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 01A, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_OD_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 01B, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_OD_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 01C, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_OD_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 02A, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_OD_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 02B, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_OD_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 02C, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_OD_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 03A, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_OD_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 03B, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_OD_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 03C, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_OD_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 04A, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_OD_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 04B, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_OD_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 04C, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_OD_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 05A, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_OD_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 05B, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_OD_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR OD Crye Uniform 05C, Scuba Kit";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OD_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

		class gear_OD_cryeS01: Uniform_Base
	{
		scope = 2;
        author = "KetsuCorp";
		displayName = "GEAR OD Crye Uniform U-Shirt 01A, TN";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS02: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 01A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS03: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 01A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS04: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 01A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS05: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 01A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS06: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 01B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS07: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 01B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS08: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 01B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS09: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 01B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS10: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 01B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS11: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 01C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS12: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 01C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS13: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 01C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS14: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 01C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS15: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 01C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS16: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS17: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS18: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS19: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS20: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS21: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS22: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS23: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS24: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS25: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS26: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS27: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_27";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS28: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_28";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS29: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_29";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS30: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 02C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_30";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS31: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_31";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS32: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_32";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS33: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_33";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS34: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_34";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS35: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_35";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS36: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_36";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS37: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_37";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS38: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_38";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS39: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_39";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS40: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_40";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS41: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_41";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS42: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_42";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS43: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_43";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS44: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_44";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS45: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 03C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_45";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS46: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_46";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS47: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_47";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS48: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_48";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS49: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_49";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS50: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_50";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS51: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_51";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS52: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_52";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS53: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_53";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS54: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_54";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS55: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_55";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS56: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS57: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_57";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS58: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_58";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS59: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_59";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS60: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 04C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_60";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS61: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_61";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS62: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_62";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS63: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_63";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS64: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_64";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS65: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_65";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS66: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_66";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS67: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_67";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS68: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_68";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS69: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_69";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS70: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_70";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS71: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_71";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS72: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_72";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS73: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_73";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS74: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_74";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_OD_cryeS75: gear_OD_cryeS01
	{
		displayName = "GEAR OD Crye Uniform U-Shirt 05C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OD\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OD_75";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_infantry_OD_01: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		displayName = "GEAR OD Infantry Carrier 01A";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\infantry\od\data\infantry_OD_01_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			hiddenSelections[] = {"camo"};
		};
    };
		class gear_infantry_OD_02: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		displayName = "GEAR OD Infantry Carrier 01B";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\infantry\od\data\infantry_OD_01_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[] = {"camo"};
		};
    };
	class gear_platecarrier_OD_01: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR OD Plate Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_05_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			hiddenSelections[] = {"camo"};
		};
    };
		class gear_platecarrier_OD_02: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		displayName = "GEAR OD Plate Carrier 01B, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_05_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_platecarrier_OD_03: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		displayName = "GEAR OD Plate Carrier 02A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_05_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
		};
	};
	class gear_platecarrier_OD_04: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR OD Plate Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_04_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			hiddenSelections[] = {"camo"};
		};
    };
		class gear_platecarrier_OD_05: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		displayName = "GEAR OD Plate Carrier 01B, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_04_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_platecarrier_OD_06: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		displayName = "GEAR OD Plate Carrier 02A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_04_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_platecarrier_OD_07: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR OD Plate Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_02_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			hiddenSelections[] = {"camo"};
		};
    };
		class gear_platecarrier_OD_08: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		displayName = "GEAR OD Plate Carrier 01B, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_02_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_platecarrier_OD_09: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		displayName = "GEAR OD Plate Carrier 02A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_02_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_platecarrier_OD_10: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR OD Plate Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_03_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			hiddenSelections[] = {"camo"};
		};
    };
		class gear_platecarrier_OD_11: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		displayName = "GEAR OD Plate Carrier 01B, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_03_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
		};
	};
	
		class gear_platecarrier_OD_12: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		displayName = "GEAR OD Plate Carrier 02A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_03_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_platecarrier_OD_13: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR OD Plate Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_01_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			hiddenSelections[] = {"camo"};
		};
    };
		class gear_platecarrier_OD_14: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		displayName = "GEAR OD Plate Carrier 01B, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_01_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_platecarrier_OD_15: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		displayName = "GEAR OD Plate Carrier 02A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_01_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_vestbelt_OD_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR OD Combat Belt 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_05_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_OD_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR OD Pouch-Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_05_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
  		class gear_vestbelt_OD_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR OD Combat Belt 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_04_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_OD_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR OD Pouch-Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_04_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
        class gear_vestbelt_OD_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR OD Combat Belt 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_02_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_OD_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR OD Pouch-Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_02_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
        class gear_vestbelt_OD_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR OD Combat Belt 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_03_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_OD_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR OD Pouch-Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_03_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
         class gear_vestbelt_OD_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR OD Combat Belt 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_01_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_OD_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR OD Pouch-Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\platecarrier\od\data\platecarrier_OD_01_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
	class gear_tacvest_OD_01: V_TacVestCamo_khk
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		displayName = "GEAR OD Webbed Tac-Vest 01A";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\armor\tacvest\od\data\tacvest_OD_01_co.paa"};
		class ItemInfo: VestItem
		{
			armor = 1.5;
			containerclass = "Supply500";
			mass = 1;
			passthrough = 0.610;
			uniformmodel = "A3\Characters_F\Common\equip_tacticalvest";
			hiddenSelections[] = {"Camo"};
		};
    };
		class gear_balaclavaH_OD_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Issue Balaclava, 01A";
		picture = "\GEARS_CORE\ui\OD_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_04";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\OD\data\balaclava_OD_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_BalaclavaH_OD_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_balaclava_core_04";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
	    };
   };
   	class gear_balaclavaH_OD_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Issue Balaclava, 01B";
		picture = "\GEARS_CORE\ui\OD_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_09";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\OD\data\balaclava_OD_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_BalaclavaH_OD_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_balaclava_core_09";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
	    };
   };
	class gear_ballcap_OD_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, Cap 02";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\common\capb.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GEARS_OD\headwear\ballcap\od\data\ballcap_OD_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_OD_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ballcap_OD_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, Cap 01";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "A3\Characters_F_EPB\common\capb_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GEARS_OD\headwear\ballcap\od\data\ballcap_OD_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_OD_02";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\common\capb_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_Bandana_OD_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, Bandana 01";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\headwear\bandana\od\data\bandana_OD_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_OD_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Bandana_OD_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, Bandana 02";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\headwear\bandana\od\data\bandana_OD_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_OD_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_beanie_od_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, Beanie Hat 01";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Civil\headgear_beaniehat01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\headwear\beanie\od\data\beanie_OD_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_beanie_od_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
    class gear_beanie_OD_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, Beanie Hat 02";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\GEARS_OD\headwear\common\gear_beanie_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\headwear\beanie\od\data\beanie_OD_01_co.paa"};
		hiddenSelectionMaterials[] = {"\a3\characters_f\common\data\woolhat.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_beanie_od_02";		
		    mass = 1;
			uniformModel = "\GEARS_OD\headwear\common\gear_beanie_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };

	class gear_Boonie_OD_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, Boonie 01";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\headwear\boonie\od\data\Boonie_OD_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_OD_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Boonie_OD_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, Boonie 02";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\headwear\boonie\od\data\Boonie_OD_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_OD_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_capcom_OD_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, ComTac II Cap 01";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\headwear\capcom\od\data\capcom_OD_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_OD_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_capcom_OD_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, ComTac II Cap 02";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\headwear\capcom\od\data\capcom_OD_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_OD_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   };
	class gear_capcom_OD_03: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, ComTac II Cap 03";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\headwear\capcom\od\data\capcom_OD_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_OD_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};
	class gear_cover_OD_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, Cover 01";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\GEARS_OD\headwear\common\cover.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\headwear\cover\od\data\cover_OD_01_co.paa"};
        hiddenSelectionsMaterials[] = {"\GEARS_OD\headwear\ca\us_officer_equip.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_cover_OD_01";		
		    mass = 1;
			uniformModel = "\GEARS_OD\headwear\common\cover.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_patrolcap_OD_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, Patrol Cap 01";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\headwear\patrolcap\od\data\patrolcap_OD_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_OD_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   class gear_patrolcap_OD_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, Patrol Cap 02";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\headwear\patrolcap\od\data\patrolcap_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_F\Common\Data\cappatrol.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_OD_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ach_od_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD MICH 2000 / ACH, 01A";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ACH\core\data\ACH_OD_01_co.paa","\GEARS_CORE\helmets\ACH\core\data\ACH_OD_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_od_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
			armor = 0.5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
	class gear_ach_od_02: gear_ach_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD MICH 2000 / ACH, 01B";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ACH\core\data\ACH_OD_03_co.paa","\GEARS_CORE\helmets\ACH\core\data\ACH_OD_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\ach2.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_od_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
			armor = 0.5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
 
	class gear_ECH_OD_01: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2001, 01A BK";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ECH_OD_02: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2001, 01A CB";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_ECH_OD_03: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2001, 01A OD";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
      	class gear_ECH_OD_04: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2001, 01A SG";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_04";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_OD_05: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2001, 01A TN";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_05";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_OD_21: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2001, 01B BK";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_12_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_21";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_OD\headwear\common\equipx1.rvmat"};
	    };
   };   
	class gear_ECH_OD_22: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2001, 01B CB";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_13_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_22";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_OD\headwear\common\equipx1.rvmat"};
	    };
   };
   	class gear_ECH_OD_23: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2001, 01B OD";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_14_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_23";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_OD\headwear\common\equipx1.rvmat"};	
	    };
   };
      	class gear_ECH_OD_24: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2001, 01B SG";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_15_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_24";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_OD\headwear\common\equipx1.rvmat"};
	    };
   };   
         	class gear_ECH_OD_25: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2001, 01B TN";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_16_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_OD\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_25";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_OD\headwear\common\equipx1.rvmat"};
	    };
   };   
       	class gear_ECH_OD_06: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01B BK";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_06";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_OD_07: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01B CB";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_07";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_OD_08: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01B OD";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_08";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_OD_09: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01B SG";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_09";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_OD_10: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01B TN";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_10";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_OD_11: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01A BK";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_06_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_11";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_OD_12: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01A CB";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_07_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_12";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_OD_13: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01A OD";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_08_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_13";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_OD_14: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01A SG";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_09_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_14";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_OD_15: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01A TN";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_10_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_15";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_OD_16: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01C BK";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_01_co.paa","\GEARS_OD\helmets\ECH\od\data\ECH_OD_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_16";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_OD_17: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01C CB";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_02_co.paa","\GEARS_OD\helmets\ECH\od\data\ECH_OD_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_17";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_OD_18: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01C OD";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_03_co.paa","\GEARS_OD\helmets\ECH\od\data\ECH_OD_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_18";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_OD_19: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01C SG";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_04_co.paa","\GEARS_OD\helmets\ECH\od\data\ECH_OD_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_19";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };  
      	class gear_ECH_OD_20: gear_ECH_OD_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Ops-Core MICH 2000, 01C TN";
		picture = "\GEARS_OD\ui\OD_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_OD\helmets\ECH\od\data\ECH_OD_05_co.paa","\GEARS_OD\helmets\ECH\od\data\ECH_OD_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_OD_20";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	   };
   };   
   	class gear_pth_CORE_02: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Pro-Tec Helmet, 01A";
		picture = "\GEARS_OD\ui\OD_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_protec_CORE_02";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\PTH\OD\data\PTH_OD_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\pp.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_pth_CORE_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_protec_CORE_02";
			armor = 0.5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo"};
	    };
   };
	class gear_headset_core_02: gear_headset_core_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR OD Headwear, ComTac II";
		picture = "\GEARS_CORE\ui\od_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_com_CORE_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\headset\CORE\data\capcom_core_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_headset_core_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_com_CORE_01.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
};
   class CfgGlasses
{
	class None;

		class gear_balaclava_CORE_03: None
	{
		scope = 2;
		author = "KetsuCorp";
		displayname = "GEAR OD Issue Balaclava, 01A";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\OD\data\balaclava_od_01_co.paa"};
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_04";
		picture = "\GEARS_CORE\ui\OD_ui.paa";
        identityTypes[] = {"NoGlasses",1000};
	};	
	class gear_balaclava_CORE_09: None
	{
		scope = 2;
		author = "KetsuCorp";
		displayname = "GEAR OD Issue Balaclava, 01B";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\od\data\balaclava_od_01_co.paa"};
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_09";
		picture = "\GEARS_CORE\ui\OD_ui.paa";
        identityTypes[] = {"NoGlasses",1000};
	};
	class gear_headseteyewear_od_01: None
	{
		scope = 2;
		author = "KetsuCorp";
		displayName = "GEAR OD Headwear, ComTac II";
		model = "\GEARS_CORE\headwear\common\gear_com_CORE_02.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\headset\CORE\data\capcom_core_02_co.paa"};
		picture = "\GEARS_CORE\ui\OD_ui.paa";
        identityTypes[] = {"NoGlasses",1000};
    };
  };