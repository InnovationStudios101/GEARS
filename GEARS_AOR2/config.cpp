class CfgPatches
{
	 class GEARS_AOR2
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};
class CfgVehicleClasses
{
	class GEARS_AOR2_C
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
	class gear_B_Soldier_AOR2_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
	};
	class gear_B_Soldier_AOR2_02: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
	};
	class gear_B_Soldier_AOR2_03: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_02_co.paa"};
	};
	class gear_B_Soldier_AOR2_04: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_02_co.paa"};
	};
	class gear_B_Soldier_AOR2_05: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_03_co.paa"};
	};
	class gear_B_Soldier_AOR2_06: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_03_co.paa"};
	};
	class gear_B_Soldier_AOR2_07: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_04_co.paa"};
	};
	class gear_B_Soldier_AOR2_08: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_04_co.paa"};
	};
	class gear_B_Soldier_AOR2_09: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_05_co.paa"};
	};
	class gear_B_Soldier_AOR2_10: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_05_co.paa"};
	};
	class gear_B_Soldier_AOR2_11: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_06_co.paa"};
	};
	class gear_B_Soldier_AOR2_12: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_06_co.paa"};
	};
	class gear_B_Soldier_AOR2_13: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_07_co.paa"};
	};
	class gear_B_Soldier_AOR2_14: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_07_co.paa"};
	};
	class gear_B_Soldier_AOR2_15: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_08_co.paa"};
	};
	class gear_B_Soldier_AOR2_16: gear_B_Soldier_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "gear_AOR2_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_08_co.paa"};
	};
class gear_B_Commando_AOR2_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};		
	};
	class gear_B_Commando_AOR2_02: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR2_03: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR2_04: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR2_05: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR2_06: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR2_07: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR2_08: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR2_09: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR2_10: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR2_11: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR2_12: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR2_13: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR2_14: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR2_15: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_AOR2_16: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "commando_AOR2_16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_Garrison_AOR2_01: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 01A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_01";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_01_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR2_02: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 01B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_02";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_02_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR2_03: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 01C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_03";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_03_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR2_04: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 01D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_04";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_04_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR2_05: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 02A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_05";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_05_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR2_06: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 02B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_06";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_06_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR2_07: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 02C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_07";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_07_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR2_08: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 02D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_08";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_08_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR2_09: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 03A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_09";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_09_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR2_10: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 03B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_10";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_10_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_AOR2_11: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 03C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_11";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_11_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR2_12: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 03D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_12";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_12_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR2_13: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 04A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_13";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_13_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR2_14: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 04B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_14";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_14_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_AOR2_15: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 04C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_15";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_15_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_AOR2_16: gear_B_Commando_AOR2_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Garrison HQ Uniform 04D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "garrison_AOR2_16";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\garrison\AOR2\data\garrison_AOR2_16_co.paa","\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
			class gear_B_GhillieShirt_AOR2_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghillieshirt_AOR2_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_AOR2_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghillieshirt_AOR2_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_AOR2_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghillieshirt_AOR2_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_AOR2_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghillieshirt_AOR2_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_AOR2_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghillieshirt_AOR2_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_05_co.paa"};
	};
		class gear_B_GhillieShirt_AOR2_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghillieshirt_AOR2_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_06_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_AOR2_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghillieshirt_AOR2_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_07_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_AOR2_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Combat Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghillieshirt_AOR2_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\combatshirt\AOR2\data\combatshirt_AOR2_08_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
			class gear_B_GhillieMando_AOR2_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghilliemando_AOR2_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_AOR2_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghilliemando_AOR2_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_AOR2_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghilliemando_AOR2_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_AOR2_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghilliemando_AOR2_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_AOR2_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghilliemando_AOR2_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_AOR2_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghilliemando_AOR2_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_AOR2_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghilliemando_AOR2_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_AOR2_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Commando Sweater 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit4.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "ghilliemando_AOR2_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\commando\AOR2\data\commando_AOR2_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_Crye_AOR2_01: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_01_co.paa"};
	};
		class gear_B_Crye_AOR2_02: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_01_co.paa"};
	};
		class gear_B_Crye_AOR2_03: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_02_co.paa"};
	};
		class gear_B_Crye_AOR2_04: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_02_co.paa"};
	};
	    class gear_B_Crye_AOR2_05: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_03_co.paa"};
	};
		class gear_B_Crye_AOR2_06: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_03_co.paa"};
	};
		class gear_B_Crye_AOR2_07: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_04_co.paa"};
	};
		class gear_B_Crye_AOR2_08: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_04_co.paa"};
	};
		class gear_B_Crye_AOR2_09: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_05_co.paa"};
	};
		class gear_B_Crye_AOR2_10: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_05_co.paa"};
	};
		class gear_B_Crye_AOR2_11: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_06_co.paa"};
	};
		class gear_B_Crye_AOR2_12: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_06_co.paa"};
	};
		class gear_B_Crye_AOR2_13: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_07_co.paa"};
	};
		class gear_B_Crye_AOR2_14: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_07_co.paa"};
	};
		class gear_B_Crye_AOR2_15: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_08_co.paa"};
	};
		class gear_B_Crye_AOR2_16: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "Crye_AOR2_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_08_co.paa"};
	};
			class gear_B_CryeGhillie_AOR2_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit12.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeGhillie_AOR2_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_01_co.paa"}; 
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_AOR2_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit12.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeGhillie_AOR2_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_02_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_AOR2_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit12.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeGhillie_AOR2_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_03_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_AOR2_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit12.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeGhillie_AOR2_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_04_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_AOR2_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit12.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeGhillie_AOR2_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_05_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_AOR2_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit12.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeGhillie_AOR2_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_06_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_AOR2_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit12.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeGhillie_AOR2_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_07_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_AOR2_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit12.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeGhillie_AOR2_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_08_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
			class gear_B_CryeS_AOR2_01: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_01";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_01_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR2_02: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_02";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_01_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR2_03: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_03";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_01_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR2_04: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_04";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_01_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR2_05: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_05";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_01_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_AOR2_06: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_06";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_02_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR2_07: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_07";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_02_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR2_08: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_08";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_02_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR2_09: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_09";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_02_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR2_10: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_10";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_02_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_AOR2_11: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_11";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_03_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR2_12: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_12";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_03_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR2_13: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_13";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_03_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR2_14: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_14";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_03_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR2_15: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_15";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_03_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_AOR2_16: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_16";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_04_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR2_17: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_17";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_04_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR2_18: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_18";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_04_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR2_19: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_19";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_04_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR2_20: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_20";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_04_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_AOR2_21: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_21";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_05_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR2_22: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_22";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_05_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR2_23: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_23";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_05_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR2_24: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_24";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_05_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR2_25: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_25";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_05_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_AOR2_26: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_26";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_06_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR2_27: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_27";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_06_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR2_28: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_28";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_06_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR2_29: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_29";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_06_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR2_30: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_30";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_06_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_AOR2_31: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_31";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_07_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR2_32: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_32";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_07_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR2_33: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_33";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_07_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR2_34: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_34";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_07_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR2_35: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_35";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_07_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_AOR2_36: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_36";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_08_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_AOR2_37: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_37";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_08_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_AOR2_38: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_38";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_08_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_AOR2_39: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_39";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_08_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_AOR2_40: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "cryeS_AOR2_40";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_08_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
				class gear_B_CryeScuba_AOR2_01: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 01A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeScuba_AOR2_01";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_01_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_AOR2_02: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 01B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeScuba_AOR2_02";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_02_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_AOR2_03: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 02A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeScuba_AOR2_03";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_03_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_AOR2_04: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 02B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeScuba_AOR2_04";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_04_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_AOR2_05: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 03A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeScuba_AOR2_05";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_05_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_AOR2_06: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 03B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeScuba_AOR2_06";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_06_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_AOR2_07: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 04A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeScuba_AOR2_07";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_07_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_AOR2_08: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. AOR2 Crye Uniform 04B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_AOR2_C";
		uniformClass = "CryeScuba_AOR2_08";
		uniformType = "Neopren";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_AOR2\clothing\crye\AOR2\data\crye_AOR2_08_co.paa","\GEARS_AOR2\clothing\cryeshirts\AOR2\data\basicbody_bk.paa"};
	};
		class gear_assaultpack_AOR2_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\rucksack\assault\AOR2\data\assaultpack_AOR2_01_co.paa"};
		displayName = "U.S. AOR2 CQB Kit Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
			class gear_assaultpack_AOR2_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\rucksack\assault\AOR2\data\assaultpack_AOR2_02_co.paa","\GEARS_AOR2\rucksack\assault\AOR2\data\assaultpack_AOR2_01_co.paa","\GEARS_AOR2\rucksack\assault\AOR2\data\assaultpack_AOR2_02_co.paa"};
		displayName = "U.S. AOR2 CQB Kit Rucksack 01B";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
		class gear_Carryall_AOR2_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\rucksack\carryall\AOR2\data\carryall_AOR2_01_co.paa"};
		displayName = "U.S. AOR2 Infantry Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
		class gear_FastPack_AOR2_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\rucksack\fast\AOR2\data\FastPack_AOR2_01_co.paa"};
		displayName = "U.S. AOR2 F.A.S.T. Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
		class gear_FieldPack_AOR2_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\rucksack\field\AOR2\data\FieldPack_AOR2_01_co.paa"};
		displayName = "U.S. AOR2 Camping Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
		class gear_Tacticalpack_AOR2_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\rucksack\Tactical\AOR2\data\Tacticalpack_AOR2_01_co.paa"};
		displayName = "U.S. AOR2 Tactical Rucksack 01A";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
		class gear_largesize_AOR2_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\drones_f\Weapons_F_Gamma\Ammoboxes\bags\UAV_backpack_F";
		displayName = "U.S. AOR2 Full-Size Rucksack 01A";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\rucksack\lrrp\AOR2\data\largesize_AOR2_01_co.paa"};
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
					class gear_backbelt_AOR2_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_01_co.paa"};
		displayName = "U.S. AOR2 Combat Belt 01A, BK";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
			class gear_backbelt_AOR2_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_02_co.paa"};
		displayName = "U.S. AOR2 Combat Belt 01A, CB";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
			class gear_backbelt_AOR2_03: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_03_co.paa"};
		displayName = "U.S. AOR2 Combat Belt 01A, OD";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
			class gear_backbelt_AOR2_04: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_04_co.paa"};
		displayName = "U.S. AOR2 Combat Belt 01A, SG";
		maximumLoad = 9999999;
		allowedSlots[] = {"701", "801", "901"};
		mass = 1;
	};
			class gear_backbelt_AOR2_05: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_05_co.paa"};
		displayName = "U.S. AOR2 Combat Belt 01A, TN";
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
	class gear_AOR2_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 01A, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
		};
	};
		class gear_AOR2_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 01A, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR2_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 01B, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR2_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 01B, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR2_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 02A, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR2_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 02A, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR2_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 02B, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR2_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 02B, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR2_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 03A, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_09";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR2_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 03A, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_10";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR2_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 03B, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_11";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR2_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 03B, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_12";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR2_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 04A, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_13";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR2_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 04A, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_14";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR2_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 04B, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_15";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class gear_AOR2_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 04B, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_AOR2_16";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 01A, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 01A, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 01B, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 01B, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 02A, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 02A, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 02B, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 02B, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 03A, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_09";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 03A, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_10";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 03B, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_11";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 03B, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_12";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 04A, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_13";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 04A, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_14";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 04B, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_15";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class commando_AOR2_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 04B, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_AOR2_16";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
			class garrison_AOR2_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 01A, TN Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 01B, SG Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 01C, CB Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 01D, OD Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 02A, TN Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 02B, SG Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 02C, CB Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 02D, OD Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 03A, TN Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_09";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 03B, SG Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_10";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 03C, CB Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_11";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 03D, OD Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_12";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 04A, TN Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_13";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 04B, SG Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_14";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 04C, CB Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_15";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class garrison_AOR2_16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Garrison HQ Uniform 04D, OD Shirt";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_AOR2_16";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
			class ghillieshirt_AOR2_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 01A, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR2_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghillieshirt_AOR2_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 01B, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR2_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghillieshirt_AOR2_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 02A, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR2_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghillieshirt_AOR2_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 02B, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR2_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghillieshirt_AOR2_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 03A, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR2_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghillieshirt_AOR2_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 03B, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR2_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghillieshirt_AOR2_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 04A, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR2_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghillieshirt_AOR2_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Combat Uniform 04B, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_AOR2_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
			class ghilliemando_AOR2_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 01A, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR2_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghilliemando_AOR2_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 01B, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR2_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghilliemando_AOR2_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 02A, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR2_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghilliemando_AOR2_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 02B, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR2_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
            armor = 0;
		};
	};
		class ghilliemando_AOR2_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 03A, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR2_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class ghilliemando_AOR2_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 03B, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR2_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class ghilliemando_AOR2_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 04A, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR2_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class ghilliemando_AOR2_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Commando Sweater 04B, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_AOR2_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_ballcap_AOR2_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Headwear, Cap 01";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\common\capb.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\headwear\ballcap\AOR2\data\ballcap_AOR2_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_AOR2_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ballcap_AOR2_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Headwear, Cap 02";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "A3\Characters_F_EPB\common\capb_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\headwear\ballcap\AOR2\data\ballcap_AOR2_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_AOR2_02";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\common\capb_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_Bandana_AOR2_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Headwear, Bandana 01";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\headwear\bandana\AOR2\data\bandana_AOR2_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_AOR2_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Bandana_AOR2_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Headwear, Bandana 02";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\headwear\bandana\AOR2\data\bandana_AOR2_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_AOR2_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_Boonie_AOR2_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Headwear, Boonie 01";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\headwear\boonie\AOR2\data\Boonie_AOR2_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_AOR2_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Boonie_AOR2_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Headwear, Boonie 02";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\headwear\boonie\AOR2\data\Boonie_AOR2_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_AOR2_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_capcom_AOR2_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Headwear, ComTac II Cap 01";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\headwear\capcom\AOR2\data\capcom_AOR2_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_AOR2_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_capcom_AOR2_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Headwear, ComTac II Cap 02";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\headwear\capcom\AOR2\data\capcom_AOR2_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_AOR2_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
   };
	class gear_capcom_AOR2_03: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Headwear, ComTac II Cap 03";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\headwear\capcom\AOR2\data\capcom_AOR2_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_AOR2_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_AOR2_crye01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 01A, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR2_crye02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 01A, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR2_crye03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 01B, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR2_crye04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 01B, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class gear_AOR2_crye05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 02A, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR2_crye06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 02A, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR2_crye07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 02B, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR2_crye08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 02B, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
			class gear_AOR2_crye09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 03A, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_09";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR2_crye10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 03A, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_10";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR2_crye11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 03B, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_11";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR2_crye12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 03B, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_12";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class gear_AOR2_crye13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 04A, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_13";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR2_crye14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 04A, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_14";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR2_crye15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 04B, Sleeves Down";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_15";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_AOR2_crye16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 04B, Sleeves Up";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_AOR2_16";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
			class CryeGhillie_AOR2_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 01A, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR2_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class CryeGhillie_AOR2_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 01B, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR2_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class CryeGhillie_AOR2_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 02A, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR2_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeGhillie_AOR2_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 02B, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR2_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class CryeGhillie_AOR2_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 03A, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR2_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class CryeGhillie_AOR2_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 03B, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR2_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeGhillie_AOR2_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 04A, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR2_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class CryeGhillie_AOR2_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 04B, Ghillie Suit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_AOR2_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
			class gear_AOR2_cryeS01: Uniform_Base
	{
		scope = 2;
        author = "KetsuCorp";
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01A, TN";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS02: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS03: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS04: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS05: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS06: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS07: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS08: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS09: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_09";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS10: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 01B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_10";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS11: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_11";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS12: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_12";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS13: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_13";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS14: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_14";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS15: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_15";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS16: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_16";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS17: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_17";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS18: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_18";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS19: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_19";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS20: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 02B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_20";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS21: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_21";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS22: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_22";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS23: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_23";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS24: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_24";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS25: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_25";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS26: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_26";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS27: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_27";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS28: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_28";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS29: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_29";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS30: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 03B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_30";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS31: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_31";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS32: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_32";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS33: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_33";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS34: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_34";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS35: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_35";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS36: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_36";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS37: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_37";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS38: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_38";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS39: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_39";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	class gear_AOR2_cryeS40: gear_AOR2_cryeS01
	{
		displayName = "U.S. AOR2 Crye Uniform U-Shirt 04B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_AOR2_40";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
	    class CryeScuba_AOR2_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 01A, Scuba Kit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR2_01";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeScuba_AOR2_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 01B, Scuba Kit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR2_02";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeScuba_AOR2_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 02A, Scuba Kit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR2_03";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeScuba_AOR2_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 02B, Scuba Kit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR2_04";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeScuba_AOR2_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 03A, Scuba Kit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR2_05";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeScuba_AOR2_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 03B, Scuba Kit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR2_06";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeScuba_AOR2_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 04A, Scuba Kit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR2_07";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class CryeScuba_AOR2_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. AOR2 Crye Uniform 04B, Scuba Kit";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_CORE\clothing\common\data\suitpack_AOR2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_AOR2_08";
			containerclass = "Supply500";
			mass = 1;
            allowedSlots[] = {"701", "801", "901"};
			armor = 0;
		};
	};
		class gear_platecarrier_AOR2_01: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. AOR2 Plate Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_05_co.paa"};
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
		class gear_platecarrier_AOR2_02: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		displayName = "U.S. AOR2 Plate Carrier 01B, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_05_co.paa"};
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
		class gear_platecarrier_AOR2_03: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		displayName = "U.S. AOR2 Plate Carrier 02A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_05_co.paa"};
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
	class gear_platecarrier_AOR2_04: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. AOR2 Plate Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_04_co.paa"};
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
		class gear_platecarrier_AOR2_05: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		displayName = "U.S. AOR2 Plate Carrier 01B, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_04_co.paa"};
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
		class gear_platecarrier_AOR2_06: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		displayName = "U.S. AOR2 Plate Carrier 02A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_04_co.paa"};
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
		class gear_platecarrier_AOR2_07: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. AOR2 Plate Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_02_co.paa"};
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
		class gear_platecarrier_AOR2_08: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		displayName = "U.S. AOR2 Plate Carrier 01B, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_02_co.paa"};
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
		class gear_platecarrier_AOR2_09: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		displayName = "U.S. AOR2 Plate Carrier 02A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_02_co.paa"};
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
		class gear_platecarrier_AOR2_10: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. AOR2 Plate Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_03_co.paa"};
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
		class gear_platecarrier_AOR2_11: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		displayName = "U.S. AOR2 Plate Carrier 01B, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_03_co.paa"};
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
	
		class gear_platecarrier_AOR2_12: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		displayName = "U.S. AOR2 Plate Carrier 02A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_03_co.paa"};
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
		class gear_platecarrier_AOR2_13: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. AOR2 Plate Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_01_co.paa"};
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
		class gear_platecarrier_AOR2_14: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		displayName = "U.S. AOR2 Plate Carrier 01B, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_01_co.paa"};
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
		class gear_platecarrier_AOR2_15: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		displayName = "U.S. AOR2 Plate Carrier 02A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_01_co.paa"};
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
		class gear_vestbelt_AOR2_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. AOR2 Combat Belt 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_05_co.paa"};
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
		class gear_bandolier_AOR2_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. AOR2 Pouch-Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_05_co.paa"};
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
  		class gear_vestbelt_AOR2_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. AOR2 Combat Belt 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_04_co.paa"};
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
		class gear_bandolier_AOR2_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. AOR2 Pouch-Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_04_co.paa"};
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
        class gear_vestbelt_AOR2_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. AOR2 Combat Belt 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_02_co.paa"};
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
		class gear_bandolier_AOR2_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. AOR2 Pouch-Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_02_co.paa"};
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
        class gear_vestbelt_AOR2_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. AOR2 Combat Belt 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_03_co.paa"};
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
		class gear_bandolier_AOR2_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. AOR2 Pouch-Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_03_co.paa"};
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
         class gear_vestbelt_AOR2_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. AOR2 Combat Belt 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_01_co.paa"};
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
		class gear_bandolier_AOR2_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. AOR2 Pouch-Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\platecarrier\AOR2\data\platecarrier_AOR2_01_co.paa"};
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
  	class gear_infantry_AOR2_01: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		displayName = "U.S. AOR2 Infantry Carrier 01A";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\infantry\AOR2\data\infantry_AOR2_01_co.paa"};
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
		class gear_infantry_AOR2_02: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		displayName = "U.S. AOR2 Infantry Carrier 01B";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\infantry\AOR2\data\infantry_AOR2_01_co.paa"};
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
		class gear_tacvest_AOR2_01: V_TacVestCamo_khk
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		displayName = "U.S. AOR2 Webbed Tac-Vest 01A";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\armor\tacvest\AOR2\data\tacvest_AOR2_01_co.paa"};
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
	     class gear_ECH_AOR2_01: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2001, 01B BK";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
	class gear_ECH_AOR2_02: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2001, 01B CB";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };
   	class gear_ECH_AOR2_03: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2001, 01B OD";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};	
	    };
   };
      	class gear_ECH_AOR2_04: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2001, 01B SG";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_04";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         	class gear_ECH_AOR2_05: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2001, 01B TN";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_05";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         class gear_ECH_AOR2_06: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01B BK";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_06";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_AOR2_07: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01B CB";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_07";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_AOR2_08: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01B OD";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_08";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_AOR2_09: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01B SG";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_09";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_AOR2_10: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01B TN";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_10";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_AOR2_11: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01A BK";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_11";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_AOR2_12: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01A CB";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_12";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_AOR2_13: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01A OD";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_13";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_AOR2_14: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01A SG";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_14";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_AOR2_15: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01A TN";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_15";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_AOR2_16: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01C BK";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_01_co.paa","\GEARS_CORE\helmets\ECH\SG\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_16";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_AOR2_17: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01C CB";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_02_co.paa","\GEARS_CORE\helmets\ECH\SG\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_17";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_AOR2_18: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01C OD";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_03_co.paa","\GEARS_CORE\helmets\ECH\SG\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_18";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_AOR2_19: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01C SG";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_04_co.paa","\GEARS_CORE\helmets\ECH\SG\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_19";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };  
      	class gear_ECH_AOR2_20: gear_ECH_AOR2_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Ops-Core MICH 2000, 01C TN";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ECH\AOR2\data\ECH_AOR2_05_co.paa","\GEARS_CORE\helmets\ECH\SG\data\ECH_SG_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_AOR2_20";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	   };
   };   
   	class gear_patrolcap_AOR2_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Headwear, Patrol Cap 01";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\headwear\patrolcap\AOR2\data\patrolcap_AOR2_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_AOR2_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   
   class gear_patrolcap_AOR2_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Headwear, Patrol Cap 02";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\headwear\patrolcap\AOR2\data\patrolcap_AOR2_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_F\Common\Data\cappatrol.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_AOR2_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_cover_AOR2_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 Headwear, Cover 01";
		picture = "\GEARS_AOR2\ui\AOR2_ui.paa";
		model = "\GEARS_CORE\headwear\common\cover.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\headwear\cover\AOR2\data\cover_AOR2_01_co.paa"};
        hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\us_officer_equip.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_cover_AOR2_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\cover.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_ach_AOR2_00: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 MICH 2000, 01A";
		picture = "\GEARS_CORE\ui\AOR2_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_00";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ACH\AOR2\data\ACH_AOR2_01_co.paa","\GEARS_AOR2\helmets\ACH\AOR2\data\ACH_AOR2_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_AOR2_00";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_00";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
   	class gear_ach_AOR2_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. AOR2 MICH 2000, 01B";
		picture = "\GEARS_CORE\ui\AOR2_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_09";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_AOR2\helmets\ACH\AOR2\data\ACH_AOR2_01_co.paa","\GEARS_AOR2\helmets\ACH\AOR2\data\ACH_AOR2_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_AOR2_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_09";
			armor = 5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
};	