class CfgPatches
{
	 class GEARS_CORE
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};
class CfgVehicleClasses
{
	class GEARS_CORE_C
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
	class gear_B_Soldier_BK_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
	};
	class gear_B_Soldier_BK_02: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
	};
	class gear_B_Soldier_BK_03: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_02_co.paa"};
	};
	class gear_B_Soldier_BK_04: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_02_co.paa"};
	};
	class gear_B_Soldier_BK_05: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_03_co.paa"};
	};
	class gear_B_Soldier_BK_06: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_03_co.paa"};
	};
	class gear_B_Soldier_BK_07: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_04_co.paa"};
	};
	class gear_B_Soldier_BK_08: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_04_co.paa"};
	};
	class gear_B_Soldier_BK_09: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_05_co.paa"};
	};
	class gear_B_Soldier_BK_10: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_05_co.paa"};
	};
	class gear_B_Soldier_BK_11: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_06_co.paa"};
	};
	class gear_B_Soldier_BK_12: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_06_co.paa"};
	};
	class gear_B_Soldier_BK_13: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_07_co.paa"};
	};
	class gear_B_Soldier_BK_14: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_07_co.paa"};
	};
	class gear_B_Soldier_BK_15: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_08_co.paa"};
	};
	class gear_B_Soldier_BK_16: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_08_co.paa"};
	};
	class gear_B_Soldier_BK_17: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_09_co.paa"};
	};
	class gear_B_Soldier_BK_18: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_09_co.paa"};
	};
	class gear_B_Soldier_BK_19: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_10_co.paa"};
	};
	class gear_B_Soldier_BK_20: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_10_co.paa"};
	};
	class gear_B_Soldier_BK_21: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_11_co.paa"};
	};
	class gear_B_Soldier_BK_22: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_11_co.paa"};
	};
	class gear_B_Soldier_BK_23: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_12_co.paa"};
	};
	class gear_B_Soldier_BK_24: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_12_co.paa"};
	};
	class gear_B_Soldier_BK_25: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_13_co.paa"};
	};
	class gear_B_Soldier_BK_26: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_13_co.paa"};
	};
	class gear_B_Soldier_BK_27: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_14_co.paa"};
	};
	class gear_B_Soldier_BK_28: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_14_co.paa"};
	};
	class gear_B_Soldier_BK_29: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_15_co.paa"};
	};
	class gear_B_Soldier_BK_30: gear_B_Soldier_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_kit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_15_co.paa"};
	};
        class gear_B_Commando_BK_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_02: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_03: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_04: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_05: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_06: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_07: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_08: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_09: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_10: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_11: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_12: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_13: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_14: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_15: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_16: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_17: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_18: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_19: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_20: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_21: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_22: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_23: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_24: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_25: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_26: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_27: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_28: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_29: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_BK_30: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "gear_BK_commandokit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Garrison_BK_01: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 01A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_01";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_01_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_02: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 01A, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_02";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_02_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_03: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 01A, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_03";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_03_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_04: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 01A, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_04";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_04_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_05: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 01A, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_05";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_05_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_06: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 02A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_06";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_06_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_07: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 02B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_07";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_07_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_08: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 02C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_08";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_08_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_09: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 02D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_09";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_09_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_10: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 02E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_10";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_10_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_BK_11: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 03A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_11";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_11_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_12: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 03B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_12";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_12_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_13: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 03C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_13";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_13_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_14: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 03D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_14";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_14_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_15: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 03E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_15";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_15_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_BK_16: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 04A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_16";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_16_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_17: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 04B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_17";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_17_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_18: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 04C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_18";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_18_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_19: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 04D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_19";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_19_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_20: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 04E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_20";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_20_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_BK_21: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 05A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_21";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_21_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_22: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 05B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_22";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_22_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_23: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 05C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_23";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_23_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_24: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 05D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_24";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_24_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_BK_25: gear_B_Commando_BK_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Garrison HQ Uniform 05E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "garrison_BK_25";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\garrison\core\data\garrison_BK_25_co.paa","\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_GhillieShirt_BK_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_BK_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_BK_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_BK_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_BK_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_BK_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_06_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_BK_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_07_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_BK_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_08_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_BK_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_09_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_BK_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_10_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_BK_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_11_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_BK_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_12_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_BK_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_13_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_BK_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_14_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_BK_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Combat Uniform 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghillieshirt_BK_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\combatshirt\core\data\combatshirt_BK_15_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieMando_BK_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_BK_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_BK_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_BK_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_BK_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_BK_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_BK_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_BK_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_BK_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_BK_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_BK_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_BK_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_BK_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_BK_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_BK_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Commando Sweater 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit7.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "ghilliemando_BK_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\commando\core\data\commando_BK_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_01_co.paa"}; 
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_02_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_03_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_04_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_06_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_07_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_08_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_09_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_10_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_11_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_12_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_13_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_14_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_BK_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit15.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeGhillie_BK_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_15_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
			class gear_B_Crye_BK_01: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_01_co.paa"};
	};
		class gear_B_Crye_BK_02: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_01_co.paa"};
	};
		class gear_B_Crye_BK_03: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_02_co.paa"};
	};
		class gear_B_Crye_BK_04: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 01B Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_02_co.paa"};
	};
		class gear_B_Crye_BK_05: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_03_co.paa"};
	};
		class gear_B_Crye_BK_06: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_03_co.paa"};
	};
		class gear_B_Crye_BK_07: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_04_co.paa"};
	};
		class gear_B_Crye_BK_08: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_04_co.paa"};
	};
		class gear_B_Crye_BK_09: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_05_co.paa"};
	};
		class gear_B_Crye_BK_10: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_05_co.paa"};
	};
		class gear_B_Crye_BK_11: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_06_co.paa"};
	};
		class gear_B_Crye_BK_12: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_06_co.paa"};
	};
		class gear_B_Crye_BK_13: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_07_co.paa"};
	};
		class gear_B_Crye_BK_14: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_07_co.paa"};
	};
		class gear_B_Crye_BK_15: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_08_co.paa"};
	};
		class gear_B_Crye_BK_16: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_08_co.paa"};
	};
		class gear_B_Crye_BK_17: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_09_co.paa"};
	};
		class gear_B_Crye_BK_18: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_09_co.paa"};
	};
		class gear_B_Crye_BK_19: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_10_co.paa"};
	};
		class gear_B_Crye_BK_20: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_10_co.paa"};
	};
		class gear_B_Crye_BK_21: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_11_co.paa"};
	};
		class gear_B_Crye_BK_22: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_11_co.paa"};
	};
		class gear_B_Crye_BK_23: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_12_co.paa"};
	};
		class gear_B_Crye_BK_24: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_12_co.paa"};
	};
		class gear_B_Crye_BK_25: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_13_co.paa"};
	};
		class gear_B_Crye_BK_26: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_13_co.paa"};
	};
		class gear_B_Crye_BK_27: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_14_co.paa"};
	};
		class gear_B_Crye_BK_28: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_14_co.paa"};
	};
		class gear_B_Crye_BK_29: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_15_co.paa"};
	};
		class gear_B_Crye_BK_30: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "Crye_BK_kit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\Crye_BK_15_co.paa"};
	};
			class gear_B_CryeScuba_BK_01: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 01A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_01";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_01_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_BK_02: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 01B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_02";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_02_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_BK_03: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 01C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_03";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_03_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_BK_04: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 02A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_04";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_04_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_BK_05: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 02B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_05";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_05_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_BK_06: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 02C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_06";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_06_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_BK_07: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 03A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_07";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_07_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_BK_08: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 03B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_08";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_08_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_BK_09: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 03C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_09";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_09_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_BK_10: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 04A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_10";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_10_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_BK_11: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 04B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_11";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_11_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_BK_12: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 04C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_12";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_12_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_BK_13: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 05A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_13";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_13_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_BK_14: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 05B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_14";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_14_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_BK_15: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform 05C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "CryeScuba_BK_15";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_15_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_BK_01: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_01";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_01_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_BK_02: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_02";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_01_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_03: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_03";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_01_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_04: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_04";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_01_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_05: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_05";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_01_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_BK_06: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_06";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_02_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_BK_07: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_07";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_02_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_08: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_08";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_02_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_09: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_09";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_02_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_10: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_10";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_02_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_BK_11: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_11";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_03_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_BK_12: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_12";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_03_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_13: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_13";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_03_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_14: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_14";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_03_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_15: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 01C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_15";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_03_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_BK_16: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_16";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_04_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_BK_17: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_17";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_04_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_18: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_18";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_04_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_19: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_19";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_04_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_20: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_20";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_04_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_BK_21: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_21";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_05_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_BK_22: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_22";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_05_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_23: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_23";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_05_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_24: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_24";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_05_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_25: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_25";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_05_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_BK_26: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_26";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_06_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_BK_27: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_27";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_06_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_28: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_28";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_06_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_29: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_29";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_06_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_30: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 02C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_30";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_06_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_BK_31: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_31";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_07_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_BK_32: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_32";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_07_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_33: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_33";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_07_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_34: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_34";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_07_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_35: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_35";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_07_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_BK_36: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_36";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_08_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_BK_37: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_37";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_08_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_38: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_38";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_08_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_39: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_39";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_08_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_40: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_40";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_08_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_BK_41: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_41";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_09_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_BK_42: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_42";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_09_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_43: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_43";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_09_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_44: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_44";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_09_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_45: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 03C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_45";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_09_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_BK_46: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_46";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_10_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_BK_47: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_47";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_10_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_48: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_48";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_10_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_49: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_49";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_10_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_50: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_50";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_10_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_BK_51: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_51";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_11_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_BK_52: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_52";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_11_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_53: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_53";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_11_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_54: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_54";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_11_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_55: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_55";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_11_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_BK_56: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_56";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_12_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_BK_57: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_57";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_12_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_58: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_58";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_12_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_59: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_59";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_12_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_60: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 04C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_60";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_12_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
	
		class gear_B_CryeS_BK_61: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_61";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_13_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_BK_62: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_62";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_13_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_63: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_63";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_13_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_64: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_64";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_13_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_65: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_65";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_13_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_BK_66: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_66";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_14_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_BK_67: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_67";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_14_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_68: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_68";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_14_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_69: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_69";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_14_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_70: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_70";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_14_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_BK_71: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_71";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_15_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_BK_72: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_72";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_15_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_BK_73: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_73";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_15_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_BK_74: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_74";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_15_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_BK_75: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR BK Crye Uniform U-Shirt 05C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_CORE_C";
		uniformClass = "cryeS_BK_75";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\crye\core\data\crye_bk_15_co.paa","\GEARS_CORE\clothing\cryeshirts\core\data\basicbody_bk.paa"};
	};
	class gear_assaultpack_bk_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\bk_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\rucksack\assault\core\data\assaultpack_bk_01_co.paa"};
		displayName = "GEAR BK CQB Kit Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
		class gear_assaultpack_bk_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\bk_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\rucksack\assault\core\data\assaultpack_bk_02_co.paa","\GEARS_CORE\rucksack\assault\core\data\assaultpack_bk_01_co.paa","\GEARS_CORE\rucksack\assault\core\data\assaultpack_bk_02_co.paa"};
		displayName = "GEAR BK CQB Kit Rucksack 01B";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};

	class gear_Carryall_BK_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\rucksack\carryall\CORE\data\carryall_bk_01_co.paa"};
		displayName = "GEAR BK Infantry Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
	class gear_FastPack_BK_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\rucksack\fast\core\data\FastPack_bk_01_co.paa"};
		displayName = "GEAR BK F.A.S.T. Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
	class gear_FieldPack_BK_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\rucksack\field\CORE\data\FieldPack_BK_01_co.paa"};
		displayName = "GEAR BK Camping Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
	class gear_largesize_BK_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\drones_f\Weapons_F_Gamma\Ammoboxes\bags\UAV_backpack_F";
		displayName = "GEAR BK Full-Size Rucksack 01A";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\rucksack\lrrp\CORE\data\largesize_BK_01_co.paa"};
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
	class gear_Tacticalpack_BK_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\rucksack\Tactical\CORE\data\Tacticalpack_BK_01_co.paa"};
		displayName = "GEAR BK Tactical Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
		class gear_backbelt_BK_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\core\data\platecarrier_BK_01_co.paa"};
		displayName = "GEAR BK Combat Belt 01A, BK";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_BK_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\core\data\platecarrier_BK_02_co.paa"};
		displayName = "GEAR BK Combat Belt 01A, CB";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_BK_03: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\core\data\platecarrier_BK_03_co.paa"};
		displayName = "GEAR BK Combat Belt 01A, OD";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_BK_04: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\core\data\platecarrier_BK_04_co.paa"};
		displayName = "GEAR BK Combat Belt 01A, SG";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_BK_05: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\core\data\platecarrier_BK_05_co.paa"};
		displayName = "GEAR BK Combat Belt 01A, TN";
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
	class gear_BK_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 01A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 01A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 01B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 01B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 01C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 01C, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 02A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 02A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 02B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 02B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 02C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 02C, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 03A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 03A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 03B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 03B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 03C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 03C, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 04A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 04A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 04B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 04B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 04C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 04C, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 05A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 05A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 05B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_27";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 05B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_28";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 05C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_29";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_kit30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 05C, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_BK_30";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

			class gear_BK_commandokit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 01A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 01A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 01B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 01B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 01C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 01C, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 02A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 02A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 02B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 02B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 02C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 02C, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 03A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 03A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 03B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 03B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 03C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 03C, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 04A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 04A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 04B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 04B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 04C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 04C, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 05A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 05A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 05B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_27";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 05B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_28";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 05C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_29";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_commandokit30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 05C, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_BK_30";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 01A, TN Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 01B, SG Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 01C, CB Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 01D, OD Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 01E, BK Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 02A, TN Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 02B, SG Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 02C, CB Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 02D, OD Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 02E, BK Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 03A, TN Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 03B, SG Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 03C, CB Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 03D, OD Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 03E, BK Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 04A, TN Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 04B, SG Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 04C, CB Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 04D, OD Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 04E, BK Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 05A, TN Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 05B, SG Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 05C, CB Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 05D, OD Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class garrison_BK_25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Garrison HQ Uniform 05E, BK Shirt";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_BK_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 01A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 01B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 01C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 02A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 02B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 02C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 03A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 03B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 03C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 04A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 04B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 04C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 05A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 05B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghillieshirt15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Combat Uniform 05C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_BK_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

			class gear_bk_ghilliemando01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 01A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghilliemando02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 01B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghilliemando03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 01C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghilliemando04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 02A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghilliemando05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 02B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghilliemando06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 02C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghilliemando07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 03A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghilliemando08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 03B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghilliemando09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 03C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghilliemando10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 04A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghilliemando11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 04B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghilliemando12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 04C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghilliemando13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 05A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghilliemando14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 05B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_bk_ghilliemando15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Commando Sweater 05C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_BK_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

		class CryeGhillie_BK_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 01A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_BK_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 01B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_BK_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 01C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeGhillie_BK_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 02A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_BK_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 02B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_BK_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 02C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeGhillie_BK_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 03A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_BK_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 03B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_BK_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 03C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeGhillie_BK_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 04A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_BK_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 04B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_BK_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 04C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeGhillie_BK_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 05A, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_BK_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 05B, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	    class CryeGhillie_BK_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 05C, Ghillie Suit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_BK_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

	        class gear_BK_crye01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 01A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 01A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 01B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 01B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 01C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 01C, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 02A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 02A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 02B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 02B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 02C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 02C, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 03A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 03A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 03B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 03B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 03C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 03C, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 04A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 04A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 04B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 04B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 04C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 04C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 05A, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 05A, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 05B, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_27";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 05B, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_28";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 05C, Sleeves Down";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_29";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_BK_crye30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 05C, Sleeves Up";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_BK_30";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

		        class CryeScuba_BK_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 01A, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_BK_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 01B, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_BK_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 01C, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_BK_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 02A, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_BK_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 02B, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_BK_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 02C, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_BK_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 03A, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_BK_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 03B, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_BK_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 03C, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_BK_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 04A, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_BK_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 04B, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_BK_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 04C, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_BK_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 05A, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_BK_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 05B, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class CryeScuba_BK_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR BK Crye Uniform 05C, Scuba Kit";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_BK_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};

		class gear_BK_cryeS01: Uniform_Base
	{
		scope = 2;
        author = "KetsuCorp";
		displayName = "GEAR BK Crye Uniform U-Shirt 01A, TN";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_01";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS02: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 01A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_02";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS03: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 01A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_03";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS04: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 01A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_04";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS05: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 01A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_05";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS06: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 01B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_06";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS07: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 01B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_07";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS08: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 01B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_08";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS09: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 01B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_09";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS10: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 01B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_10";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS11: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 01C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_11";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS12: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 01C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_12";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS13: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 01C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_13";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS14: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 01C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_14";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS15: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 01C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_15";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS16: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_16";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS17: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_17";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS18: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_18";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS19: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_19";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS20: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_20";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS21: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_21";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS22: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_22";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS23: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_23";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS24: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_24";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS25: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_25";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS26: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS27: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_27";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS28: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_28";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS29: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_29";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS30: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 02C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_30";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS31: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_31";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS32: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_32";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS33: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_33";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS34: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_34";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS35: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_35";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS36: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_36";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS37: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_37";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS38: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_38";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS39: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_39";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS40: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_40";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS41: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_41";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS42: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_42";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS43: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_43";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS44: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_44";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS45: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 03C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_45";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS46: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_46";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS47: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_47";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS48: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_48";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS49: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_49";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS50: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_50";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS51: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_51";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS52: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_52";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS53: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_53";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS54: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_54";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS55: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_55";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS56: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_26";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS57: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_57";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS58: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_58";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS59: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_59";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS60: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 04C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_60";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS61: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_61";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS62: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_62";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS63: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_63";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS64: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_64";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS65: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_65";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS66: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_66";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS67: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_67";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS68: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_68";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS69: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_69";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS70: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_70";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS71: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_71";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS72: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_72";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS73: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_73";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS74: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_74";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
	class gear_BK_cryeS75: gear_BK_cryeS01
	{
		displayName = "GEAR BK Crye Uniform U-Shirt 05C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_BK_75";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		armor = 0;
		};
	};
		class gear_divergear_BK_01: Vest_Camo_Base
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		displayName = "GEAR BK Breathing Apparatus 01A";
		model = "\A3\Characters_F\Common\equip_rebreather";
		//hiddenUnderwaterSelections[] = {"hide"};
		//shownUnderwaterSelections[] = {"unhide","unhide2"};
        //hiddenUnderwaterSelectionsTextures[] = {"\GEARS_CORE\armor\divergear\CORE\data\divergear_bk_01_co.paa","\GEARS_CORE\armor\divergear\CORE\data\divergear_bk_01_co.paa","\A3\characters_f\data\visors_ca.paa"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\divergear\CORE\data\divergear_bk_01_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\equip_rebreather";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			vestType = "Rebreather";
			//hiddenUnderwaterSelections[] = {"hide"};
			//shownUnderwaterSelections[] = {"unhide","unhide2"};
			//hiddenUnderwaterSelectionsTextures[] = {"\GEARS_CORE\armor\divergear\CORE\data\divergear_bk_01_co.paa","\GEARS_CORE\armor\divergear\CORE\data\divergear_bk_01_co.paa","\A3\characters_f\data\visors_ca.paa"};
			hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\divergear\CORE\data\divergear_bk_01_co.paa"};
			armor = 1;
			passthrough = 0.610;
		};
	};
		class gear_divergear_BK_02: Vest_Camo_Base
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		displayName = "GEAR BK Breathing Apparatus 01B";
		model = "\A3\Characters_F\Common\equip_rebreather";
		//hiddenUnderwaterSelections[] = {"hide"};
		//shownUnderwaterSelections[] = {"unhide","unhide2"};
        //hiddenUnderwaterSelectionsTextures[] = {"\GEARS_CORE\armor\divergear\CORE\data\divergear_bk_01_co.paa","\GEARS_CORE\armor\divergear\CORE\data\divergear_bk_01_co.paa","\A3\characters_f\data\visors_ca.paa"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\divergear\CORE\data\divergear_bk_02_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\equip_rebreather";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			vestType = "Rebreather";
			//hiddenUnderwaterSelections[] = {"hide"};
			//shownUnderwaterSelections[] = {"unhide","unhide2"};
			//hiddenUnderwaterSelectionsTextures[] = {"\GEARS_CORE\armor\divergear\CORE\data\divergear_bk_01_co.paa","\GEARS_CORE\armor\divergear\CORE\data\divergear_bk_01_co.paa","\A3\characters_f\data\visors_ca.paa"};
			hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\divergear\CORE\data\divergear_bk_02_co.paa"};
			armor = 1;
			passthrough = 0.610;
		};
	};
	class gear_infantry_bk_01: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\bk_ui.paa";
		displayName = "GEAR BK Infantry Carrier 01A";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\infantry\CORE\data\infantry_bk_01_co.paa"};
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
		class gear_infantry_bk_02: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\bk_ui.paa";
		displayName = "GEAR BK Infantry Carrier 01B";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\infantry\CORE\data\infantry_bk_01_co.paa"};
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
	class gear_platecarrier_bk_01: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR BK Plate Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_05_co.paa"};
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
		class gear_platecarrier_BK_02: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		displayName = "GEAR BK Plate Carrier 01B, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_05_co.paa"};
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
		class gear_platecarrier_BK_03: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		displayName = "GEAR BK Plate Carrier 02A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_05_co.paa"};
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
	class gear_platecarrier_BK_04: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR BK Plate Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_04_co.paa"};
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
		class gear_platecarrier_BK_05: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		displayName = "GEAR BK Plate Carrier 01B, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_04_co.paa"};
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
		class gear_platecarrier_BK_06: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		displayName = "GEAR BK Plate Carrier 02A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_04_co.paa"};
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
		class gear_platecarrier_BK_07: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR BK Plate Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_02_co.paa"};
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
		class gear_platecarrier_BK_08: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		displayName = "GEAR BK Plate Carrier 01B, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_02_co.paa"};
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
		class gear_platecarrier_BK_09: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		displayName = "GEAR BK Plate Carrier 02A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_02_co.paa"};
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
		class gear_platecarrier_BK_10: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR BK Plate Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_03_co.paa"};
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
		class gear_platecarrier_BK_11: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		displayName = "GEAR BK Plate Carrier 01B, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_03_co.paa"};
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
	
		class gear_platecarrier_BK_12: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		displayName = "GEAR BK Plate Carrier 02A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_03_co.paa"};
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
		class gear_platecarrier_BK_13: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR BK Plate Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_01_co.paa"};
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
		class gear_platecarrier_BK_14: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		displayName = "GEAR BK Plate Carrier 01B, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_01_co.paa"};
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
		class gear_platecarrier_BK_15: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		displayName = "GEAR BK Plate Carrier 02A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_01_co.paa"};
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
		class gear_vestbelt_BK_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR BK Combat Belt 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_05_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_BK_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR BK Pouch-Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_05_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
  		class gear_vestbelt_BK_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR BK Combat Belt 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_04_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_BK_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR BK Pouch-Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_04_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
        class gear_vestbelt_BK_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR BK Combat Belt 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_02_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_BK_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR BK Pouch-Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_02_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
        class gear_vestbelt_BK_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR BK Combat Belt 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_03_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_BK_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR BK Pouch-Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_03_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
         class gear_vestbelt_BK_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR BK Combat Belt 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_01_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_BK_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR BK Pouch-Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\platecarrier\CORE\data\platecarrier_BK_01_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
	class gear_tacvest_BK_01: V_TacVestCamo_khk
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		displayName = "GEAR BK Webbed Tac-Vest 01A";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\armor\tacvest\CORE\data\tacvest_bk_01_co.paa"};
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
	class gear_ballcap_BK_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, Cap 02";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\common\capb.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GEARS_CORE\headwear\ballcap\CORE\data\ballcap_BK_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_BK_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ballcap_BK_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, Cap 01";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "A3\Characters_F_EPB\common\capb_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GEARS_CORE\headwear\ballcap\CORE\data\ballcap_BK_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_BK_02";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\common\capb_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};
	class gear_balaclavaH_BK_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Issue Balaclava, 01A";
		picture = "\GEARS_CORE\ui\bk_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_02";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\core\data\balaclava_bk_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_BalaclavaH_BK_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_balaclava_core_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
	    };
	};	
	class gear_balaclavaH_BK_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Issue Balaclava, 01B";
		picture = "\GEARS_CORE\ui\bk_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_01";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\core\data\balaclava_bk_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_BalaclavaH_BK_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_balaclava_core_01";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
	    };
    };  
	class gear_Bandana_BK_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, Bandana 01";
		picture = "\GEARS_CORE\ui\bk_ui.paa";
		model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\bandana\CORE\data\bandana_BK_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_BK_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Bandana_BK_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, Bandana 02";
		picture = "\GEARS_CORE\ui\bk_ui.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\bandana\CORE\data\bandana_BK_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_BK_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_beanie_core_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, Beanie Hat 01";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Civil\headgear_beaniehat01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\beanie\CORE\data\beanie_BK_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_beanie_core_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
    class gear_beanie_core_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, Beanie Hat 02";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_beanie_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\beanie\CORE\data\beanie_BK_01_co.paa"};
		hiddenSelectionMaterials[] = {"\a3\characters_f\common\data\woolhat.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_beanie_core_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_beanie_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };

	class gear_Boonie_BK_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, Boonie 01";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\boonie\core\data\Boonie_BK_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_BK_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Boonie_BK_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, Boonie 02";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\boonie\core\data\Boonie_BK_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_BK_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_capcom_BK_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, ComTac II Cap 01";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\capcom\CORE\data\capcom_BK_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_BK_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_capcom_BK_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, ComTac II Cap 02";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\capcom\CORE\data\capcom_BK_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_BK_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   };
	class gear_capcom_BK_03: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, ComTac II Cap 03";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\capcom\CORE\data\capcom_BK_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_BK_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};
	class gear_cover_bk_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, Cover 01";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\GEARS_CORE\headwear\common\cover.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\cover\CORE\data\cover_BK_01_co.paa"};
        hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\us_officer_equip.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_cover_BK_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\cover.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };

	class gear_headset_core_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, ComTac II";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_com_CORE_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\headset\CORE\data\capcom_core_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_headset_core_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_com_CORE_01.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_patrolcap_core_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, Patrol Cap 01";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\patrolcap\CORE\data\patrolcap_BK_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_core_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   class gear_patrolcap_core_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, Patrol Cap 02";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\patrolcap\CORE\data\patrolcap_BK_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_F\Common\Data\cappatrol.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_core_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_wireset_core_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Headwear, Wire Headset";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_headset_CORE_01.p3d";
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_wireset_core_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_headset_CORE_01.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
    };
		class gear_ach_CORE_00: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK MICH 2000, 01A";
		picture = "\GEARS_CORE\ui\BK_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_00";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ACH\core\data\ACH_BK_05_co.paa","\GEARS_CORE\helmets\ACH\core\data\ACH_BK_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\ach3.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_CORE_00";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_00";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
	class gear_ach_CORE_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK MICH 2000, 01D";
		picture = "\GEARS_CORE\ui\BK_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ACH\core\data\ACH_BK_01_co.paa","\GEARS_CORE\helmets\ACH\core\data\ACH_BK_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_CORE_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
   		class gear_ach_CORE_02: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK MICH 2000, 01C";
		picture = "\GEARS_CORE\ui\BK_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_00";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ACH\core\data\ACH_BK_01_co.paa","\GEARS_CORE\helmets\ACH\core\data\ACH_BK_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\ach1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_CORE_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_00";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
	class gear_ach_CORE_03: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK MICH 2000, 01B";
		picture = "\GEARS_CORE\ui\BK_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ACH\core\data\ACH_BK_04_co.paa","\GEARS_CORE\helmets\ACH\core\data\ACH_BK_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\ach2.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_CORE_03";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
	class gear_mich_CORE_00: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK MICH 2001, 01A";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_mich_CORE_00";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\MICH\CORE\data\MICH_BK_01_co.paa","\GEARS_CORE\helmets\ACH\CORE\data\ACH_BK_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_mich_CORE_00";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_mich_CORE_00";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
   	class gear_mich_CORE_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK MICH 2001, 01B";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_mich_CORE_01";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\MICH\CORE\data\MICH_BK_03_co.paa","\GEARS_CORE\helmets\ACH\CORE\data\ACH_BK_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\mich3.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_mich_CORE_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_mich_CORE_01";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
	class gear_ECH_BK_01: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2001, 01A BK";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ECH_BK_02: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2001, 01A CB";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_ECH_BK_03: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2001, 01A OD";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
      	class gear_ECH_BK_04: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2001, 01A SG";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_04";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_BK_05: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2001, 01A TN";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_05";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_BK_21: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2001, 01B BK";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_12_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_21";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
	class gear_ECH_BK_22: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2001, 01B CB";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_13_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_22";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };
   	class gear_ECH_BK_23: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2001, 01B OD";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_14_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_23";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};	
	    };
   };
      	class gear_ECH_BK_24: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2001, 01B SG";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_15_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_24";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         	class gear_ECH_BK_25: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2001, 01B TN";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_16_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_25";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
       	class gear_ECH_BK_06: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01B BK";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_06";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_BK_07: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01B CB";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_07";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_BK_08: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01B OD";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_08";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_BK_09: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01B SG";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_09";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_BK_10: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01B TN";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_10";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_BK_11: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01A BK";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_06_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_11";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_BK_12: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01A CB";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_07_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_12";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_BK_13: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01A OD";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_08_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_13";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_BK_14: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01A SG";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_09_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_14";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_BK_15: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01A TN";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_10_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_15";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_BK_16: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01C BK";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_01_co.paa","\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_16";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_BK_17: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01C CB";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_02_co.paa","\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_17";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_BK_18: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01C OD";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_03_co.paa","\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_18";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_BK_19: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01C SG";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_04_co.paa","\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_19";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };  
      	class gear_ECH_BK_20: gear_ECH_BK_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Ops-Core MICH 2000, 01C TN";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_05_co.paa","\GEARS_CORE\helmets\ECH\CORE\data\ECH_BK_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_BK_20";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	   };
   };   
   	class gear_pth_CORE_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Pro-Tec Helmet, 01A";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_protec_CORE_01";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\PTH\CORE\data\PTH_bk_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\pp.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_pth_CORE_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_protec_CORE_01";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo"};
	    };
   };
      	class gear_pth_CORE_06: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR BK Pro-Tec Helmet, 01B";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_protec_CORE_06";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\PTH\CORE\data\PTH_bk_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\pp.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_pth_CORE_06";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_protec_CORE_06";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo"};
	    };
   };
};
   class CfgGlasses
{
	class None;

	class gear_balaclava_CORE_01: None
	{
		scope = 2;
		author = "KetsuCorp";
		displayname = "GEAR BK Issue Balaclava, 01A";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\core\data\balaclava_bk_01_co.paa"};
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_02";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
        identityTypes[] = {"NoGlasses",1000};
	};	
	class gear_balaclava_CORE_02: None
	{
		scope = 2;
		author = "KetsuCorp";
		displayname = "GEAR BK Issue Balaclava, 01B";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\core\data\balaclava_bk_01_co.paa"};
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_01";
		picture = "\GEARS_CORE\ui\BK_ui.paa";
        identityTypes[] = {"NoGlasses",1000};
	};
	class gear_headseteyewear_core_01: None
	{
		scope = 2;
		author = "KetsuCorp";
		displayName = "GEAR BK Headwear, ComTac II";
		model = "\GEARS_CORE\headwear\common\gear_com_CORE_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\headset\CORE\data\capcom_core_01_co.paa"};
		picture = "\GEARS_CORE\ui\BK_ui.paa";
        identityTypes[] = {"NoGlasses",1000};
    };
  };