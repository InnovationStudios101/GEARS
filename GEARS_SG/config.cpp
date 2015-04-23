class CfgPatches
{
	 class GEARS_SG
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};
class CfgVehicleClasses
{
	class GEARS_SG_C
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
	class gear_B_Soldier_SG_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
	};
	class gear_B_Soldier_SG_02: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
	};
	class gear_B_Soldier_SG_03: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_02_co.paa"};
	};
	class gear_B_Soldier_SG_04: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_02_co.paa"};
	};
	class gear_B_Soldier_SG_05: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_03_co.paa"};
	};
	class gear_B_Soldier_SG_06: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_03_co.paa"};
	};
	class gear_B_Soldier_SG_07: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_04_co.paa"};
	};
	class gear_B_Soldier_SG_08: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_04_co.paa"};
	};
	class gear_B_Soldier_SG_09: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_05_co.paa"};
	};
	class gear_B_Soldier_SG_10: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_05_co.paa"};
	};
	class gear_B_Soldier_SG_11: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_06_co.paa"};
	};
	class gear_B_Soldier_SG_12: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_06_co.paa"};
	};
	class gear_B_Soldier_SG_13: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_07_co.paa"};
	};
	class gear_B_Soldier_SG_14: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_07_co.paa"};
	};
	class gear_B_Soldier_SG_15: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_08_co.paa"};
	};
	class gear_B_Soldier_SG_16: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_08_co.paa"};
	};
	class gear_B_Soldier_SG_17: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_09_co.paa"};
	};
	class gear_B_Soldier_SG_18: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_09_co.paa"};
	};
	class gear_B_Soldier_SG_19: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_10_co.paa"};
	};
	class gear_B_Soldier_SG_20: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_10_co.paa"};
	};
	class gear_B_Soldier_SG_21: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_11_co.paa"};
	};
	class gear_B_Soldier_SG_22: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_11_co.paa"};
	};
	class gear_B_Soldier_SG_23: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_12_co.paa"};
	};
	class gear_B_Soldier_SG_24: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_12_co.paa"};
	};
	class gear_B_Soldier_SG_25: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_13_co.paa"};
	};
	class gear_B_Soldier_SG_26: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_13_co.paa"};
	};
	class gear_B_Soldier_SG_27: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_14_co.paa"};
	};
	class gear_B_Soldier_SG_28: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_14_co.paa"};
	};
	class gear_B_Soldier_SG_29: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_15_co.paa"};
	};
	class gear_B_Soldier_SG_30: gear_B_Soldier_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_kit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_15_co.paa"};
	};
        class gear_B_Commando_SG_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_02: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_03: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_04: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_05: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_06: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_07: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_08: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_09: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_10: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_11: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_12: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_13: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_14: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_15: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_16: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_17: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_18: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_19: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_20: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_21: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_22: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_23: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_24: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_25: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_26: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_27: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_28: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_29: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_SG_30: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "gear_SG_commandokit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Garrison_SG_01: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 01A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_01";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_01_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_02: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 01A, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_02";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_02_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_03: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 01A, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_03";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_03_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_04: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 01A, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_04";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_04_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_05: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 01A, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_05";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_05_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_06: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 02A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_06";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_06_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_07: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 02B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_07";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_07_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_08: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 02C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_08";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_08_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_09: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 02D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_09";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_09_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_10: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 02E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_10";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_10_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_SG_11: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 03A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_11";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_11_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_12: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 03B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_12";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_12_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_13: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 03C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_13";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_13_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_14: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 03D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_14";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_14_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_15: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 03E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_15";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_15_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_SG_16: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 04A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_16";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_16_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_17: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 04B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_17";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_17_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_18: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 04C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_18";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_18_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_19: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 04D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_19";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_19_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_20: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 04E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_20";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_20_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_SG_21: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 05A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_21";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_21_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_22: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 05B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_22";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_22_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_23: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 05C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_23";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_23_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_24: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 05D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_24";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_24_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_SG_25: gear_B_Commando_SG_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Garrison HQ Uniform 05E, BK Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "garrison_SG_25";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\garrison\sg\data\garrison_SG_25_co.paa","\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\clothing\common\data\officer.rvmat"};
	};
		class gear_B_GhillieShirt_SG_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_SG_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_SG_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_SG_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_SG_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_SG_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_06_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_SG_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_07_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_SG_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_08_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_SG_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_09_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_SG_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_10_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_SG_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_11_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_SG_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_12_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_SG_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_13_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_SG_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_14_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_SG_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Combat Uniform 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghillieshirt_SG_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\combatshirt\sg\data\combatshirt_SG_15_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieMando_SG_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_SG_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_SG_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_SG_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_SG_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_SG_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_SG_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_SG_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_SG_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_09_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_SG_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_10_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_SG_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_11_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_SG_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_12_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_SG_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_13_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_SG_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_14_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_SG_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Commando Sweater 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit2.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "ghilliemando_SG_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\commando\sg\data\commando_SG_15_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_01_co.paa"}; 
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_02_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 01C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_03_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_04_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 02C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_06_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_07_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_08_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_09: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 03C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_09";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_09_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_10: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_10";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_10_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_11: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_11";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_11_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_12: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 04C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_12";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_12_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_13: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 05A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_13";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_13_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_14: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 05B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_14";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_14_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_SG_15: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 05C, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_SG\clothing\common\ghilliesuit10.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeGhillie_SG_15";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_15_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
			class gear_B_Crye_SG_01: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_01_co.paa"};
	};
		class gear_B_Crye_SG_02: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_01_co.paa"};
	};
		class gear_B_Crye_SG_03: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_02_co.paa"};
	};
		class gear_B_Crye_SG_04: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 01B Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_02_co.paa"};
	};
		class gear_B_Crye_SG_05: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 01C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_03_co.paa"};
	};
		class gear_B_Crye_SG_06: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 01C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_03_co.paa"};
	};
		class gear_B_Crye_SG_07: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_04_co.paa"};
	};
		class gear_B_Crye_SG_08: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_04_co.paa"};
	};
		class gear_B_Crye_SG_09: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_05_co.paa"};
	};
		class gear_B_Crye_SG_10: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_05_co.paa"};
	};
		class gear_B_Crye_SG_11: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 02C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_06_co.paa"};
	};
		class gear_B_Crye_SG_12: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 02C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_06_co.paa"};
	};
		class gear_B_Crye_SG_13: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_07_co.paa"};
	};
		class gear_B_Crye_SG_14: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_07_co.paa"};
	};
		class gear_B_Crye_SG_15: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_08_co.paa"};
	};
		class gear_B_Crye_SG_16: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_08_co.paa"};
	};
		class gear_B_Crye_SG_17: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 03C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit17";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_09_co.paa"};
	};
		class gear_B_Crye_SG_18: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 03C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit18";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_09_co.paa"};
	};
		class gear_B_Crye_SG_19: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit19";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_10_co.paa"};
	};
		class gear_B_Crye_SG_20: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit20";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_10_co.paa"};
	};
		class gear_B_Crye_SG_21: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit21";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_11_co.paa"};
	};
		class gear_B_Crye_SG_22: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit22";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_11_co.paa"};
	};
		class gear_B_Crye_SG_23: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 04C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit23";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_12_co.paa"};
	};
		class gear_B_Crye_SG_24: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 04C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit24";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_12_co.paa"};
	};
		class gear_B_Crye_SG_25: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 05A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit25";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_13_co.paa"};
	};
		class gear_B_Crye_SG_26: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 05A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit26";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_13_co.paa"};
	};
		class gear_B_Crye_SG_27: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 05B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit27";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_14_co.paa"};
	};
		class gear_B_Crye_SG_28: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 05B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit28";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_14_co.paa"};
	};
		class gear_B_Crye_SG_29: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 05C, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit29";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_15_co.paa"};
	};
		class gear_B_Crye_SG_30: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 05C, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "Crye_SG_kit30";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\Crye_SG_15_co.paa"};
	};
			class gear_B_CryeScuba_SG_01: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 01A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_01";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_01_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_SG_02: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 01B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_02";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_02_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_SG_03: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 01C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_03";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_03_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_SG_04: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 02A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_04";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_04_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_SG_05: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 02B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_05";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_05_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_SG_06: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 02C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_06";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_06_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_SG_07: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 03A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_07";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_07_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_SG_08: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 03B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_08";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_08_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_SG_09: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 03C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_09";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_09_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_SG_10: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 04A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_10";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_10_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_SG_11: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 04B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_11";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_11_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_SG_12: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 04C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_12";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_12_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_SG_13: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 05A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_13";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_13_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_SG_14: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 05B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_14";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_14_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_SG_15: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform 05C, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "CryeScuba_SG_15";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_15_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_SG_01: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_01";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_01_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_SG_02: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_02";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_01_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_03: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_03";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_01_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_04: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_04";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_01_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_05: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_05";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_01_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_SG_06: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_06";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_02_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_SG_07: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_07";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_02_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_08: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_08";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_02_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_09: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_09";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_02_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_10: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_10";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_02_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_SG_11: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_11";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_03_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_SG_12: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_12";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_03_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_13: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_13";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_03_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_14: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_14";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_03_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_15: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 01C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_15";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_03_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_SG_16: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_16";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_04_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_SG_17: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_17";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_04_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_18: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_18";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_04_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_19: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_19";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_04_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_20: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_20";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_04_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_SG_21: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_21";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_05_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_SG_22: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_22";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_05_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_23: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_23";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_05_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_24: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_24";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_05_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_25: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_25";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_05_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_SG_26: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_26";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_06_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_SG_27: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_27";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_06_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_28: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_28";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_06_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_29: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_29";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_06_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_30: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 02C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_30";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_06_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_SG_31: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_31";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_07_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_SG_32: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_32";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_07_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_33: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_33";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_07_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_34: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_34";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_07_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_35: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_35";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_07_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_SG_36: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_36";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_08_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_SG_37: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_37";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_08_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_38: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_38";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_08_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_39: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_39";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_08_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_40: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_40";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_08_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_SG_41: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_41";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_09_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_SG_42: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_42";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_09_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_43: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_43";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_09_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_44: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_44";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_09_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_45: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 03C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_45";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_09_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_SG_46: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_46";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_10_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_SG_47: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_47";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_10_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_48: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_48";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_10_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_49: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_49";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_10_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_50: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_50";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_10_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_SG_51: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_51";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_11_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_SG_52: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_52";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_11_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_53: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_53";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_11_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_54: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_54";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_11_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_55: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_55";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_11_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_SG_56: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_56";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_12_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_SG_57: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_57";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_12_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_58: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_58";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_12_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_59: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_59";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_12_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_60: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 04C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_60";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_12_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
	
		class gear_B_CryeS_SG_61: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_61";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_13_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_SG_62: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_62";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_13_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_63: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_63";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_13_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_64: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_64";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_13_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_65: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_65";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_13_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_SG_66: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_66";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_14_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_SG_67: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_67";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_14_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_68: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_68";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_14_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_69: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_69";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_14_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_70: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_70";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_14_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
		class gear_B_cryeS_SG_71: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05C, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_71";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_15_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_tn.paa"};
	};
		class gear_B_cryeS_SG_72: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05C, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_72";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_15_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_sg.paa"};
	};
		class gear_B_cryeS_SG_73: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05C, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_73";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_15_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_cb.paa"};
	};
		class gear_B_cryeS_SG_74: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05C, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_74";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_15_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_od.paa"};
	};
		class gear_B_cryeS_SG_75: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "GEAR SG Crye Uniform U-Shirt 05C, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_SG_C";
		uniformClass = "cryeS_SG_75";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\crye\sg\data\crye_SG_15_co.paa","\GEARS_SG\clothing\cryeshirts\sg\data\basicbody_bk.paa"};
	};
	class gear_assaultpack_SG_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\GEARS_SG\rucksack\assault\sg\data\assaultpack_SG_01_co.paa"};
		displayName = "GEAR SG CQB Kit Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
		class gear_assaultpack_SG_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\rucksack\assault\sg\data\assaultpack_SG_02_co.paa","\GEARS_SG\rucksack\assault\sg\data\assaultpack_SG_01_co.paa","\GEARS_SG\rucksack\assault\sg\data\assaultpack_SG_02_co.paa"};
		displayName = "GEAR SG CQB Kit Rucksack 01B";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};

	class gear_Carryall_SG_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"\GEARS_SG\rucksack\carryall\sg\data\carryall_SG_01_co.paa"};
		displayName = "GEAR SG Infantry Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
	class gear_FastPack_SG_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\GEARS_SG\rucksack\fast\sg\data\FastPack_SG_01_co.paa"};
		displayName = "GEAR SG F.A.S.T. Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
	class gear_FieldPack_SG_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		hiddenSelectionsTextures[] = {"\GEARS_SG\rucksack\field\sg\data\FieldPack_SG_01_co.paa"};
		displayName = "GEAR SG Camping Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
	class gear_largesize_SG_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\drones_f\Weapons_F_Gamma\Ammoboxes\bags\UAV_backpack_F";
		displayName = "GEAR SG Full-Size Rucksack 01A";
		hiddenSelectionsTextures[] = {"\GEARS_SG\rucksack\lrrp\sg\data\largesize_SG_01_co.paa"};
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
	class gear_Tacticalpack_SG_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		hiddenSelectionsTextures[] = {"\GEARS_SG\rucksack\Tactical\sg\data\Tacticalpack_SG_01_co.paa"};
		displayName = "GEAR SG Tactical Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
		class gear_backbelt_SG_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_01_co.paa"};
		displayName = "GEAR SG Combat Belt 01A, BK";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_SG_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_02_co.paa"};
		displayName = "GEAR SG Combat Belt 01A, CB";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_SG_03: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_03_co.paa"};
		displayName = "GEAR SG Combat Belt 01A, OD";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_SG_04: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_04_co.paa"};
		displayName = "GEAR SG Combat Belt 01A, SG";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
			class gear_backbelt_SG_05: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_05_co.paa"};
		displayName = "GEAR SG Combat Belt 01A, TN";
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
	class gear_SG_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 01A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 01A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 01B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 01B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 01C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 01C, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 02A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 02A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 02B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 02B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 02C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 02C, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 03A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 03A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 03B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 03B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 03C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 03C, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 04A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 04A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 04B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 04B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 04C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 04C, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 05A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 05A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 05B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_27";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 05B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_28";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 05C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_29";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_kit30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 05C, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_SG_30";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

			class gear_SG_commandokit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 01A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 01A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 01B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 01B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 01C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 01C, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 02A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 02A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 02B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 02B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 02C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 02C, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 03A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 03A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 03B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 03B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 03C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 03C, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 04A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 04A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 04B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 04B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 04C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 04C, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 05A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 05A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 05B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_27";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 05B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_28";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 05C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_29";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_commandokit30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 05C, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_SG_30";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 01A, TN Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 01B, SG Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 01C, CB Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 01D, OD Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 01E, BK Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 02A, TN Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 02B, SG Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 02C, CB Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 02D, OD Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 02E, BK Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 03A, TN Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 03B, SG Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 03C, CB Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 03D, OD Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 03E, BK Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 04A, TN Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 04B, SG Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 04C, CB Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 04D, OD Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 04E, BK Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 05A, TN Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 05B, SG Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 05C, CB Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 05D, OD Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class garrison_SG_25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Garrison HQ Uniform 05E, BK Shirt";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_Garrison_SG_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 01A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 01B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 01C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 02A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 02B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 02C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 03A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 03B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 03C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 04A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 04B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 04C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 05A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 05B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghillieshirt15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Combat Uniform 05C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_SG_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

			class gear_SG_ghilliemando01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 01A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghilliemando02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 01B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghilliemando03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 01C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghilliemando04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 02A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghilliemando05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 02B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghilliemando06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 02C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghilliemando07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 03A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghilliemando08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 03B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghilliemando09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 03C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghilliemando10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 04A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghilliemando11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 04B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghilliemando12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 04C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghilliemando13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 05A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghilliemando14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 05B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_ghilliemando15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Commando Sweater 05C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_SG_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

		class CryeGhillie_SG_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 01A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_SG_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 01B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_SG_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 01C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeGhillie_SG_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 02A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_SG_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 02B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_SG_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 02C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeGhillie_SG_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 03A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_SG_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 03B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_SG_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 03C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeGhillie_SG_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 04A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_SG_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 04B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_SG_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 04C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeGhillie_SG_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 05A, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_SG_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 05B, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	    class CryeGhillie_SG_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 05C, Ghillie Suit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_SG_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

	        class gear_SG_crye01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 01A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 01A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 01B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 01B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 01C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 01C, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 02A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 02A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 02B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 02B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 02C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 02C, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 03A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 03A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 03B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 03B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye17: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 03C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye18: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 03C, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye19: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 04A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye20: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 04A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye21: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 04B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye22: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 04B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye23: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 04C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye24: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 04C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye25: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 05A, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye26: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 05A, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye27: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 05B, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_27";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye28: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 05B, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_28";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye29: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 05C, Sleeves Down";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_29";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class gear_SG_crye30: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 05C, Sleeves Up";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_SG_30";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

		        class CryeScuba_SG_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 01A, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_SG_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 01B, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_SG_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 01C, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_SG_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 02A, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_SG_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 02B, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_SG_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 02C, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_SG_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 03A, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_SG_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 03B, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_SG_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 03C, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_SG_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 04A, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_SG_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 04B, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_SG_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 04C, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_SG_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 05A, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_SG_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 05B, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
		class CryeScuba_SG_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "GEAR SG Crye Uniform 05C, Scuba Kit";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_BK.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_SG_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};

		class gear_SG_cryeS01: Uniform_Base
	{
		scope = 2;
        author = "KetsuCorp";
		displayName = "GEAR SG Crye Uniform U-Shirt 01A, TN";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_01";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS02: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 01A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_02";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS03: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 01A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_03";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS04: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 01A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_04";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS05: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 01A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_05";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS06: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 01B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_06";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS07: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 01B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_07";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS08: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 01B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_08";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS09: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 01B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_09";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS10: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 01B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_10";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS11: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 01C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_11";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS12: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 01C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_12";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS13: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 01C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_13";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS14: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 01C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_14";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS15: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 01C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_15";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS16: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_16";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS17: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_17";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS18: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_18";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS19: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_19";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS20: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_20";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS21: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_21";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS22: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_22";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS23: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_23";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS24: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_24";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS25: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_25";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS26: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS27: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_27";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS28: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_28";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS29: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_29";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS30: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 02C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_30";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS31: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_31";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS32: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_32";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS33: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_33";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS34: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_34";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS35: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_35";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS36: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_36";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS37: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_37";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS38: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_38";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS39: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_39";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS40: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_40";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS41: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_41";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS42: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_42";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS43: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_43";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS44: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_44";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS45: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 03C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_45";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS46: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_46";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS47: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_47";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS48: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_48";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS49: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_49";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS50: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_50";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS51: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_51";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS52: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_52";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS53: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_53";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS54: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_54";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS55: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_55";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS56: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_26";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS57: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_57";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS58: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_58";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS59: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_59";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS60: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 04C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_60";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS61: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_61";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS62: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_62";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS63: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_63";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS64: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_64";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS65: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_65";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS66: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_66";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS67: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_67";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS68: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_68";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS69: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_69";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS70: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_70";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS71: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05C, TN";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_71";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS72: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05C, SG";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_72";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS73: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05C, CB";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_73";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS74: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05C, OD";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_74";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_SG_cryeS75: gear_SG_cryeS01
	{
		displayName = "GEAR SG Crye Uniform U-Shirt 05C, BK";
        author = "KetsuCorp";
        picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_SG\clothing\common\data\suitpack_bk.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_SG_75";
			containerClass = "Supply500";
			mass = 1;
		armor = 0;
		};
	};
	class gear_infantry_SG_01: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		displayName = "GEAR SG Infantry Carrier 01A";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\infantry\sg\data\infantry_SG_01_co.paa"};
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
		class gear_infantry_SG_02: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		displayName = "GEAR SG Infantry Carrier 01B";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\infantry\sg\data\infantry_SG_01_co.paa"};
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
	class gear_platecarrier_SG_01: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR SG Plate Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_05_co.paa"};
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
		class gear_platecarrier_SG_02: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		displayName = "GEAR SG Plate Carrier 01B, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_05_co.paa"};
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
		class gear_platecarrier_SG_03: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		displayName = "GEAR SG Plate Carrier 02A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_05_co.paa"};
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
	class gear_platecarrier_SG_04: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR SG Plate Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_04_co.paa"};
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
		class gear_platecarrier_SG_05: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		displayName = "GEAR SG Plate Carrier 01B, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_04_co.paa"};
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
		class gear_platecarrier_SG_06: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		displayName = "GEAR SG Plate Carrier 02A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_04_co.paa"};
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
		class gear_platecarrier_SG_07: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR SG Plate Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_02_co.paa"};
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
		class gear_platecarrier_SG_08: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		displayName = "GEAR SG Plate Carrier 01B, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_02_co.paa"};
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
		class gear_platecarrier_SG_09: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		displayName = "GEAR SG Plate Carrier 02A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_02_co.paa"};
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
		class gear_platecarrier_SG_10: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR SG Plate Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_03_co.paa"};
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
		class gear_platecarrier_SG_11: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		displayName = "GEAR SG Plate Carrier 01B, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_03_co.paa"};
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
	
		class gear_platecarrier_SG_12: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		displayName = "GEAR SG Plate Carrier 02A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_03_co.paa"};
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
		class gear_platecarrier_SG_13: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "GEAR SG Plate Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_01_co.paa"};
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
		class gear_platecarrier_SG_14: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		displayName = "GEAR SG Plate Carrier 01B, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_01_co.paa"};
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
		class gear_platecarrier_SG_15: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		displayName = "GEAR SG Plate Carrier 02A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_01_co.paa"};
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
		class gear_vestbelt_SG_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR SG Combat Belt 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_05_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_SG_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR SG Pouch-Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_05_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
	};
  };
  		class gear_vestbelt_SG_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR SG Combat Belt 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_04_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_SG_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR SG Pouch-Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_04_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
	};
  };
        class gear_vestbelt_SG_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR SG Combat Belt 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_02_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_SG_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR SG Pouch-Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_02_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
	};
  };
        class gear_vestbelt_SG_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR SG Combat Belt 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_03_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_SG_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR SG Pouch-Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_03_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
	};
  };
         class gear_vestbelt_SG_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "GEAR SG Combat Belt 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_01_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_SG_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "GEAR SG Pouch-Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\platecarrier\sg\data\platecarrier_SG_01_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
	};
  };
	class gear_tacvest_SG_01: V_TacVestCamo_khk
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		displayName = "GEAR SG Webbed Tac-Vest 01A";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\armor\tacvest\sg\data\tacvest_SG_01_co.paa"};
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
		class gear_balaclavaH_SG_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Issue Balaclava, 01A";
		picture = "\GEARS_CORE\ui\SG_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_05";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\SG\data\balaclava_SG_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_BalaclavaH_SG_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_balaclava_core_05";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
	    };
   };
   	class gear_balaclavaH_SG_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Issue Balaclava, 01B";
		picture = "\GEARS_CORE\ui\SG_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_10";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\SG\data\balaclava_SG_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_BalaclavaH_SG_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_balaclava_core_10";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
	    };
   };
	class gear_ballcap_SG_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Headwear, Cap 02";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\common\capb.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GEARS_SG\headwear\ballcap\sg\data\ballcap_SG_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_SG_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ballcap_SG_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Headwear, Cap 01";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "A3\Characters_F_EPB\common\capb_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GEARS_SG\headwear\ballcap\sg\data\ballcap_SG_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_SG_02";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\common\capb_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_Bandana_SG_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Headwear, Bandana 01";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\headwear\bandana\sg\data\bandana_SG_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_SG_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Bandana_SG_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Headwear, Bandana 02";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\headwear\bandana\sg\data\bandana_SG_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_SG_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_beanie_sg_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Headwear, Beanie Hat 01";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Civil\headgear_beaniehat01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\headwear\beanie\sg\data\beanie_SG_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_beanie_sg_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
    class gear_beanie_SG_core: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Headwear, Beanie Hat 02";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\GEARS_SG\headwear\common\gear_beanie_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\headwear\beanie\sg\data\beanie_SG_01_co.paa"};
		hiddenSelectionMaterials[] = {"\a3\characters_f\common\data\woolhat.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_beanie_sg_02";		
		    mass = 1;
			uniformModel = "\GEARS_SG\headwear\common\gear_beanie_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };

	class gear_Boonie_SG_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Headwear, Boonie 01";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\headwear\boonie\sg\data\Boonie_SG_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_SG_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Boonie_SG_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Headwear, Boonie 02";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\headwear\boonie\sg\data\Boonie_SG_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_SG_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};

	class gear_capcom_SG_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Headwear, ComTac II Cap 01";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\headwear\capcom\sg\data\capcom_SG_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_SG_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_capcom_SG_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Headwear, ComTac II Cap 02";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\headwear\capcom\sg\data\capcom_SG_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_SG_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   };
	class gear_capcom_SG_03: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Headwear, ComTac II Cap 03";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\headwear\capcom\sg\data\capcom_SG_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_SG_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
	};
	class gear_cover_SG_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Headwear, Cover 01";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\GEARS_SG\headwear\common\cover.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\headwear\cover\sg\data\cover_SG_01_co.paa"};
        hiddenSelectionsMaterials[] = {"\GEARS_SG\headwear\ca\us_officer_equip.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_cover_SG_01";		
		    mass = 1;
			uniformModel = "\GEARS_SG\headwear\common\cover.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_patrolcap_sg_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Headwear, Patrol Cap 01";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\headwear\patrolcap\sg\data\patrolcap_SG_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_sg_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   class gear_patrolcap_sg_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Headwear, Patrol Cap 02";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\headwear\patrolcap\sg\data\patrolcap_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_F\Common\Data\cappatrol.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_sg_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ach_sg_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG MICH 2000 / ACH, 01A";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ACH\core\data\ACH_SG_01_co.paa","\GEARS_CORE\helmets\ACH\core\data\ACH_SG_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_sg_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
			armor = 0.5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
	class gear_ach_sg_02: gear_ach_sg_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG MICH 2000 / ACH, 01B";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_CORE\helmets\ACH\core\data\ACH_SG_03_co.paa","\GEARS_CORE\helmets\ACH\core\data\ACH_SG_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\ach2.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_sg_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
			armor = 0.5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
 
	class gear_ECH_SG_01: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2001, 01A BK";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ECH_SG_02: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2001, 01A CB";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_ECH_SG_03: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2001, 01A OD";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
      	class gear_ECH_SG_04: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2001, 01A SG";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_04";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_SG_05: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2001, 01A TN";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_05";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_SG_21: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2001, 01B BK";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_12_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_21";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_SG\headwear\common\equipx1.rvmat"};
	    };
   };   
	class gear_ECH_SG_22: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2001, 01B CB";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_13_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_22";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_SG\headwear\common\equipx1.rvmat"};
	    };
   };
   	class gear_ECH_SG_23: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2001, 01B OD";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_14_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_23";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_SG\headwear\common\equipx1.rvmat"};	
	    };
   };
      	class gear_ECH_SG_24: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2001, 01B SG";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_15_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_24";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_SG\headwear\common\equipx1.rvmat"};
	    };
   };   
         	class gear_ECH_SG_25: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2001, 01B TN";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_16_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_SG\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_25";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_SG\headwear\common\equipx1.rvmat"};
	    };
   };   
       	class gear_ECH_SG_06: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01B BK";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_06";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_SG_07: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01B CB";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_07";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_SG_08: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01B OD";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_08";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_SG_09: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01B SG";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_09";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_SG_10: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01B TN";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_10";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_SG_11: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01A BK";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_06_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_11";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_SG_12: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01A CB";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_07_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_12";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_SG_13: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01A OD";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_08_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_13";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_SG_14: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01A SG";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_09_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_14";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_SG_15: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01A TN";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_10_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_15";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_SG_16: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01C BK";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_01_co.paa","\GEARS_SG\helmets\ECH\sg\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_16";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_SG_17: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01C CB";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_02_co.paa","\GEARS_SG\helmets\ECH\sg\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_17";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_SG_18: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01C OD";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_03_co.paa","\GEARS_SG\helmets\ECH\sg\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_18";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_SG_19: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01C SG";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_04_co.paa","\GEARS_SG\helmets\ECH\sg\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_19";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };  
      	class gear_ECH_SG_20: gear_ECH_SG_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Ops-Core MICH 2000, 01C TN";
		picture = "\GEARS_SG\ui\SG_UI.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\ECH\sg\data\ECH_SG_05_co.paa","\GEARS_SG\helmets\ECH\sg\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ech_SG_20";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	   };
   };   
   	class gear_pth_CORE_03: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "GEAR SG Pro-Tec Helmet, 01A";
		picture = "\GEARS_SG\ui\SG_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_protec_CORE_03";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_SG\helmets\PTH\SG\data\PTH_SG_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\pp.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_pth_CORE_03";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_protec_CORE_03";
			armor = 0.5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo"};
	    };
   };
};
   class CfgGlasses
{
	class None;

	class gear_balaclava_sg_01: None
	{
		scope = 2;
		author = "KetsuCorp";
		displayname = "GEAR SG Issue Balaclava, 01A";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\sg\data\balaclava_SG_01_co.paa"};
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_05";
		picture = "\GEARS_CORE\ui\SG_ui.paa";
        identityTypes[] = {"NoGlasses",1000};
   };
	class gear_balaclava_sg_10: None
	{
		scope = 2;
		author = "KetsuCorp";
		displayname = "GEAR SG Issue Balaclava, 01B";
		hiddenSelectionsTextures[] = {"\GEARS_CORE\eyewear\balaclava\sg\data\balaclava_SG_01_co.paa"};
		model = "\GEARS_CORE\headwear\common\gear_balaclava_core_10";
		picture = "\GEARS_CORE\ui\SG_ui.paa";
        identityTypes[] = {"NoGlasses",1000};
		};
	};	