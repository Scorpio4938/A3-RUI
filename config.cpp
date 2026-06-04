class CfgPatches {
    class RussianUkraineInsignia {          // ← 改成和文件夹名一致
        name = "RussianUkraineInsignia";
        author = "SCORPIO4938";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {};
    };
};

class CfgUnitInsignia {
    class MyPatch_01 {
        displayName = "Insigna 1";
        author = "SCORPIO4938";
        texture = "SCORPIO4938_\RussianUkraineInsignia\data\patch1.paa";   // 相对路径，正确
        textureVehicle = "";
    };
};