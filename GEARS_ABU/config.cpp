class CfgPatches
{
	 class GEARS_ABU
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};
class CfgVehicleClasses
{
	class GEARS_ABU_C
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
	class gear_B_Soldier_ABU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
	};
	class gear_B_Soldier_ABU_02: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
	};
	class gear_B_Soldier_ABU_03: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_02_co.paa"};
	};
	class gear_B_Soldier_ABU_04: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_02_co.paa"};
	};
	class gear_B_Soldier_ABU_05: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_03_co.paa"};
	};
	class gear_B_Soldier_ABU_06: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_03_co.paa"};
	};
	class gear_B_Soldier_ABU_07: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_04_co.paa"};
	};
	class gear_B_Soldier_ABU_08: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_04_co.paa"};
	};
	class gear_B_Soldier_ABU_09: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_05_co.paa"};
	};
	class gear_B_Soldier_ABU_10: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_05_co.paa"};
	};
	class gear_B_Soldier_ABU_11: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_06_co.paa"};
	};
	class gear_B_Soldier_ABU_12: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_06_co.paa"};
	};
	class gear_B_Soldier_ABU_13: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_07_co.paa"};
	};
	class gear_B_Soldier_ABU_14: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_07_co.paa"};
	};
	class gear_B_Soldier_ABU_15: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_08_co.paa"};
	};
	class gear_B_Soldier_ABU_16: gear_B_Soldier_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "gear_ABU_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_08_co.paa"};
	};
class gear_B_Commando_ABU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};		
	};
	class gear_B_Commando_ABU_02: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ABU_03: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ABU_04: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ABU_05: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ABU_06: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ABU_07: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ABU_08: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ABU_09: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ABU_10: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ABU_11: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ABU_12: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ABU_13: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ABU_14: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ABU_15: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ABU_16: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "commando_ABU_16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_Garrison_ABU_01: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 01A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_01";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_01_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ABU_02: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 01B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_02";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_02_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ABU_03: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 01C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_03";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_03_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ABU_04: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 01D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_04";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_04_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ABU_05: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 02A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_05";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_05_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ABU_06: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 02B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_06";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_06_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ABU_07: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 02C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_07";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_07_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ABU_08: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 02D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_08";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_08_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ABU_09: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 03A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_09";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_09_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ABU_10: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 03B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_10";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_10_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_ABU_11: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 03C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_11";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_11_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ABU_12: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 03D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_12";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_12_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ABU_13: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 04A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_13";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_13_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ABU_14: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 04B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_14";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_14_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ABU_15: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 04C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_15";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_15_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_ABU_16: gear_B_Commando_ABU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Garrison HQ Uniform 04D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "garrison_ABU_16";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\garrison\ABU\data\garrison_ABU_16_co.paa","\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
			class gear_B_GhillieShirt_ABU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghillieshirt_ABU_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_ABU_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghillieshirt_ABU_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_ABU_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghillieshirt_ABU_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_ABU_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghillieshirt_ABU_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_ABU_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghillieshirt_ABU_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_05_co.paa"};
	};
		class gear_B_GhillieShirt_ABU_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghillieshirt_ABU_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_06_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_ABU_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghillieshirt_ABU_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_07_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_ABU_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Combat Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghillieshirt_ABU_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\combatshirt\ABU\data\combatshirt_ABU_08_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
			class gear_B_GhillieMando_ABU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghilliemando_ABU_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_ABU_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghilliemando_ABU_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_ABU_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghilliemando_ABU_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_ABU_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghilliemando_ABU_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_ABU_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghilliemando_ABU_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_ABU_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghilliemando_ABU_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_ABU_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghilliemando_ABU_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_ABU_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Commando Sweater 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "ghilliemando_ABU_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\commando\ABU\data\commando_ABU_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_Crye_ABU_01: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_01_co.paa"};
	};
		class gear_B_Crye_ABU_02: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_01_co.paa"};
	};
		class gear_B_Crye_ABU_03: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_02_co.paa"};
	};
		class gear_B_Crye_ABU_04: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_02_co.paa"};
	};
	    class gear_B_Crye_ABU_05: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_03_co.paa"};
	};
		class gear_B_Crye_ABU_06: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_03_co.paa"};
	};
		class gear_B_Crye_ABU_07: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_04_co.paa"};
	};
		class gear_B_Crye_ABU_08: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_04_co.paa"};
	};
		class gear_B_Crye_ABU_09: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_05_co.paa"};
	};
		class gear_B_Crye_ABU_10: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_05_co.paa"};
	};
		class gear_B_Crye_ABU_11: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_06_co.paa"};
	};
		class gear_B_Crye_ABU_12: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_06_co.paa"};
	};
		class gear_B_Crye_ABU_13: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_07_co.paa"};
	};
		class gear_B_Crye_ABU_14: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_07_co.paa"};
	};
		class gear_B_Crye_ABU_15: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_08_co.paa"};
	};
		class gear_B_Crye_ABU_16: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "Crye_ABU_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_08_co.paa"};
	};
			class gear_B_CryeGhillie_ABU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeGhillie_ABU_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_01_co.paa"}; 
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_ABU_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeGhillie_ABU_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_02_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_ABU_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeGhillie_ABU_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_03_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_ABU_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeGhillie_ABU_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_04_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_ABU_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeGhillie_ABU_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_05_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_ABU_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeGhillie_ABU_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_06_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_ABU_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeGhillie_ABU_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_07_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_ABU_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeGhillie_ABU_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_08_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
			class gear_B_CryeS_ABU_01: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 01A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_01";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_01_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ABU_02: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 01A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_02";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_01_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ABU_03: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 01A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_03";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_01_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ABU_04: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 01A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_04";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_01_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ABU_05: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 01A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_05";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_01_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_ABU_06: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 01B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_06";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_02_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ABU_07: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 01B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_07";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_02_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ABU_08: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 01B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_08";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_02_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ABU_09: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 01B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_09";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_02_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ABU_10: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 01B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_10";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_02_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_ABU_11: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 02A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_11";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_03_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ABU_12: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 02A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_12";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_03_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ABU_13: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 02A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_13";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_03_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ABU_14: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 02A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_14";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_03_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ABU_15: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 02A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_15";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_03_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_ABU_16: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 02B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_16";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_04_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ABU_17: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 02B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_17";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_04_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ABU_18: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 02B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_18";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_04_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ABU_19: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 02B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_19";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_04_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ABU_20: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 02B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_20";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_04_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_ABU_21: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 03A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_21";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_05_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ABU_22: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 03A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_22";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_05_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ABU_23: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 03A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_23";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_05_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ABU_24: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 03A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_24";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_05_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ABU_25: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 03A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_25";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_05_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_ABU_26: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 03B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_26";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_06_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ABU_27: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 03B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_27";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_06_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ABU_28: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 03B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_28";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_06_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ABU_29: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 03B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_29";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_06_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ABU_30: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 03B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_30";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_06_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_ABU_31: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 04A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_31";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_07_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ABU_32: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 04A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_32";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_07_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ABU_33: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 04A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_33";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_07_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ABU_34: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 04A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_34";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_07_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ABU_35: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 04A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_35";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_07_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_ABU_36: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 04B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_36";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_08_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ABU_37: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 04B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_37";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_08_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ABU_38: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 04B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_38";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_08_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ABU_39: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 04B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_39";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_08_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ABU_40: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform U-Shirt 04B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "cryeS_ABU_40";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_08_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
				class gear_B_CryeScuba_ABU_01: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 01A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeScuba_ABU_01";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_01_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_ABU_02: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 01B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeScuba_ABU_02";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_02_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_ABU_03: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 02A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeScuba_ABU_03";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_03_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_ABU_04: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 02B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeScuba_ABU_04";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_04_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_ABU_05: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 03A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeScuba_ABU_05";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_05_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_ABU_06: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 03B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeScuba_ABU_06";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_06_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_ABU_07: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 04A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeScuba_ABU_07";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_07_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_ABU_08: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ABU Crye Uniform 04B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ABU_C";
		uniformClass = "CryeScuba_ABU_08";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\crye\ABU\data\crye_ABU_08_co.paa","\GEARS_ABU\clothing\cryeshirts\ABU\data\basicbody_bk.paa"};
	};
		class gear_assaultpack_ABU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\rucksack\assault\ABU\data\assaultpack_ABU_01_co.paa"};
		displayName = "U.S. ABU CQB Kit Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_assaultpack_ABU_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\rucksack\assault\ABU\data\assaultpack_ABU_02_co.paa","\GEARS_ABU\rucksack\assault\ABU\data\assaultpack_ABU_01_co.paa","\GEARS_ABU\rucksack\assault\ABU\data\assaultpack_ABU_02_co.paa"};
		displayName = "U.S. ABU CQB Kit Rucksack 01B";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_Carryall_ABU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\rucksack\carryall\ABU\data\carryall_ABU_01_co.paa"};
		displayName = "U.S. ABU Infantry Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_FastPack_ABU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\rucksack\fast\ABU\data\FastPack_ABU_01_co.paa"};
		displayName = "U.S. ABU F.A.S.T. Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_FieldPack_ABU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\rucksack\field\ABU\data\FieldPack_ABU_01_co.paa"};
		displayName = "U.S. ABU Camping Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_Tacticalpack_ABU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\rucksack\Tactical\ABU\data\Tacticalpack_ABU_01_co.paa"};
		displayName = "U.S. ABU Tactical Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_largesize_ABU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\drones_f\Weapons_F_Gamma\Ammoboxes\bags\UAV_backpack_F";
		displayName = "U.S. ABU Full-Size Rucksack 01A";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\rucksack\lrrp\ABU\data\largesize_ABU_01_co.paa"};
	    containerclass = "Supply500";
		mass = 1;
	};
					class gear_backbelt_ABU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_01_co.paa"};
		displayName = "U.S. ABU Combat Belt 01A, BK";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_backbelt_ABU_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_02_co.paa"};
		displayName = "U.S. ABU Combat Belt 01A, CB";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_backbelt_ABU_03: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_03_co.paa"};
		displayName = "U.S. ABU Combat Belt 01A, OD";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_backbelt_ABU_04: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_04_co.paa"};
		displayName = "U.S. ABU Combat Belt 01A, SG";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_backbelt_ABU_05: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_05_co.paa"};
		displayName = "U.S. ABU Combat Belt 01A, TN";
	    containerclass = "Supply500";
		mass = 1;
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
	class gear_ABU_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 01A, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_01";
			containerclass = "Supply500";
			mass = 1;
		};
	};
		class gear_ABU_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 01A, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ABU_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 01B, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ABU_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 01B, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ABU_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 02A, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_05";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ABU_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 02A, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_06";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ABU_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 02B, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_07";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ABU_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 02B, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_08";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ABU_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 03A, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_09";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ABU_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 03A, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_10";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ABU_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 03B, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_11";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ABU_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 03B, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_12";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ABU_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 04A, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_13";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ABU_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 04A, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_14";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ABU_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 04B, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_15";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ABU_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 04B, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ABU_16";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 01A, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_01";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 01A, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 01B, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 01B, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 02A, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_05";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 02A, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_06";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 02B, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_07";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 02B, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_08";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 03A, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_09";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 03A, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_10";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 03B, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_11";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 03B, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_12";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 04A, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_13";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 04A, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_14";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 04B, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_15";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ABU_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 04B, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ABU_16";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
			class garrison_ABU_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 01A, TN Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_01";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 01B, SG Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 01C, CB Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 01D, OD Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 02A, TN Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_05";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 02B, SG Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_06";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 02C, CB Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_07";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 02D, OD Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_08";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 03A, TN Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_09";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 03B, SG Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_10";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 03C, CB Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_11";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 03D, OD Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_12";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 04A, TN Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_13";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 04B, SG Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_14";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 04C, CB Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_15";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ABU_16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Garrison HQ Uniform 04D, OD Shirt";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ABU_16";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
			class ghillieshirt_ABU_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 01A, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ABU_01";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_ABU_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 01B, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ABU_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_ABU_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 02A, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ABU_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_ABU_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 02B, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ABU_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_ABU_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 03A, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ABU_05";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_ABU_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 03B, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ABU_06";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_ABU_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 04A, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ABU_07";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_ABU_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Combat Uniform 04B, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ABU_08";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
			class ghilliemando_ABU_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 01A, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ABU_01";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghilliemando_ABU_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 01B, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ABU_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghilliemando_ABU_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 02A, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ABU_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghilliemando_ABU_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 02B, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ABU_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghilliemando_ABU_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 03A, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ABU_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_ABU_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 03B, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ABU_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_ABU_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 04A, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ABU_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_ABU_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Commando Sweater 04B, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ABU_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ballcap_ABU_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Headwear, Cap 01";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\common\capb.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\headwear\ballcap\ABU\data\ballcap_ABU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_ABU_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ballcap_ABU_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Headwear, Cap 02";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "A3\Characters_F_EPB\common\capb_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\headwear\ballcap\ABU\data\ballcap_ABU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_ABU_02";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\common\capb_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_Bandana_ABU_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Headwear, Bandana 01";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\headwear\bandana\ABU\data\bandana_ABU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_ABU_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Bandana_ABU_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Headwear, Bandana 02";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\headwear\bandana\ABU\data\bandana_ABU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_ABU_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_Boonie_ABU_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Headwear, Boonie 01";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\headwear\boonie\ABU\data\Boonie_ABU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_ABU_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Boonie_ABU_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Headwear, Boonie 02";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\headwear\boonie\ABU\data\Boonie_ABU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_ABU_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_capcom_ABU_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Headwear, ComTac II Cap 01";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\headwear\capcom\ABU\data\capcom_ABU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_ABU_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_capcom_ABU_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Headwear, ComTac II Cap 02";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\headwear\capcom\ABU\data\capcom_ABU_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_ABU_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
   };
	class gear_capcom_ABU_03: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Headwear, ComTac II Cap 03";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\headwear\capcom\ABU\data\capcom_ABU_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_ABU_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_ABU_crye01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 01A, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_01";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ABU_crye02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 01A, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_02";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ABU_crye03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 01B, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_03";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ABU_crye04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 01B, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_04";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class gear_ABU_crye05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 02A, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ABU_crye06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 02A, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ABU_crye07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 02B, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ABU_crye08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 02B, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class gear_ABU_crye09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 03A, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_09";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ABU_crye10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 03A, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_10";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ABU_crye11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 03B, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_11";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ABU_crye12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 03B, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_12";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class gear_ABU_crye13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 04A, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_13";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ABU_crye14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 04A, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_14";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ABU_crye15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 04B, Sleeves Down";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_15";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ABU_crye16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 04B, Sleeves Up";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ABU_16";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class CryeGhillie_ABU_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 01A, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ABU_01";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_ABU_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 01B, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ABU_02";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_ABU_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 02A, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ABU_03";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeGhillie_ABU_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 02B, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ABU_04";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_ABU_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 03A, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ABU_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_ABU_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 03B, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ABU_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeGhillie_ABU_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 04A, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ABU_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_ABU_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 04B, Ghillie Suit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ABU_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class gear_ABU_cryeS01: Uniform_Base
	{
		scope = 2;
        author = "KetsuCorp";
		displayName = "U.S. ABU Crye Uniform U-Shirt 01A, TN";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_01";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS02: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 01A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_02";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS03: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 01A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_03";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS04: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 01A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_04";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS05: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 01A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS06: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 01B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS07: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 01B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS08: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 01B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS09: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 01B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_09";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS10: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 01B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_10";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS11: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 02A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_11";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS12: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 02A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_12";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS13: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 02A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_13";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS14: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 02A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_14";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS15: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 02A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_15";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS16: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 02B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_16";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS17: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 02B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_17";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS18: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 02B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_18";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS19: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 02B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_19";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS20: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 02B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_20";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS21: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 03A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_21";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS22: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 03A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_22";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS23: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 03A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_23";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS24: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 03A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_24";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS25: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 03A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_25";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS26: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 03B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_26";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS27: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 03B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_27";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS28: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 03B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_28";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS29: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 03B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_29";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS30: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 03B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_30";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS31: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 04A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_31";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS32: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 04A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_32";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS33: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 04A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_33";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS34: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 04A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_34";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS35: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 04A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_35";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS36: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 04B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_36";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS37: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 04B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_37";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS38: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 04B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_38";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS39: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 04B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_39";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ABU_cryeS40: gear_ABU_cryeS01
	{
		displayName = "U.S. ABU Crye Uniform U-Shirt 04B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ABU_40";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeScuba_ABU_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 01A, Scuba Kit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ABU_01";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_ABU_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 01B, Scuba Kit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ABU_02";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_ABU_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 02A, Scuba Kit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ABU_03";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_ABU_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 02B, Scuba Kit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ABU_04";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_ABU_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 03A, Scuba Kit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ABU_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_ABU_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 03B, Scuba Kit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ABU_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_ABU_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 04A, Scuba Kit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ABU_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_ABU_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ABU Crye Uniform 04B, Scuba Kit";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ABU\clothing\common\data\suitpack_ABU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ABU_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_platecarrier_ABU_01: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. ABU Plate Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_05_co.paa"};
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
		class gear_platecarrier_ABU_02: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		displayName = "U.S. ABU Plate Carrier 01B, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_05_co.paa"};
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
		class gear_platecarrier_ABU_03: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		displayName = "U.S. ABU Plate Carrier 02A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_05_co.paa"};
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
	class gear_platecarrier_ABU_04: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. ABU Plate Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_04_co.paa"};
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
		class gear_platecarrier_ABU_05: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		displayName = "U.S. ABU Plate Carrier 01B, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_04_co.paa"};
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
		class gear_platecarrier_ABU_06: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		displayName = "U.S. ABU Plate Carrier 02A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_04_co.paa"};
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
		class gear_platecarrier_ABU_07: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. ABU Plate Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_02_co.paa"};
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
		class gear_platecarrier_ABU_08: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		displayName = "U.S. ABU Plate Carrier 01B, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_02_co.paa"};
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
		class gear_platecarrier_ABU_09: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		displayName = "U.S. ABU Plate Carrier 02A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_02_co.paa"};
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
		class gear_platecarrier_ABU_10: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. ABU Plate Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_03_co.paa"};
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
		class gear_platecarrier_ABU_11: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		displayName = "U.S. ABU Plate Carrier 01B, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_03_co.paa"};
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
	
		class gear_platecarrier_ABU_12: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		displayName = "U.S. ABU Plate Carrier 02A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_03_co.paa"};
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
		class gear_platecarrier_ABU_13: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. ABU Plate Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_01_co.paa"};
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
		class gear_platecarrier_ABU_14: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		displayName = "U.S. ABU Plate Carrier 01B, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_01_co.paa"};
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
		class gear_platecarrier_ABU_15: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		displayName = "U.S. ABU Plate Carrier 02A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_01_co.paa"};
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
		class gear_vestbelt_ABU_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. ABU Combat Belt 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_05_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_ABU_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. ABU Pouch-Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_05_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
  		class gear_vestbelt_ABU_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. ABU Combat Belt 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_04_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_ABU_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. ABU Pouch-Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_04_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
        class gear_vestbelt_ABU_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. ABU Combat Belt 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_02_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_ABU_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. ABU Pouch-Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_02_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
        class gear_vestbelt_ABU_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. ABU Combat Belt 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_03_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_ABU_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. ABU Pouch-Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_03_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
         class gear_vestbelt_ABU_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. ABU Combat Belt 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_01_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_ABU_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. ABU Pouch-Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\platecarrier\ABU\data\platecarrier_ABU_01_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
  	class gear_infantry_ABU_01: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		displayName = "U.S. ABU Infantry Carrier 01A";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\infantry\ABU\data\infantry_ABU_01_co.paa"};
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
		class gear_infantry_ABU_02: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		displayName = "U.S. ABU Infantry Carrier 01B";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\infantry\ABU\data\infantry_ABU_01_co.paa"};
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
		class gear_tacvest_ABU_01: V_TacVestCamo_khk
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		displayName = "U.S. ABU Webbed Tac-Vest 01A";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\armor\tacvest\ABU\data\tacvest_ABU_01_co.paa"};
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
	     class gear_ECH_ABU_01: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2001, 01B BK";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
	class gear_ECH_ABU_02: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2001, 01B CB";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };
   	class gear_ECH_ABU_03: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2001, 01B OD";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};	
	    };
   };
      	class gear_ECH_ABU_04: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2001, 01B SG";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_04";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         	class gear_ECH_ABU_05: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2001, 01B TN";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_05";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         class gear_ECH_ABU_06: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01B BK";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_06";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_ABU_07: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01B CB";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_07";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_ABU_08: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01B OD";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_08";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_ABU_09: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01B SG";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_09";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_ABU_10: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01B TN";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_10";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_ABU_11: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01A BK";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_11";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_ABU_12: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01A CB";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_12";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_ABU_13: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01A OD";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_13";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_ABU_14: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01A SG";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_14";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_ABU_15: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01A TN";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_15";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_ABU_16: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01C BK";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_01_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_16";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_ABU_17: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01C CB";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_02_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_17";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_ABU_18: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01C OD";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_03_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_18";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_ABU_19: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01C SG";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_04_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_19";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };  
      	class gear_ECH_ABU_20: gear_ECH_ABU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Ops-Core MICH 2000, 01C TN";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ECH\ABU\data\ECH_ABU_05_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ABU_20";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	   };
   };   
   	class gear_patrolcap_ABU_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Headwear, Patrol Cap 01";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\headwear\patrolcap\ABU\data\patrolcap_ABU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_ABU_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   
   class gear_patrolcap_ABU_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Headwear, Patrol Cap 02";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\headwear\patrolcap\ABU\data\patrolcap_ABU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_F\Common\Data\cappatrol.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_ABU_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_cover_ABU_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU Headwear, Cover 01";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\GEARS_CORE\headwear\common\cover.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\headwear\cover\ABU\data\cover_ABU_01_co.paa"};
        hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\us_officer_equip.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_cover_ABU_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\cover.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_ach_ABU_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ABU MICH 2000 / ACH, 01A";
		picture = "\GEARS_ABU\ui\ABU_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_ABU\helmets\ACH\ABU\data\ACH_ABU_01_co.paa","\GEARS_ABU\helmets\ACH\ABU\data\ACH_ABU_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_ABU_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
			armor = 0.5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
};	