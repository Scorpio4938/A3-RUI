class CfgPatches
{
    class RussianUkraineInsignia
    { // ← 改成和文件夹名一致
        name = "RussianUkraineInsignia";
        author = "SCORPIO4938";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {};
    };
};

class CfgUnitInsignia
{
    class Patch_ru_0
    {
        displayName = "Russia Flag 0";
        author = "SCORPIO4938";
        texture = "SCORPIO4938_\RussianUkraineInsignia\data\ru0.paa";
        textureVehicle = "";
    };

    class Patch_ru_1
    {
        displayName = "Russia Flag 1";
        author = "SCORPIO4938";
        texture = "SCORPIO4938_\RussianUkraineInsignia\data\ru1.paa";
        textureVehicle = "";
    };
};