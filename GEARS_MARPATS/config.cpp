class CfgPatches
{
	 class GEARS_MARPATS
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};
class CfgVehicleClasses
{
	class GEARS_MARPATS_C
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
	class gear_B_Soldier_MARPATS_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
	};
	class gear_B_Soldier_MARPATS_02: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
	};
	class gear_B_Soldier_MARPATS_03: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_02_co.paa"};
	};
	class gear_B_Soldier_MARPATS_04: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_02_co.paa"};
	};
	class gear_B_Soldier_MARPATS_05: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_03_co.paa"};
	};
	class gear_B_Soldier_MARPATS_06: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_03_co.paa"};
	};
	class gear_B_Soldier_MARPATS_07: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_04_co.paa"};
	};
	class gear_B_Soldier_MARPATS_08: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_04_co.paa"};
	};
	class gear_B_Soldier_MARPATS_09: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_05_co.paa"};
	};
	class gear_B_Soldier_MARPATS_10: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_05_co.paa"};
	};
	class gear_B_Soldier_MARPATS_11: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_06_co.paa"};
	};
	class gear_B_Soldier_MARPATS_12: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_06_co.paa"};
	};
	class gear_B_Soldier_MARPATS_13: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_07_co.paa"};
	};
	class gear_B_Soldier_MARPATS_14: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_07_co.paa"};
	};
	class gear_B_Soldier_MARPATS_15: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_08_co.paa"};
	};
	class gear_B_Soldier_MARPATS_16: gear_B_Soldier_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "gear_MARPATS_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_08_co.paa"};
	};
class gear_B_Commando_MARPATS_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};		
	};
	class gear_B_Commando_MARPATS_02: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_MARPATS_03: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_MARPATS_04: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_MARPATS_05: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_MARPATS_06: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_MARPATS_07: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_MARPATS_08: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_MARPATS_09: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_MARPATS_10: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_MARPATS_11: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_MARPATS_12: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_MARPATS_13: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_MARPATS_14: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_MARPATS_15: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
	class gear_B_Commando_MARPATS_16: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "commando_MARPATS_16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_Garrison_MARPATS_01: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 01A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_01";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_01_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_MARPATS_02: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 01B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_02";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_02_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_MARPATS_03: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 01C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_03";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_03_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_MARPATS_04: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 01D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_04";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_04_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_MARPATS_05: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 02A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_05";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_05_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_MARPATS_06: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 02B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_06";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_06_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_MARPATS_07: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 02C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_07";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_07_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_MARPATS_08: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 02D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_08";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_08_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_MARPATS_09: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 03A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_09";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_09_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_MARPATS_10: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 03B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_10";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_10_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_MARPATS_11: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 03C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_11";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_11_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_MARPATS_12: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 03D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_12";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_12_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_MARPATS_13: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 04A, TN Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_13";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_13_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_MARPATS_14: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 04B, SG Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_14";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_14_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
		class gear_B_Garrison_MARPATS_15: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 04C, CB Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_15";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_15_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
	class gear_B_Garrison_MARPATS_16: gear_B_Commando_MARPATS_01
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Garrison HQ Uniform 04D, OD Shirt";
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_f_beta\indep\ia_officer.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "garrison_MARPATS_16";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\garrison\MARPATS\data\garrison_MARPATS_16_co.paa","\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\clothing\common\data\officer.rvmat"};
	};
			class gear_B_GhillieShirt_MARPATS_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghillieshirt_MARPATS_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_MARPATS_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghillieshirt_MARPATS_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_MARPATS_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghillieshirt_MARPATS_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_MARPATS_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghillieshirt_MARPATS_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_MARPATS_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghillieshirt_MARPATS_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_05_co.paa"};
	};
		class gear_B_GhillieShirt_MARPATS_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghillieshirt_MARPATS_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_06_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_MARPATS_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghillieshirt_MARPATS_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_07_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
		class gear_B_GhillieShirt_MARPATS_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Combat Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghillieshirt_MARPATS_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\combatshirt\MARPATS\data\combatshirt_MARPATS_08_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};
	};
			class gear_B_GhillieMando_MARPATS_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghilliemando_MARPATS_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_01_co.paa"}; 
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_MARPATS_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghilliemando_MARPATS_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_02_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_MARPATS_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghilliemando_MARPATS_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_03_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_MARPATS_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghilliemando_MARPATS_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_04_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_MARPATS_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghilliemando_MARPATS_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_05_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_MARPATS_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghilliemando_MARPATS_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_06_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_MARPATS_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghilliemando_MARPATS_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_07_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_GhillieMando_MARPATS_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Commando Sweater 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit5.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "ghilliemando_MARPATS_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\commando\MARPATS\data\commando_MARPATS_08_co.paa"};
		hiddenSelectionsMaterials[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
	};
		class gear_B_Crye_MARPATS_01: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 01A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit01";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_01_co.paa"};
	};
		class gear_B_Crye_MARPATS_02: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 01A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit02";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_01_co.paa"};
	};
		class gear_B_Crye_MARPATS_03: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 01B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit03";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_02_co.paa"};
	};
		class gear_B_Crye_MARPATS_04: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 01B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit04";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_02_co.paa"};
	};
	    class gear_B_Crye_MARPATS_05: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 02A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit05";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_03_co.paa"};
	};
		class gear_B_Crye_MARPATS_06: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 02A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit06";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_03_co.paa"};
	};
		class gear_B_Crye_MARPATS_07: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 02B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit07";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_04_co.paa"};
	};
		class gear_B_Crye_MARPATS_08: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 02B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit08";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_04_co.paa"};
	};
		class gear_B_Crye_MARPATS_09: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 03A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit09";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_05_co.paa"};
	};
		class gear_B_Crye_MARPATS_10: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 03A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit10";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_05_co.paa"};
	};
		class gear_B_Crye_MARPATS_11: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 03B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit11";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_06_co.paa"};
	};
		class gear_B_Crye_MARPATS_12: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 03B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit12";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_06_co.paa"};
	};
		class gear_B_Crye_MARPATS_13: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 04A, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit13";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_07_co.paa"};
	};
		class gear_B_Crye_MARPATS_14: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 04A, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit14";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_07_co.paa"};
	};
		class gear_B_Crye_MARPATS_15: B_CTRG_soldier_GL_LAT_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 04B, Sleeves Down";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit15";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_08_co.paa"};
	};
		class gear_B_Crye_MARPATS_16: B_CTRG_soldier_AR_A_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 04B, Sleeves Up";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "Crye_MARPATS_kit16";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_08_co.paa"};
	};
			class gear_B_CryeGhillie_MARPATS_01: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 01A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit13.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeGhillie_MARPATS_01";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_01_co.paa"}; 
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_MARPATS_02: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 01B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit13.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeGhillie_MARPATS_02";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_02_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_MARPATS_03: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 02A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit13.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeGhillie_MARPATS_03";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_03_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_MARPATS_04: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 02B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit13.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeGhillie_MARPATS_04";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_04_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_MARPATS_05: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 03A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit13.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeGhillie_MARPATS_05";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_05_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_MARPATS_06: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 03B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit13.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeGhillie_MARPATS_06";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_06_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_MARPATS_07: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 04A, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit13.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeGhillie_MARPATS_07";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_07_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
		class gear_B_CryeGhillie_MARPATS_08: B_Soldier_base_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 04B, Ghillie Suit";
		nakedUniform = "U_BasicBody";
		model = "\GEARS_CORE\clothing\common\ghilliesuit13.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeGhillie_MARPATS_08";
		hiddenSelections[] = {"camo","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_08_co.paa"};
        hiddenSelectionsMaterials[] = {"\A3\characters_f\blufor\data\clothing1.rvmat"};
	};
			class gear_B_CryeS_MARPATS_01: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_01";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_01_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_MARPATS_02: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_02";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_01_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_MARPATS_03: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_03";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_01_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_MARPATS_04: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_04";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_01_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_MARPATS_05: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_05";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_01_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_MARPATS_06: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_06";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_02_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_MARPATS_07: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_07";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_02_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_MARPATS_08: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_08";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_02_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_MARPATS_09: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_09";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_02_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_MARPATS_10: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_10";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_02_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_MARPATS_11: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_11";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_03_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_MARPATS_12: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_12";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_03_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_MARPATS_13: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_13";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_03_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_MARPATS_14: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_14";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_03_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_MARPATS_15: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_15";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_03_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_MARPATS_16: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_16";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_04_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_MARPATS_17: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_17";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_04_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_MARPATS_18: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_18";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_04_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_MARPATS_19: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_19";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_04_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_MARPATS_20: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_20";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_04_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_MARPATS_21: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_21";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_05_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_MARPATS_22: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_22";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_05_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_MARPATS_23: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_23";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_05_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_MARPATS_24: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_24";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_05_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_MARPATS_25: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_25";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_05_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_MARPATS_26: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_26";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_06_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_MARPATS_27: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_27";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_06_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_MARPATS_28: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_28";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_06_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_MARPATS_29: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_29";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_06_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_MARPATS_30: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_30";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_06_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_MARPATS_31: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04A, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_31";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_07_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_MARPATS_32: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04A, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_32";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_07_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_MARPATS_33: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04A, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_33";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_07_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_MARPATS_34: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04A, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_34";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_07_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_MARPATS_35: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04A, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_35";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_07_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_B_CryeS_MARPATS_36: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04B, TN";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_36";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_08_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_tn.paa"};
	};
		class gear_B_CryeS_MARPATS_37: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04B, SG";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_37";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_08_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_sg.paa"};
	};
		class gear_B_CryeS_MARPATS_38: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04B, CB";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_38";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_08_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_cb.paa"};
	};
		class gear_B_CryeS_MARPATS_39: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04B, OD";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_39";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_08_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_od.paa"};
	};
		class gear_B_CryeS_MARPATS_40: B_CTRG_soldier_engineer_exp_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04B, BK";
		nakedUniform = "U_BasicBody";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "cryeS_MARPATS_40";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_08_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
				class gear_B_CryeScuba_MARPATS_01: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 01A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeScuba_MARPATS_01";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_01_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_MARPATS_02: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 01B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeScuba_MARPATS_02";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_02_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_MARPATS_03: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 02A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeScuba_MARPATS_03";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_03_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_MARPATS_04: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 02B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeScuba_MARPATS_04";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_04_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_MARPATS_05: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 03A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeScuba_MARPATS_05";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_05_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_MARPATS_06: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 03B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeScuba_MARPATS_06";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_06_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_MARPATS_07: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 04A, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeScuba_MARPATS_07";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_07_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_B_CryeScuba_MARPATS_08: b_soldier_survival_F
	{
		author = "KetsuCorp";
		_generalMacro = "I_Soldier_F";
		scope = 1;
		displayName = "U.S. MARPATS Crye Uniform 04B, Scuba Kit";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		vehicleClass = "GEARS_MARPATS_C";
		uniformClass = "CryeScuba_MARPATS_08";
        hiddenSelections[] = {"Camo","Camo3","Insignia"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\crye\MARPATS\data\crye_MARPATS_08_co.paa","\GEARS_MARPATS\clothing\cryeshirts\MARPATS\data\basicbody_bk.paa"};
	};
		class gear_assaultpack_MARPATS_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\rucksack\assault\MARPATS\data\assaultpack_MARPATS_01_co.paa"};
		displayName = "U.S. MARPATS CQB Kit Rucksack 01A";
	    containerClass = "Supply500";
		mass = 1;
		armor = 0;
	};
			class gear_assaultpack_MARPATS_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\rucksack\assault\MARPATS\data\assaultpack_MARPATS_02_co.paa","\GEARS_MARPATS\rucksack\assault\MARPATS\data\assaultpack_MARPATS_01_co.paa","\GEARS_MARPATS\rucksack\assault\MARPATS\data\assaultpack_MARPATS_02_co.paa"};
		displayName = "U.S. MARPATS CQB Kit Rucksack 01B";
	    containerClass = "Supply500";
		armor = 0;
		mass = 1;
	};
		class gear_Carryall_MARPATS_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\rucksack\carryall\MARPATS\data\carryall_MARPATS_01_co.paa"};
		displayName = "U.S. MARPATS Infantry Rucksack 01A";
	    containerClass = "Supply500";
		armor = 0;
		mass = 1;
	};
		class gear_FastPack_MARPATS_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\rucksack\fast\MARPATS\data\FastPack_MARPATS_01_co.paa"};
		displayName = "U.S. MARPATS F.A.S.T. Rucksack 01A";
	    containerClass = "Supply500";
		armor = 0;
		mass = 1;
	};
		class gear_FieldPack_MARPATS_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\rucksack\field\MARPATS\data\FieldPack_MARPATS_01_co.paa"};
		displayName = "U.S. MARPATS Camping Rucksack 01A";
	    containerClass = "Supply500";
		armor = 0;
		mass = 1;
	};
		class gear_Tacticalpack_MARPATS_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\rucksack\Tactical\MARPATS\data\Tacticalpack_MARPATS_01_co.paa"};
		displayName = "U.S. MARPATS Tactical Rucksack 01A";
	    containerClass = "Supply500";
		armor = 0;
		mass = 1;
	};
		class gear_largesize_MARPATS_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\drones_f\Weapons_F_Gamma\Ammoboxes\bags\UAV_backpack_F";
		displayName = "U.S. MARPATS Full-Size Rucksack 01A";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\rucksack\lrrp\MARPATS\data\largesize_MARPATS_01_co.paa"};
	    containerClass = "Supply500";
		armor = 0;
		mass = 1;
	};
				class gear_backbelt_MARPATS_01: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_01_co.paa"};
		displayName = "U.S. MARPATS Combat Belt 01A, BK";
	    containerClass = "Supply500";
		armor = 0;
		mass = 1;
	};
			class gear_backbelt_MARPATS_02: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_02_co.paa"};
		displayName = "U.S. MARPATS Combat Belt 01A, CB";
	    containerClass = "Supply500";
		armor = 0;
		mass = 1;
	};
			class gear_backbelt_MARPATS_03: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_03_co.paa"};
		displayName = "U.S. MARPATS Combat Belt 01A, OD";
	    containerClass = "Supply500";
		armor = 0;
		mass = 1;
	};
			class gear_backbelt_MARPATS_04: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_04_co.paa"};
		displayName = "U.S. MARPATS Combat Belt 01A, SG";
	    containerClass = "Supply500";
		armor = 0;
		mass = 1;
	};
			class gear_backbelt_MARPATS_05: B_BergenC_Base
	{
		scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_05_co.paa"};
		displayName = "U.S. MARPATS Combat Belt 01A, TN";
	    containerClass = "Supply500";
		armor = 0;
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
	class gear_MARPATS_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 01A, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_01";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 01A, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_02";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 01B, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_03";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 01B, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_04";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 02A, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_05";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 02A, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_06";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 02B, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_07";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 02B, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_08";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 03A, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_09";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 03A, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_10";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 03B, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_11";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 03B, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_12";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 04A, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_13";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 04A, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_14";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 04B, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_15";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 04B, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Soldier_MARPATS_16";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 01A, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_01";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 01A, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_02";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 01B, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_03";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 01B, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_04";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 02A, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_05";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 02A, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_06";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 02B, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_07";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 02B, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_08";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 03A, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_09";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 03A, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_10";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 03B, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_11";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 03B, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_12";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 04A, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_13";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 04A, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_14";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 04B, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_15";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class commando_MARPATS_kit16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 04B, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Commando_MARPATS_16";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class garrison_MARPATS_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 01A, TN Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_01";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 01B, SG Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_02";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 01C, CB Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_03";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 01D, OD Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_04";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 02A, TN Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_05";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 02B, SG Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_06";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 02C, CB Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_07";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 02D, OD Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_08";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 03A, TN Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_09";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 03B, SG Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_10";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 03C, CB Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_11";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 03D, OD Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_12";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 04A, TN Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_13";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 04B, SG Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_14";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 04C, CB Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_15";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class garrison_MARPATS_16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Garrison HQ Uniform 04D, OD Shirt";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Garrison_MARPATS_16";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class ghillieshirt_MARPATS_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 01A, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_MARPATS_01";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghillieshirt_MARPATS_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 01B, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_MARPATS_02";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghillieshirt_MARPATS_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 02A, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_MARPATS_03";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghillieshirt_MARPATS_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 02B, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_MARPATS_04";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghillieshirt_MARPATS_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 03A, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_MARPATS_05";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghillieshirt_MARPATS_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 03B, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_MARPATS_06";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghillieshirt_MARPATS_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 04A, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_MARPATS_07";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghillieshirt_MARPATS_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Combat Uniform 04B, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_GhillieShirt_MARPATS_08";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class ghilliemando_MARPATS_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 01A, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_MARPATS_01";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_MARPATS_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 01B, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_MARPATS_02";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_MARPATS_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 02A, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_MARPATS_03";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_MARPATS_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 02B, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_MARPATS_04";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_MARPATS_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 03A, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_MARPATS_05";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_MARPATS_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 03B, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_MARPATS_06";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_MARPATS_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 04A, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_MARPATS_07";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class ghilliemando_MARPATS_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Commando Sweater 04B, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			uniformClass = "gear_B_ghilliemando_MARPATS_08";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_ballcap_MARPATS_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Headwear, Cap 01";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\common\capb.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\headwear\ballcap\MARPATS\data\ballcap_MARPATS_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_MARPATS_01";		
		    mass = 1;
			armor = 0;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			modelSides[] = {3,1};
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_ballcap_MARPATS_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Headwear, Cap 02";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "A3\Characters_F_EPB\common\capb_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\headwear\ballcap\MARPATS\data\ballcap_MARPATS_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ballcap_MARPATS_02";		
		    mass = 1;
			armor = 0;
			uniformModel = "A3\Characters_F_EPB\common\capb_hs.p3d";
			modelSides[] = {3,1};
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_Bandana_MARPATS_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Headwear, Bandana 01";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\headwear\bandana\MARPATS\data\bandana_MARPATS_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_MARPATS_01";		
		    mass = 1;
			armor = 0;
			uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
			modelSides[] = {3,1};
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Bandana_MARPATS_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Headwear, Bandana 02";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\headwear\bandana\MARPATS\data\bandana_MARPATS_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Bandana_MARPATS_02";		
		    mass = 1;
			armor = 0;
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			modelSides[] = {3,1};
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_Boonie_MARPATS_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Headwear, Boonie 01";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\headwear\boonie\MARPATS\data\Boonie_MARPATS_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_MARPATS_01";		
		    mass = 1;
			armor = 0;
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
			modelSides[] = {3,1};
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_Boonie_MARPATS_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Headwear, Boonie 02";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\headwear\boonie\MARPATS\data\Boonie_MARPATS_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_Boonie_MARPATS_02";		
		    mass = 1;
			armor = 0;
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_capcom_MARPATS_01: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Headwear, ComTac II Cap 01";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\headwear\capcom\MARPATS\data\capcom_MARPATS_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_MARPATS_01";		
		    mass = 1;
			armor = 0;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
	class gear_capcom_MARPATS_02: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Headwear, ComTac II Cap 02";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\headwear\capcom\MARPATS\data\capcom_MARPATS_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_MARPATS_02";		
		    mass = 1;
			armor = 0;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
   };
	class gear_capcom_MARPATS_03: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Headwear, ComTac II Cap 03";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\headwear\capcom\MARPATS\data\capcom_MARPATS_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_capcom_MARPATS_03";		
		    mass = 1;
			armor = 0;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	   };
	};
		class gear_MARPATS_crye01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 01A, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_01";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_crye02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 01A, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_02";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_crye03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 01B, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_03";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_crye04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 01B, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_04";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class gear_MARPATS_crye05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 02A, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_05";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_crye06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 02A, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_06";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_crye07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 02B, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_07";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_crye08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 02B, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_08";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class gear_MARPATS_crye09: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 03A, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_09";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_crye10: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 03A, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_10";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_crye11: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 03B, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_11";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_crye12: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 03B, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_12";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class gear_MARPATS_crye13: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 04A, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_13";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_crye14: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 04A, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_14";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_crye15: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 04B, Sleeves Down";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_15";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_MARPATS_crye16: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 04B, Sleeves Up";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_Crye_MARPATS_16";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class CryeGhillie_MARPATS_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 01A, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_MARPATS_01";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_MARPATS_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 01B, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_MARPATS_02";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_MARPATS_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 02A, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_MARPATS_03";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeGhillie_MARPATS_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 02B, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_MARPATS_04";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_MARPATS_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 03A, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_MARPATS_05";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_MARPATS_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 03B, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_MARPATS_06";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeGhillie_MARPATS_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 04A, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_MARPATS_07";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeGhillie_MARPATS_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 04B, Ghillie Suit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeGhillie_MARPATS_08";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
			class gear_MARPATS_cryeS01: Uniform_Base
	{
		scope = 2;
        author = "KetsuCorp";
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01A, TN";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_01";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS02: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_02";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS03: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_03";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS04: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_04";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS05: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_05";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS06: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_06";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS07: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_07";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS08: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_08";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS09: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_09";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS10: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 01B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_10";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS11: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_11";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS12: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_12";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS13: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_13";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS14: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_14";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS15: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_15";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS16: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_16";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS17: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_17";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS18: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_18";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS19: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_19";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS20: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 02B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_20";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS21: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_21";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS22: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_22";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS23: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_23";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS24: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_24";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS25: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_25";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS26: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_26";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS27: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_27";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS28: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_28";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS29: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_29";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS30: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 03B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_30";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS31: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04A, TN";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_31";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS32: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04A, SG";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_32";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS33: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04A, CB";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_33";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS34: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04A, OD";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_34";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS35: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04A, BK";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_35";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS36: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04B, TN";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_36";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS37: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04B, SG";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_37";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS38: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04B, CB";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_38";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS39: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04B, OD";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_39";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	class gear_MARPATS_cryeS40: gear_MARPATS_cryeS01
	{
		displayName = "U.S. MARPATS Crye Uniform U-Shirt 04B, BK";
        author = "KetsuCorp";
        picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeS_MARPATS_40";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
	    class CryeScuba_MARPATS_01: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 01A, Scuba Kit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_MARPATS_01";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_MARPATS_02: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 01B, Scuba Kit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_MARPATS_02";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_MARPATS_03: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 02A, Scuba Kit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_MARPATS_03";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_MARPATS_04: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 02B, Scuba Kit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_MARPATS_04";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_MARPATS_05: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 03A, Scuba Kit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_MARPATS_05";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_MARPATS_06: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 03B, Scuba Kit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_MARPATS_06";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_MARPATS_07: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 04A, Scuba Kit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_MARPATS_07";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class CryeScuba_MARPATS_08: Uniform_Base
	{
		author = "KetsuCorp";
		scope = 2;
		displayName = "U.S. MARPATS Crye Uniform 04B, Scuba Kit";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\GEARS_MARPATS\clothing\common\data\suitpack_MARPATS.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "gear_B_CryeScuba_MARPATS_08";
			containerClass = "Supply500";
			mass = 1;
			armor = 0;
		};
	};
		class gear_platecarrier_MARPATS_01: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. MARPATS Plate Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_05_co.paa"};
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
		class gear_platecarrier_MARPATS_02: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		displayName = "U.S. MARPATS Plate Carrier 01B, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_05_co.paa"};
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
		class gear_platecarrier_MARPATS_03: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		displayName = "U.S. MARPATS Plate Carrier 02A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_05_co.paa"};
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
	class gear_platecarrier_MARPATS_04: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. MARPATS Plate Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_04_co.paa"};
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
		class gear_platecarrier_MARPATS_05: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		displayName = "U.S. MARPATS Plate Carrier 01B, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_04_co.paa"};
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
		class gear_platecarrier_MARPATS_06: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		displayName = "U.S. MARPATS Plate Carrier 02A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_04_co.paa"};
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
		class gear_platecarrier_MARPATS_07: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. MARPATS Plate Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_02_co.paa"};
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
		class gear_platecarrier_MARPATS_08: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		displayName = "U.S. MARPATS Plate Carrier 01B, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_02_co.paa"};
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
		class gear_platecarrier_MARPATS_09: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		displayName = "U.S. MARPATS Plate Carrier 02A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_02_co.paa"};
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
		class gear_platecarrier_MARPATS_10: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. MARPATS Plate Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_03_co.paa"};
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
		class gear_platecarrier_MARPATS_11: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		displayName = "U.S. MARPATS Plate Carrier 01B, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_03_co.paa"};
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
	
		class gear_platecarrier_MARPATS_12: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		displayName = "U.S. MARPATS Plate Carrier 02A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_03_co.paa"};
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
		class gear_platecarrier_MARPATS_13: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		displayName = "U.S. MARPATS Plate Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_01_co.paa"};
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
		class gear_platecarrier_MARPATS_14: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		displayName = "U.S. MARPATS Plate Carrier 01B, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_01_co.paa"};
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
		class gear_platecarrier_MARPATS_15: V_PlateCarrier1_rgr
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		displayName = "U.S. MARPATS Plate Carrier 02A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_01_co.paa"};
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
		class gear_vestbelt_MARPATS_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. MARPATS Combat Belt 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_05_co.paa"};
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
		class gear_bandolier_MARPATS_01: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. MARPATS Pouch-Carrier 01A, TN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_05_co.paa"};
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
  		class gear_vestbelt_MARPATS_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. MARPATS Combat Belt 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_04_co.paa"};
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
		class gear_bandolier_MARPATS_02: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. MARPATS Pouch-Carrier 01A, SG";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_04_co.paa"};
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
        class gear_vestbelt_MARPATS_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. MARPATS Combat Belt 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_02_co.paa"};
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
		class gear_bandolier_MARPATS_03: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. MARPATS Pouch-Carrier 01A, CB";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_02_co.paa"};
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
        class gear_vestbelt_MARPATS_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. MARPATS Combat Belt 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_03_co.paa"};
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
		class gear_bandolier_MARPATS_04: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. MARPATS Pouch-Carrier 01A, OD";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_03_co.paa"};
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
         class gear_vestbelt_MARPATS_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "U.S. MARPATS Combat Belt 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_01_co.paa"};
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
		class gear_bandolier_MARPATS_05: V_Rangemaster_belt
	{
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		displayName = "U.S. MARPATS Pouch-Carrier 01A, BK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\platecarrier\MARPATS\data\platecarrier_MARPATS_01_co.paa"};
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
  	class gear_infantry_MARPATS_01: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		displayName = "U.S. MARPATS Infantry Carrier 01A";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\infantry\MARPATS\data\infantry_MARPATS_01_co.paa"};
		class ItemInfo: VestItem
		{
			containerclass = "Supply500";
			mass = 1;
			armor = 1.5;
			passthrough = 0.610;
			uniformmodel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			hiddenSelections[] = {"camo"};
		};
    };
		class gear_infantry_MARPATS_02: V_HarnessO_brn
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		displayName = "U.S. MARPATS Infantry Carrier 01B";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\infantry\MARPATS\data\infantry_MARPATS_01_co.paa"};
		class ItemInfo: VestItem
		{
			containerclass = "Supply500";
			mass = 1;
			armor = 1.5;
			passthrough = 0.610;
			uniformmodel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[] = {"camo"};
		};
    };
		class gear_tacvest_MARPATS_01: V_TacVestCamo_khk
	{
    	scope = 2;
		author = "KetsuCorp";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		displayName = "U.S. MARPATS Webbed Tac-Vest 01A";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\armor\tacvest\MARPATS\data\tacvest_MARPATS_01_co.paa"};
		class ItemInfo: VestItem
		{
			containerclass = "Supply500";
			mass = 1;
			armor = 1.5;
			passthrough = 0.610;
			uniformmodel = "A3\Characters_F\Common\equip_tacticalvest";
			hiddenSelections[] = {"Camo"};
		};
    };
	     class gear_ECH_MARPATS_01: H_HelmetB_light
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2001, 01B BK";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_01";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
	class gear_ECH_MARPATS_02: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2001, 01B CB";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_02";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };
   	class gear_ECH_MARPATS_03: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2001, 01B OD";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_03";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};	
	    };
   };
      	class gear_ECH_MARPATS_04: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2001, 01B SG";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_04";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         	class gear_ECH_MARPATS_05: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2001, 01B TN";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_05_co.paa"};
		hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_05";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\common\equipx1.rvmat"};
	    };
   };   
         class gear_ECH_MARPATS_06: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01B BK";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_06";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_MARPATS_07: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01B CB";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_07";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_MARPATS_08: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01B OD";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_08";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_MARPATS_09: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01B SG";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_09";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_MARPATS_10: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01B TN";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_10";		
		    mass = 1;
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_MARPATS_11: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01A BK";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_11";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_MARPATS_12: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01A CB";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_12";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_MARPATS_13: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01A OD";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_03_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_13";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };   
         	class gear_ECH_MARPATS_14: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01A SG";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_04_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_14";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	    };
   };  
      	class gear_ECH_MARPATS_15: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01A TN";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_05_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_15";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo"};
	   };
   }; 
      	class gear_ECH_MARPATS_16: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01C BK";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_01_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_16";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_MARPATS_17: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01C CB";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_02_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_17";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_MARPATS_18: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01C OD";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_03_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_18";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };   
         	class gear_ECH_MARPATS_19: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01C SG";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_04_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_19";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	    };
   };  
      	class gear_ECH_MARPATS_20: gear_ECH_MARPATS_01
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Ops-Core MICH 2000, 01C TN";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ECH\MARPATS\data\ECH_MARPATS_05_co.paa","\GEARS_CORE\helmets\ECH\CB\data\ECH_CB_11_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ECH_MARPATS_20";		
		    mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			armor = 0.5;
			passthrough = 0.610;
			hiddenSelections[] = {"camo1","camo2"};
	   };
   };   
   	class gear_patrolcap_MARPATS_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Headwear, Patrol Cap 01";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\headwear\patrolcap\MARPATS\data\patrolcap_MARPATS_01_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_MARPATS_01";		
		    mass = 1;
			armor = 0;
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
   
   class gear_patrolcap_MARPATS_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Headwear, Patrol Cap 02";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\headwear\patrolcap\MARPATS\data\patrolcap_MARPATS_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\characters_F\Common\Data\cappatrol.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_patrolcap_MARPATS_02";		
		    mass = 1;
			armor = 0;
			uniformModel = "\GEARS_CORE\headwear\common\gear_patrolcap_CORE_02";
			modelSides[] = {3,1};
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_cover_MARPATS_01: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Headwear, Cover 01";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\GEARS_CORE\headwear\common\cover.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\headwear\cover\MARPATS\data\cover_MARPATS_01_co.paa"};
        hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\us_officer_equip.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_cover_MARPATS_01";		
		    mass = 1;
			armor = 0;
			uniformModel = "\GEARS_CORE\headwear\common\cover.p3d";
			modelSides[] = {3,1};
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
      	class gear_cover_MARPATS_02: ItemCore
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS Headwear, Cover 02";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\GEARS_CORE\headwear\common\cover.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\headwear\cover\MARPATS\data\cover_MARPATS_02_co.paa"};
        hiddenSelectionsMaterials[] = {"\GEARS_CORE\headwear\ca\us_officer_equip.rvmat"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_cover_MARPATS_02";		
		    mass = 1;
			armor = 0;
			uniformModel = "\GEARS_CORE\headwear\common\cover.p3d";
			modelSides[] = {3,1};
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
	    };
   };
   	class gear_ach_MARPATS_01: H_HelmetB
	{
		scope = 2;
		author = "KetsuCorp";
		weaponPoolAvailable = 1;
		displayName = "U.S. MARPATS MICH 2000 / ACH, 01A";
		picture = "\GEARS_MARPATS\ui\MARPATS_ui.paa";
		model = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\GEARS_MARPATS\helmets\ACH\MARPATS\data\ACH_MARPATS_01_co.paa","\GEARS_MARPATS\helmets\ACH\MARPATS\data\ACH_MARPATS_02_co.paa"};
		class ItemInfo: HeadGearItem
		{	
			uniformClass = "gear_ach_MARPATS_01";		
		    mass = 1;
			armor = 0.5;
			uniformModel = "\GEARS_CORE\headwear\common\gear_ach_CORE_01";
			passthrough = 0.610;
		    hiddenSelections[] = {"Camo","Camo1"};
	    };
   };
};	