class CfgPatches
{
	 class GEARS_TN
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};
class CfgVehicleClasses
{
	class GEARS_TN_C
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
	class gear_B_Soldier_TN_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
	};
	class gear_B_Soldier_TN_02: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
	};
	class gear_B_Soldier_TN_03: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_02_co.paa"};
	};
	class gear_B_Soldier_TN_04: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_02_co.paa"};
	};
	class gear_B_Soldier_TN_05: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_03_co.paa"};
	};
	class gear_B_Soldier_TN_06: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_03_co.paa"};
	};
	class gear_B_Soldier_TN_07: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_04_co.paa"};
	};
	class gear_B_Soldier_TN_08: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_04_co.paa"};
	};
	class gear_B_Soldier_TN_09: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_05_co.paa"};
	};
	class gear_B_Soldier_TN_10: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_05_co.paa"};
	};
	class gear_B_Soldier_TN_11: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_06_co.paa"};
	};
	class gear_B_Soldier_TN_12: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_06_co.paa"};
	};
	class gear_B_Soldier_TN_13: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_07_co.paa"};
	};
	class gear_B_Soldier_TN_14: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_07_co.paa"};
	};
	class gear_B_Soldier_TN_15: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_08_co.paa"};
	};
	class gear_B_Soldier_TN_16: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_08_co.paa"};
	};
	class gear_B_Soldier_TN_17: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_09_co.paa"};
	};
	class gear_B_Soldier_TN_18: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_09_co.paa"};
	};
	class gear_B_Soldier_TN_19: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_10_co.paa"};
	};
	class gear_B_Soldier_TN_20: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_10_co.paa"};
	};
	class gear_B_Soldier_TN_21: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_11_co.paa"};
	};
	class gear_B_Soldier_TN_22: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_11_co.paa"};
	};
	class gear_B_Soldier_TN_23: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_12_co.paa"};
	};
	class gear_B_Soldier_TN_24: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_12_co.paa"};
	};
	class gear_B_Soldier_TN_25: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_13_co.paa"};
	};
	class gear_B_Soldier_TN_26: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_13_co.paa"};
	};
	class gear_B_Soldier_TN_27: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_14_co.paa"};
	};
	class gear_B_Soldier_TN_28: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_14_co.paa"};
	};
	class gear_B_Soldier_TN_29: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_15_co.paa"};
	};
	class gear_B_Soldier_TN_30: gear_B_Soldier_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_kit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_15_co.paa"};
	};
        class gear_B_Commando_TN_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_02: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_03: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_04: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_05: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_06: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_07: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_08: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_09: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_10: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_11: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_12: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_13: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_14: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_15: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_16: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_17: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_18: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_19: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_20: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_21: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_22: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_23: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_24: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_25: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_26: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_27: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_28: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_29: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_TN_30: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "gear_TN_commandokit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Garrison_TN_01: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 01A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_01";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_01_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_02: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 01A, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_02";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_02_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_03: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 01A, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_03";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_03_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_04: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 01A, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_04";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_04_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_05: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 01A, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_05";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_05_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_06: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 02A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_06";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_06_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_07: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 02B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_07";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_07_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_08: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 02C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_08";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_08_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_09: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 02D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_09";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_09_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_10: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 02E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_10";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_10_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_TN_11: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 03A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_11";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_11_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_12: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 03B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_12";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_12_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_13: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 03C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_13";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_13_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_14: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 03D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_14";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_14_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_15: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 03E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_15";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_15_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_TN_16: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 04A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_16";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_16_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_17: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 04B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_17";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_17_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_18: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 04C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_18";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_18_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_19: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 04D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_19";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_19_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_20: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 04E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_20";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_20_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_TN_21: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 05A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_21";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_21_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_22: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 05B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_22";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_22_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_23: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 05C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_23";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_23_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_24: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 05D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_24";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_24_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_TN_25: gear_B_Commando_TN_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Garrison HQ Uniform 05E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "garrison_TN_25";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\garrison\tn\data\garrison_TN_25_co.paa","\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\clothing\common\data\officer.rvmat"};
	};
		class gear_B_GhillieShirt_TN_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_TN_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_TN_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_TN_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_TN_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_TN_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_06_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_TN_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_07_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_TN_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_08_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_TN_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_09_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_TN_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_10_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_TN_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_11_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_TN_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_12_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_TN_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_13_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_TN_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_14_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_TN_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Combat Uniform 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghillieshirt_TN_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\combatshirt\tn\data\combatshirt_TN_15_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieMando_TN_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_TN_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_TN_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_TN_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_TN_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_TN_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_TN_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_TN_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_TN_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_TN_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_TN_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_TN_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_TN_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_TN_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_TN_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Commando Sweater 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "ghilliemando_TN_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\commando\tn\data\commando_TN_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_01_co.paa"}; 
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_02_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_03_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_04_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_06_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_07_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_08_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_09_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_10_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_11_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_12_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_13_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_14_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_TN_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_TN\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeGhillie_TN_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_15_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
			class gear_B_Crye_TN_01: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_01_co.paa"};
	};
		class gear_B_Crye_TN_02: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_01_co.paa"};
	};
		class gear_B_Crye_TN_03: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_02_co.paa"};
	};
		class gear_B_Crye_TN_04: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 01B Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_02_co.paa"};
	};
		class gear_B_Crye_TN_05: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_03_co.paa"};
	};
		class gear_B_Crye_TN_06: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_03_co.paa"};
	};
		class gear_B_Crye_TN_07: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_04_co.paa"};
	};
		class gear_B_Crye_TN_08: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_04_co.paa"};
	};
		class gear_B_Crye_TN_09: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_05_co.paa"};
	};
		class gear_B_Crye_TN_10: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_05_co.paa"};
	};
		class gear_B_Crye_TN_11: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_06_co.paa"};
	};
		class gear_B_Crye_TN_12: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_06_co.paa"};
	};
		class gear_B_Crye_TN_13: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_07_co.paa"};
	};
		class gear_B_Crye_TN_14: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_07_co.paa"};
	};
		class gear_B_Crye_TN_15: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_08_co.paa"};
	};
		class gear_B_Crye_TN_16: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_08_co.paa"};
	};
		class gear_B_Crye_TN_17: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_09_co.paa"};
	};
		class gear_B_Crye_TN_18: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_09_co.paa"};
	};
		class gear_B_Crye_TN_19: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_10_co.paa"};
	};
		class gear_B_Crye_TN_20: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_10_co.paa"};
	};
		class gear_B_Crye_TN_21: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_11_co.paa"};
	};
		class gear_B_Crye_TN_22: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_11_co.paa"};
	};
		class gear_B_Crye_TN_23: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_12_co.paa"};
	};
		class gear_B_Crye_TN_24: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_12_co.paa"};
	};
		class gear_B_Crye_TN_25: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_13_co.paa"};
	};
		class gear_B_Crye_TN_26: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_13_co.paa"};
	};
		class gear_B_Crye_TN_27: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_14_co.paa"};
	};
		class gear_B_Crye_TN_28: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_14_co.paa"};
	};
		class gear_B_Crye_TN_29: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_15_co.paa"};
	};
		class gear_B_Crye_TN_30: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "Crye_TN_kit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\Crye_TN_15_co.paa"};
	};
			class gear_B_CryeScuba_TN_01: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 01A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_01";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_01_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_TN_02: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 01B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_02";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_02_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_TN_03: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 01C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_03";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_03_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_TN_04: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 02A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_04";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_04_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_TN_05: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 02B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_05";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_05_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_TN_06: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 02C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_06";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_06_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_TN_07: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 03A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_07";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_07_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_TN_08: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 03B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_08";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_08_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_TN_09: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 03C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_09";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_09_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_TN_10: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 04A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_10";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_10_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_TN_11: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 04B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_11";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_11_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_TN_12: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 04C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_12";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_12_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_TN_13: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 05A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_13";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_13_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_TN_14: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 05B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_14";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_14_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_TN_15: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform 05C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "CryeScuba_TN_15";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_15_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_TN_01: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_01";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_01_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_TN_02: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_02";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_01_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_03: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_03";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_01_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_04: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_04";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_01_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_05: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_05";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_01_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_TN_06: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_06";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_02_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_TN_07: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_07";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_02_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_08: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_08";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_02_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_09: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_09";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_02_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_10: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_10";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_02_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_TN_11: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_11";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_03_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_TN_12: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_12";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_03_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_13: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_13";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_03_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_14: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_14";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_03_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_15: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 01C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_15";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_03_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_TN_16: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_16";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_04_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_TN_17: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_17";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_04_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_18: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_18";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_04_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_19: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_19";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_04_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_20: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_20";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_04_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_TN_21: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_21";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_05_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_TN_22: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_22";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_05_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_23: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_23";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_05_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_24: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_24";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_05_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_25: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_25";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_05_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_TN_26: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_26";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_06_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_TN_27: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_27";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_06_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_28: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_28";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_06_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_29: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_29";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_06_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_30: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 02C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_30";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_06_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_TN_31: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_31";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_07_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_TN_32: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_32";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_07_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_33: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_33";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_07_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_34: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_34";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_07_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_35: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_35";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_07_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_TN_36: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_36";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_08_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_TN_37: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_37";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_08_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_38: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_38";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_08_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_39: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_39";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_08_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_40: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_40";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_08_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_TN_41: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_41";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_09_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_TN_42: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_42";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_09_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_43: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_43";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_09_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_44: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_44";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_09_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_45: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 03C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_45";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_09_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_TN_46: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_46";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_10_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_TN_47: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_47";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_10_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_48: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_48";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_10_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_49: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_49";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_10_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_50: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_50";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_10_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_TN_51: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_51";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_11_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_TN_52: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_52";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_11_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_53: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_53";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_11_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_54: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_54";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_11_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_55: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_55";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_11_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_TN_56: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_56";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_12_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_TN_57: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_57";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_12_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_58: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_58";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_12_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_59: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_59";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_12_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_60: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 04C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_60";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_12_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
	
		class gear_B_CryeS_TN_61: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_61";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_13_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_TN_62: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_62";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_13_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_63: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_63";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_13_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_64: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_64";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_13_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_65: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_65";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_13_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_TN_66: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_66";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_14_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_TN_67: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_67";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_14_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_68: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_68";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_14_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_69: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_69";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_14_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_70: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_70";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_14_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_TN_71: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_71";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_15_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_TN_72: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_72";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_15_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_TN_73: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_73";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_15_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_TN_74: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_74";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_15_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_TN_75: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR TN Crye Uniform U-Shirt 05C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_TN_C";
		uniformClass = "cryeS_TN_75";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\crye\tn\data\crye_TN_15_co.paa","\GEARS_TN\clothing\cryeshirts\tn\data\basicbody_bk.paa"};
	};
	class gear_assaultpack_TN_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\GEARS_TN\rucksack\assault\tn\data\assaultpack_TN_01_co.paa"};
		displayName = "GEAR TN CQB Kit Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
		class gear_assaultpack_TN_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\rucksack\assault\tn\data\assaultpack_TN_02_co.paa","\GEARS_TN\rucksack\assault\tn\data\assaultpack_TN_01_co.paa","\GEARS_TN\rucksack\assault\tn\data\assaultpack_TN_02_co.paa"};
		displayName = "GEAR TN CQB Kit Rucksack 01B";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};

	class gear_Carryall_TN_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"\GEARS_TN\rucksack\carryall\tn\data\carryall_TN_01_co.paa"};
		displayName = "GEAR TN Infantry Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
	class gear_FastPack_TN_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\GEARS_TN\rucksack\fast\tn\data\FastPack_TN_01_co.paa"};
		displayName = "GEAR TN F.A.S.T. Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
	class gear_FieldPack_TN_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		hiddenSelectionsTextures[] = {"\GEARS_TN\rucksack\field\tn\data\FieldPack_TN_01_co.paa"};
		displayName = "GEAR TN Camping Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
	class gear_largesize_TN_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\drones_f\Weapons_F_Gamma\Ammoboxes\bags\UAV_backpack_F";
		displayName = "GEAR TN Full-Size Rucksack 01A";
		hiddenSelectionsTextures[] = {"\GEARS_TN\rucksack\lrrp\tn\data\largesize_TN_01_co.paa"};
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
	class gear_Tacticalpack_TN_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		hiddenSelectionsTextures[] = {"\GEARS_TN\rucksack\Tactical\tn\data\Tacticalpack_TN_01_co.paa"};
		displayName = "GEAR TN Tactical Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
		class gear_backbelt_TN_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_01_co.paa"};
		displayName = "GEAR TN Combat Belt 01A, BK";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_TN_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_02_co.paa"};
		displayName = "GEAR TN Combat Belt 01A, CB";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_TN_03: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_03_co.paa"};
		displayName = "GEAR TN Combat Belt 01A, OD";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_TN_04: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_04_co.paa"};
		displayName = "GEAR TN Combat Belt 01A, SG";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_TN_05: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_05_co.paa"};
		displayName = "GEAR TN Combat Belt 01A, TN";
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
	class gear_TN_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 01A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 01A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 01B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 01B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 01C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 01C, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 02A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 02A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 02B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 02B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 02C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 02C, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 03A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 03A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 03B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 03B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 03C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 03C, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 04A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 04A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 04B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 04B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 04C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 04C, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 05A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 05A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 05B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_27";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 05B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_28";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 05C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_29";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_kit30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 05C, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_TN_30";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

			class gear_TN_commandokit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 01A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 01A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 01B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 01B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 01C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 01C, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 02A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 02A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 02B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 02B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 02C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 02C, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 03A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 03A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 03B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 03B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 03C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 03C, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 04A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 04A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 04B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 04B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 04C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 04C, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 05A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 05A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 05B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_27";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 05B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_28";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 05C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_29";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_commandokit30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 05C, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_TN_30";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 01A, TN Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 01B, SG Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 01C, CB Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 01D, OD Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 01E, BK Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 02A, TN Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 02B, SG Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 02C, CB Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 02D, OD Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 02E, BK Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 03A, TN Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 03B, SG Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 03C, CB Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 03D, OD Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 03E, BK Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 04A, TN Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 04B, SG Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 04C, CB Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 04D, OD Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 04E, BK Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 05A, TN Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 05B, SG Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 05C, CB Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 05D, OD Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_TN_25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Garrison HQ Uniform 05E, BK Shirt";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_TN_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 01A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 01B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 01C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 02A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 02B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 02C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 03A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 03B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 03C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 04A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 04B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 04C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 05A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 05B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghillieshirt15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Combat Uniform 05C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_TN_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

			class gear_TN_ghilliemando01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 01A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghilliemando02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 01B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghilliemando03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 01C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghilliemando04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 02A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghilliemando05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 02B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghilliemando06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 02C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghilliemando07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 03A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghilliemando08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 03B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghilliemando09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 03C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghilliemando10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 04A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghilliemando11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 04B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghilliemando12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 04C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghilliemando13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 05A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghilliemando14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 05B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_ghilliemando15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Commando Sweater 05C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_TN_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

		class CryeGhillie_TN_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 01A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_TN_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 01B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_TN_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 01C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeGhillie_TN_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 02A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_TN_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 02B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_TN_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 02C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeGhillie_TN_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 03A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_TN_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 03B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_TN_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 03C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeGhillie_TN_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 04A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_TN_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 04B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_TN_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 04C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeGhillie_TN_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 05A, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_TN_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 05B, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_TN_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 05C, Ghillie Suit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_TN_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

	        class gear_TN_crye01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 01A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 01A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 01B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 01B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 01C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 01C, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 02A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 02A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 02B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 02B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 02C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 02C, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 03A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 03A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 03B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 03B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 03C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 03C, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 04A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 04A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 04B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 04B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 04C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 04C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 05A, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 05A, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 05B, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_27";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 05B, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_28";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 05C, Sleeves Down";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_29";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_TN_crye30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 05C, Sleeves Up";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_TN_30";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

		        class CryeScuba_TN_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 01A, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_TN_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 01B, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_TN_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 01C, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_TN_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 02A, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_TN_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 02B, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_TN_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 02C, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_TN_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 03A, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_TN_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 03B, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_TN_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 03C, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_TN_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 04A, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_TN_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 04B, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_TN_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 04C, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_TN_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 05A, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_TN_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 05B, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_TN_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR TN Crye Uniform 05C, Scuba Kit";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_TN_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

		class gear_TN_cryeS01: Uniform_Base
	{
		scope = 2;
        author = "KetsuCorp";
		displayName = "GEAR TN Crye Uniform U-Shirt 01A, TN";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS02: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 01A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS03: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 01A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS04: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 01A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS05: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 01A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS06: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 01B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS07: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 01B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS08: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 01B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS09: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 01B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS10: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 01B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS11: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 01C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS12: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 01C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS13: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 01C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS14: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 01C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS15: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 01C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS16: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS17: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS18: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS19: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS20: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS21: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS22: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS23: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS24: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS25: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS26: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS27: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_27";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS28: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_28";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS29: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_29";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS30: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 02C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_30";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS31: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_31";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS32: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_32";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS33: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_33";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS34: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_34";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS35: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_35";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS36: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_36";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS37: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_37";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS38: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_38";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS39: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_39";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS40: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_40";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS41: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_41";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS42: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_42";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS43: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_43";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS44: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_44";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS45: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 03C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_45";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS46: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_46";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS47: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_47";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS48: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_48";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS49: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_49";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS50: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_50";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS51: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_51";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS52: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_52";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS53: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_53";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS54: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_54";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS55: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_55";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS56: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS57: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_57";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS58: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_58";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS59: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_59";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS60: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 04C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_60";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS61: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_61";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS62: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_62";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS63: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_63";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS64: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_64";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS65: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_65";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS66: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_66";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS67: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_67";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS68: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_68";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS69: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_69";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS70: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_70";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS71: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_71";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS72: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_72";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS73: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_73";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS74: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_74";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_TN_cryeS75: gear_TN_cryeS01
	{
		displayName = "GEAR TN Crye Uniform U-Shirt 05C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_TN\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_TN_75";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_infantry_TN_01: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		displayName = "GEAR TN Infantry Carrier 01A";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\infantry\tn\data\infantry_TN_01_co.paa"};
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
		class gear_infantry_TN_02: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		displayName = "GEAR TN Infantry Carrier 01B";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\infantry\tn\data\infantry_TN_01_co.paa"};
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
	class gear_platecarrier_TN_01: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR TN Plate Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_05_co.paa"};
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
		class gear_platecarrier_TN_02: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		displayName = "GEAR TN Plate Carrier 01B, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_05_co.paa"};
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
		class gear_platecarrier_TN_03: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		displayName = "GEAR TN Plate Carrier 02A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_05_co.paa"};
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
	class gear_platecarrier_TN_04: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR TN Plate Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_04_co.paa"};
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
		class gear_platecarrier_TN_05: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		displayName = "GEAR TN Plate Carrier 01B, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_04_co.paa"};
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
		class gear_platecarrier_TN_06: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		displayName = "GEAR TN Plate Carrier 02A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_04_co.paa"};
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
		class gear_platecarrier_TN_07: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR TN Plate Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_02_co.paa"};
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
		class gear_platecarrier_TN_08: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		displayName = "GEAR TN Plate Carrier 01B, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_02_co.paa"};
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
		class gear_platecarrier_TN_09: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		displayName = "GEAR TN Plate Carrier 02A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_02_co.paa"};
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
		class gear_platecarrier_TN_10: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR TN Plate Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_03_co.paa"};
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
		class gear_platecarrier_TN_11: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		displayName = "GEAR TN Plate Carrier 01B, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_03_co.paa"};
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
	
		class gear_platecarrier_TN_12: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		displayName = "GEAR TN Plate Carrier 02A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_03_co.paa"};
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
		class gear_platecarrier_TN_13: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR TN Plate Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_01_co.paa"};
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
		class gear_platecarrier_TN_14: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		displayName = "GEAR TN Plate Carrier 01B, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_01_co.paa"};
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
		class gear_platecarrier_TN_15: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		displayName = "GEAR TN Plate Carrier 02A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_01_co.paa"};
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
		class gear_vestbelt_TN_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR TN Combat Belt 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_05_co.paa"};
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
		class gear_bandolier_TN_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR TN Pouch-Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_05_co.paa"};
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
  		class gear_vestbelt_TN_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR TN Combat Belt 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_04_co.paa"};
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
		class gear_bandolier_TN_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR TN Pouch-Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_04_co.paa"};
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
        class gear_vestbelt_TN_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR TN Combat Belt 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_02_co.paa"};
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
		class gear_bandolier_TN_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR TN Pouch-Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_02_co.paa"};
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
        class gear_vestbelt_TN_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR TN Combat Belt 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_03_co.paa"};
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
		class gear_bandolier_TN_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR TN Pouch-Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_03_co.paa"};
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
         class gear_vestbelt_TN_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR TN Combat Belt 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_01_co.paa"};
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
		class gear_bandolier_TN_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR TN Pouch-Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\platecarrier\tn\data\platecarrier_TN_01_co.paa"};
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
	class gear_tacvest_TN_01: V_TacVestCamo_khk
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		displayName = "GEAR TN Webbed Tac-Vest 01A";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\armor\tacvest\tn\data\tacvest_TN_01_co.paa"};
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
		class gear_balaclavaH_TN_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Issue Balaclava, 01A";
		picture = "\GEARS_CORE\ui\TN_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_07";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\TN\data\balaclava_TN_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_BalaclavaH_TN_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_balaclava_core_07";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
	    };
   };
   	class gear_balaclavaH_TN_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Issue Balaclava, 01B";
		picture = "\GEARS_CORE\ui\TN_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_11";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\TN\data\balaclava_TN_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_BalaclavaH_TN_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_balaclava_core_11";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
	    };
   };
	class gear_ballcap_TN_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, Cap 02";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\common\capb.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GEARS_TN\headwear\ballcap\tn\data\ballcap_TN_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_TN_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ballcap_TN_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, Cap 01";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "A3\Characters_F_EPB\common\capb_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GEARS_TN\headwear\ballcap\tn\data\ballcap_TN_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_TN_02";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\common\capb_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_Bandana_TN_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, Bandana 01";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\headwear\bandana\tn\data\bandana_TN_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_TN_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Bandana_TN_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, Bandana 02";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\headwear\bandana\tn\data\bandana_TN_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_TN_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_beanie_tn_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, Beanie Hat 01";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Civil\headgear_beaniehat01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\headwear\beanie\tn\data\beanie_TN_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_beanie_tn_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
    class gear_beanie_TN_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, Beanie Hat 02";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\GEARS_TN\headwear\common\gear_beanie_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\headwear\beanie\tn\data\beanie_TN_01_co.paa"};
		hiddenSelectionMaterials[] = {"\a3\characters_f\common\data\woolhat.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_beanie_tn_02";		
		    mass = 1;
			uniformModel = "\GEARS_TN\headwear\common\gear_beanie_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };

	class gear_Boonie_TN_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, Boonie 01";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\headwear\boonie\tn\data\Boonie_TN_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_TN_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Boonie_TN_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, Boonie 02";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\headwear\boonie\tn\data\Boonie_TN_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_TN_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_capcom_TN_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, ComTac II Cap 01";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\headwear\capcom\tn\data\capcom_TN_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_TN_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_capcom_TN_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, ComTac II Cap 02";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\headwear\capcom\tn\data\capcom_TN_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_TN_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   };
	class gear_capcom_TN_03: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, ComTac II Cap 03";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\headwear\capcom\tn\data\capcom_TN_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_TN_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};
	class gear_cover_TN_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, Cover 01";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\GEARS_TN\headwear\common\cover.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\headwear\cover\tn\data\cover_TN_01_co.paa"};
        hiddenSelectionsMaterials[] = {"\GEARS_TN\headwear\ca\us_officer_equip.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_cover_TN_01";		
		    mass = 1;
			uniformModel = "\GEARS_TN\headwear\common\cover.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_patrolcap_TN_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, Patrol Cap 01";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\headwear\patrolcap\tn\data\patrolcap_TN_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_TN_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   class gear_patrolcap_TN_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, Patrol Cap 02";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\headwear\patrolcap\tn\data\patrolcap_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_F\Common\Data\cappatrol.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_TN_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ach_tn_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN MICH 2000 / ACH, 01A";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ACH\core\data\ACH_TN_01_co.paa","\GEARS_CORE\helmets\ACH\core\data\ACH_TN_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_tn_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
			armor = 0.5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
	class gear_ach_tn_02: gear_ach_tn_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN MICH 2000 / ACH, 01B";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ACH\core\data\ACH_TN_03_co.paa","\GEARS_CORE\helmets\ACH\core\data\ACH_TN_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\ach2.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_tn_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
			armor = 0.5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
 
	class gear_ECH_TN_01: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2001, 01A BK";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ECH_TN_02: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2001, 01A CB";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_ECH_TN_03: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2001, 01A OD";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
      	class gear_ECH_TN_04: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2001, 01A SG";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_04";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_TN_05: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2001, 01A TN";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_05";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_TN_21: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2001, 01B BK";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_12_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_21";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_TN\headwear\common\equipx1.rvmat"};
	    };
   };   
	class gear_ECH_TN_22: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2001, 01B CB";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_13_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_22";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_TN\headwear\common\equipx1.rvmat"};
	    };
   };
   	class gear_ECH_TN_23: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2001, 01B OD";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_14_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_23";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_TN\headwear\common\equipx1.rvmat"};	
	    };
   };
      	class gear_ECH_TN_24: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2001, 01B SG";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_15_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_24";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_TN\headwear\common\equipx1.rvmat"};
	    };
   };   
         	class gear_ECH_TN_25: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2001, 01B TN";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_16_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_TN\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_25";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_TN\headwear\common\equipx1.rvmat"};
	    };
   };   
       	class gear_ECH_TN_06: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01B BK";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_06";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_TN_07: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01B CB";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_07";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_TN_08: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01B OD";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_08";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_TN_09: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01B SG";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_09";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_TN_10: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01B TN";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_10";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_TN_11: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01A BK";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_06_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_11";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_TN_12: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01A CB";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_07_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_12";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_TN_13: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01A OD";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_08_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_13";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_TN_14: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01A SG";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_09_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_14";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_TN_15: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01A TN";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_10_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_15";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_TN_16: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01C BK";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_01_co.paa","\GEARS_TN\helmets\ECH\tn\data\ECH_TN_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_16";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_TN_17: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01C CB";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_02_co.paa","\GEARS_TN\helmets\ECH\tn\data\ECH_TN_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_17";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_TN_18: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01C OD";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_03_co.paa","\GEARS_TN\helmets\ECH\tn\data\ECH_TN_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_18";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_TN_19: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01C SG";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_04_co.paa","\GEARS_TN\helmets\ECH\tn\data\ECH_TN_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_19";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };  
      	class gear_ECH_TN_20: gear_ECH_TN_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Ops-Core MICH 2000, 01C TN";
		picture = "\GEARS_TN\ui\TN_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\ECH\tn\data\ECH_TN_05_co.paa","\GEARS_TN\helmets\ECH\tn\data\ECH_TN_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_TN_20";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	   };
   };   
   	class gear_pth_CORE_05: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Pro-Tec Helmet, 01A";
		picture = "\GEARS_CORE\ui\TN_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_protec_CORE_05";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_TN\helmets\PTH\TN\data\PTH_TN_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\pp.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_pth_CORE_05";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_protec_CORE_05";
			armor = 0.5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo"};
	    };
   };
      	class gear_headset_core_03: gear_headset_core_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR TN Headwear, ComTac II";
		picture = "\GEARS_TN\ui\tn_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_com_CORE_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\headset\CORE\data\capcom_core_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_headset_core_03";		
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

		class gear_balaclava_TN_01: None
	{
		scope = 2;
		author = "KetsuCorp";
		displayname = "GEAR TN Issue Balaclava, 01A";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\TN\data\balaclava_TN_01_co.paa"};
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_07";
		picture = "\GEARS_CORE\ui\TN_ui.paa";
        identityTypes[] = {"NoGlasses",1000};
   };
   	class gear_balaclava_TN_11: None
	{
		scope = 2;
		author = "KetsuCorp";
		displayname = "GEAR TN Issue Balaclava, 01B";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\TN\data\balaclava_TN_01_co.paa"};
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_11";
		picture = "\GEARS_CORE\ui\TN_ui.paa";
        identityTypes[] = {"NoGlasses",1000};
	};
	class gear_headseteyewear_tn_01: None
	{
		scope = 2;
		author = "KetsuCorp";
		displayName = "GEAR TN Headwear, ComTac II";
		model = "\GEARS_CORE\headwear\common\gear_com_CORE_03.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\headwear\headset\CORE\data\capcom_core_03_co.paa"};
		picture = "\GEARS_CORE\ui\TN_ui.paa";
        identityTypes[] = {"NoGlasses",1000};
    };
  };