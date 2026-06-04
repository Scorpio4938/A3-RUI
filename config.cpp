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
    class Patch_ru
    {
        displayName = "Russian Flag";
        author = "SCORPIO4938";
        texture = "SCORPIO4938_\RussianUkraineInsignia\data\ru.paa";
        textureVehicle = "";
    };
};