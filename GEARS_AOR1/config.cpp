class CfgPatches
{
	 class GEARS_AOR1
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};
class CfgVehicleClasses
{
	class GEARS_AOR1_C
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
	class gear_B_Soldier_AOR1_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
	};
	class gear_B_Soldier_AOR1_02: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
	};
	class gear_B_Soldier_AOR1_03: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_02_co.paa"};
	};
	class gear_B_Soldier_AOR1_04: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_02_co.paa"};
	};
	class gear_B_Soldier_AOR1_05: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_03_co.paa"};
	};
	class gear_B_Soldier_AOR1_06: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_03_co.paa"};
	};
	class gear_B_Soldier_AOR1_07: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_04_co.paa"};
	};
	class gear_B_Soldier_AOR1_08: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_04_co.paa"};
	};
	class gear_B_Soldier_AOR1_09: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_05_co.paa"};
	};
	class gear_B_Soldier_AOR1_10: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_05_co.paa"};
	};
	class gear_B_Soldier_AOR1_11: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_06_co.paa"};
	};
	class gear_B_Soldier_AOR1_12: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_06_co.paa"};
	};
	class gear_B_Soldier_AOR1_13: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_07_co.paa"};
	};
	class gear_B_Soldier_AOR1_14: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_07_co.paa"};
	};
	class gear_B_Soldier_AOR1_15: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_08_co.paa"};
	};
	class gear_B_Soldier_AOR1_16: gear_B_Soldier_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "gear_AOR1_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_08_co.paa"};
	};
class gear_B_Commando_AOR1_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};		
	};
	class gear_B_Commando_AOR1_02: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR1_03: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR1_04: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR1_05: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR1_06: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR1_07: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR1_08: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR1_09: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR1_10: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR1_11: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR1_12: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR1_13: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR1_14: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR1_15: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR1_16: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "commando_AOR1_16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_Garrison_AOR1_01: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 01A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_01";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_01_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR1_02: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 01B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_02";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_02_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR1_03: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 01C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_03";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_03_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR1_04: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 01D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_04";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_04_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR1_05: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 02A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_05";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_05_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR1_06: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 02B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_06";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_06_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR1_07: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 02C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_07";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_07_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR1_08: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 02D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_08";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_08_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR1_09: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 03A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_09";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_09_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR1_10: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 03B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_10";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_10_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_AOR1_11: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 03C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_11";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_11_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR1_12: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 03D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_12";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_12_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR1_13: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 04A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_13";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_13_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR1_14: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 04B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_14";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_14_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR1_15: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 04C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_15";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_15_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_AOR1_16: gear_B_Commando_AOR1_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Garrison HQ Uniform 04D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "garrison_AOR1_16";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\garrison\AOR1\data\garrison_AOR1_16_co.paa","\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
			class gear_B_GhillieShirt_AOR1_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghillieshirt_AOR1_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_AOR1_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghillieshirt_AOR1_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_AOR1_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghillieshirt_AOR1_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_AOR1_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghillieshirt_AOR1_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_AOR1_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghillieshirt_AOR1_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_05_co.paa"};
	};
		class gear_B_GhillieShirt_AOR1_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghillieshirt_AOR1_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_06_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_AOR1_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghillieshirt_AOR1_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_07_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_AOR1_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Combat Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghillieshirt_AOR1_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\combatshirt\AOR1\data\combatshirt_AOR1_08_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
			class gear_B_GhillieMando_AOR1_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghilliemando_AOR1_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_AOR1_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghilliemando_AOR1_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_AOR1_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghilliemando_AOR1_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_AOR1_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghilliemando_AOR1_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_AOR1_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghilliemando_AOR1_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_AOR1_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghilliemando_AOR1_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_AOR1_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghilliemando_AOR1_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_AOR1_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Commando Sweater 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "ghilliemando_AOR1_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\commando\AOR1\data\commando_AOR1_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_Crye_AOR1_01: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_01_co.paa"};
	};
		class gear_B_Crye_AOR1_02: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_01_co.paa"};
	};
		class gear_B_Crye_AOR1_03: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_02_co.paa"};
	};
		class gear_B_Crye_AOR1_04: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_02_co.paa"};
	};
	    class gear_B_Crye_AOR1_05: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_03_co.paa"};
	};
		class gear_B_Crye_AOR1_06: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_03_co.paa"};
	};
		class gear_B_Crye_AOR1_07: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_04_co.paa"};
	};
		class gear_B_Crye_AOR1_08: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_04_co.paa"};
	};
		class gear_B_Crye_AOR1_09: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_05_co.paa"};
	};
		class gear_B_Crye_AOR1_10: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_05_co.paa"};
	};
		class gear_B_Crye_AOR1_11: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_06_co.paa"};
	};
		class gear_B_Crye_AOR1_12: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_06_co.paa"};
	};
		class gear_B_Crye_AOR1_13: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_07_co.paa"};
	};
		class gear_B_Crye_AOR1_14: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_07_co.paa"};
	};
		class gear_B_Crye_AOR1_15: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_08_co.paa"};
	};
		class gear_B_Crye_AOR1_16: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "Crye_AOR1_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_08_co.paa"};
	};
			class gear_B_CryeGhillie_AOR1_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeGhillie_AOR1_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_01_co.paa"}; 
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_AOR1_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeGhillie_AOR1_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_02_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_AOR1_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeGhillie_AOR1_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_03_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_AOR1_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeGhillie_AOR1_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_04_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_AOR1_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeGhillie_AOR1_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_05_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_AOR1_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeGhillie_AOR1_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_06_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_AOR1_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeGhillie_AOR1_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_07_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_AOR1_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeGhillie_AOR1_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_08_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
			class gear_B_CryeS_AOR1_01: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_01";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_01_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR1_02: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_02";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_01_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR1_03: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_03";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_01_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR1_04: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_04";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_01_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR1_05: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_05";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_01_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_AOR1_06: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_06";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_02_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR1_07: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_07";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_02_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR1_08: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_08";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_02_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR1_09: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_09";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_02_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR1_10: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_10";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_02_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_AOR1_11: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_11";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_03_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR1_12: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_12";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_03_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR1_13: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_13";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_03_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR1_14: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_14";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_03_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR1_15: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_15";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_03_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_AOR1_16: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_16";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_04_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR1_17: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_17";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_04_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR1_18: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_18";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_04_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR1_19: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_19";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_04_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR1_20: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_20";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_04_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_AOR1_21: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_21";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_05_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR1_22: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_22";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_05_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR1_23: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_23";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_05_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR1_24: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_24";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_05_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR1_25: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_25";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_05_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_AOR1_26: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_26";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_06_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR1_27: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_27";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_06_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR1_28: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_28";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_06_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR1_29: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_29";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_06_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR1_30: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_30";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_06_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_AOR1_31: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_31";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_07_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR1_32: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_32";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_07_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR1_33: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_33";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_07_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR1_34: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_34";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_07_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR1_35: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_35";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_07_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_AOR1_36: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_36";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_08_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR1_37: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_37";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_08_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR1_38: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_38";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_08_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR1_39: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_39";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_08_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR1_40: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "cryeS_AOR1_40";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_08_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
				class gear_B_CryeScuba_AOR1_01: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 01A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeScuba_AOR1_01";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_01_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_AOR1_02: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 01B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeScuba_AOR1_02";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_02_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_AOR1_03: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 02A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeScuba_AOR1_03";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_03_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_AOR1_04: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 02B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeScuba_AOR1_04";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_04_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_AOR1_05: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 03A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeScuba_AOR1_05";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_05_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_AOR1_06: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 03B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeScuba_AOR1_06";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_06_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_AOR1_07: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 04A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeScuba_AOR1_07";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_07_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_AOR1_08: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR1 Crye Uniform 04B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR1_C";
		uniformClass = "CryeScuba_AOR1_08";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR1\clothing\crye\AOR1\data\crye_AOR1_08_co.paa","\GEARS_AOR1\clothing\cryeshirts\AOR1\data\basicbody_bk.paa"};
	};
		class gear_assaultpack_AOR1_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\rucksack\assault\AOR1\data\assaultpack_AOR1_01_co.paa"};
		displayName = "U.S. AOR1 CQB Kit Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
			class gear_assaultpack_AOR1_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\rucksack\assault\AOR1\data\assaultpack_AOR1_02_co.paa","\GEARS_AOR1\rucksack\assault\AOR1\data\assaultpack_AOR1_01_co.paa","\GEARS_AOR1\rucksack\assault\AOR1\data\assaultpack_AOR1_02_co.paa"};
		displayName = "U.S. AOR1 CQB Kit Rucksack 01B";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
		class gear_Carryall_AOR1_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\rucksack\carryall\AOR1\data\carryall_AOR1_01_co.paa"};
		displayName = "U.S. AOR1 Infantry Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
		class gear_FastPack_AOR1_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\rucksack\fast\AOR1\data\FastPack_AOR1_01_co.paa"};
		displayName = "U.S. AOR1 F.A.S.T. Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
		class gear_FieldPack_AOR1_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\rucksack\field\AOR1\data\FieldPack_AOR1_01_co.paa"};
		displayName = "U.S. AOR1 Camping Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
		class gear_Tacticalpack_AOR1_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\rucksack\Tactical\AOR1\data\Tacticalpack_AOR1_01_co.paa"};
		displayName = "U.S. AOR1 Tactical Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
		class gear_largesize_AOR1_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\drones_f\Weapons_F_Gamma\Ammoboxes\bags\UAV_backpack_F";
		displayName = "U.S. AOR1 Full-Size Rucksack 01A";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\rucksack\lrrp\AOR1\data\largesize_AOR1_01_co.paa"};
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
					class gear_backbelt_AOR1_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_01_co.paa"};
		displayName = "U.S. AOR1 Combat Belt 01A, BK";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
			class gear_backbelt_AOR1_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_02_co.paa"};
		displayName = "U.S. AOR1 Combat Belt 01A, CB";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
			class gear_backbelt_AOR1_03: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_03_co.paa"};
		displayName = "U.S. AOR1 Combat Belt 01A, OD";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
			class gear_backbelt_AOR1_04: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_04_co.paa"};
		displayName = "U.S. AOR1 Combat Belt 01A, SG";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
			class gear_backbelt_AOR1_05: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_05_co.paa"};
		displayName = "U.S. AOR1 Combat Belt 01A, TN";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
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
	class gear_AOR1_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 01A, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		};
	};
		class gear_AOR1_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 01A, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR1_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 01B, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR1_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 01B, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR1_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 02A, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR1_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 02A, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR1_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 02B, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR1_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 02B, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR1_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 03A, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_09";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR1_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 03A, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_10";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR1_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 03B, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_11";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR1_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 03B, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_12";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR1_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 04A, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_13";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR1_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 04A, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_14";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR1_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 04B, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_15";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR1_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 04B, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR1_16";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 01A, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 01A, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 01B, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 01B, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 02A, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 02A, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 02B, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 02B, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 03A, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_09";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 03A, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_10";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 03B, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_11";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 03B, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_12";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 04A, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_13";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 04A, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_14";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 04B, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_15";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR1_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 04B, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR1_16";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
			class garrison_AOR1_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 01A, TN Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 01B, SG Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 01C, CB Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 01D, OD Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 02A, TN Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 02B, SG Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 02C, CB Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 02D, OD Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 03A, TN Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_09";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 03B, SG Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_10";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 03C, CB Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_11";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 03D, OD Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_12";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 04A, TN Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_13";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 04B, SG Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_14";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 04C, CB Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_15";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR1_16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Garrison HQ Uniform 04D, OD Shirt";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR1_16";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
			class ghillieshirt_AOR1_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 01A, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR1_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghillieshirt_AOR1_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 01B, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR1_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghillieshirt_AOR1_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 02A, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR1_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghillieshirt_AOR1_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 02B, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR1_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghillieshirt_AOR1_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 03A, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR1_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghillieshirt_AOR1_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 03B, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR1_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghillieshirt_AOR1_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 04A, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR1_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghillieshirt_AOR1_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Combat Uniform 04B, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR1_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
			class ghilliemando_AOR1_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 01A, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR1_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghilliemando_AOR1_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 01B, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR1_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghilliemando_AOR1_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 02A, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR1_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghilliemando_AOR1_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 02B, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR1_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghilliemando_AOR1_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 03A, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR1_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class ghilliemando_AOR1_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 03B, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR1_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class ghilliemando_AOR1_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 04A, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR1_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class ghilliemando_AOR1_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Commando Sweater 04B, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR1_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_ballcap_AOR1_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Headwear, Cap 01";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\common\capb.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\headwear\ballcap\AOR1\data\ballcap_AOR1_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_AOR1_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ballcap_AOR1_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Headwear, Cap 02";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "A3\Characters_F_EPB\common\capb_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\headwear\ballcap\AOR1\data\ballcap_AOR1_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_AOR1_02";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\common\capb_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_Bandana_AOR1_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Headwear, Bandana 01";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\headwear\bandana\AOR1\data\bandana_AOR1_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_AOR1_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Bandana_AOR1_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Headwear, Bandana 02";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\headwear\bandana\AOR1\data\bandana_AOR1_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_AOR1_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_Boonie_AOR1_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Headwear, Boonie 01";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\headwear\boonie\AOR1\data\Boonie_AOR1_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_AOR1_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Boonie_AOR1_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Headwear, Boonie 02";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\headwear\boonie\AOR1\data\Boonie_AOR1_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_AOR1_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_capcom_AOR1_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Headwear, ComTac II Cap 01";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\headwear\capcom\AOR1\data\capcom_AOR1_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_AOR1_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_capcom_AOR1_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Headwear, ComTac II Cap 02";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\headwear\capcom\AOR1\data\capcom_AOR1_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_AOR1_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
   };
	class gear_capcom_AOR1_03: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Headwear, ComTac II Cap 03";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\headwear\capcom\AOR1\data\capcom_AOR1_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_AOR1_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_AOR1_crye01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 01A, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR1_crye02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 01A, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR1_crye03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 01B, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR1_crye04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 01B, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class gear_AOR1_crye05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 02A, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR1_crye06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 02A, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR1_crye07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 02B, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR1_crye08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 02B, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
			class gear_AOR1_crye09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 03A, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_09";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR1_crye10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 03A, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_10";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR1_crye11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 03B, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_11";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR1_crye12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 03B, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_12";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class gear_AOR1_crye13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 04A, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_13";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR1_crye14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 04A, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_14";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR1_crye15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 04B, Sleeves Down";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_15";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR1_crye16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 04B, Sleeves Up";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR1_16";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
			class CryeGhillie_AOR1_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 01A, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR1_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class CryeGhillie_AOR1_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 01B, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR1_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class CryeGhillie_AOR1_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 02A, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR1_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeGhillie_AOR1_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 02B, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR1_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class CryeGhillie_AOR1_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 03A, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR1_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class CryeGhillie_AOR1_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 03B, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR1_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeGhillie_AOR1_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 04A, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR1_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class CryeGhillie_AOR1_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 04B, Ghillie Suit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR1_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
			class gear_AOR1_cryeS01: Uniform_Base
	{
		scope = 2;
        author = "KetsuCorp";
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01A, TN";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS02: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS03: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS04: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS05: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS06: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS07: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS08: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS09: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_09";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS10: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 01B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_10";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS11: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_11";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS12: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_12";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS13: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_13";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS14: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_14";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS15: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_15";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS16: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_16";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS17: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_17";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS18: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_18";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS19: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_19";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS20: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 02B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_20";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS21: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_21";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS22: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_22";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS23: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_23";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS24: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_24";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS25: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_25";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS26: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_26";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS27: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_27";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS28: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_28";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS29: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_29";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS30: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 03B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_30";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS31: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_31";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS32: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_32";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS33: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_33";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS34: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_34";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS35: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_35";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS36: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_36";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS37: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_37";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS38: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_38";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS39: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_39";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR1_cryeS40: gear_AOR1_cryeS01
	{
		displayName = "U.S. AOR1 Crye Uniform U-Shirt 04B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR1_40";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class CryeScuba_AOR1_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 01A, Scuba Kit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR1_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeScuba_AOR1_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 01B, Scuba Kit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR1_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeScuba_AOR1_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 02A, Scuba Kit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR1_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeScuba_AOR1_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 02B, Scuba Kit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR1_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeScuba_AOR1_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 03A, Scuba Kit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR1_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeScuba_AOR1_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 03B, Scuba Kit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR1_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeScuba_AOR1_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 04A, Scuba Kit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR1_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeScuba_AOR1_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR1 Crye Uniform 04B, Scuba Kit";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR1_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_platecarrier_AOR1_01: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. AOR1 Plate Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_05_co.paa"};
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
		class gear_platecarrier_AOR1_02: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		displayName = "U.S. AOR1 Plate Carrier 01B, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_05_co.paa"};
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
		class gear_platecarrier_AOR1_03: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		displayName = "U.S. AOR1 Plate Carrier 02A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_05_co.paa"};
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
	class gear_platecarrier_AOR1_04: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. AOR1 Plate Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_04_co.paa"};
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
		class gear_platecarrier_AOR1_05: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		displayName = "U.S. AOR1 Plate Carrier 01B, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_04_co.paa"};
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
		class gear_platecarrier_AOR1_06: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		displayName = "U.S. AOR1 Plate Carrier 02A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_04_co.paa"};
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
		class gear_platecarrier_AOR1_07: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. AOR1 Plate Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_02_co.paa"};
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
		class gear_platecarrier_AOR1_08: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		displayName = "U.S. AOR1 Plate Carrier 01B, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_02_co.paa"};
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
		class gear_platecarrier_AOR1_09: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		displayName = "U.S. AOR1 Plate Carrier 02A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_02_co.paa"};
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
		class gear_platecarrier_AOR1_10: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. AOR1 Plate Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_03_co.paa"};
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
		class gear_platecarrier_AOR1_11: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		displayName = "U.S. AOR1 Plate Carrier 01B, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_03_co.paa"};
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
	
		class gear_platecarrier_AOR1_12: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		displayName = "U.S. AOR1 Plate Carrier 02A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_03_co.paa"};
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
		class gear_platecarrier_AOR1_13: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. AOR1 Plate Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_01_co.paa"};
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
		class gear_platecarrier_AOR1_14: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		displayName = "U.S. AOR1 Plate Carrier 01B, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_01_co.paa"};
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
		class gear_platecarrier_AOR1_15: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		displayName = "U.S. AOR1 Plate Carrier 02A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_01_co.paa"};
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
		class gear_vestbelt_AOR1_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. AOR1 Combat Belt 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_05_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_AOR1_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. AOR1 Pouch-Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_05_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
  		class gear_vestbelt_AOR1_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. AOR1 Combat Belt 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_04_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_AOR1_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. AOR1 Pouch-Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_04_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
        class gear_vestbelt_AOR1_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. AOR1 Combat Belt 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_02_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_AOR1_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. AOR1 Pouch-Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_02_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
        class gear_vestbelt_AOR1_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. AOR1 Combat Belt 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_03_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_AOR1_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. AOR1 Pouch-Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_03_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
         class gear_vestbelt_AOR1_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. AOR1 Combat Belt 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_01_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
		};
	};
		class gear_bandolier_AOR1_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. AOR1 Pouch-Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\platecarrier\AOR1\data\platecarrier_AOR1_01_co.paa"};
		class ItemInfo: VestItem
	{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	};
  };
  	class gear_infantry_AOR1_01: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		displayName = "U.S. AOR1 Infantry Carrier 01A";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\infantry\AOR1\data\infantry_AOR1_01_co.paa"};
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
		class gear_infantry_AOR1_02: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		displayName = "U.S. AOR1 Infantry Carrier 01B";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\infantry\AOR1\data\infantry_AOR1_01_co.paa"};
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
		class gear_tacvest_AOR1_01: V_TacVestCamo_khk
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		displayName = "U.S. AOR1 Webbed Tac-Vest 01A";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\armor\tacvest\AOR1\data\tacvest_AOR1_01_co.paa"};
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
	     class gear_ECH_AOR1_01: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2001, 01B BK";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
	class gear_ECH_AOR1_02: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2001, 01B CB";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };
   	class gear_ECH_AOR1_03: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2001, 01B OD";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};	
	    };
   };
      	class gear_ECH_AOR1_04: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2001, 01B SG";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_04";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         	class gear_ECH_AOR1_05: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2001, 01B TN";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_05";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         class gear_ECH_AOR1_06: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01B BK";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_06";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_AOR1_07: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01B CB";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_07";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_AOR1_08: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01B OD";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_08";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_AOR1_09: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01B SG";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_09";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_AOR1_10: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01B TN";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_10";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_AOR1_11: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01A BK";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_11";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_AOR1_12: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01A CB";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_12";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_AOR1_13: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01A OD";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_13";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_AOR1_14: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01A SG";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_14";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_AOR1_15: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01A TN";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_15";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_AOR1_16: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01C BK";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_01_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_16";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_AOR1_17: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01C CB";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_02_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_17";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_AOR1_18: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01C OD";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_03_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_18";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_AOR1_19: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01C SG";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_04_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_19";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };  
      	class gear_ECH_AOR1_20: gear_ECH_AOR1_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Ops-Core MICH 2000, 01C TN";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ECH\AOR1\data\ECH_AOR1_05_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR1_20";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	   };
   };   
   	class gear_patrolcap_AOR1_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Headwear, Patrol Cap 01";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\headwear\patrolcap\AOR1\data\patrolcap_AOR1_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_AOR1_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   
   class gear_patrolcap_AOR1_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Headwear, Patrol Cap 02";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\headwear\patrolcap\AOR1\data\patrolcap_AOR1_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_F\Common\Data\cappatrol.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_AOR1_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_cover_AOR1_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 Headwear, Cover 01";
		picture = "\GEARS_AOR1\ui\AOR1_ui.paa";
		model = "\GEARS_CORE\headwear\common\cover.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\headwear\cover\AOR1\data\cover_AOR1_01_co.paa"};
        hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\us_officer_equip.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_cover_AOR1_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\cover.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_ach_AOR1_00: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 MICH 2000, 01A";
		picture = "\GEARS_CORE\ui\AOR1_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_00";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ACH\AOR1\data\ACH_AOR1_01_co.paa","\GEARS_AOR1\helmets\ACH\AOR1\data\ACH_AOR1_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_AOR1_00";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_00";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
   	class gear_ach_AOR1_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR1 MICH 2000, 01B";
		picture = "\GEARS_CORE\ui\AOR1_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_04";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR1\helmets\ACH\AOR1\data\ACH_AOR1_01_co.paa","\GEARS_AOR1\helmets\ACH\AOR1\data\ACH_AOR1_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_AOR1_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_04";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
};	