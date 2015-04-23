class CfgPatches
{
	 class GEARS_ACU
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};
class CfgVehicleClasses
{
	class GEARS_ACU_C
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
	class gear_B_Soldier_ACU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
	};
	class gear_B_Soldier_ACU_02: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
	};
	class gear_B_Soldier_ACU_03: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_02_co.paa"};
	};
	class gear_B_Soldier_ACU_04: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_02_co.paa"};
	};
	class gear_B_Soldier_ACU_05: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_03_co.paa"};
	};
	class gear_B_Soldier_ACU_06: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_03_co.paa"};
	};
	class gear_B_Soldier_ACU_07: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_04_co.paa"};
	};
	class gear_B_Soldier_ACU_08: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_04_co.paa"};
	};
	class gear_B_Soldier_ACU_09: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_05_co.paa"};
	};
	class gear_B_Soldier_ACU_10: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_05_co.paa"};
	};
	class gear_B_Soldier_ACU_11: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_06_co.paa"};
	};
	class gear_B_Soldier_ACU_12: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_06_co.paa"};
	};
	class gear_B_Soldier_ACU_13: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_07_co.paa"};
	};
	class gear_B_Soldier_ACU_14: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_07_co.paa"};
	};
	class gear_B_Soldier_ACU_15: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_08_co.paa"};
	};
	class gear_B_Soldier_ACU_16: gear_B_Soldier_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "gear_ACU_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_08_co.paa"};
	};
class gear_B_Commando_ACU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};		
	};
	class gear_B_Commando_ACU_02: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ACU_03: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ACU_04: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ACU_05: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ACU_06: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ACU_07: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ACU_08: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ACU_09: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ACU_10: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ACU_11: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ACU_12: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ACU_13: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ACU_14: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ACU_15: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_ACU_16: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "commando_ACU_16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_Garrison_ACU_01: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 01A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_01";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_01_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ACU_02: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 01B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_02";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_02_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ACU_03: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 01C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_03";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_03_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ACU_04: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 01D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_04";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_04_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ACU_05: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 02A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_05";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_05_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ACU_06: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 02B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_06";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_06_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ACU_07: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 02C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_07";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_07_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ACU_08: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 02D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_08";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_08_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ACU_09: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 03A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_09";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_09_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ACU_10: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 03B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_10";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_10_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_ACU_11: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 03C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_11";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_11_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ACU_12: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 03D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_12";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_12_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ACU_13: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 04A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_13";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_13_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ACU_14: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 04B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_14";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_14_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_ACU_15: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 04C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_15";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_15_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_ACU_16: gear_B_Commando_ACU_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Garrison HQ Uniform 04D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "garrison_ACU_16";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\garrison\ACU\data\garrison_ACU_16_co.paa","\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
			class gear_B_GhillieShirt_ACU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghillieshirt_ACU_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_ACU_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghillieshirt_ACU_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_ACU_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghillieshirt_ACU_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_ACU_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghillieshirt_ACU_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_ACU_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghillieshirt_ACU_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_05_co.paa"};
	};
		class gear_B_GhillieShirt_ACU_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghillieshirt_ACU_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_06_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_ACU_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghillieshirt_ACU_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_07_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_ACU_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Combat Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghillieshirt_ACU_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\combatshirt\ACU\data\combatshirt_ACU_08_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
			class gear_B_GhillieMando_ACU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghilliemando_ACU_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_ACU_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghilliemando_ACU_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_ACU_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghilliemando_ACU_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_ACU_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghilliemando_ACU_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_ACU_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghilliemando_ACU_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_ACU_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghilliemando_ACU_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_ACU_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghilliemando_ACU_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_ACU_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Commando Sweater 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "ghilliemando_ACU_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\commando\ACU\data\commando_ACU_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_Crye_ACU_01: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_01_co.paa"};
	};
		class gear_B_Crye_ACU_02: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_01_co.paa"};
	};
		class gear_B_Crye_ACU_03: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_02_co.paa"};
	};
		class gear_B_Crye_ACU_04: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_02_co.paa"};
	};
	    class gear_B_Crye_ACU_05: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_03_co.paa"};
	};
		class gear_B_Crye_ACU_06: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_03_co.paa"};
	};
		class gear_B_Crye_ACU_07: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_04_co.paa"};
	};
		class gear_B_Crye_ACU_08: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_04_co.paa"};
	};
		class gear_B_Crye_ACU_09: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_05_co.paa"};
	};
		class gear_B_Crye_ACU_10: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_05_co.paa"};
	};
		class gear_B_Crye_ACU_11: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_06_co.paa"};
	};
		class gear_B_Crye_ACU_12: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_06_co.paa"};
	};
		class gear_B_Crye_ACU_13: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_07_co.paa"};
	};
		class gear_B_Crye_ACU_14: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_07_co.paa"};
	};
		class gear_B_Crye_ACU_15: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_08_co.paa"};
	};
		class gear_B_Crye_ACU_16: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "Crye_ACU_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_08_co.paa"};
	};
			class gear_B_CryeGhillie_ACU_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeGhillie_ACU_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_01_co.paa"}; 
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_ACU_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeGhillie_ACU_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_02_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_ACU_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeGhillie_ACU_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_03_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_ACU_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeGhillie_ACU_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_04_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_ACU_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeGhillie_ACU_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_05_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_ACU_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeGhillie_ACU_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_06_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_ACU_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeGhillie_ACU_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_07_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_ACU_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeGhillie_ACU_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_08_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
			class gear_B_CryeS_ACU_01: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 01A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_01";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_01_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ACU_02: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 01A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_02";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_01_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ACU_03: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 01A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_03";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_01_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ACU_04: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 01A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_04";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_01_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ACU_05: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 01A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_05";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_01_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_ACU_06: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 01B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_06";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_02_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ACU_07: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 01B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_07";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_02_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ACU_08: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 01B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_08";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_02_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ACU_09: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 01B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_09";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_02_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ACU_10: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 01B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_10";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_02_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_ACU_11: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 02A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_11";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_03_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ACU_12: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 02A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_12";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_03_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ACU_13: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 02A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_13";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_03_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ACU_14: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 02A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_14";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_03_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ACU_15: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 02A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_15";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_03_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_ACU_16: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 02B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_16";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_04_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ACU_17: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 02B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_17";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_04_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ACU_18: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 02B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_18";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_04_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ACU_19: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 02B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_19";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_04_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ACU_20: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 02B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_20";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_04_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_ACU_21: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 03A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_21";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_05_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ACU_22: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 03A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_22";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_05_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ACU_23: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 03A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_23";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_05_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ACU_24: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 03A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_24";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_05_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ACU_25: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 03A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_25";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_05_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_ACU_26: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 03B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_26";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_06_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ACU_27: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 03B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_27";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_06_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ACU_28: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 03B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_28";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_06_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ACU_29: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 03B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_29";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_06_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ACU_30: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 03B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_30";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_06_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_ACU_31: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 04A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_31";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_07_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ACU_32: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 04A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_32";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_07_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ACU_33: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 04A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_33";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_07_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ACU_34: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 04A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_34";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_07_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ACU_35: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 04A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_35";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_07_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_ACU_36: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 04B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_36";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_08_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_ACU_37: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 04B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_37";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_08_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_ACU_38: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 04B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_38";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_08_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_ACU_39: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 04B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_39";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_08_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_ACU_40: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform U-Shirt 04B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "cryeS_ACU_40";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_08_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
				class gear_B_CryeScuba_ACU_01: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 01A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeScuba_ACU_01";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_01_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_ACU_02: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 01B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeScuba_ACU_02";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_02_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_ACU_03: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 02A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeScuba_ACU_03";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_03_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_ACU_04: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 02B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeScuba_ACU_04";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_04_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_ACU_05: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 03A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeScuba_ACU_05";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_05_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_ACU_06: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 03B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeScuba_ACU_06";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_06_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_ACU_07: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 04A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeScuba_ACU_07";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_07_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_ACU_08: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. ACU Crye Uniform 04B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_ACU_C";
		uniformClass = "CryeScuba_ACU_08";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\crye\ACU\data\crye_ACU_08_co.paa","\GEARS_ACU\clothing\cryeshirts\ACU\data\basicbody_bk.paa"};
	};
		class gear_assaultpack_ACU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\rucksack\assault\ACU\data\assaultpack_ACU_01_co.paa"};
		displayName = "U.S. ACU CQB Kit Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_assaultpack_ACU_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\rucksack\assault\ACU\data\assaultpack_ACU_02_co.paa","\GEARS_ACU\rucksack\assault\ACU\data\assaultpack_ACU_01_co.paa","\GEARS_ACU\rucksack\assault\ACU\data\assaultpack_ACU_02_co.paa"};
		displayName = "U.S. ACU CQB Kit Rucksack 01B";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_Carryall_ACU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\rucksack\carryall\ACU\data\carryall_ACU_01_co.paa"};
		displayName = "U.S. ACU Infantry Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_FastPack_ACU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\rucksack\fast\ACU\data\FastPack_ACU_01_co.paa"};
		displayName = "U.S. ACU F.A.S.T. Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_FieldPack_ACU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\rucksack\field\ACU\data\FieldPack_ACU_01_co.paa"};
		displayName = "U.S. ACU Camping Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_Tacticalpack_ACU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\rucksack\Tactical\ACU\data\Tacticalpack_ACU_01_co.paa"};
		displayName = "U.S. ACU Tactical Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_largesize_ACU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\drones_f\Weapons_F_Gamma\Ammoboxes\bags\UAV_backpack_F";
		displayName = "U.S. ACU Full-Size Rucksack 01A";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\rucksack\lrrp\ACU\data\largesize_ACU_01_co.paa"};
	    containerclass = "Supply500";
		mass = 1;
	};
					class gear_backbelt_ACU_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_01_co.paa"};
		displayName = "U.S. ACU Combat Belt 01A, BK";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_backbelt_ACU_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_02_co.paa"};
		displayName = "U.S. ACU Combat Belt 01A, CB";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_backbelt_ACU_03: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_03_co.paa"};
		displayName = "U.S. ACU Combat Belt 01A, OD";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_backbelt_ACU_04: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_04_co.paa"};
		displayName = "U.S. ACU Combat Belt 01A, SG";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_backbelt_ACU_05: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_05_co.paa"};
		displayName = "U.S. ACU Combat Belt 01A, TN";
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
	class gear_ACU_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 01A, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_01";
			containerclass = "Supply500";
			mass = 1;
		};
	};
		class gear_ACU_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 01A, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ACU_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 01B, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ACU_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 01B, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ACU_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 02A, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_05";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ACU_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 02A, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_06";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ACU_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 02B, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_07";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ACU_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 02B, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_08";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ACU_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 03A, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_09";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ACU_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 03A, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_10";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ACU_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 03B, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_11";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ACU_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 03B, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_12";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ACU_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 04A, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_13";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ACU_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 04A, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_14";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ACU_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 04B, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_15";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_ACU_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 04B, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_ACU_16";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 01A, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_01";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 01A, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 01B, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 01B, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 02A, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_05";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 02A, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_06";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 02B, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_07";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 02B, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_08";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 03A, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_09";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 03A, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_10";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 03B, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_11";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 03B, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_12";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 04A, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_13";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 04A, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_14";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 04B, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_15";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_ACU_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 04B, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_ACU_16";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
			class garrison_ACU_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 01A, TN Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_01";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 01B, SG Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 01C, CB Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 01D, OD Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 02A, TN Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_05";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 02B, SG Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_06";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 02C, CB Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_07";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 02D, OD Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_08";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 03A, TN Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_09";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 03B, SG Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_10";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 03C, CB Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_11";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 03D, OD Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_12";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 04A, TN Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_13";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 04B, SG Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_14";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 04C, CB Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_15";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_ACU_16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Garrison HQ Uniform 04D, OD Shirt";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_ACU_16";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
			class ghillieshirt_ACU_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 01A, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ACU_01";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_ACU_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 01B, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ACU_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_ACU_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 02A, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ACU_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_ACU_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 02B, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ACU_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_ACU_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 03A, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ACU_05";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_ACU_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 03B, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ACU_06";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_ACU_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 04A, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ACU_07";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_ACU_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Combat Uniform 04B, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_ACU_08";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
			class ghilliemando_ACU_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 01A, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ACU_01";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghilliemando_ACU_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 01B, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ACU_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghilliemando_ACU_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 02A, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ACU_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghilliemando_ACU_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 02B, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ACU_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghilliemando_ACU_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 03A, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ACU_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_ACU_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 03B, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ACU_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_ACU_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 04A, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ACU_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_ACU_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Commando Sweater 04B, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_ACU_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ballcap_ACU_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Headwear, Cap 01";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\common\capb.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\headwear\ballcap\ACU\data\ballcap_ACU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_ACU_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ballcap_ACU_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Headwear, Cap 02";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "A3\Characters_F_EPB\common\capb_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\headwear\ballcap\ACU\data\ballcap_ACU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_ACU_02";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\common\capb_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_Bandana_ACU_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Headwear, Bandana 01";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\headwear\bandana\ACU\data\bandana_ACU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_ACU_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Bandana_ACU_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Headwear, Bandana 02";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\headwear\bandana\ACU\data\bandana_ACU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_ACU_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_Boonie_ACU_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Headwear, Boonie 01";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\headwear\boonie\ACU\data\Boonie_ACU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_ACU_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Boonie_ACU_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Headwear, Boonie 02";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\headwear\boonie\ACU\data\Boonie_ACU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_ACU_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_capcom_ACU_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Headwear, ComTac II Cap 01";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\headwear\capcom\ACU\data\capcom_ACU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_ACU_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_capcom_ACU_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Headwear, ComTac II Cap 02";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\headwear\capcom\ACU\data\capcom_ACU_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_ACU_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
   };
	class gear_capcom_ACU_03: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Headwear, ComTac II Cap 03";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\headwear\capcom\ACU\data\capcom_ACU_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_ACU_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_ACU_crye01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 01A, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_01";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ACU_crye02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 01A, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_02";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ACU_crye03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 01B, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_03";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ACU_crye04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 01B, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_04";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class gear_ACU_crye05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 02A, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ACU_crye06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 02A, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ACU_crye07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 02B, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ACU_crye08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 02B, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class gear_ACU_crye09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 03A, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_09";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ACU_crye10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 03A, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_10";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ACU_crye11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 03B, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_11";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ACU_crye12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 03B, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_12";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class gear_ACU_crye13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 04A, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_13";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ACU_crye14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 04A, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_14";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ACU_crye15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 04B, Sleeves Down";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_15";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ACU_crye16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 04B, Sleeves Up";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_ACU_16";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class CryeGhillie_ACU_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 01A, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ACU_01";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_ACU_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 01B, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ACU_02";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_ACU_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 02A, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ACU_03";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeGhillie_ACU_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 02B, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ACU_04";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_ACU_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 03A, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ACU_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_ACU_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 03B, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ACU_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeGhillie_ACU_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 04A, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ACU_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_ACU_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 04B, Ghillie Suit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_ACU_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class gear_ACU_cryeS01: Uniform_Base
	{
		scope = 2;
        author = "KetsuCorp";
		displayName = "U.S. ACU Crye Uniform U-Shirt 01A, TN";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_01";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS02: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 01A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_02";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS03: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 01A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_03";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS04: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 01A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_04";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS05: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 01A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS06: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 01B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS07: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 01B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS08: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 01B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS09: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 01B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_09";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS10: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 01B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_10";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS11: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 02A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_11";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS12: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 02A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_12";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS13: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 02A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_13";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS14: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 02A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_14";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS15: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 02A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_15";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS16: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 02B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_16";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS17: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 02B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_17";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS18: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 02B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_18";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS19: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 02B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_19";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS20: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 02B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_20";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS21: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 03A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_21";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS22: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 03A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_22";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS23: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 03A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_23";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS24: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 03A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_24";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS25: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 03A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_25";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS26: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 03B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_26";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS27: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 03B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_27";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS28: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 03B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_28";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS29: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 03B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_29";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS30: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 03B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_30";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS31: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 04A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_31";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS32: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 04A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_32";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS33: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 04A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_33";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS34: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 04A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_34";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS35: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 04A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_35";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS36: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 04B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_36";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS37: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 04B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_37";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS38: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 04B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_38";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS39: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 04B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_39";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_ACU_cryeS40: gear_ACU_cryeS01
	{
		displayName = "U.S. ACU Crye Uniform U-Shirt 04B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_ACU_40";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeScuba_ACU_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 01A, Scuba Kit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ACU_01";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_ACU_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 01B, Scuba Kit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ACU_02";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_ACU_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 02A, Scuba Kit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ACU_03";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_ACU_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 02B, Scuba Kit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ACU_04";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_ACU_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 03A, Scuba Kit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ACU_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_ACU_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 03B, Scuba Kit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ACU_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_ACU_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 04A, Scuba Kit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ACU_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_ACU_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. ACU Crye Uniform 04B, Scuba Kit";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_ACU\clothing\common\data\suitpack_ACU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_ACU_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_platecarrier_ACU_01: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. ACU Plate Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_05_co.paa"};
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
		class gear_platecarrier_ACU_02: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		displayName = "U.S. ACU Plate Carrier 01B, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_05_co.paa"};
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
		class gear_platecarrier_ACU_03: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		displayName = "U.S. ACU Plate Carrier 02A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_05_co.paa"};
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
	class gear_platecarrier_ACU_04: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. ACU Plate Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_04_co.paa"};
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
		class gear_platecarrier_ACU_05: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		displayName = "U.S. ACU Plate Carrier 01B, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_04_co.paa"};
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
		class gear_platecarrier_ACU_06: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		displayName = "U.S. ACU Plate Carrier 02A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_04_co.paa"};
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
		class gear_platecarrier_ACU_07: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. ACU Plate Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_02_co.paa"};
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
		class gear_platecarrier_ACU_08: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		displayName = "U.S. ACU Plate Carrier 01B, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_02_co.paa"};
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
		class gear_platecarrier_ACU_09: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		displayName = "U.S. ACU Plate Carrier 02A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_02_co.paa"};
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
		class gear_platecarrier_ACU_10: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. ACU Plate Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_03_co.paa"};
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
		class gear_platecarrier_ACU_11: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		displayName = "U.S. ACU Plate Carrier 01B, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_03_co.paa"};
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
	
		class gear_platecarrier_ACU_12: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		displayName = "U.S. ACU Plate Carrier 02A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_03_co.paa"};
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
		class gear_platecarrier_ACU_13: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. ACU Plate Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_01_co.paa"};
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
		class gear_platecarrier_ACU_14: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		displayName = "U.S. ACU Plate Carrier 01B, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_01_co.paa"};
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
		class gear_platecarrier_ACU_15: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		displayName = "U.S. ACU Plate Carrier 02A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_01_co.paa"};
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
		class gear_vestbelt_ACU_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. ACU Combat Belt 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_05_co.paa"};
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
		class gear_bandolier_ACU_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. ACU Pouch-Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_05_co.paa"};
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
  		class gear_vestbelt_ACU_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. ACU Combat Belt 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_04_co.paa"};
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
		class gear_bandolier_ACU_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. ACU Pouch-Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_04_co.paa"};
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
        class gear_vestbelt_ACU_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. ACU Combat Belt 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_02_co.paa"};
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
		class gear_bandolier_ACU_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. ACU Pouch-Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_02_co.paa"};
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
        class gear_vestbelt_ACU_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. ACU Combat Belt 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_03_co.paa"};
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
		class gear_bandolier_ACU_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. ACU Pouch-Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_03_co.paa"};
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
         class gear_vestbelt_ACU_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. ACU Combat Belt 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_01_co.paa"};
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
		class gear_bandolier_ACU_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. ACU Pouch-Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\platecarrier\ACU\data\platecarrier_ACU_01_co.paa"};
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
  	class gear_infantry_ACU_01: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		displayName = "U.S. ACU Infantry Carrier 01A";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\infantry\ACU\data\infantry_ACU_01_co.paa"};
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
		class gear_infantry_ACU_02: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		displayName = "U.S. ACU Infantry Carrier 01B";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\infantry\ACU\data\infantry_ACU_01_co.paa"};
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
		class gear_tacvest_ACU_01: V_TacVestCamo_khk
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		displayName = "U.S. ACU Webbed Tac-Vest 01A";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\armor\tacvest\ACU\data\tacvest_ACU_01_co.paa"};
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
	     class gear_ECH_ACU_01: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2001, 01B BK";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
	class gear_ECH_ACU_02: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2001, 01B CB";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };
   	class gear_ECH_ACU_03: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2001, 01B OD";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};	
	    };
   };
      	class gear_ECH_ACU_04: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2001, 01B SG";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_04";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         	class gear_ECH_ACU_05: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2001, 01B TN";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_05";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         class gear_ECH_ACU_06: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01B BK";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_06";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_ACU_07: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01B CB";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_07";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_ACU_08: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01B OD";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_08";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_ACU_09: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01B SG";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_09";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_ACU_10: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01B TN";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_10";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_ACU_11: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01A BK";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_11";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_ACU_12: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01A CB";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_12";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_ACU_13: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01A OD";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_13";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_ACU_14: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01A SG";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_14";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_ACU_15: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01A TN";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_15";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_ACU_16: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01C BK";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_01_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_16";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_ACU_17: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01C CB";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_02_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_17";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_ACU_18: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01C OD";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_03_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_18";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_ACU_19: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01C SG";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_04_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_19";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };  
      	class gear_ECH_ACU_20: gear_ECH_ACU_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Ops-Core MICH 2000, 01C TN";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ECH\ACU\data\ECH_ACU_05_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_ACU_20";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	   };
   };   
   	class gear_patrolcap_ACU_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Headwear, Patrol Cap 01";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\headwear\patrolcap\ACU\data\patrolcap_ACU_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_ACU_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   
   class gear_patrolcap_ACU_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Headwear, Patrol Cap 02";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\headwear\patrolcap\ACU\data\patrolcap_ACU_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_F\Common\Data\cappatrol.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_ACU_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_cover_ACU_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU Headwear, Cover 01";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\GEARS_CORE\headwear\common\cover.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\headwear\cover\ACU\data\cover_ACU_01_co.paa"};
        hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\us_officer_equip.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_cover_ACU_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\cover.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_ach_ACU_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. ACU MICH 2000 / ACH, 01A";
		picture = "\GEARS_ACU\ui\ACU_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_ACU\helmets\ACH\ACU\data\ACH_ACU_01_co.paa","\GEARS_ACU\helmets\ACH\ACU\data\ACH_ACU_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_ACU_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
			armor = 0.5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
};	