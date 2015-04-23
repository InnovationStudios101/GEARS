class CfgPatches
{
	 class GEARS_OCP
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};
class CfgVehicleClasses
{
	class GEARS_OCP_C
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
	class gear_B_Soldier_OCP_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
	};
	class gear_B_Soldier_OCP_02: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
	};
	class gear_B_Soldier_OCP_03: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_02_co.paa"};
	};
	class gear_B_Soldier_OCP_04: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_02_co.paa"};
	};
	class gear_B_Soldier_OCP_05: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_03_co.paa"};
	};
	class gear_B_Soldier_OCP_06: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_03_co.paa"};
	};
	class gear_B_Soldier_OCP_07: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_04_co.paa"};
	};
	class gear_B_Soldier_OCP_08: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_04_co.paa"};
	};
	class gear_B_Soldier_OCP_09: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_05_co.paa"};
	};
	class gear_B_Soldier_OCP_10: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_05_co.paa"};
	};
	class gear_B_Soldier_OCP_11: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_06_co.paa"};
	};
	class gear_B_Soldier_OCP_12: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_06_co.paa"};
	};
	class gear_B_Soldier_OCP_13: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_07_co.paa"};
	};
	class gear_B_Soldier_OCP_14: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_07_co.paa"};
	};
	class gear_B_Soldier_OCP_15: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_08_co.paa"};
	};
	class gear_B_Soldier_OCP_16: gear_B_Soldier_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "gear_OCP_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_08_co.paa"};
	};
class gear_B_Commando_OCP_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};		
	};
	class gear_B_Commando_OCP_02: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OCP_03: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OCP_04: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OCP_05: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OCP_06: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OCP_07: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OCP_08: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OCP_09: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OCP_10: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OCP_11: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OCP_12: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OCP_13: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OCP_14: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OCP_15: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_OCP_16: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "commando_OCP_16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_Garrison_OCP_01: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 01A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_01";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_01_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OCP_02: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 01B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_02";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_02_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OCP_03: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 01C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_03";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_03_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OCP_04: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 01D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_04";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_04_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OCP_05: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 02A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_05";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_05_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OCP_06: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 02B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_06";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_06_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OCP_07: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 02C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_07";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_07_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OCP_08: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 02D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_08";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_08_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OCP_09: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 03A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_09";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_09_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OCP_10: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 03B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_10";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_10_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_OCP_11: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 03C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_11";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_11_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OCP_12: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 03D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_12";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_12_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OCP_13: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 04A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_13";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_13_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OCP_14: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 04B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_14";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_14_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_OCP_15: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 04C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_15";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_15_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_OCP_16: gear_B_Commando_OCP_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Garrison HQ Uniform 04D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "garrison_OCP_16";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\garrison\OCP\data\garrison_OCP_16_co.paa","\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
			class gear_B_GhillieShirt_OCP_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghillieshirt_OCP_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OCP_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghillieshirt_OCP_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OCP_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghillieshirt_OCP_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OCP_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghillieshirt_OCP_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OCP_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghillieshirt_OCP_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_05_co.paa"};
	};
		class gear_B_GhillieShirt_OCP_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghillieshirt_OCP_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_06_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OCP_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghillieshirt_OCP_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_07_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_OCP_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Combat Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghillieshirt_OCP_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\combatshirt\OCP\data\combatshirt_OCP_08_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
			class gear_B_GhillieMando_OCP_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghilliemando_OCP_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OCP_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghilliemando_OCP_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OCP_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghilliemando_OCP_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OCP_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghilliemando_OCP_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OCP_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghilliemando_OCP_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OCP_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghilliemando_OCP_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OCP_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghilliemando_OCP_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_OCP_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Commando Sweater 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit3.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "ghilliemando_OCP_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\commando\OCP\data\commando_OCP_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_Crye_OCP_01: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_01_co.paa"};
	};
		class gear_B_Crye_OCP_02: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_01_co.paa"};
	};
		class gear_B_Crye_OCP_03: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_02_co.paa"};
	};
		class gear_B_Crye_OCP_04: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_02_co.paa"};
	};
	    class gear_B_Crye_OCP_05: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_03_co.paa"};
	};
		class gear_B_Crye_OCP_06: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_03_co.paa"};
	};
		class gear_B_Crye_OCP_07: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_04_co.paa"};
	};
		class gear_B_Crye_OCP_08: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_04_co.paa"};
	};
		class gear_B_Crye_OCP_09: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_05_co.paa"};
	};
		class gear_B_Crye_OCP_10: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_05_co.paa"};
	};
		class gear_B_Crye_OCP_11: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_06_co.paa"};
	};
		class gear_B_Crye_OCP_12: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_06_co.paa"};
	};
		class gear_B_Crye_OCP_13: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_07_co.paa"};
	};
		class gear_B_Crye_OCP_14: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_07_co.paa"};
	};
		class gear_B_Crye_OCP_15: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_08_co.paa"};
	};
		class gear_B_Crye_OCP_16: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "Crye_OCP_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_08_co.paa"};
	};
			class gear_B_CryeGhillie_OCP_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeGhillie_OCP_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_01_co.paa"}; 
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OCP_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeGhillie_OCP_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_02_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OCP_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeGhillie_OCP_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_03_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OCP_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeGhillie_OCP_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_04_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OCP_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeGhillie_OCP_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_05_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OCP_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeGhillie_OCP_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_06_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OCP_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeGhillie_OCP_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_07_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_OCP_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit11.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeGhillie_OCP_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_08_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
			class gear_B_CryeS_OCP_01: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 01A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_01";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_01_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_OCP_02: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 01A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_02";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_01_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_OCP_03: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 01A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_03";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_01_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_OCP_04: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 01A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_04";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_01_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_OCP_05: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 01A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_05";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_01_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_OCP_06: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 01B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_06";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_02_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_OCP_07: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 01B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_07";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_02_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_OCP_08: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 01B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_08";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_02_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_OCP_09: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 01B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_09";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_02_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_OCP_10: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 01B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_10";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_02_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_OCP_11: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 02A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_11";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_03_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_OCP_12: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 02A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_12";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_03_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_OCP_13: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 02A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_13";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_03_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_OCP_14: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 02A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_14";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_03_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_OCP_15: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 02A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_15";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_03_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_OCP_16: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 02B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_16";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_04_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_OCP_17: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 02B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_17";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_04_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_OCP_18: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 02B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_18";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_04_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_OCP_19: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 02B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_19";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_04_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_OCP_20: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 02B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_20";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_04_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_OCP_21: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 03A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_21";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_05_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_OCP_22: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 03A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_22";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_05_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_OCP_23: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 03A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_23";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_05_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_OCP_24: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 03A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_24";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_05_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_OCP_25: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 03A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_25";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_05_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_OCP_26: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 03B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_26";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_06_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_OCP_27: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 03B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_27";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_06_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_OCP_28: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 03B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_28";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_06_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_OCP_29: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 03B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_29";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_06_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_OCP_30: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 03B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_30";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_06_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_OCP_31: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 04A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_31";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_07_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_OCP_32: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 04A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_32";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_07_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_OCP_33: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 04A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_33";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_07_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_OCP_34: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 04A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_34";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_07_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_OCP_35: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 04A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_35";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_07_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_OCP_36: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 04B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_36";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_08_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_OCP_37: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 04B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_37";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_08_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_OCP_38: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 04B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_38";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_08_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_OCP_39: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 04B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_39";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_08_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_OCP_40: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform U-Shirt 04B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "cryeS_OCP_40";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_08_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
				class gear_B_CryeScuba_OCP_01: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 01A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeScuba_OCP_01";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_01_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OCP_02: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 01B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeScuba_OCP_02";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_02_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OCP_03: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 02A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeScuba_OCP_03";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_03_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OCP_04: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 02B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeScuba_OCP_04";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_04_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OCP_05: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 03A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeScuba_OCP_05";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_05_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OCP_06: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 03B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeScuba_OCP_06";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_06_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OCP_07: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 04A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeScuba_OCP_07";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_07_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_OCP_08: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. OCP Crye Uniform 04B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_OCP_C";
		uniformClass = "CryeScuba_OCP_08";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\crye\OCP\data\crye_OCP_08_co.paa","\GEARS_OCP\clothing\cryeshirts\OCP\data\basicbody_bk.paa"};
	};
		class gear_assaultpack_OCP_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\rucksack\assault\OCP\data\assaultpack_OCP_01_co.paa"};
		displayName = "U.S. OCP CQB Kit Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_assaultpack_OCP_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\rucksack\assault\OCP\data\assaultpack_OCP_02_co.paa","\GEARS_OCP\rucksack\assault\OCP\data\assaultpack_OCP_01_co.paa","\GEARS_OCP\rucksack\assault\OCP\data\assaultpack_OCP_02_co.paa"};
		displayName = "U.S. OCP CQB Kit Rucksack 01B";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_Carryall_OCP_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\rucksack\carryall\OCP\data\carryall_OCP_01_co.paa"};
		displayName = "U.S. OCP Infantry Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_FastPack_OCP_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\rucksack\fast\OCP\data\FastPack_OCP_01_co.paa"};
		displayName = "U.S. OCP F.A.S.T. Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_FieldPack_OCP_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\rucksack\field\OCP\data\FieldPack_OCP_01_co.paa"};
		displayName = "U.S. OCP Camping Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_Tacticalpack_OCP_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\rucksack\Tactical\OCP\data\Tacticalpack_OCP_01_co.paa"};
		displayName = "U.S. OCP Tactical Rucksack 01A";
	    containerclass = "Supply500";
		mass = 1;
	};
		class gear_largesize_OCP_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\drones_f\Weapons_F_Gamma\Ammoboxes\bags\UAV_backpack_F";
		displayName = "U.S. OCP Full-Size Rucksack 01A";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\rucksack\lrrp\OCP\data\largesize_OCP_01_co.paa"};
	    containerclass = "Supply500";
		mass = 1;
	};
					class gear_backbelt_OCP_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_01_co.paa"};
		displayName = "U.S. OCP Combat Belt 01A, BK";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_backbelt_OCP_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_02_co.paa"};
		displayName = "U.S. OCP Combat Belt 01A, CB";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_backbelt_OCP_03: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_03_co.paa"};
		displayName = "U.S. OCP Combat Belt 01A, OD";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_backbelt_OCP_04: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_04_co.paa"};
		displayName = "U.S. OCP Combat Belt 01A, SG";
	    containerclass = "Supply500";
		mass = 1;
	};
			class gear_backbelt_OCP_05: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_05_co.paa"};
		displayName = "U.S. OCP Combat Belt 01A, TN";
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
	class gear_OCP_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 01A, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_01";
			containerclass = "Supply500";
			mass = 1;
		};
	};
		class gear_OCP_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 01A, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_OCP_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 01B, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_OCP_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 01B, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_OCP_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 02A, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_05";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_OCP_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 02A, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_06";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_OCP_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 02B, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_07";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_OCP_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 02B, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_08";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_OCP_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 03A, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_09";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_OCP_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 03A, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_10";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_OCP_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 03B, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_11";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_OCP_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 03B, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_12";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_OCP_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 04A, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_13";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_OCP_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 04A, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_14";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_OCP_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 04B, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_15";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class gear_OCP_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 04B, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_OCP_16";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 01A, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_01";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 01A, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 01B, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 01B, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 02A, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_05";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 02A, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_06";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 02B, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_07";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 02B, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_08";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 03A, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_09";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 03A, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_10";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 03B, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_11";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 03B, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_12";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 04A, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_13";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 04A, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_14";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 04B, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_15";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class commando_OCP_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 04B, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_OCP_16";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
			class garrison_OCP_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 01A, TN Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_01";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 01B, SG Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 01C, CB Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 01D, OD Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 02A, TN Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_05";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 02B, SG Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_06";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 02C, CB Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_07";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 02D, OD Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_08";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 03A, TN Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_09";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 03B, SG Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_10";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 03C, CB Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_11";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 03D, OD Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_12";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 04A, TN Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_13";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 04B, SG Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_14";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 04C, CB Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_15";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class garrison_OCP_16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Garrison HQ Uniform 04D, OD Shirt";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_OCP_16";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
			class ghillieshirt_OCP_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 01A, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OCP_01";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_OCP_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 01B, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OCP_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_OCP_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 02A, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OCP_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_OCP_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 02B, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OCP_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_OCP_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 03A, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OCP_05";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_OCP_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 03B, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OCP_06";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_OCP_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 04A, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OCP_07";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghillieshirt_OCP_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Combat Uniform 04B, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_OCP_08";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
			class ghilliemando_OCP_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 01A, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OCP_01";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghilliemando_OCP_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 01B, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OCP_02";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghilliemando_OCP_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 02A, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OCP_03";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghilliemando_OCP_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 02B, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OCP_04";
			containerclass = "Supply500";
			mass = 1;
            armor = 0;
		};
	};
		class ghilliemando_OCP_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 03A, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OCP_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_OCP_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 03B, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OCP_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_OCP_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 04A, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OCP_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_OCP_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Commando Sweater 04B, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_OCP_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ballcap_OCP_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Headwear, Cap 01";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\common\capb.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\headwear\ballcap\OCP\data\ballcap_OCP_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_OCP_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ballcap_OCP_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Headwear, Cap 02";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "A3\Characters_F_EPB\common\capb_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\headwear\ballcap\OCP\data\ballcap_OCP_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_OCP_02";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\common\capb_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_Bandana_OCP_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Headwear, Bandana 01";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\headwear\bandana\OCP\data\bandana_OCP_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_OCP_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Bandana_OCP_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Headwear, Bandana 02";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\headwear\bandana\OCP\data\bandana_OCP_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_OCP_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_Boonie_OCP_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Headwear, Boonie 01";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\headwear\boonie\OCP\data\Boonie_OCP_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_OCP_01";		
		    mass = 1;
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Boonie_OCP_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Headwear, Boonie 02";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\headwear\boonie\OCP\data\Boonie_OCP_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_OCP_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_capcom_OCP_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Headwear, ComTac II Cap 01";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\headwear\capcom\OCP\data\capcom_OCP_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_OCP_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_capcom_OCP_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Headwear, ComTac II Cap 02";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\headwear\capcom\OCP\data\capcom_OCP_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_OCP_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
   };
	class gear_capcom_OCP_03: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Headwear, ComTac II Cap 03";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\headwear\capcom\OCP\data\capcom_OCP_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_OCP_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_OCP_crye01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 01A, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_01";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_OCP_crye02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 01A, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_02";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_OCP_crye03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 01B, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_03";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_OCP_crye04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 01B, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_04";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class gear_OCP_crye05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 02A, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_OCP_crye06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 02A, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_OCP_crye07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 02B, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_OCP_crye08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 02B, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class gear_OCP_crye09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 03A, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_09";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_OCP_crye10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 03A, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_10";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_OCP_crye11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 03B, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_11";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_OCP_crye12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 03B, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_12";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class gear_OCP_crye13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 04A, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_13";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_OCP_crye14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 04A, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_14";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_OCP_crye15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 04B, Sleeves Down";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_15";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_OCP_crye16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 04B, Sleeves Up";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_OCP_16";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class CryeGhillie_OCP_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 01A, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OCP_01";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_OCP_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 01B, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OCP_02";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_OCP_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 02A, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OCP_03";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeGhillie_OCP_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 02B, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OCP_04";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_OCP_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 03A, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OCP_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_OCP_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 03B, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OCP_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeGhillie_OCP_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 04A, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OCP_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_OCP_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 04B, Ghillie Suit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_OCP_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class gear_OCP_cryeS01: Uniform_Base
	{
		scope = 2;
        author = "KetsuCorp";
		displayName = "U.S. OCP Crye Uniform U-Shirt 01A, TN";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_01";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS02: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 01A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_02";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS03: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 01A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_03";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS04: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 01A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_04";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS05: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 01A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS06: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 01B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS07: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 01B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS08: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 01B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS09: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 01B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_09";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS10: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 01B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_10";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS11: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 02A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_11";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS12: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 02A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_12";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS13: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 02A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_13";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS14: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 02A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_14";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS15: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 02A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_15";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS16: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 02B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_16";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS17: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 02B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_17";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS18: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 02B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_18";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS19: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 02B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_19";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS20: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 02B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_20";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS21: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 03A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_21";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS22: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 03A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_22";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS23: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 03A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_23";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS24: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 03A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_24";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS25: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 03A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_25";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS26: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 03B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_26";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS27: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 03B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_27";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS28: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 03B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_28";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS29: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 03B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_29";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS30: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 03B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_30";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS31: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 04A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_31";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS32: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 04A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_32";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS33: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 04A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_33";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS34: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 04A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_34";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS35: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 04A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_35";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS36: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 04B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_36";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS37: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 04B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_37";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS38: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 04B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_38";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS39: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 04B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_39";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_OCP_cryeS40: gear_OCP_cryeS01
	{
		displayName = "U.S. OCP Crye Uniform U-Shirt 04B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_OCP_40";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeScuba_OCP_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 01A, Scuba Kit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OCP_01";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_OCP_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 01B, Scuba Kit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OCP_02";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_OCP_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 02A, Scuba Kit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OCP_03";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_OCP_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 02B, Scuba Kit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OCP_04";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_OCP_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 03A, Scuba Kit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OCP_05";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_OCP_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 03B, Scuba Kit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OCP_06";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_OCP_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 04A, Scuba Kit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OCP_07";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_OCP_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. OCP Crye Uniform 04B, Scuba Kit";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_OCP\clothing\common\data\suitpack_OCP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_OCP_08";
			containerclass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_platecarrier_OCP_01: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. OCP Plate Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_05_co.paa"};
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
		class gear_platecarrier_OCP_02: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		displayName = "U.S. OCP Plate Carrier 01B, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_05_co.paa"};
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
		class gear_platecarrier_OCP_03: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		displayName = "U.S. OCP Plate Carrier 02A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_05_co.paa"};
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
	class gear_platecarrier_OCP_04: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. OCP Plate Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_04_co.paa"};
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
		class gear_platecarrier_OCP_05: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		displayName = "U.S. OCP Plate Carrier 01B, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_04_co.paa"};
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
		class gear_platecarrier_OCP_06: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		displayName = "U.S. OCP Plate Carrier 02A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_04_co.paa"};
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
		class gear_platecarrier_OCP_07: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. OCP Plate Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_02_co.paa"};
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
		class gear_platecarrier_OCP_08: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		displayName = "U.S. OCP Plate Carrier 01B, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_02_co.paa"};
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
		class gear_platecarrier_OCP_09: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		displayName = "U.S. OCP Plate Carrier 02A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_02_co.paa"};
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
		class gear_platecarrier_OCP_10: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. OCP Plate Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_03_co.paa"};
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
		class gear_platecarrier_OCP_11: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		displayName = "U.S. OCP Plate Carrier 01B, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_03_co.paa"};
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
	
		class gear_platecarrier_OCP_12: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		displayName = "U.S. OCP Plate Carrier 02A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_03_co.paa"};
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
		class gear_platecarrier_OCP_13: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. OCP Plate Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_01_co.paa"};
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
		class gear_platecarrier_OCP_14: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		displayName = "U.S. OCP Plate Carrier 01B, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_01_co.paa"};
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
		class gear_platecarrier_OCP_15: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		displayName = "U.S. OCP Plate Carrier 02A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_01_co.paa"};
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
		class gear_vestbelt_OCP_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. OCP Combat Belt 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_05_co.paa"};
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
		class gear_bandolier_OCP_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. OCP Pouch-Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_05_co.paa"};
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
  		class gear_vestbelt_OCP_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. OCP Combat Belt 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_04_co.paa"};
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
		class gear_bandolier_OCP_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. OCP Pouch-Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_04_co.paa"};
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
        class gear_vestbelt_OCP_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. OCP Combat Belt 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_02_co.paa"};
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
		class gear_bandolier_OCP_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. OCP Pouch-Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_02_co.paa"};
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
        class gear_vestbelt_OCP_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. OCP Combat Belt 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_03_co.paa"};
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
		class gear_bandolier_OCP_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. OCP Pouch-Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_03_co.paa"};
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
         class gear_vestbelt_OCP_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. OCP Combat Belt 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_01_co.paa"};
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
		class gear_bandolier_OCP_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. OCP Pouch-Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\platecarrier\OCP\data\platecarrier_OCP_01_co.paa"};
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
  	class gear_infantry_OCP_01: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		displayName = "U.S. OCP Infantry Carrier 01A";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\infantry\OCP\data\infantry_OCP_01_co.paa"};
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
		class gear_infantry_OCP_02: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		displayName = "U.S. OCP Infantry Carrier 01B";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\infantry\OCP\data\infantry_OCP_01_co.paa"};
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
		class gear_tacvest_OCP_01: V_TacVestCamo_khk
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		displayName = "U.S. OCP Webbed Tac-Vest 01A";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\armor\tacvest\OCP\data\tacvest_OCP_01_co.paa"};
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
	     class gear_ECH_OCP_01: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2001, 01B BK";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
	class gear_ECH_OCP_02: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2001, 01B CB";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };
   	class gear_ECH_OCP_03: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2001, 01B OD";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};	
	    };
   };
      	class gear_ECH_OCP_04: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2001, 01B SG";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_04";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         	class gear_ECH_OCP_05: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2001, 01B TN";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_05";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         class gear_ECH_OCP_06: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01B BK";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_06";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_OCP_07: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01B CB";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_07";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_OCP_08: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01B OD";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_08";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_OCP_09: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01B SG";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_09";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_OCP_10: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01B TN";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_10";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_OCP_11: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01A BK";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_11";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_OCP_12: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01A CB";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_12";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_OCP_13: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01A OD";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_13";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_OCP_14: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01A SG";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_14";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_OCP_15: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01A TN";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_15";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_OCP_16: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01C BK";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_01_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_16";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_OCP_17: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01C CB";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_02_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_17";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_OCP_18: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01C OD";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_03_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_18";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_OCP_19: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01C SG";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_04_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_19";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };  
      	class gear_ECH_OCP_20: gear_ECH_OCP_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Ops-Core MICH 2000, 01C TN";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ECH\OCP\data\ECH_OCP_05_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_OCP_20";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	   };
   };   
   	class gear_patrolcap_OCP_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Headwear, Patrol Cap 01";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\headwear\patrolcap\OCP\data\patrolcap_OCP_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_OCP_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   
   class gear_patrolcap_OCP_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Headwear, Patrol Cap 02";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\headwear\patrolcap\OCP\data\patrolcap_OCP_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_F\Common\Data\cappatrol.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_OCP_02";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_cover_OCP_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP Headwear, Cover 01";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\GEARS_CORE\headwear\common\cover.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\headwear\cover\OCP\data\cover_OCP_01_co.paa"};
        hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\us_officer_equip.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_cover_OCP_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\cover.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_ach_OCP_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. OCP MICH 2000 / ACH, 01A";
		picture = "\GEARS_OCP\ui\OCP_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_OCP\helmets\ACH\OCP\data\ACH_OCP_01_co.paa","\GEARS_OCP\helmets\ACH\OCP\data\ACH_OCP_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_OCP_01";		
		    mass = 1;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
			armor = 0.5;
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
};	