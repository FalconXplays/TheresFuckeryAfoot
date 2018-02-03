/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 

class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 20000;

	/*
		A list of all characters allowed in a clan *name*

		NOTE: 
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!\\/";

	/*

		Maximum markers per clan

	*/
	maximumIcons = 20;

	/*
		Maximum number of characters on a Marker in a presistent system

		Note: MAX 255!
		
	*/
	maximumIconText = 50;

	/*

		Maximum poly markers per clan

	*/
	maximumPolys = 10;


	/* 

		Maximum points in poly
	*/
	maximumPolyNode = 10;
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
};
class CfgCraftingRecipes
{

#include "EBM\recipes.hpp" 

class CraftedXM1014: Exile_AbstractCraftingRecipe
{
	name = "Crafted M1014";
	pictureItem = "Exile_Weapon_M1014";
	returnedItems[] =
	{
		{1, "Exile_Weapon_M1014"}
	};
	tools[] =
	{
		{1, "Exile_Item_CordlessScrewdriver"},
		{1, "Exile_Item_Grinder"}
	};
	components[] =
	{
		{1, "Exile_Item_WeaponParts"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_PlasticBottleEmpty"}
	};
};
	
class CraftedBlackRubberDuck: Exile_AbstractCraftingRecipe
{
	name = "Crafted Black Rubber Duck";
	pictureItem = "Exile_Boat_RubberDuck_Black";
	returnedItems[] =
	{
		{1, "Exile_Boat_RubberDuck_Black"}
	};
	tools[] =
	{
		{1, "Exile_Item_Grinder"},
		{1, "Exile_Item_Pliers"}
	};
	components[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"},
		{2, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_CarWheel"},
		{5, "Exile_Item_DuctTape"}
	};
};

class CraftedDefibrillator: Exile_AbstractCraftingRecipe
{
	name = "Crafted Defibrillator";
	pictureItem = "Exile_Item_Defibrillator";
	returnedItems[] =
	{
		{1, "Exile_Item_Defibrillator"}
	};
	tools[] =
	{
		{1, "Exile_Item_Screwdriver"},
		{1, "Exile_Item_Grinder"}
	};
	components[] =
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_PortableGeneratorKit"},
		{1, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_ZipTie"}
	};
};

class BreachingChargeBigMomma: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Big Momma)";
	pictureItem = "Exile_Item_BreachingCharge_BigMomma";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_BigMomma"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{3, "Exile_Item_BreachingCharge_Metal"},
		{1, "Exile_Item_MobilePhone"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_ZipTie"}
	};
};

class BreachingChargeMetal: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Metal)";
	pictureItem = "Exile_Item_BreachingCharge_Metal";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Metal"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "SatchelCharge_Remote_Mag"}
	};
};

class BreachingChargeWood: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Wood)";
	pictureItem = "Exile_Item_BreachingCharge_Wood";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Wood"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "DemoCharge_Remote_Mag"}
	};
};

class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_BBQSandwich"}
	};
};

class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_DogFood"}
	};
};

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
};

class CookMacasCheese: Exile_AbstractCraftingRecipe
{
	name = "Cook Macas Cheese";
	pictureItem = "Exile_Item_MacasCheese_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MacasCheese_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MacasCheese"}
	};
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SausageGravy"}
	};
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_Surstromming"}
	};
};

class CraftBandage: Exile_AbstractCraftingRecipe
{
	name = "Craft Bandage";
	pictureItem = "Exile_Item_Bandage";
	returnedItems[] =
	{
		{1, "Exile_Item_Bandage"}
	};
	components[] = 
	{
		{4, "Exile_Item_ToiletPaper"}
	};
};

class CraftConcreteDoorway: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Doorway";
	pictureItem = "Exile_Item_ConcreteDoorwayKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor";
	pictureItem = "Exile_Item_ConcreteFloorKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteGateKit"},
		{4, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_MetalPole"},
		{4, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcretStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Stairs";
	pictureItem = "Exile_Item_ConcreteStairsKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteStairsKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcretSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Support";
	pictureItem = "Exile_Item_ConcreteSupportKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteSupportKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Wall";
	pictureItem = "Exile_Item_ConcreteWallKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe
{
	name = "Craft H-barrier (5 Blocks)";
	pictureItem = "Exile_Item_HBarrier5Kit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Pliers"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_HBarrier5Kit"}
	};
	components[] = 
	{
		{3, "Exile_Item_SandBagsKit_Long"},
		{2, "Exile_Item_MetalWire"}
	};
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftRazorWireKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Razor Wire Kit Kit";
	pictureItem = "Exile_Item_RazorWireKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_RazorWireKit_Long"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftRepairKitConcrete: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Repair Kit";
	pictureItem = "Exile_Item_Cement";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitConcrete"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftRepairKitMetal: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Repair Kit";
	pictureItem = "Exile_Item_RepairKitMetal";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitMetal"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};
};
class CraftRepairKitWood: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Repair Kit";
	pictureItem = "Exile_Item_RepairKitWood";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox"
	};
};
class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe
{
	name = "Craft Sandbags Kit (Corner)";
	pictureItem = "Exile_Item_SandBagsKit_Corner";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Corner"}
	};
	components[] = 
	{
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_BurlapSack"}
	};
};
class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe
{
	name = "Craft Sand Bags Kit (Long)";
	pictureItem = "Exile_Item_SandBagsKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Long"}
	};
	components[] = 
	{
		{6, "Exile_Item_Sand"},
		{6, "Exile_Item_BurlapSack"}
	};
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	tools[] =
	{
		{1, "Exile_Item_CordlessScrewdriver"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name = "Craft Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	components[] = 
	{
		{20, "Exile_Item_PlasticBottleEmpty"}
	};
};
class CraftWireFenceKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Wire Fence Kit";
	pictureItem = "Exile_Item_WireFenceKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_WireFenceKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{6, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Draw Bridge";
	pictureItem = "Exile_Item_WoodDrawBridgeKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	components[] =
	{
		{8, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPortSmall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port (Small)";
	pictureItem = "Exile_Item_WoodFloorPortSmallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodFloorPortSmallKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodLadder: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Ladder";
	pictureItem = "Exile_Item_WoodLadderKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodLadderKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
};
class CookAlsatianSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Alsatian Steak";
	pictureItem = "Exile_Item_AlsatianSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_AlsatianSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_AlsatianSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookCatSharkFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Shark Filet";
	pictureItem = "Exile_Item_CatSharkFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatSharkFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatSharkFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookChickenFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Chicken Filet";
	pictureItem = "Exile_Item_ChickenFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChickenFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChickenFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookFinSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Fin Steak";
	pictureItem = "Exile_Item_FinSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_FinSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_FinSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookGoatSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Goat Steak";
	pictureItem = "Exile_Item_GoatSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GoatSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GoatSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookMackerelFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Mackerel Filet";
	pictureItem = "Exile_Item_MackerelFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MackerelFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MackerelFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookMulletFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Mullet Filet";
	pictureItem = "Exile_Item_MulletFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MulletFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MulletFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookOrnateFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Ornate Filet";
	pictureItem = "Exile_Item_OrnateFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_OrnateFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_OrnateFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookRabbitSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Rabbit Steak";
	pictureItem = "Exile_Item_RabbitSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_RabbitSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_RabbitSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookRoosterFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Rooster Filet";
	pictureItem = "Exile_Item_RoosterFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_RoosterFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_RoosterFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookSalemaFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Salema Filet";
	pictureItem = "Exile_Item_SalemaFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SalemaFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SalemaFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookSheepSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Sheep Steak";
	pictureItem = "Exile_Item_SheepSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SheepSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SheepSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookSnakeFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Snake Filet";
	pictureItem = "Exile_Item_SnakeFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SnakeFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SnakeFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookTunaFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Tuna Filet";
	pictureItem = "Exile_Item_TunaFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_TunaFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_TunaFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookTurtleFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Turtle Filet";
	pictureItem = "Exile_Item_TurtleFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_TurtleFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_TurtleFilet_Raw"}
	};
};


class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_WaterCanisterDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
class UpgradeToConcreteDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Door";
	pictureItem = "Exile_Item_ConcreteDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Window";
	pictureItem = "Exile_Item_ConcreteWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Draw Bridge";
	pictureItem = "Exile_Item_WoodDrawBridgeKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodGateKit"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
};
class CfgExileAnimals
{
	/**
	 * Should animals spawn on your server? Y/N?
	 */
	enabled = 1;

	/**
	 * Should vanilla Arma animals (fish, rabbits, bees, etc.) be disabled?
	 * We think it should, since it might confuse players if they cant eat them. *munches on bees*
	 */
	disableVanillaAnimals = 1;

	/**
	 * Which animals to spawn. 
	 * Exile automatically spawns a color variation of that animal, if variations exist.
	 * Each player (client) has a maximum of one animal at a time.
	 * Exile checks which animal type can spawn in front of the player and then
	 * picks a random one. 
	 *
	 * For now it is like this:
	 * 
	 * - Goats spawn on hill tops, but not in forests
	 * - Sheep spawn on meadows, but not next to forests and not on hill tops
	 * - Hens and roosters spawn next to buildings only
	 *
	 * => More animal types will follow in upcoming Exile versions, hopefully.
	 */
	animalTypes[] = 
	{
		"Exile_Animal_Rooster_Abstract",
		"Exile_Animal_Hen_Abstract",
		"Exile_Animal_Goat_Abstract",
		"Exile_Animal_Sheep_Abstract"
	};

	/**
	 * Animals are always spawned in front of the player, but
	 * at least a certain distance away. The radius is applied on top.
	 *
	 * Example:
	 * Distance = 150
	 * Radius = 50
	 *
	 * => Minimum Distance from Player = 150 
	 * => Maximum Distance from Player = 150 + 50 * 2
	 */
	spawnDistance = 150;
	spawnRadius = 50;

	/**
	 * Specifies the minimum time in seconds between spawning animals.
	 * When the animal diededed, this time has to pass before it spawns
	 * a new one.
	 *
	 * It is a min/max setting, so the intervals will be uneven and a bit random.
	 * By default it will take 5 to 10 minutes to respawn a new animal.
	 */
	minimumSpawnDelay = 5 * 60;
	maximumSpawnDelay = 10 * 60;

	/**
	 * Clients will despawn animals if no player is in this radius around the animal
	 * This check is ran every 1 minute, so it is pretty unprecise, but performance-friendly. 
	 */
	keepAliveRadius = 500;

	/**
	 * Defines the minimum lifetime of an animal in seconds. During this time, right after spawning,
	 * it will not despawn. (+-0..1 minute delay)
	 */
	minimumLifetime = 5 * 60;
};
class CfgExileArsenal
{
	
#include "EBM\prices.hpp"

	
	
//	EQUIPMENT TRADER

	
	
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };

	
	
	///////////////////////
	// Civilian Clothing //
	///////////////////////
	
	class U_C_Journalist 							{ quality = 1; price = 100; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 100; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 100; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 100; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 100; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 100; };
	class U_C_Scientist 							{ quality = 1; price = 100; };
	class U_OrestesBody 							{ quality = 1; price = 100; };
	class U_Rangemaster 							{ quality = 1; price = 100; };
	class U_NikosAgedBody 							{ quality = 1; price = 100; };
	class U_NikosBody 								{ quality = 1; price = 100; };
	class U_Competitor 								{ quality = 1; price = 200; };
	class U_C_Poor_1 								{ quality = 1; price = 200; };
	class U_C_Poor_2 								{ quality = 1; price = 200; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 200; };
	
	//	APEX DLC
	class U_C_man_sport_1_F           				{ quality = 1; price = 100; };
	class U_C_man_sport_2_F           				{ quality = 1; price = 100; };
	class U_C_man_sport_3_F           				{ quality = 1; price = 100; };
	class U_C_Man_casual_1_F          				{ quality = 1; price = 200; };
	class U_C_Man_casual_2_F          				{ quality = 1; price = 200; };
	class U_C_Man_casual_3_F          				{ quality = 1; price = 200; };
	class U_C_Man_casual_4_F          				{ quality = 1; price = 200; };
	class U_C_Man_casual_5_F          				{ quality = 1; price = 200; };
	class U_C_Man_casual_6_F          				{ quality = 1; price = 200; };
	
	
	//////////////////////
	// Soldier Uniforms //
	//////////////////////
	
	class U_B_CombatUniform_mcam 					{ quality = 2; price = 700; };
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 2; price = 700; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 2; price = 700; };
	class U_B_CombatUniform_mcam_worn 				{ quality = 2; price = 700; };
	class U_B_CTRG_1 								{ quality = 2; price = 700; };
	class U_B_CTRG_2 								{ quality = 2; price = 700; };
	class U_B_CTRG_3								{ quality = 2; price = 700; };
	class U_I_CombatUniform 						{ quality = 2; price = 700; };
	class U_I_CombatUniform_shortsleeve				{ quality = 2; price = 700; };
	class U_I_CombatUniform_tshirt					{ quality = 2; price = 700; };
	class U_I_OfficerUniform						{ quality = 2; price = 700; };
	class U_O_CombatUniform_ocamo 					{ quality = 2; price = 700; };
	class U_O_CombatUniform_oucamo 					{ quality = 2; price = 700; };
	class U_O_OfficerUniform_ocamo 					{ quality = 2; price = 700; };
	class U_B_SpecopsUniform_sgg 					{ quality = 2; price = 700; };
	class U_O_SpecopsUniform_blk 					{ quality = 2; price = 700; };
	class U_O_SpecopsUniform_ocamo 					{ quality = 2; price = 700; };
	class U_I_G_Story_Protagonist_F 				{ quality = 2; price = 700; };
	class Exile_Uniform_Woodland 					{ quality = 3; price = 4000; };
	
	//	APEX DLC
	class U_B_T_Soldier_F             				{ quality = 2; price = 700; };
	class U_B_T_Soldier_AR_F          				{ quality = 2; price = 700; };	
	class U_B_T_Soldier_SL_F          				{ quality = 2; price = 700; };
	class U_B_CTRG_Soldier_F          				{ quality = 2; price = 700; };
	class U_B_CTRG_Soldier_2_F        				{ quality = 2; price = 700; };
	class U_B_CTRG_Soldier_3_F        				{ quality = 2; price = 700; };
	class U_B_GEN_Soldier_F           				{ quality = 2; price = 700; };
	class U_B_GEN_Commander_F         				{ quality = 2; price = 700; };
	class U_O_T_Soldier_F             				{ quality = 2; price = 700; };
	class U_O_T_Officer_F             				{ quality = 3; price = 700; };
	class U_I_C_Soldier_Para_1_F      				{ quality = 2; price = 700; };
	class U_I_C_Soldier_Para_2_F      				{ quality = 2; price = 700; };
	class U_I_C_Soldier_Para_3_F      				{ quality = 2; price = 700; };
	class U_I_C_Soldier_Para_4_F      				{ quality = 2; price = 700; };
	class U_I_C_Soldier_Para_5_F      				{ quality = 2; price = 700; };
	class U_I_C_Soldier_Bandit_1_F    				{ quality = 2; price = 700; };
	class U_I_C_Soldier_Bandit_2_F    				{ quality = 2; price = 700; };
	class U_I_C_Soldier_Bandit_3_F    				{ quality = 2; price = 700; };
	class U_I_C_Soldier_Bandit_4_F    				{ quality = 2; price = 700; };
	class U_I_C_Soldier_Bandit_5_F   				{ quality = 2; price = 700; };
	class U_I_C_Soldier_Camo_F        				{ quality = 2; price = 700; };
	class U_B_CTRG_Soldier_urb_1_F    				{ quality = 2; price = 700; };
	class U_B_CTRG_Soldier_urb_2_F    				{ quality = 2; price = 700; };
	class U_B_CTRG_Soldier_urb_3_F    				{ quality = 2; price = 700; };
	class U_O_V_Soldier_Viper_F       				{ quality = 6; price = 2500; };
	class U_O_V_Soldier_Viper_hex_F   				{ quality = 6; price = 2500; };
	
	///////////////////////
	// Guerilla Uniforms //
	///////////////////////
	
	class U_IG_Guerilla1_1							{ quality = 2; price = 300; };
	class U_IG_Guerilla2_1							{ quality = 2; price = 300; };
	class U_IG_Guerilla2_2							{ quality = 2; price = 300; };
	class U_IG_Guerilla2_3							{ quality = 2; price = 3000; };
	class U_IG_Guerilla3_1							{ quality = 2; price = 2500; };
	class U_BG_Guerilla2_1							{ quality = 2; price = 300; };
	class U_IG_Guerilla3_2							{ quality = 2; price = 2500; };
	class U_BG_Guerrilla_6_1						{ quality = 2; price = 300; };
	class U_BG_Guerilla1_1							{ quality = 2; price = 300; };
	class U_BG_Guerilla2_2							{ quality = 2; price = 300; };
	class U_BG_Guerilla2_3							{ quality = 2; price = 300; };
	class U_IG_leader								{ quality = 3; price = 750; };
	
	//	REMOVED
	//class U_BG_Guerilla3_1						{ quality = 2; price = 2500; };
	//class U_BG_leader								{ quality = 3; price = 40; };
	//class U_I_G_resistanceLeader_F				{ quality = 3; price = 100; };
	//class U_C_HunterBody_grn						{ quality = 2; price = 40; };

	
	
	///////////////////
	// Ghillie Suits //
	///////////////////
	
	class U_B_T_Sniper_F              				{ quality = 3; price = 3000; };
	class U_B_T_FullGhillie_tna_F     				{ quality = 6; price = 5000; };
	class U_B_FullGhillie_ard						{ quality = 6; price = 5000; };
	class U_B_FullGhillie_lsh						{ quality = 6; price = 5000; };
	class U_B_FullGhillie_sard						{ quality = 6; price = 5000; };
	class U_B_GhillieSuit							{ quality = 3; price = 3000; };
	class U_I_FullGhillie_ard						{ quality = 6; price = 5000; };
	class U_I_FullGhillie_lsh						{ quality = 6; price = 5000; };
	class U_I_FullGhillie_sard						{ quality = 6; price = 5000; };
	class U_I_GhillieSuit							{ quality = 3; price = 3000; };
	class U_O_FullGhillie_ard						{ quality = 6; price = 5000; };
	class U_O_FullGhillie_lsh						{ quality = 6; price = 5000; };
	class U_O_FullGhillie_sard						{ quality = 6; price = 5000; };
	class U_O_GhillieSuit							{ quality = 3; price = 3000; };

	//	APEX DLC
	class U_O_T_Sniper_F              				{ quality = 3; price = 3000; };
	class U_O_T_FullGhillie_tna_F     				{ quality = 6; price = 5000; };
	
	
	////////////////
	// Bandoliers //
	////////////////
	
	class V_BandollierB_blk							{ quality = 1; price = 500; };
	class V_BandollierB_cbr							{ quality = 1; price = 500; };
	class V_BandollierB_khk							{ quality = 1; price = 500; };
	class V_BandollierB_oli							{ quality = 1; price = 500; };
	class V_BandollierB_rgr							{ quality = 1; price = 500; };
	class V_BandollierB_ghex_F        				{ quality = 1; price = 500; };

	
	
	////////////////
	// Chest Rigs //
	////////////////
	
	class V_Chestrig_blk 							{ quality = 1; price = 800; };
	class V_Chestrig_khk 							{ quality = 1; price = 800; };
	class V_Chestrig_oli 							{ quality = 1; price = 800; };
	class V_Chestrig_rgr 							{ quality = 1; price = 800; };

	
	
	/////////////////////////
	// Tactical Chest Rigs //
	/////////////////////////
	
	class V_TacVest_blk								{ quality = 2; price = 1500; };
	class V_TacVest_brn								{ quality = 2; price = 1500; };
	class V_TacVest_camo							{ quality = 2; price = 1500; };
	class V_TacVest_khk								{ quality = 2; price = 1500; };
	class V_TacVest_oli								{ quality = 2; price = 1500; };
	
	//	APEX DLC
	class V_TacChestrig_grn_F         				{ quality = 2; price = 1500; };
	class V_TacChestrig_oli_F         				{ quality = 2; price = 1500; };
	class V_TacChestrig_cbr_F         				{ quality = 2; price = 1500; };
	
	//	REMOVED
	//class V_TacVest_blk_POLICE					{ quality = 3; price = 2000; };
	//class V_TacVest_gen_F             			{ quality = 1; price = 1000; };
	
	
	
	///////////////
	// Shit Ones //
	///////////////
	
	class V_Rangemaster_belt						{ quality = 1; price = 100; };
	
	//	REMOVED
	//class V_Press_F								{ quality = 1; price = 200; };
	//class V_I_G_resistanceLeader_F				{ quality = 2; price = 1500; };
	//class V_TacVestCamo_khk						{ quality = 2; price = 1500; };
	//class V_TacVestIR_blk							{ quality = 2; price = 1500; };

	
	
	///////////////
	// Harnesses //
	///////////////
	
	class V_HarnessO_brn							{ quality = 2; price = 750; };
	class V_HarnessO_gry							{ quality = 2; price = 750; };
	class V_HarnessOGL_brn							{ quality = 2; price = 750; };
	class V_HarnessOGL_gry							{ quality = 2; price = 750; };
	class V_HarnessO_ghex_F           				{ quality = 2; price = 750; };
	class V_HarnessOGL_ghex_F         				{ quality = 2; price = 750; };
	
	//	REMOVED
	//class V_HarnessOSpec_brn						{ quality = 1; price = 750; };
	//class V_HarnessOSpec_gry						{ quality = 1; price = 750; };

	
	
	/////////////////////////
	// CTRG Plate Carriers //
	/////////////////////////
	
	class V_PlateCarrierL_CTRG 						{ quality = 2; price = 2000; };
	class V_PlateCarrierH_CTRG 						{ quality = 3; price = 3250; };
	
	// REMOVED
	//class V_PlateCarrier1_rgr_noflag_F				{ quality = 2; price = 50; };
	//class V_PlateCarrier2_rgr_noflag_F				{ quality = 2; price = 60; };
	
	
	//////////////////
	// Carrier Lite //
	//////////////////
	
	class V_PlateCarrier1_blk 						{ quality = 2; price = 2000; };	// Carrier Lite Black
	class V_PlateCarrier1_rgr 						{ quality = 2; price = 2000; }; // Carrier Lite Green
	class V_PlateCarrier1_tna_F       				{ quality = 2; price = 2000; }; // Carrier Lite Tropic
	
	//	REMOVED
	//class V_PlateCarrierIA1_dgtl 					{ quality = 2; price = 1750; };	// GA Carrier Lite Digi
	
	
	
	//////////////////
	// Carrier Rigs //
	//////////////////
	
	class V_PlateCarrier3_rgr 						{ quality = 3; price = 3000; }; // Carrier Rig Green
	class V_PlateCarrier2_tna_F       				{ quality = 3; price = 3000; }; // Carrier Rig Tropic
	
	//	REMOVED
	//class V_PlateCarrierIA2_dgtl 					{ quality = 2; price = 1750; };	// GA Carrier Rig Digi
	
	
	
	////////////////////////
	// GA Carrier GL Rigs //
	////////////////////////	
	
	class V_PlateCarrierIAGL_dgtl 					{ quality = 4; price = 5000; };	// GA Carrier GL Rig Digi
	class V_PlateCarrierIAGL_oli 					{ quality = 4; price = 5000; }; // GA Carrier GL Rig Olive
	
	
	
	/////////////////////////
	// Carrier Special Rig //
	/////////////////////////
	
	class V_PlateCarrierSpec_blk 					{ quality = 5; price = 3500; };
	class V_PlateCarrierSpec_mtp 					{ quality = 5; price = 3500; };
	class V_PlateCarrierSpec_rgr 					{ quality = 5; price = 3500; };
	class V_PlateCarrierSpec_tna_F    				{ quality = 5; price = 3500; };
	
	
	
	////////////////////
	// Carrier GL Rig //
	////////////////////
	
	class V_PlateCarrierGL_blk 						{ quality = 6; price = 6000; };
	class V_PlateCarrierGL_mtp 						{ quality = 6; price = 6000; };
	class V_PlateCarrierGL_rgr 						{ quality = 6; price = 6000; };
	class V_PlateCarrierGL_tna_F      				{ quality = 6; price = 6000; };

	
	
	//////////
	// Caps //
	//////////
	
	class H_Cap_blk 								{ quality = 1; price = 350; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 350; };
	class H_Cap_blu 								{ quality = 1; price = 350; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 350; };
	class H_Cap_grn 								{ quality = 1; price = 350; };
	class H_Cap_headphones 							{ quality = 1; price = 350; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 350; };
	class H_Cap_oli 								{ quality = 1; price = 350; };
	class H_Cap_press 								{ quality = 1; price = 350; };
	class H_Cap_red 								{ quality = 1; price = 350; };
	class H_Cap_tan 								{ quality = 1; price = 350; };
	class H_Cap_tan_specops_US 						{ quality = 1; price = 350; };
	
	//	APEX DLC
	class H_Cap_oli_Syndikat_F        				{ quality = 1; price = 350; };
	class H_Cap_tan_Syndikat_F        				{ quality = 1; price = 350; };
	class H_Cap_blk_Syndikat_F        				{ quality = 1; price = 350; };
	class H_Cap_grn_Syndikat_F        				{ quality = 1; price = 350; };
	class H_FakeHeadgear_Syndikat_F   				{ quality = 1; price = 350; };

	
	
	/////////////
	// Glasses //
	/////////////
	
	class G_Spectacles			 					{ quality = 1; price = 100; };
	class G_Spectacles_Tinted						{ quality = 1; price = 100; };
	class G_Combat			 						{ quality = 1; price = 500; };
	class G_Lowprofile			 					{ quality = 1; price = 500; };
	class G_Shades_Black				 			{ quality = 1; price = 100; };
	class G_Shades_Green				 			{ quality = 1; price = 100; };
	class G_Shades_Red			 					{ quality = 1; price = 100; };
	class G_Squares			 						{ quality = 1; price = 100; };
	class G_Squares_Tinted				 			{ quality = 1; price = 100; };
	class G_Sport_BlackWhite						{ quality = 1; price = 100; };
	class G_Sport_Blackyellow						{ quality = 1; price = 100; };
	class G_Sport_Greenblack						{ quality = 1; price = 100; };
	class G_Sport_Checkered				 			{ quality = 1; price = 100; };
	class G_Sport_Red			 					{ quality = 1; price = 100; };
	class G_Tactical_Black				 			{ quality = 1; price = 100; };
	class G_Aviator			 						{ quality = 1; price = 100; };
	class G_Lady_Mirror			 					{ quality = 1; price = 100; };
	class G_Lady_Dark			 					{ quality = 1; price = 100; };
	class G_Lady_Red			 					{ quality = 1; price = 100; };
	class G_Lady_Blue			 					{ quality = 1; price = 100; };
	class G_Balaclava_blk			 				{ quality = 2; price = 500; };
	class G_Balaclava_oli			 				{ quality = 2; price = 500; };
	class G_Bandanna_blk			 				{ quality = 1; price = 100; };
	class G_Bandanna_oli			 				{ quality = 1; price = 100; };
	class G_Bandanna_khk			 				{ quality = 1; price = 100; };
	class G_Bandanna_tan			 				{ quality = 1; price = 100; };
	class G_Shades_Blue			 					{ quality = 1; price = 100; };
	class G_Sport_Blackred			 				{ quality = 1; price = 100; };
	class G_Tactical_Clear			 				{ quality = 1; price = 100; };
	class G_Bandanna_beast			 				{ quality = 1; price = 150; };
	class G_Bandanna_shades			 				{ quality = 1; price = 250; };
	class G_Bandanna_sport			 				{ quality = 1; price = 250; };
	class G_Bandanna_aviator						{ quality = 1; price = 250; };
	class G_Goggles_VR			 					{ quality = 1; price = 1000; };
	class G_Balaclava_combat						{ quality = 2; price = 1000; };
	class G_Balaclava_lowprofile					{ quality = 2; price = 1000; };
	class G_Balaclava_TI_blk_F						{ quality = 2; price = 1500; };
	class G_Balaclava_TI_tna_F						{ quality = 2; price = 1500; };
	class G_Balaclava_TI_G_blk_F					{ quality = 2; price = 2000; };
	class G_Balaclava_TI_G_tna_F					{ quality = 2; price = 2000; };
	class G_Combat_Goggles_tna_F					{ quality = 1; price = 500; };

	
	
	///////////////////
	// Military Caps //
	///////////////////
	
	class H_MilCap_blue 							{ quality = 1; price = 500; };
	class H_MilCap_dgtl 							{ quality = 1; price = 500; };
	class H_MilCap_mcamo 							{ quality = 1; price = 500; };
	class H_MilCap_ocamo 							{ quality = 1; price = 500; };
	class H_MilCap_oucamo 							{ quality = 1; price = 500; };
	class H_MilCap_rucamo 							{ quality = 1; price = 500; };
	
	//	APEX DLC
	class H_MilCap_tna_F              				{ quality = 1; price = 500; };
	class H_MilCap_ghex_F             				{ quality = 1; price = 500; };
	class H_MilCap_gen_F              				{ quality = 1; price = 500; };
	
	
	/////////////
	// Beanies //
	/////////////
	
	class H_Watchcap_blk 							{ quality = 1; price = 250; };
	class H_Watchcap_camo 							{ quality = 1; price = 250; };
	class H_Watchcap_khk 							{ quality = 1; price = 250; };
	class H_Watchcap_sgg 							{ quality = 1; price = 250; };

	
	
	///////////////
	// Bandannas //
	///////////////
	
	class H_Bandanna_camo							{ quality = 1; price = 200; };
	class H_Bandanna_cbr							{ quality = 1; price = 200; };
	class H_Bandanna_gry							{ quality = 1; price = 200; };
	class H_Bandanna_khk							{ quality = 1; price = 200; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 200; };
	class H_Bandanna_mcamo							{ quality = 1; price = 200; };
	class H_Bandanna_sgg							{ quality = 1; price = 200; };
	class H_Bandanna_surfer							{ quality = 1; price = 200; };

	
	
	/////////////////
	// Boonie Hats //
	/////////////////
	
	class H_Booniehat_dgtl							{ quality = 1; price = 300; };
	class H_Booniehat_dirty							{ quality = 1; price = 300; };
	class H_Booniehat_grn							{ quality = 1; price = 300; };
	class H_Booniehat_indp							{ quality = 1; price = 300; };
	class H_Booniehat_khk							{ quality = 1; price = 300; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 300; };
	class H_Booniehat_mcamo							{ quality = 1; price = 300; };
	class H_Booniehat_tan							{ quality = 1; price = 300; };
	class H_Booniehat_tna_F           				{ quality = 1; price = 300; };

	
	
	//////////
	// Hats //
	//////////
	
	class H_Hat_blue								{ quality = 1; price = 350; };
	class H_Hat_brown								{ quality = 1; price = 350; };
	class H_Hat_camo								{ quality = 1; price = 350; };
	class H_Hat_checker								{ quality = 1; price = 350; };
	class H_Hat_grey								{ quality = 1; price = 350; };
	class H_Hat_tan									{ quality = 1; price = 350; };
	class H_StrawHat								{ quality = 1; price = 350; };
	class H_StrawHat_dark							{ quality = 1; price = 350; };
	class Exile_Headgear_SantaHat					{ quality = 1; price = 35000; };
	class Exile_Headgear_SafetyHelmet				{ quality = 1; price = 15000; };
	class H_Helmet_Skate              				{ quality = 2; price = 5000; };

	
	
	////////////
	// Berets //
	////////////
	
	class H_Beret_02								{ quality = 2; price = 500; };
	class H_Beret_blk								{ quality = 2; price = 500; };
	class H_Beret_blk_POLICE						{ quality = 2; price = 500; };
	class H_Beret_brn_SF							{ quality = 2; price = 500; };
	class H_Beret_Colonel							{ quality = 2; price = 500; };
	class H_Beret_grn								{ quality = 2; price = 500; };
	class H_Beret_grn_SF							{ quality = 2; price = 500; };
	class H_Beret_ocamo								{ quality = 2; price = 500; };
	class H_Beret_red								{ quality = 2; price = 500; };
	class H_Beret_gen_F              				{ quality = 2; price = 500; };

	
	
	/////////////
	// Shemags //
	/////////////
	
	class H_Shemag_khk								{ quality = 1; price = 500; };
	class H_Shemag_olive							{ quality = 1; price = 500; };
	class H_Shemag_olive_hs							{ quality = 1; price = 500; };
	class H_Shemag_tan								{ quality = 1; price = 500; };
	class H_ShemagOpen_khk							{ quality = 1; price = 500; };
	class H_ShemagOpen_tan							{ quality = 1; price = 500; };
	
	//	REMOVED
	//class H_TurbanO_blk							{ quality = 1; price = 500; };

	
	
	//////////////////////////
	// Light Combat Helmets //
	//////////////////////////
	
	class H_HelmetB_light							{ quality = 2; price = 1000; };
	class H_HelmetB_light_black						{ quality = 2; price = 1000; };
	class H_HelmetB_light_desert					{ quality = 2; price = 1000; };
	class H_HelmetB_light_grass						{ quality = 2; price = 1000; };
	class H_HelmetB_light_sand						{ quality = 2; price = 1000; };
	class H_HelmetB_light_snakeskin					{ quality = 2; price = 1000; };
	class H_HelmetB_Light_tna_F       				{ quality = 2; price = 1000; };

	
	
	////////////////////
	// Combat Helmets //
	////////////////////
	
	class H_HelmetB									{ quality = 3; price = 1250; };
	class H_HelmetB_black							{ quality = 3; price = 1250; };
	class H_HelmetB_camo							{ quality = 3; price = 1250; };
	class H_HelmetB_desert							{ quality = 3; price = 1250; };
	class H_HelmetB_grass							{ quality = 3; price = 1250; };
	class H_HelmetB_paint							{ quality = 3; price = 1250; };
	class H_HelmetB_plain_blk						{ quality = 3; price = 1250; };
	class H_HelmetB_sand							{ quality = 3; price = 1250; };
	class H_HelmetB_snakeskin						{ quality = 3; price = 1250; };
	class H_HelmetB_tna_F             				{ quality = 3; price = 1250; };
	
	// REMOVED
	//class H_HelmetIA								{ quality = 3; price = 1250; };
	//class H_HelmetIA_camo							{ quality = 3; price = 1250; };
	//class H_HelmetIA_net							{ quality = 3; price = 1250; };

	
	
	/////////////////////////////
	// Enhanced Combat Helmets //
	/////////////////////////////
	
	class H_HelmetSpecB								{ quality = 4; price = 2000; };
	class H_HelmetSpecB_blk							{ quality = 4; price = 2000; };
	class H_HelmetSpecB_paint1						{ quality = 4; price = 2000; };
	class H_HelmetSpecB_paint2						{ quality = 4; price = 2000; };
	class H_HelmetB_Enh_tna_F         				{ quality = 4; price = 2000; };
	class H_HelmetB_TI_tna_F          				{ quality = 4; price = 2000; };

	
	
	///////////////////////
	// Protector Helmets //
	///////////////////////
	
	class H_HelmetO_ocamo							{ quality = 5; price = 2500; };
	class H_HelmetO_oucamo							{ quality = 5; price = 2500; };
	class H_HelmetO_ghex_F            				{ quality = 5; price = 2500; };
	
	
	
	//////////////////////
	// Assassin Helmets //
	//////////////////////
	
	class H_HelmetSpecO_blk							{ quality = 5; price = 3000; };
	class H_HelmetSpecO_ocamo						{ quality = 5; price = 3000; };
	class H_HelmetSpecO_ghex_F        				{ quality = 5; price = 3000; };
	
	
	
	//////////////////////
	// Defender Helmets //
	//////////////////////
	
	class H_HelmetLeaderO_ocamo						{ quality = 6; price = 4000; };
	class H_HelmetLeaderO_oucamo					{ quality = 6; price = 4000; };
	class H_HelmetLeaderO_ghex_F      				{ quality = 6; price = 4000; };
	
	
	
	/////////////////
	// Pilot Stuff //
	/////////////////
	
	class B_Parachute								{ quality = 3; price = 1000; };
	class H_CrewHelmetHeli_B						{ quality = 3; price = 1750; };
	class H_CrewHelmetHeli_I						{ quality = 3; price = 1750; };
	class H_CrewHelmetHeli_O						{ quality = 3; price = 1750; };
	class H_HelmetCrew_I							{ quality = 3; price = 1500; };
	class H_HelmetCrew_B							{ quality = 3; price = 1500; };
	class H_HelmetCrew_O							{ quality = 3; price = 1500; };
	class H_PilotHelmetHeli_B						{ quality = 4; price = 1750; };
	class H_PilotHelmetHeli_I						{ quality = 4; price = 1750; };
	class H_PilotHelmetHeli_O						{ quality = 4; price = 1750; };
	class U_B_HeliPilotCoveralls					{ quality = 4; price = 1000; };
	class U_B_PilotCoveralls						{ quality = 2; price = 1000; };
	class U_I_HeliPilotCoveralls					{ quality = 2; price = 1000; };
	class U_I_pilotCoveralls						{ quality = 2; price = 1000; };
	class U_O_PilotCoveralls						{ quality = 2; price = 1000; };
	class H_PilotHelmetFighter_B					{ quality = 5; price = 1750; };
	class H_PilotHelmetFighter_I					{ quality = 5; price = 1750; };
	class H_PilotHelmetFighter_O					{ quality = 5; price = 1750; };
	
	//	APEX DLC
	class H_HelmetCrew_O_ghex_F       				{ quality = 3; price = 1750; };

	
	
	///////////////
	// Backpacks //
	///////////////
	
	class B_OutdoorPack_blk							{ quality = 1; price = 2000; };
	class B_OutdoorPack_blu							{ quality = 1; price = 2000; };
	class B_OutdoorPack_tan							{ quality = 1; price = 2000; };
	
	class B_AssaultPack_blk							{ quality = 1; price = 3000; };
	class B_AssaultPack_cbr							{ quality = 1; price = 3000; };
	class B_AssaultPack_dgtl						{ quality = 1; price = 3000; };
	class B_AssaultPack_khk							{ quality = 1; price = 3000; };
	class B_AssaultPack_mcamo						{ quality = 1; price = 3000; };
	class B_AssaultPack_rgr							{ quality = 1; price = 3000; };
	class B_AssaultPack_sgg							{ quality = 1; price = 3000; };
	class B_AssaultPack_tna_F               		{ quality = 1; price = 3000; };
	
	class B_FieldPack_blk							{ quality = 2; price = 4000; };
	class B_FieldPack_cbr							{ quality = 2; price = 4000; };
	class B_FieldPack_ocamo							{ quality = 2; price = 4000; };
	class B_FieldPack_oucamo						{ quality = 2; price = 4000; };
	class B_FieldPack_ghex_F                		{ quality = 2; price = 4000; };
	
	class B_TacticalPack_blk						{ quality = 2; price = 5000; };
	class B_TacticalPack_rgr						{ quality = 2; price = 5000; };
	class B_TacticalPack_ocamo						{ quality = 2; price = 5000; };
	class B_TacticalPack_mcamo						{ quality = 2; price = 5000; };
	class B_TacticalPack_oli						{ quality = 2; price = 5000; };
	
	// Apex DLC
	class B_ViperLightHarness_base_F        		{ quality = 3; price = 6000; };
	class B_ViperLightHarness_blk_F         		{ quality = 3; price = 6000; };
	class B_ViperLightHarness_ghex_F        		{ quality = 3; price = 6000; };
	class B_ViperLightHarness_hex_F         		{ quality = 3; price = 6000; };
	class B_ViperLightHarness_khk_F         		{ quality = 3; price = 6000; };
	class B_ViperLightHarness_oli_F         		{ quality = 3; price = 6000; };
	
	class B_Kitbag_cbr								{ quality = 3; price = 7000; };
	class B_Kitbag_mcamo							{ quality = 3; price = 7000; };
	class B_Kitbag_sgg								{ quality = 3; price = 7000; };
	class B_Bergen_blk								{ quality = 3; price = 7000; };
	class B_Bergen_mcamo							{ quality = 3; price = 7000; };
	class B_Bergen_rgr								{ quality = 3; price = 7000; };
	class B_Bergen_sgg								{ quality = 3; price = 7000; };
	
	// Apex DLC
	class B_ViperHarness_base_F             		{ quality = 4; price = 8000; };
	class B_ViperHarness_blk_F              		{ quality = 4; price = 8000; };
	class B_ViperHarness_ghex_F             		{ quality = 4; price = 8000; };
	class B_ViperHarness_hex_F              		{ quality = 4; price = 8000; };
	class B_ViperHarness_khk_F              		{ quality = 4; price = 8000; };
	class B_ViperHarness_oli_F              		{ quality = 4; price = 8000; };
	
	class B_Carryall_cbr							{ quality = 5; price = 9000; };
	class B_Carryall_khk							{ quality = 5; price = 9000; };
	class B_Carryall_mcamo							{ quality = 5; price = 9000; };
	class B_Carryall_ocamo							{ quality = 5; price = 9000; };
	class B_Carryall_oli							{ quality = 5; price = 9000; };
	class B_Carryall_oucamo							{ quality = 5; price = 9000; };
	class B_Carryall_ghex_F                 		{ quality = 5; price = 9000; };
	
	class B_Bergen_Base_F							{ quality = 6; price = 10000; }; // Bergen Backpack Basic
	class B_Bergen_mcamo_F                  		{ quality = 6; price = 10000; }; // Bergen Backpack MTP
	class B_Bergen_dgtl_F                   		{ quality = 6; price = 10000; }; // Bergen Backpack Digital
	class B_Bergen_hex_F                    		{ quality = 6; price = 10000; }; // Bergen Backpack Hex
	class B_Bergen_tna_F                    		{ quality = 6; price = 10000; }; // Bergen Backpack Tropic
	
	//	REMOVED
	//class B_HuntingBackpack							{ quality = 3; price = 200; };
	
	
	
//	DIVING TRADER
	
	
	
	////////////////////
	// Diving Goggles //
	////////////////////
	
	class G_Diving			 						{ quality = 2; price = 500; };
	class G_B_Diving			 					{ quality = 2; price = 500; };
	class G_O_Diving			 					{ quality = 2; price = 500; };
	class G_I_Diving			 					{ quality = 2; price = 500; };

	
	
	////////////////
	// Rebreather //
	////////////////
	
	class V_RebreatherB								{ quality = 4; price = 2500; };
	class V_RebreatherIA							{ quality = 4; price = 2500; };
	class V_RebreatherIR							{ quality = 4; price = 2500; };
	
	
	
	///////////////
	// Wet Suits //
	///////////////
	
	class U_I_Wetsuit								{ quality = 4; price = 5000; };
	class U_O_Wetsuit								{ quality = 4; price = 5000; };
	class U_B_Wetsuit								{ quality = 4; price = 5000; };
	
	//	REMOVED
	//class U_B_survival_uniform					{ quality = 3; price = 700; };



// SPEC OPS TRADER
	
	
	
	//////////////////
	// Night Vision //
	//////////////////
	
	class Binocular									{ quality = 1; price = 1000; };
	class Rangefinder								{ quality = 4; price = 3000; };
	class Laserdesignator							{ quality = 6; price = 5000; };
	class Laserdesignator_02						{ quality = 6; price = 5000; };
	class Laserdesignator_03						{ quality = 6; price = 5000; };
	class NVGoggles									{ quality = 4; price = 10000; };
	class NVGoggles_INDEP							{ quality = 4; price = 10000; };
	class NVGoggles_OPFOR							{ quality = 4; price = 10000; };
	class O_NVGoggles_hex_F          				{ quality = 4; price = 10000; };
	class O_NVGoggles_urb_F           				{ quality = 4; price = 10000; };
	class O_NVGoggles_ghex_F          				{ quality = 4; price = 10000; };
	class NVGoggles_tna_F             				{ quality = 4; price = 10000; };
	
	
	
	//////////////
	// Gas Mask //
	//////////////
	
	class Exile_Headgear_GasMask					{ quality = 4; price = 15000; };
	
	
	
	///////////
	// UAV's //
	///////////
	
	class I_UavTerminal								{ quality = 6; price = 9000; };
	class I_UAV_01_backpack_F						{ quality = 6; price = 6000; };

	
	
	/////////////////
	// Static MG's //
	/////////////////
	
	class O_HMG_01_weapon_F 						{ quality = 6; price = 25000; };
	class O_HMG_01_support_F 						{ quality = 6; price = 15000; };
	
	// Does not seem to work with HMG01, only the lower version does
	//class O_HMG_01_support_high_F 				{ quality = QUALITY_LEVEL_9000; price = 5000; };
	
	
	
	/////////////////////
	// Flares (Arma 3) //
	/////////////////////
	
	class Chemlight_blue							{ quality = 1; price = 100; };
	class Chemlight_green							{ quality = 1; price = 100; };
	class Chemlight_red								{ quality = 1; price = 100; };
	class FlareGreen_F								{ quality = 1; price = 250; };
	class FlareRed_F								{ quality = 1; price = 250; };
	class FlareWhite_F								{ quality = 1; price = 250; };
	class FlareYellow_F								{ quality = 1; price = 250; };
	class UGL_FlareGreen_F							{ quality = 2; price = 250; };
	class UGL_FlareRed_F							{ quality = 2; price = 250; };
	class UGL_FlareWhite_F							{ quality = 2; price = 250; };
	class UGL_FlareYellow_F							{ quality = 2; price = 250; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 3; price = 250*3; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 3; price = 250*3; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 3; price = 250*3; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 3; price = 250*3; };

	
	
	/////////////////////
	// Smokes (Arma 3) //
	/////////////////////
	
	class SmokeShell								{ quality = 1; price = 500; };
	class SmokeShellBlue							{ quality = 1; price = 500; };
	class SmokeShellGreen							{ quality = 1; price = 500; };
	class SmokeShellOrange							{ quality = 1; price = 500; };
	class SmokeShellPurple							{ quality = 1; price = 500; };
	class SmokeShellRed								{ quality = 1; price = 500; };
	class SmokeShellYellow							{ quality = 1; price = 500; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 2; price = 500; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 2; price = 500; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 2; price = 500; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 2; price = 500; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 2; price = 500; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 2; price = 500; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 2; price = 500; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 3; price = 500*3; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 3; price = 500*3; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 3; price = 500*3; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 3; price = 500*3; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 3; price = 500*3; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 3; price = 500*3; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 3; price = 500*3; };

	
	
	/////////////////////////
	// Explosives (Arma 3) //
	/////////////////////////
	
	//	GRENADES
	class HandGrenade								{ quality = 3; price = 1000; };
	class MiniGrenade								{ quality = 2; price = 1000; };
	class B_IR_Grenade								{ quality = 1; price = 1000; };
	class O_IR_Grenade								{ quality = 1; price = 1000; };
	class I_IR_Grenade								{ quality = 1; price = 1000; };
	class 1Rnd_HE_Grenade_shell						{ quality = 2; price = 1000; };
	class 3Rnd_HE_Grenade_shell						{ quality = 3; price = 1000*3; };
	
	//	TRIPWIRE
	class APERSBoundingMine_Range_Mag				{ quality = 3; price = 5000; };
	class APERSTripMine_Wire_Mag					{ quality = 3; price = 5000; };
	class APERSMine_Range_Mag						{ quality = 3; price = 6000; };
	class SLAMDirectionalMine_Wire_Mag				{ quality = 3; price = 6000; };
	
	//	REMOTE CONTROL
	class ClaymoreDirectionalMine_Remote_Mag		{ quality = 3; price = 5000; };
	class IEDLandBig_Remote_Mag						{ quality = 3; price = 7000; };
	class IEDLandSmall_Remote_Mag					{ quality = 3; price = 5000; };
	class IEDUrbanBig_Remote_Mag					{ quality = 3; price = 7000; };
	class IEDUrbanSmall_Remote_Mag					{ quality = 3; price = 5000; };
	class DemoCharge_Remote_Mag						{ quality = 4; price = 7000; };
	class SatchelCharge_Remote_Mag					{ quality = 5; price = 10000; };

	
	
// HARDWARE TRADER
	
	
	
	//////////////
	// Hardware //
	//////////////
	
	class Exile_Item_Rope							{ quality = 1; price = 200; };
	class Exile_Item_DuctTape						{ quality = 1; price = 300; };
	class Exile_Item_ExtensionCord					{ quality = 1; price = 500; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 1; price = 100; };
	class Exile_Item_JunkMetal						{ quality = 1; price = 1500; };
	class Exile_Item_LightBulb						{ quality = 1; price = 300; };
	class Exile_Item_MetalBoard						{ quality = 1; price = 2000; };
	class Exile_Item_SafeKit						{ quality = 4; price = 20000; };
	class Exile_Item_CodeLock						{ quality = 1; price = 5000; };
	class Exile_Item_Laptop							{ quality = 2; price = 18000; };
	class Exile_Item_BaseCameraKit					{ quality = 2; price = 2500; };
	class Exile_Item_CamoTentKit					{ quality = 1; price = 2500; };
	class Exile_Item_MetalPole						{ quality = 1; price = 1500; };
	class Exile_Item_MetalScrews					{ quality = 1; price = 250; };
	class Exile_Item_MetalWire						{ quality = 1; price = 500; };
	class Exile_Item_Cement							{ quality = 1; price = 500; };
	class Exile_Item_Sand							{ quality = 1; price = 500; };
	class Exile_Item_CarWheel						{ quality = 1; price = 1000; };
	class Exile_Item_BurlapSack						{ quality = 2; price = 500; };
	class Exile_Item_WeaponParts					{ quality = 2; price = 750; };
	
	// REMOVED
	//class Exile_Item_MetalHedgehogKit				{ quality = 1; price = 1200; };
	
	// Added in 1.0.3, but not used
	//class Exile_Item_SprayCan_Black				{ quality = 2; price = 20; };
	//class Exile_Item_SprayCan_Red					{ quality = 2; price = 20; };
	//class Exile_Item_SprayCan_Green				{ quality = 2; price = 20; };
	//class Exile_Item_SprayCan_White				{ quality = 2; price = 20; };
	//class Exile_Item_SprayCan_Blue				{ quality = 2; price = 20; };
	//class Exile_Item_Bullets_556					{ quality = 2; price = 5; };
	//class Exile_Item_Bullets_762					{ quality = 2; price = 5; };
	
	
	
	///////////
	// Tools //
	///////////
	
	class Exile_Item_Matches 						{ quality = 1; price = 100; };
	class Exile_Item_CookingPot						{ quality = 2; price = 250; };
	class Exile_Melee_Axe							{ quality = 2; price = 2000; };
	class Exile_Melee_SledgeHammmer					{ quality = 3; price = 2000; };
	class Exile_Item_CanOpener						{ quality = 1; price = 150; };
	class Exile_Item_Handsaw						{ quality = 2; price = 1000; };
	class Exile_Item_Pliers							{ quality = 2; price = 1000; };
	class Exile_Item_Grinder						{ quality = 2; price = 1500; };
	class Exile_Item_Foolbox						{ quality = 2; price = 5000; };
	class Exile_Item_CordlessScrewdriver			{ quality = 1; price = 5000; };
	class Exile_Item_FireExtinguisher				{ quality = 1; price = 1500; };
	class Exile_Item_Hammer							{ quality = 1; price = 1000; };
	class Exile_Item_OilCanister					{ quality = 1; price = 1000; };
	class Exile_Item_Screwdriver					{ quality = 1; price = 1000; };
	class Exile_Item_Shovel							{ quality = 1; price = 2000; };
	class Exile_Item_Wrench							{ quality = 1; price = 1000; };
	class Exile_Item_SleepingMat					{ quality = 1; price = 1500; };
	class Exile_Item_ToiletPaper					{ quality = 1; price = 50; };
	class Exile_Item_ZipTie							{ quality = 1; price = 500; };

	
	
	////////////////
	// Navigation //
	////////////////
	
	class ItemWatch									{ quality = 1; price = 50; };
	class ItemGPS									{ quality = 2; price = 50; };
	class ItemMap									{ quality = 1; price = 50; };
	class ItemCompass								{ quality = 1; price = 50; };
	class ItemRadio									{ quality = 1; price = 50; };
	class Exile_Item_XM8							{ quality = 2; price = 50; };
	class Exile_Item_MobilePhone					{ quality = 6; price = 5000; };

	
	
	// FOOD TRADER
	
	
	
	//////////
	// Food //
	//////////
	
	class Exile_Item_GloriousKnakworst				{ quality = 3; price = 380; };	// 60, 30
	class Exile_Item_Surstromming					{ quality = 3; price = 340; };	// 55, 25
	class Exile_Item_SausageGravy					{ quality = 3; price = 340; };	// 50, 25
	class Exile_Item_EMRE							{ quality = 3; price = 300; };	// 75, 60
	class Exile_Item_Catfood						{ quality = 2; price = 240; };	// 40, 40
	class Exile_Item_ChristmasTinner				{ quality = 3; price = 220; };	// 40, 60
	class Exile_Item_BBQSandwich					{ quality = 3; price = 220; };	// 40, 60
	class Exile_Item_MacasCheese					{ quality = 3; price = 220; };	// 40, 60
	class Exile_Item_Dogfood						{ quality = 2; price = 180; };	// 30, 30
	class Exile_Item_BeefParts						{ quality = 2; price = 180; };	// 30, 30
	class Exile_Item_Cheathas						{ quality = 2; price = 180; };	// 30, 30
	class Exile_Item_Noodles						{ quality = 1; price = 140; };	// 25, 50
	class Exile_Item_SeedAstics						{ quality = 1; price = 120; };	// 20, 40
	class Exile_Item_Raisins						{ quality = 1; price = 120; };	// 15, 30
	class Exile_Item_Moobar							{ quality = 1; price = 100; };	// 10, 30
	class Exile_Item_InstantCoffee					{ quality = 1; price = 275; };	// 5, 10
	class Exile_Item_Can_Empty						{ quality = 1; price = 1; sellPrice = 1; };
	
	//	REMOVED
	//class Exile_Item_SheepSteak_Cooked			{ quality = 4; price = 230; }; //100, 30
	//class Exile_Item_AlsatianSteak_Cooked			{ quality = 4; price = 230; }; //100, 30
	//class Exile_Item_CatSharkFilet_Cooked			{ quality = 4; price = 230; }; //100, 30
	//class Exile_Item_FinSteak_Cooked				{ quality = 4; price = 230; }; //100, 30
	//class Exile_Item_GoatSteak_Cooked				{ quality = 4; price = 230; }; //100, 30
	//class Exile_Item_TurtleFilet_Cooked			{ quality = 4; price = 230; }; //100, 30
	//class Exile_Item_TunaFilet_Cooked				{ quality = 3; price = 220; }; //90, 30
	//class Exile_Item_RabbitSteak_Cooked			{ quality = 3; price = 215; }; //80, 30
	//class Exile_Item_ChickenFilet_Cooked			{ quality = 3; price = 205; }; //70, 30
	//class Exile_Item_RoosterFilet_Cooked			{ quality = 3; price = 205; }; //70, 30
	//class Exile_Item_MulletFilet_Cooked			{ quality = 3; price = 200; }; //65, 30
	//class Exile_Item_SalemaFilet_Cooked			{ quality = 3; price = 200; }; //65, 30
	//class Exile_Item_OrnateFilet_Cooked			{ quality = 3; price = 180; }; //40, 30
	//class Exile_Item_SnakeFilet_Cooked			{ quality = 3; price = 180; }; //40, 30
	//class Exile_Item_MackerelFilet_Cooked			{ quality = 3; price = 190; }; //55, 30
	//class Exile_Item_CatSharkFilet_Raw			{ quality = 2; price = 125; }; //25, 30
	//class Exile_Item_MackerelFilet_Raw			{ quality = 2; price = 108; }; //5, 30
	//class Exile_Item_MulletFilet_Raw				{ quality = 2; price = 108; }; //5, 30
	//class Exile_Item_OrnateFilet_Raw				{ quality = 2; price = 108; }; //5, 30
	//class Exile_Item_RabbitSteak_Raw				{ quality = 2; price = 108; }; //5, 30
	//class Exile_Item_SalemaFilet_Raw				{ quality = 2; price = 108; }; //5, 30
	//class Exile_Item_SnakeFilet_Raw				{ quality = 2; price = 108; }; //5, 30
	//class Exile_Item_TunaFilet_Raw				{ quality = 2; price = 120; }; //20, 30
	//class Exile_Item_AlsatianSteak_Raw			{ quality = 2; price = 115; }; //15, 30
	//class Exile_Item_TurtleFilet_Raw				{ quality = 2; price = 115; }; //15, 30
	//class Exile_Item_SheepSteak_Raw				{ quality = 2; price = 115; }; //15, 30
	//class Exile_Item_FinSteak_Raw					{ quality = 2; price = 115; }; //15, 30
	//class Exile_Item_GoatSteak_Raw				{ quality = 2; price = 115; }; //15, 30
	//class Exile_Item_ChickenFilet_Raw				{ quality = 2; price = 110; }; //10, 30
	//class Exile_Item_RoosterFilet_Raw				{ quality = 2; price = 110; }; //10, 30

	
	
	////////////
	// Drinks //
	////////////
	
	class Exile_Item_PlasticBottleCoffee	 		{ quality = 3; price = 400; sellPrice = 10; };//100, 60
	class Exile_Item_PowerDrink						{ quality = 3; price = 375; }; //95, 10
	class Exile_Item_PlasticBottleFreshWater 		{ quality = 2; price = 300; sellPrice = 4; }; //80, 15
	class Exile_Item_Beer 							{ quality = 1; price = 125; }; //75, 30
	class Exile_Item_EnergyDrink					{ quality = 1; price = 275; }; //75, 20
	class Exile_Item_ChocolateMilk					{ quality = 1; price = 175; }; //75, 20
	class Exile_Item_MountainDupe					{ quality = 1; price = 220; }; //50, 20
	class Exile_Item_PlasticBottleEmpty				{ quality = 1; price = 100; };

	
	
	// MEDIC TRADER
	
	
	
	///////////////
	// First Aid //
	///////////////
	
	class Exile_Item_InstaDoc                       { quality = 5; price = 3000; };
	class Exile_Item_Vishpirin						{ quality = 3; price = 1000; };
	class Exile_Item_Heatpack	                    { quality = 1; price = 250; };
	class Exile_Item_Bandage	                    { quality = 2; price = 100; };
	class Exile_Item_Defibrillator					{ quality = 1; price = 10000; };

	
	
	// ARMORY TRADER
	
	
	
	///////////////////////////////
	// Rail Attachments (Arma 3) //
	///////////////////////////////
	
	class acc_flashlight 							{ quality = 1; price = 2000; };
	class acc_pointer_IR 							{ quality = 1; price = 2000; };

	
	
	////////////////////////////////
	// Bipod Attachments (Arma 3) //
	////////////////////////////////
	
	class bipod_01_F_blk	 						{ quality = 2; price = 1000; };
	class bipod_01_F_mtp	 						{ quality = 2; price = 1000; };
	class bipod_01_F_snd	 						{ quality = 2; price = 1000; };
	class bipod_01_F_khk              				{ quality = 2; price = 1000; };
	class bipod_02_F_blk	 						{ quality = 2; price = 1000; };
	class bipod_02_F_hex	 						{ quality = 2; price = 1000; };
	class bipod_02_F_tan	 						{ quality = 2; price = 1000; };
	class bipod_03_F_blk	 						{ quality = 2; price = 1000; };
	class bipod_03_F_oli	 						{ quality = 2; price = 1000; };

	
	
	/////////////////////////////////
	// Muzzle Attachments (Arma 3) //
	/////////////////////////////////
	
	class muzzle_snds_338_black 					{ quality = 3; price = 2000; };
	class muzzle_snds_338_green 					{ quality = 3; price = 2000; };
	class muzzle_snds_338_sand 						{ quality = 3; price = 2000; };
	class muzzle_snds_93mmg 						{ quality = 3; price = 2000; };
	class muzzle_snds_93mmg_tan 					{ quality = 3; price = 2000; };
	class muzzle_snds_acp 							{ quality = 3; price = 2000; };
	class muzzle_snds_B 							{ quality = 3; price = 2000; };
	class muzzle_snds_H 							{ quality = 3; price = 2000; };
	class muzzle_snds_H_MG 							{ quality = 3; price = 2000; };
	class muzzle_snds_H_SW 							{ quality = 3; price = 2000; };
	class muzzle_snds_L 							{ quality = 3; price = 2000; };
	class muzzle_snds_M 							{ quality = 3; price = 2000; };
	class muzzle_snds_H_khk_F         				{ quality = 3; price = 2000; };
	class muzzle_snds_H_snd_F    					{ quality = 3; price = 2000; };
	class muzzle_snds_58_blk_F        				{ quality = 3; price = 2000; };
	class muzzle_snds_m_khk_F         				{ quality = 3; price = 2000; };
	class muzzle_snds_m_snd_F        				{ quality = 3; price = 2000; };
	class muzzle_snds_B_khk_F         				{ quality = 3; price = 2000; };
	class muzzle_snds_B_snd_F         				{ quality = 3; price = 2000; };
	class muzzle_snds_58_wdm_F        				{ quality = 3; price = 2000; };
	class muzzle_snds_65_TI_blk_F     				{ quality = 3; price = 2000; };
	class muzzle_snds_65_TI_hex_F    			 	{ quality = 3; price = 2000; };
	class muzzle_snds_65_TI_ghex_F    				{ quality = 3; price = 2000; };
	class muzzle_snds_H_MG_blk_F      				{ quality = 3; price = 2000; };
	class muzzle_snds_H_MG_khk_F      				{ quality = 3; price = 2000; };

	
	
	////////////////////////////////
	// Optic Attachments (Arma 3) //
	////////////////////////////////
	
	// Pistol Scopes
	class optic_MRD									{ quality = 1; price = 500; };
	class optic_Yorris								{ quality = 1; price = 500; };

	// Assault Rifles & SMG Scopes
	class optic_Holosight							{ quality = 2; price = 2000; };
	class optic_Holosight_blk_F       				{ quality = 2; price = 2000; };
	class optic_Holosight_khk_F       				{ quality = 2; price = 2000; };
	class optic_Holosight_smg						{ quality = 2; price = 1000; };
	class optic_Holosight_smg_blk_F   				{ quality = 2; price = 1000; };
	class optic_Aco									{ quality = 2; price = 1000; };
	class optic_ACO_grn								{ quality = 2; price = 1000; };
	class optic_ACO_grn_smg							{ quality = 2; price = 750; };
	class optic_Aco_smg								{ quality = 2; price = 750; };
	class optic_MRCO								{ quality = 2; price = 1500; };
	class optic_Hamr								{ quality = 2; price = 1500; };
	class optic_Hamr_khk_F            				{ quality = 2; price = 1500; };
	class optic_Arco								{ quality = 2; price = 1750; };
	class optic_Arco_blk_F            				{ quality = 2; price = 1750; };
	class optic_Arco_ghex_F           				{ quality = 2; price = 1750; };
	class optic_ERCO_blk_F            				{ quality = 2; price = 2000; };
	class optic_ERCO_khk_F            				{ quality = 2; price = 2000; };
	class optic_ERCO_snd_F            				{ quality = 2; price = 2000; };
	class optic_NVS									{ quality = 4; price = 5000; };
	
	// Long Distance Scopes
	class optic_DMS									{ quality = 3; price = 3500; };
	class optic_DMS_ghex_F            				{ quality = 3; price = 3500; };
	class optic_SOS									{ quality = 3; price = 7500; };
	class optic_SOS_khk_F             				{ quality = 3; price = 7500; };
	
	//	Marksmen DLC
	class optic_KHS_blk								{ quality = 4; price = 10000; };
	class optic_KHS_hex								{ quality = 4; price = 10000; };
	class optic_KHS_old								{ quality = 4; price = 10000; };
	class optic_KHS_tan								{ quality = 4; price = 10000; };
	class optic_AMS									{ quality = 5; price = 10000; };
	class optic_AMS_khk								{ quality = 5; price = 10000; };
	class optic_AMS_snd								{ quality = 5; price = 10000; };
	class optic_LRPS								{ quality = 5; price = 12500; };
	class optic_LRPS_tna_F            				{ quality = 5; price = 12500; };
	class optic_LRPS_ghex_F           				{ quality = 5; price = 12500; };
	class optic_Nightstalker						{ quality = 6; price = 25000; };
	class optic_tws									{ quality = 6; price = 30000; };
	class optic_tws_mg								{ quality = 6; price = 30000; };

	
	
	/////////////////////////
	// Ammunition (Arma 3) //
	/////////////////////////
	
	//	Starter Pistol
	class 6Rnd_GreenSignal_F 								{ quality = 1; price = 50; };
	class 6Rnd_RedSignal_F 									{ quality = 1; price = 50; };
	
	//	4-five .45 ACP
	class 11Rnd_45ACP_Mag 									{ quality = 1; price = 100; };
	
	//	ACP-C2
	class 9Rnd_45ACP_Mag 									{ quality = 1; price = 100; };
	
	// PM 9mm
	class 16Rnd_9x21_Mag 									{ quality = 1; price = 100; };
	
	//	PDW2000, P07, Rook-40
	class 30Rnd_9x21_Mag 									{ quality = 1; price = 200; };
	class 30Rnd_9x21_Yellow_Mag								{ quality = 1; price = 200; };
	class 30Rnd_9x21_Green_Mag								{ quality = 1; price = 200; };
	class 30Rnd_9x21_Red_Mag								{ quality = 1; price = 200; };
	
	//	Zubyr
	class 6Rnd_45ACP_Cylinder 								{ quality = 1; price = 100; };

	//	Rahim
	class 10Rnd_762x54_Mag 									{ quality = 3; price = 200; };
	
	//	REMOVED
	//class 10Rnd_762x51_Mag { quality = 1; price = 30; };
	
	//	Zafir
	class 150Rnd_762x54_Box 								{ quality = 3; price = 300; };
	class 150Rnd_762x54_Box_Tracer 							{ quality = 3; price = 400; };
	
	//	MK200
	class 200Rnd_65x39_cased_Box 							{ quality = 2; price = 350; };
	class 200Rnd_65x39_cased_Box_Tracer 					{ quality = 2; price = 400; };
	
	//	Navid
	class 150Rnd_93x64_Mag 									{ quality = 6; price = 300; };
	
	//	SPMG
	class 130Rnd_338_Mag 									{ quality = 5; price = 300; };
	
	//	SDAR
	class 20Rnd_556x45_UW_mag 								{ quality = 1; price = 200; };
	
	//	Mk18 ABR, Mk-I EMR, Mk14, SPAR-17
	class 20Rnd_762x51_Mag 									{ quality = 2; price = 200; };
	
	//	Vermin SMG
	class 30Rnd_45ACP_Mag_SMG_01 							{ quality = 1; price = 200; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 				{ quality = 1; price = 300; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow				{ quality = 1; price = 300; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red					{ quality = 1; price = 300; };
	
	//	TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
	class 30Rnd_556x45_Stanag 								{ quality = 1; price = 200; };
	class 30Rnd_556x45_Stanag_red 							{ quality = 1; price = 200; };
	class 30Rnd_556x45_Stanag_green  						{ quality = 1; price = 200; };
	class 30Rnd_556x45_Stanag_Tracer_Green 					{ quality = 1; price = 300; };
	class 30Rnd_556x45_Stanag_Tracer_Red 					{ quality = 1; price = 300; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 				{ quality = 1; price = 300; };
	
	//	Katiba, Type 115
	class 30Rnd_65x39_caseless_green 						{ quality = 2; price = 200; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 			{ quality = 2; price = 300; };
		
	//	MX/C/M/SW/3GL
	class 30Rnd_65x39_caseless_mag 							{ quality = 2; price = 200; };
	class 30Rnd_65x39_caseless_mag_Tracer 					{ quality = 2; price = 300; };
	
	//	MXM
	class 100Rnd_65x39_caseless_mag 						{ quality = 2; price = 300; };
	class 100Rnd_65x39_caseless_mag_Tracer 					{ quality = 2; price = 400; };
	
	//	M320 LRR
	class 7Rnd_408_Mag 										{ quality = 6; price = 300; };
	
	//	GM6 Lynx
	class 5Rnd_127x108_APDS_Mag 							{ quality = 6; price = 300; };
	class 5Rnd_127x108_Mag 									{ quality = 6; price = 300; };
	
	//	M107
	class 10Rnd_127x54_Mag 									{ quality = 4; price = 300; };
	
	//	MAR-10
	class 10Rnd_338_Mag 									{ quality = 5; price = 300; };
	
	//	DMR
	class 10Rnd_93x64_DMR_05_Mag 							{ quality = 4; price = 300; };
	
	// APEX DLC
	class 30Rnd_9x21_Mag_SMG_02								{ quality = 1; price = 300; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Red          		{ quality = 1; price = 400; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow       		{ quality = 1; price = 400; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green        		{ quality = 1; price = 400; };
	
	class 30Rnd_580x42_Mag_F                        		{ quality = 2; price = 300; };
	class 30Rnd_580x42_Mag_Tracer_F                 		{ quality = 2; price = 400; };
	
	class 100Rnd_580x42_Mag_F                       		{ quality = 2; price = 300; };
	class 100Rnd_580x42_Mag_Tracer_F                		{ quality = 2; price = 350; };
	
	class 20Rnd_650x39_Cased_Mag_F                  		{ quality = 4; price = 500; };
	
	class 10Rnd_50BW_Mag_F                          		{ quality = 5; price = 300; };
	
	class 150Rnd_556x45_Drum_Mag_F                  		{ quality = 2; price = 300; };
	class 150Rnd_556x45_Drum_Mag_Tracer_F           		{ quality = 2; price = 350; };
	
	class 30Rnd_762x39_Mag_F                        		{ quality = 3; price = 300; };
	class 30Rnd_762x39_Mag_Green_F                  		{ quality = 3; price = 300; };
	class 30Rnd_762x39_Mag_Tracer_F                 		{ quality = 3; price = 400; };
	class 30Rnd_762x39_Mag_Tracer_Green_F           		{ quality = 3; price = 400; };
	class 30Rnd_545x39_Mag_F                        		{ quality = 1; price = 300; };
	class 30Rnd_545x39_Mag_Green_F                  		{ quality = 1; price = 300; };
	class 30Rnd_545x39_Mag_Tracer_F                 		{ quality = 1; price = 400; };
	class 30Rnd_545x39_Mag_Tracer_Green_F           		{ quality = 1; price = 400; };
	
	class 200Rnd_556x45_Box_F                       		{ quality = 1; price = 400; };
	class 200Rnd_556x45_Box_Red_F                   		{ quality = 1; price = 400; };
	class 200Rnd_556x45_Box_Tracer_F                		{ quality = 1; price = 500; };
	class 200Rnd_556x45_Box_Tracer_Red_F            		{ quality = 1; price = 500; };
	
	class 10Rnd_9x21_Mag									{ quality = 1; price = 100; };

	// Price for bullet cam magazines is normal magazine price + 20 pop tabs per bullet
	class Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag 			{ quality = 300; price = 40 +  5 * 20; };
	class Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag 		{ quality = 300; price = 40 +  5 * 20; };
	class Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag 		{ quality = 300; price = 40 + 10 * 20; };
	class Exile_Magazine_7Rnd_408_Bullet_Cam_Mag 				{ quality = 300; price = 10 +  7 * 20; };
	class Exile_Magazine_10Rnd_338_Bullet_Cam_Mag 				{ quality = 300; price = 30 + 10 * 20; };
	class Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag 		{ quality = 300; price = 40 + 10 * 20; };
	class Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag 		{ quality = 300; price = 40 +  5 * 20; };
	class Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag 	{ quality = 300; price = 40 +  5 * 20; };

	
	
	//////////////////////
	// Pistols (Arma 3) //
	//////////////////////
	
	class hgun_ACPC2_F 								{ quality = 1; price = 2000; };	//	ACP-C2
	class hgun_P07_F 								{ quality = 1; price = 1000; };	//	P07
	class hgun_Pistol_heavy_01_F 					{ quality = 2; price = 2000; };	//	4-five .45 ACP
	class hgun_Pistol_heavy_02_F 					{ quality = 2; price = 3000; };	//	Zubr .45 ACP
	class hgun_Pistol_Signal_F 						{ quality = 1; price = 500; };	//	Starter Pistol
	class hgun_Rook40_F 							{ quality = 1; price = 1000; };	//	Rook-40
	
	// Apex DLC
	class hgun_Pistol_01_F            				{ quality = 1; price = 1000; };		//	PM 9 mm
	class hgun_P07_khk_F              				{ quality = 1; price = 1000; };		//	P07 9 mm (Khaki)
	
	
	///////////////////////////////
	// Sub Machine Guns (Arma 3) //
	///////////////////////////////
	
	class hgun_PDW2000_F 							{ quality = 1; price = 3000; };	//	PDW2000
	class SMG_01_F 									{ quality = 1; price = 3000; };	//	Vermin SMG .45 ACP
	class SMG_02_F 									{ quality = 1; price = 3000; };	//	Sting

	//	Apex DLC
	class SMG_05_F					  				{ quality = 1; price = 3000; };
	
	/////////////////////////////////
	// Light Machine Guns (Arma 3) //
	/////////////////////////////////
	
	class arifle_MX_SW_Black_F						{ quality = 2; price = 25000; };
	class arifle_MX_SW_F							{ quality = 2; price = 25000; };
	class LMG_Mk200_F								{ quality = 2; price = 30000; };
	class LMG_Zafir_F								{ quality = 3; price = 35000; };
	class MMG_01_hex_F								{ quality = 6; price = 80000; };
	class MMG_01_tan_F								{ quality = 6; price = 80000; };
	class MMG_02_black_F							{ quality = 6; price = 45000; };
	class MMG_02_camo_F								{ quality = 5; price = 45000; };
	class MMG_02_sand_F								{ quality = 5; price = 45000; };

	//Apex DLc
	class LMG_03_F					  				{ quality = 2; price = 300; };
	
	/////////////////////////////
	// Assault Rifles (Arma 3) //
	/////////////////////////////
	
	class arifle_Katiba_C_F							{ quality = 2; price = 150; };
	class arifle_Katiba_F							{ quality = 2; price = 150; };
	class arifle_Katiba_GL_F						{ quality = 2; price = 200; };
	class arifle_Mk20_F								{ quality = 1; price = 150; };
	class arifle_Mk20_GL_F							{ quality = 1; price = 200; };
	class arifle_Mk20_GL_plain_F					{ quality = 1; price = 200; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 150; };
	class arifle_Mk20C_F							{ quality = 1; price = 150; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 150; };
	class arifle_MX_Black_F							{ quality = 2; price = 450; };
	class arifle_MX_F								{ quality = 2; price = 450; };
	class arifle_MX_GL_Black_F						{ quality = 2; price = 450; };
	class arifle_MX_GL_F							{ quality = 2; price = 450; };
	class arifle_MXC_Black_F						{ quality = 2; price = 350; };
	class arifle_MXC_F								{ quality = 2; price = 350; };
	class arifle_SDAR_F								{ quality = 1; price = 650; };
	class arifle_TRG20_F							{ quality = 1; price = 250; };
	class arifle_TRG21_F							{ quality = 1; price = 250; };
	class arifle_TRG21_GL_F							{ quality = 1; price = 350; };
	
	// Apex DLC
	class arifle_MX_khk_F             				{ quality = 2; price = 450; };
	class arifle_MX_GL_khk_F          				{ quality = 2; price = 500; };
	class arifle_MXC_khk_F            				{ quality = 2; price = 350; };
	class arifle_MXM_khk_F            				{ quality = 2; price = 500; };
	class arifle_AK12_F               				{ quality = 3; price = 650; };
	class arifle_AK12_GL_F            				{ quality = 3; price = 700; };
	class arifle_AKM_F                				{ quality = 3; price = 400; };
	class arifle_AKM_FL_F             				{ quality = 3; price = 400; };
	class arifle_AKS_F                				{ quality = 3; price = 350; };
	class arifle_ARX_blk_F            				{ quality = 5; price = 900; };
	class arifle_ARX_ghex_F           				{ quality = 5; price = 900; };
	class arifle_ARX_hex_F            				{ quality = 5; price = 900; };
	class arifle_CTAR_blk_F           				{ quality = 2; price = 450; };
	class arifle_CTAR_hex_F           				{ quality = 2; price = 450; };
	class arifle_CTAR_ghex_F          				{ quality = 2; price = 450; };
	class arifle_CTAR_GL_blk_F        				{ quality = 2; price = 450; };
	class arifle_CTAR_GL_ghex_F       				{ quality = 2; price = 450; };
	class arifle_CTAR_GL_hex_F        				{ quality = 2; price = 450; };
	class arifle_CTARS_blk_F          				{ quality = 2; price = 450; };
	class arifle_CTARS_ghex_F         				{ quality = 2; price = 450; };
	class arifle_CTARS_hex_F          				{ quality = 2; price = 450; };
	class arifle_SPAR_01_blk_F        				{ quality = 1; price = 400; };
	class arifle_SPAR_01_khk_F        				{ quality = 1; price = 400; };
	class arifle_SPAR_01_snd_F        				{ quality = 1; price = 400; };
	class arifle_SPAR_01_GL_blk_F     				{ quality = 1; price = 500; };
	class arifle_SPAR_01_GL_khk_F     				{ quality = 1; price = 500; };
	class arifle_SPAR_01_GL_snd_F     				{ quality = 1; price = 500; };
	class arifle_SPAR_02_blk_F        				{ quality = 2; price = 550; };
	class arifle_SPAR_02_khk_F        				{ quality = 2; price = 550; };
	class arifle_SPAR_02_snd_F        				{ quality = 2; price = 550; };
	class arifle_SPAR_03_blk_F        				{ quality = 3; price = 600; };
	class arifle_SPAR_03_khk_F        				{ quality = 3; price = 600; };
	class arifle_SPAR_03_snd_F        				{ quality = 3; price = 600; };
	
	
	////////////////////////////
	// Sniper Rifles (Arma 3) //
	////////////////////////////
	
	class arifle_MXM_Black_F 						{ quality = 2; price = 5500; };
	class arifle_MXM_F 								{ quality = 2; price = 5500; };
	class srifle_DMR_01_F 							{ quality = 3; price = 6000; };
	class srifle_DMR_02_camo_F 						{ quality = 3; price = 8000; };
	class srifle_DMR_02_F 							{ quality = 3; price = 8000; };
	class srifle_DMR_02_sniper_F 					{ quality = 3; price = 8000; };
	class srifle_DMR_03_F 							{ quality = 3; price = 7500; };
	class srifle_DMR_03_khaki_F 					{ quality = 3; price = 7500; };
	class srifle_DMR_03_multicam_F 					{ quality = 3; price = 7500; };
	class srifle_DMR_03_tan_F 						{ quality = 3; price = 7500; };
	class srifle_DMR_03_woodland_F 					{ quality = 3; price = 7500; };
	class srifle_DMR_04_F 							{ quality = 4; price = 7000; };
	class srifle_DMR_04_Tan_F 						{ quality = 4; price = 7000; };
	class srifle_DMR_05_blk_F 						{ quality = 4; price = 8500; };
	class srifle_DMR_05_hex_F 						{ quality = 4; price = 8500; };
	class srifle_DMR_05_tan_f 						{ quality = 4; price = 8500; };
	class srifle_DMR_06_camo_F 						{ quality = 5; price = 8000; };
	class srifle_DMR_06_olive_F 					{ quality = 5; price = 8000; };
	class srifle_EBR_F 								{ quality = 3; price = 7000; };
	class srifle_GM6_camo_F 						{ quality = 6; price = 9000; };
	class srifle_GM6_F 								{ quality = 6; price = 9000; };
	class srifle_LRR_camo_F 						{ quality = 6; price = 8500; };
	class srifle_LRR_F 								{ quality = 6; price = 8500; };

	//	Apex DLC
	class srifle_LRR_tna_F            				{ quality = 6; price = 850; };
	class srifle_GM6_ghex_F           				{ quality = 6; price = 900; };
	class srifle_DMR_07_blk_F         				{ quality = 4; price = 750; };
	class srifle_DMR_07_hex_F         				{ quality = 4; price = 750; };
	class srifle_DMR_07_ghex_F        				{ quality = 4; price = 750; };
	
	
	
	////////////////////////////
	// ArmA 2 Weapons (Exile) //
	////////////////////////////
	
	//class Exile_Weapon_AK107						{ quality = 1; price = 300; };
	//class Exile_Weapon_AK107_GL					{ quality = 2; price = 400; };
	//class Exile_Weapon_AK74						{ quality = 2; price = 350; };
	//class Exile_Weapon_AK74_GL					{ quality = 2; price = 400; };
	//class Exile_Weapon_AK47						{ quality = 3; price = 500; };
	//class Exile_Weapon_AKM						{ quality = 3; price = 500; };
	//class Exile_Weapon_AKS						{ quality = 3; price = 500; };
	class Exile_Weapon_AKS_Gold						{ quality = 3; price = 100000; sellPrice = 10000; }; // Added specific sell price
	//class Exile_Weapon_DMR						{ quality = 3; price = 6500; };
	class Exile_Weapon_LeeEnfield					{ quality = 1; price = 2500; };
	class Exile_Weapon_CZ550						{ quality = 2; price = 400; };
	class Exile_Weapon_SVD							{ quality = 4; price = 8000; };
	//class Exile_Weapon_SVDCamo					{ quality = 4; price = 8500; };
	class Exile_Weapon_VSSVintorez					{ quality = 3; price = 6000; };
	//class Exile_Weapon_RPK						{ quality = 2; price = 250; };
	//class Exile_Weapon_PK							{ quality = 3; price = 300; };
	//class Exile_Weapon_PKP						{ quality = 3; price = 350; };
	class Exile_Weapon_Colt1911						{ quality = 1; price = 700; };
	//class Exile_Weapon_Makarov					{ quality = 1; price = 100; };
	class Exile_Weapon_Taurus						{ quality = 1; price = 300; };
	class Exile_Weapon_TaurusGold					{ quality = 1; price = 15000; };
	class Exile_Weapon_M1014						{ quality = 2; price = 200; sellPrice = 1; };
	class Exile_Weapon_SA61							{ quality = 1; price = 150; };
	class Exile_Weapon_m107							{ quality = 5; price = 8500; };
	class Exile_Weapon_ksvk							{ quality = 5; price = 8500; };
	//class Exile_Weapon_M4							{ quality = 2; price = 1500; };
	//class Exile_Weapon_M16A4						{ quality = 2; price = 1650; };
	//class Exile_Weapon_M16A2						{ quality = 1; price = 1600; };

	
	
	///////////////////////////////
	// ArmA 2 Ammunition (Exile) //
	///////////////////////////////
	
	//class Exile_Magazine_30Rnd_762x39_AK				{ quality = 3; price = 20; };
	//class Exile_Magazine_30Rnd_545x39_AK				{ quality = 1; price = 20; };
	//class Exile_Magazine_30Rnd_545x39_AK_Green		{ quality = 1; price = 20; };
	//class Exile_Magazine_30Rnd_545x39_AK_Red			{ quality = 1; price = 20; };
	//class Exile_Magazine_30Rnd_545x39_AK_White		{ quality = 1; price = 20; };
	//class Exile_Magazine_30Rnd_545x39_AK_Yellow		{ quality = 1; price = 20; };
	//class Exile_Magazine_45Rnd_545x39_RPK_Green		{ quality = 1; price = 20; };
	//class Exile_Magazine_75Rnd_545x39_RPK_Green		{ quality = 1; price = 20; };
	//class Exile_Magazine_20Rnd_762x51_DMR				{ quality = 3; price = 20; };
	//class Exile_Magazine_20Rnd_762x51_DMR_Yellow		{ quality = 3; price = 20; };
	//class Exile_Magazine_20Rnd_762x51_DMR_Red			{ quality = 3; price = 20; };
	//class Exile_Magazine_20Rnd_762x51_DMR_Green		{ quality = 3; price = 20; };
	class Exile_Magazine_10Rnd_303						{ quality = 1; price = 20; };
	//class Exile_Magazine_100Rnd_762x54_PK_Green		{ quality = 3; price = 20; };
	class Exile_Magazine_7Rnd_45ACP						{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_9x18						{ quality = 1; price = 20; };
	class Exile_Magazine_6Rnd_45ACP						{ quality = 1; price = 20; };
	class Exile_Magazine_5Rnd_22LR						{ quality = 1; price = 20; };
	//class Exile_Magazine_10Rnd_762x54					{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_9x39						{ quality = 1; price = 20; }; // VSS Vintorez
	//class Exile_Magazine_20Rnd_9x39					{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_74Slug					{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_74Pellets					{ quality = 1; price = 20; }; // broken?
	class Exile_Magazine_10Rnd_765x17_SA61				{ quality = 1; price = 10; };
	class Exile_Magazine_20Rnd_765x17_SA61				{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_127x99_m107				{ quality = 3; price = 30; };
	class Exile_Magazine_5Rnd_127x108_APDS_KSVK			{ quality = 3; price = 40; };
	class Exile_Magazine_5Rnd_127x108_KSVK				{ quality = 3; price = 30; };
	
	
	
//	NIArms NIArsenal
	
			// ALL WEAPON ATTACHMENTS (ALPHABETICALLY)
					
					////////////////////////////
					// ACR Muzzle Attachments //							//	ALSO WORKING WITH AR-15, AUG, FN FAL, FN-30-11 (Modernized & Tac), M14's (Rail & SOPMOD) & M21 (Rail), M249
					////////////////////////////
					
							class hlc_muzzle_556NATO_KAC					{ quality = 3; price = 2000; }		//	Sound Suppressor 5.56MM NATO AR15s
							class hlc_muzzle_300blk_KAC						{ quality = 3; price = 2000; }		//	Sound Suppressor .300 Blackout AR15s
							class hlc_muzzle_MAG58_Brake					{ quality = 3; price = 2000; }		//	MAG58 Flash Hider
					
					///////////////////////////
					// ACR Optic Attachments //								//	ALSO WORKING WITH AR-15, AUG, AWM, FN FAL (Rail Models), FN-30-11 (Modernized & Tac), M14's (Rail & SOPMOD) & M21 (Rail), MP5's, M60E4, M249
					///////////////////////////	
					
							class hlc_optic_ZF95Base						{ quality = 5; price = 10000; }		//	Kahles ZF95
							class hlc_optic_LeupoldM3A						{ quality = 5; price = 10000; }		//	Leupold M3A
							class hlc_optic_VOMZ							{ quality = 5; price = 10000; }		//	VOMZ Pilad P3 2D
							class hlc_optic_VOMZ3d							{ quality = 5; price = 10000; }		//	VOMZ Pilad P3 3D
					
					///////////////////////////
					// ACR Bipod Attachments //								//	ALSO WORKING WITH AR-15, AUG, AWM, FN FAL (Rail Models), FN-30-11 (Modernized & Tac), M14 SOPMOD
					///////////////////////////
							
							class HLC_bipod_UTGShooters						{ quality = 3; price = 1000; }			// UTG Lightweight
					
					///////////////////////////
					// AK Muzzle Attachments //
					///////////////////////////
							
							class hlc_muzzle_545SUP_AK						{ quality = 3; price = 2000; }		//	PBS4 Suppressor (5.45x39)
							class hlc_muzzle_762SUP_AK						{ quality = 3; price = 2000; }		//	PBS1 Suppressor (7.62x39)
							
					//////////////////////////
					// AK Optic Attachments //
					//////////////////////////
					
							class HLC_Optic_PSO1							{ quality = 3; price = 3000; }		//	PSO1 Sniper Optic
							class HLC_Optic_1p29							{ quality = 3; price = 3000; }		//	1P29 Rifle Combat Optic
							class hlc_optic_kobra							{ quality = 3; price = 2000; }		//	Kobra Collimator Sight
							class hlc_optic_goshawk							{ quality = 6; price = 30000; }		//	Goshawk Thermal Sight
							
					/////////////////
					// AUG Muzzles //
					/////////////////
					
							class hlc_muzzle_snds_AUG						{ quality = 3; price = 2000; }		//	AAC M4-2000 with thread adapter for Steyr AUG
							class hlc_muzzle_snds_a6AUG						{ quality = 3; price = 2000; }		//	AWC Agenda Six Suppressor threaded for the Steyr AUG 9mm.
					
					///////////////////
					// FN FAL Optics //
					///////////////////
					
							class hlc_optic_PVS4FAL							{ quality = 3; price = 5000; }		//	AN/PVS4 Night Optic (Exclusive to the FALs)
							class hlc_optic_suit							{ quality = 3; price = 2000; }		//	SUIT Optic (Single Unit, infantry, Trilux. Exclusive to the FALs)
							
					///////////////////////////////////////////
					// FN 30-11 & FN 30-11 (Woodland) Optics //
					///////////////////////////////////////////
					
							class hlc_optic_ANGSCHUTZ						{ quality = 3; price = 2000; }			//	Anschutz Diopter
							class hlc_optic_FNSTANAG4X						{ quality = 3; price = 2000; }			//	FN STANAG 4x28
							class hlc_optic_FNSTANAG2D						{ quality = 3; price = 2000; }			//	FN STANAG 4x28 (2D)
							class hlc_optic_ZF95_3011						{ quality = 5; price = 10000; }		//	Kahles ZF95 (FN 30-11)
							class hlc_optic_Kern_3011						{ quality = 3; price = 500; }			//	Kern AARAU 4x24 (FN 30-11)
							class hlc_optic_Kern2d_3011						{ quality = 3; price = 500; }		//	Kern AARAU 4x24 (2D) (FN 30-11)
							class hlc_optic_LeupoldM3A_3011					{ quality = 5; price = 10000; }		//	Leupold M3A (FN 30-11)
							
					///////////////
					// G3 Optics //
					///////////////
					
							class HLC_Optic_ZFSG1							{ quality = 3; price = 2000; }		// Zeiss Diavari - 600m
							class hlc_optic_STANAGZF_G3						{ quality = 3; price = 2000; }		// Hensoldt ZF	- 600m
							class hlc_optic_STANAGZF2D_G3					{ quality = 3; price = 2000; }		// Hensoldt ZF (2D) - 600m
							class hlc_optic_PVS4G3							{ quality = 3; price = 5000; }		// AN/PVS4 (G3-Mount)
							class hlc_optic_accupoint_g3					{ quality = 5; price = 10000; }		// Accupoint TR20 - 1200m
							class hlc_optic_ZF95_g3							{ quality = 5; price = 10000; }		// Kahles ZF95 (G3) - 1200m
							class hlc_optic_LeupoldM3A_G3					{ quality = 5; price = 10000; }		// Leupold M3A (G3) - 1200m
	
					////////////////
					// G36 Optics //
					////////////////
					
							class HLC_Optic_G36dualoptic35x					{ quality = 3; price = 2000; }
							class HLC_Optic_G36dualoptic35x2d				{ quality = 3; price = 2000; }
							class HLC_Optic_G36Export35x					{ quality = 3; price = 2000; }
							class HLC_Optic_G36Export35x2d					{ quality = 3; price = 2000; }
							class HLC_Optic_G36Dualoptic15x					{ quality = 3; price = 2000; }
							class HLC_Optic_G36Dualoptic15x2d				{ quality = 3; price = 2000; }
							class HLC_Optic_G36Export15x					{ quality = 3; price = 2000; }
							class HLC_Optic_G36Export15x2d					{ quality = 3; price = 2000; }
							
					/////////////////
					// M14 Muzzles //
					/////////////////
					
							class hlc_muzzle_snds_M14						{ quality = 3; price = 2000; }
							
					////////////////
					// M14 Optics //
					////////////////
					
							class hlc_optic_artel_m14						{ quality = 3; price = 3000; }		// Redfield AR-TEL Optic (3-9x Scope. Sadly, it's impossible in the engine to replicate the locked zoom:zero function)
							class hlc_optic_LRT_m14							{ quality = 3; price = 5000; }
							class hlc_optic_PVS4M14							{ quality = 3; price = 5000; }
							
					/////////////////
					// MP5 Muzzles //
					/////////////////
	
							class hlc_muzzle_Agendasix						{ quality = 3; price = 2000; }
							class hlc_muzzle_Tundra							{ quality = 3; price = 2000; }
							class hlc_muzzle_Agendasix10mm					{ quality = 3; price = 2000; }
	
					////////////////////
					// MP5 Flashlight //
					////////////////////

							class hlc_acc_Surefiregrip						{ quality = 3; price = 2500; }
							
					//////////////////
					// SG510 Optics //
					//////////////////
					
							class hlc_optic_Kern							{ quality = 3; price = 500; }		//	The Kern AARAU Scope on "Butter-dish" Scope mount. 
							class hlc_optic_Kern2d							{ quality = 3; price = 500; }  		//	The Kern AARAU Scope on "Butter-dish" Scope mount. 2D Reticle

							
					///////////////////
					// Pistol Optics //
					///////////////////
							
							class HLC_Optic_Docter_CADEX					{ quality = 3; price = 500; }		//	Docter RDS (CADEX)
							class HLC_optic_HP								{ quality = 3; price = 500; }		//	High-Profile Sights
							class HLC_Optic_Romeo1_RX						{ quality = 3; price = 500; }		//	Romeo-1
							class HLC_optic_Siglite							{ quality = 3; price = 500; }		//	SigLite Sights
							class HLC_optic_ATT								{ quality = 3; price = 500; }		//	Triangular Sights
							class HLC_optic_XS								{ quality = 3; price = 500; }		//	Trijicon Sights
							class HLC_optic_VTAC							{ quality = 3; price = 500; }		//	V-TAC Sights
							class HLC_optic_stavenhagen						{ quality = 3; price = 500; }		//	Von Stavenhagen Sights
							
							class HLC_Optic228_Docter_CADEX					{ quality = 3; price = 500; }		//	Docter RDS (CADEX) (228)
							class HLC_optic228_HP							{ quality = 3; price = 500; }		//	High-Profile Sights (228)
							class HLC_Optic228_Romeo1_RX					{ quality = 3; price = 500; }		//	Romeo-1 (228)
							class HLC_optic228_Siglite						{ quality = 3; price = 500; }		//	SigLite Sights (228)
							class HLC_optic228_ATT							{ quality = 3; price = 500; }		//	Triangular Sights (228)
							class HLC_optic228_XS							{ quality = 3; price = 500; }		//	Trijicon Sights (228)
							class HLC_optic228_VTAC							{ quality = 3; price = 500; }		//	V-TAC Sights (228)

							
							
//	NIArms NIArsenal

			// WEAPONS & AMMO (ALPHABETICALLY)

					////////////////
					// ACR Rifles //
					////////////////
					
							class hlc_rifle_ACR68_SBR_tan      				{ quality = 3; price = 20000; };	//	Remington ACR-E in 6.8mm SPCII with 10.5" Barrel (Tan)
							class hlc_rifle_ACR68_SBR_black					{ quality = 3; price = 20000; };	//	Remington ACR-E in 6.8mm SPCII with 10.5" Barrel (Black)
							class hlc_rifle_ACR68_SBR_green					{ quality = 3; price = 20000; };    //	Remington ACR-E in 6.8mm SPCII with 10.5" Barrel (Green)
							
							class hlc_rifle_ACR68_Carb_black				{ quality = 3; price = 20000; };	//	Remington ACR-E in 6.8mm SPCII with 14.5" Barrel (Black)
							class hlc_rifle_ACR68_Carb_tan					{ quality = 3; price = 20000; };	//	Remington ACR-E in 6.8mm SPCII with 14.5" Barrel (Tan)
							class hlc_rifle_ACR68_Carb_green				{ quality = 3; price = 20000; };	//	Remington ACR-E in 6.8mm SPCII with 14.5" Barrel (Green)
							
							class hlc_rifle_ACR68_MID_black					{ quality = 3; price = 20000; };	//	Remington ACR-E in 6.8mm SPCII with 16.5" Barrel (Black)
							class hlc_rifle_ACR68_MID_tan					{ quality = 3; price = 20000; };	//	Remington ACR-E in 6.8mm SPCII with 16.5" Barrel (Tan)
							class hlc_rifle_ACR68_MID_green					{ quality = 3; price = 20000; };	//	Remington ACR-E in 6.8mm SPCII with 16.5" Barrel (Green)
							
							class hlc_rifle_ACR68_full_black				{ quality = 3; price = 20000; };	//	Remington ACR-E in 6.8mm SPCII with 20" Barrel (Black)
							class hlc_rifle_ACR68_full_tan					{ quality = 3; price = 20000; };	//	Remington ACR-E in 6.8mm SPCII with 20" Barrel (Tan)
							class hlc_rifle_ACR68_full_green				{ quality = 3; price = 20000; };	//	Remington ACR-E in 6.8mm SPCII with 20" Barrel (Green)

							class hlc_rifle_ACR_SBR_tan      				{ quality = 3; price = 20000; };	//	Remington ACR-E in 5.56mm NATO with 10.5" Barrel (Tan)
							class hlc_rifle_ACR_SBR_black					{ quality = 3; price = 20000; };	//	Remington ACR-E in 5.56mm NATO with 10.5" Barrel (Black)
							class hlc_rifle_ACR_SBR_green					{ quality = 3; price = 20000; };	//	Remington ACR-E in 5.56mm NATO with 10.5" Barrel (Green)
							
							class hlc_rifle_ACR_Carb_black					{ quality = 3; price = 20000; };	//	Remington ACR-E in 5.56mm NATO with 14.5" Barrel (Black)
							class hlc_rifle_ACR_Carb_tan					{ quality = 3; price = 20000; };	//	Remington ACR-E in 5.56mm NATO with 14.5" Barrel (Tan)
							class hlc_rifle_ACR_Carb_green					{ quality = 3; price = 20000; };	//	Remington ACR-E in 5.56mm NATO with 14.5" Barrel (Green)
							
							class hlc_rifle_ACR_MID_black					{ quality = 3; price = 20000; };	//	Remington ACR-E in 5.56mm NATO with 16.5" Barrel (Black)
							class hlc_rifle_ACR_MID_tan						{ quality = 3; price = 20000; };	//	Remington ACR-E in 5.56mm NATO with 16.5" Barrel (Tan)
							class hlc_rifle_ACR_MID_green					{ quality = 3; price = 20000; };	//	Remington ACR-E in 5.56mm NATO with 16.5" Barrel (Green)
							
							class hlc_rifle_ACR_full_black					{ quality = 3; price = 20000; };	//	Remington ACR-E in 5.56mm NATO with 20" Barrel (Black)
							class hlc_rifle_ACR_full_tan					{ quality = 3; price = 20000; };	//	Remington ACR-E in 5.56mm NATO with 20" Barrel (Tan)
							class hlc_rifle_ACR_full_green					{ quality = 3; price = 20000; };	//	Remington ACR-E in 5.56mm NATO with 20" Barrel (Green)
							
							class hlc_rifleACR_SBR_cliffhanger				{ quality = 3; price = 20000; };	//	Remington ACR-E in 5.56mm NATO with 10.5" Barrel - Cliffhanger special edition		
					
					//////////////
					// ACR Ammo //
					//////////////
					
							class hlc_30rnd_68x43_FMJ						{ quality = 3; price = 300; };		//	26-round magazine of FMJ 6.8x43mm SPC
							class hlc_30rnd_68x43_OTM						{ quality = 3; price = 300; };		//	26-round magazine of Ballistic-Tip Boat-tail 6.8x43mm SPC
							class hlc_30rnd_68x43_Tracer					{ quality = 3; price = 400; };		//	26-round magazine of NATO-spec Tracer 6.8x43mm SPC
							class hlc_30rnd_68x43_IRDIM						{ quality = 3; price = 400; };		//	26-round magazine of IR-DIM Tracer 6.8x43mm SPC
							class hlc_30rnd_68x43_MFMJ						{ quality = 3; price = 400; };		//	26-round magazine of 1-to-4 NATO-spec Tracer/FMJ 6.8x43mm SPC
							class hlc_30rnd_68x43_MIRDIM					{ quality = 3; price = 400; };		//	26-round magazine of 1-to-4 NATO-spec IR-DIM/FMJ 6.8x43mm SPC
		
					///////////////
					// AK Rifles //
					///////////////
					
							class hlc_rifle_ak74							{ quality = 3; price = 20000; };	// AK74
							class hlc_rifle_ak74_MTK						{ quality = 3; price = 20000; };	// AK74 with MTK83 Picatinny Mount
							
							class hlc_rifle_ak74_dirty						{ quality = 3; price = 20000; };	// AK74, Worn
							class hlc_rifle_ak74_dirty2						{ quality = 3; price = 20000; };	// AK74, Worn
							class hlc_rifle_aks74							{ quality = 3; price = 20000; };	// AKS74
							class hlc_rifle_aks74_MTK						{ quality = 3; price = 20000; };	// AKS74 with MTK83 Picatinny Mount
							class hlc_rifle_aks74u							{ quality = 3; price = 20000; };	// AKS74U
							class hlc_rifle_aks74u_MTK						{ quality = 3; price = 20000; };	// AKS74U with MTK83 Picatinny Mount
							
							class hlc_rifle_ak47							{ quality = 3; price = 20000; };	// AK47
							
							class hlc_rifle_akm								{ quality = 3; price = 20000; };	// AKM
							class hlc_rifle_akmgl							{ quality = 3; price = 20000; };	// AKM+GP25
							class hlc_rifle_akm_MTK							{ quality = 3; price = 20000; };	// AKM with MTK83 Picatinny Mount
							
							class hlc_rifle_rpk								{ quality = 3; price = 25000; };	// RPK
							class hlc_rifle_rpk12							{ quality = 3; price = 25000; };	// RPK12
							class hlc_rifle_rpk74n							{ quality = 3; price = 25000; };	// RPK74N
							
							class hlc_rifle_ak12							{ quality = 3; price = 20000; };	// AK12
							class hlc_rifle_aku12							{ quality = 3; price = 20000; };	// AK12U
							class hlc_rifle_ak12gl							{ quality = 3; price = 20000; };	// AK12+GP30
							
							class hlc_rifle_aks74_GL						{ quality = 3; price = 20000; };	// AKS74+GP30 (Export Variant)
							class hlc_rifle_aek971							{ quality = 3; price = 20000; };	// ZID AEK971S
							//class hlc_rifle_aek971						{ quality = 3; price = 20000; };	// ZID AEK971S, Worn (Texture Variant)
							class hlc_rifle_aek971_mtk						{ quality = 3; price = 20000; };	// ZID AEK971S, with MTK83 Picatinny Mount
							class hlc_rifle_RK62							{ quality = 3; price = 20000; };	// Valmet Rk.62
							
							class hlc_rifle_saiga12k						{ quality = 3; price = 25000; };	// Saiga12K Shotgun
							
							class hlc_rifle_slr107u							{ quality = 3; price = 17500; };	// Arsenal Inc. SLR107U (Izhmash AKM Reciever on Bulgarian Parts)
							class hlc_rifle_slr107u_MTK						{ quality = 3; price = 17500; };	// Arsenal Inc. SLR107U with MTK83 Picatinny Mount
							
							class hlc_rifle_ak74m							{ quality = 3; price = 20000; };	// AK74M
							class hlc_rifle_ak74m_gl						{ quality = 3; price = 20000; };	// AK74M+GP30
							class hlc_rifle_ak74m_MTK						{ quality = 3; price = 20000; };	// AK74M with MTK83 Picatinny Mount					
					
					/////////////
					// AK Ammo //
					/////////////
					
							class hlc_30Rnd_545x39_B_AK						{ quality = 3; price = 300; }		// 30 Round magazine of 5.45x39mm Ball Rounds (i.e, standard bullets)
							class hlc_30Rnd_545x39_T_AK						{ quality = 3; price = 400; }		// 30 Round magazine of 5.45x39mm Tracer Rounds
							class hlc_30Rnd_545x39_EP_AK					{ quality = 3; price = 500; }		// 30 Round magazine of 5.45x39mm Enhanced Performance Rounds
							
							class hlc_30Rnd_762x39_b_ak						{ quality = 3; price = 300; }		// 30 Round magazine of 7.62x39mm Ball Rounds (i.e, standard bullets)
							class hlc_30Rnd_762x39_t_ak						{ quality = 3; price = 400; }		// 30 Round magazine of 7.62x39mm Tracer Rounds
							
							class hlc_45Rnd_545x39_t_rpk					{ quality = 3; price = 400; }		// 45 Round magazine of 5.45x39mm Mixed at a ratio of 1 Tracer for every 2 Standard Ball rounds
							class hlc_60Rnd_545x39_t_rpk					{ quality = 3; price = 500; }		// 60 Round magazine of 5.45x39mm Mixed at a ratio of 1 Tracer for every 2 Standard Ball rounds
							class hlc_45Rnd_762x39_t_rpk					{ quality = 3; price = 400; }		// 45 Round magazine of 7.62x39mm Tracer Rounds
							
							class hlc_45Rnd_762x39_m_rpk					{ quality = 3; price = 500; }		// 45 Round magazine of 7.62x39mm Mixed at a ratio of 1 Tracer for every 2 Standard Ball rounds
							class hlc_75rnd_762x39_m_rpk					{ quality = 3; price = 600; }		// 75 Round magazine of 7.62x39mm Mixed at a ratio of 1 Tracer for every 2 Standard Ball rounds
							
							class hlc_10rnd_12g_buck_S12					{ quality = 3; price = 500; }		// 10 Round magazine of 12 Gauge 00-Buckshot rounds (dev note- Due to the way BIS implemented shotguns, buckshot tends to be an absolute building destroyer.)
							class hlc_10rnd_12g_slug_S12					{ quality = 3; price = 300; }		// 10 Round magazine of 12 Gauge Solid Slug rounds
	
					//////////////////
					// AR-15 Rifles //
					//////////////////
					
							class hlc_rifle_RU556							{ quality = 3; price = 20000; }		// AR15 Sanitied Carbine (Magpul AFG, MOE,P-Mag,BAD-lever. Novekse KX3)
							class hlc_rifle_RU5562							{ quality = 3; price = 20000; }		// AR15 Magpul Carbine (Magpul AFG, UBR,P-Mag,BAD-lever. Novekse KX3)
							class hlc_rifle_Colt727							{ quality = 3; price = 20000; }		// Colt Carbine (Colt Model 727 "Commando" - "M4" Barrel, M16A2 Upper, Full-Auto Lower)
							class hlc_rifle_Colt727_GL						{ quality = 3; price = 20000; }		// Same as above, add M203
							class hlc_rifle_bcmjack							{ quality = 3; price = 20000; }		// Bravo Company MFG/Haley Strategic 'Jack" Carbine ( Milspec M4 reciever, Geissele SMR Mk1, BCMGunfighter Muzzle brake/comp, there's more, but this isn't an advert)
							class hlc_rifle_Bushmaster300					{ quality = 3; price = 20000; }		// Busmaster .300 Carbine (M4A1-profile carbine chambered for .300 Blackout, instead of 5.56mm NATO)
							class hlc_rifle_vendimus						{ quality = 3; price = 20000; }		// AR15 .300 Dissipator Carbine (Carbine-length heavy barrel covered by full-length rifle furniture)
							class hlc_rifle_SAMR							{ quality = 3; price = 20000; }		// Rock River Arms LAR-15 AMR (Full-Auto-Capable full-length rifle, kitted out to be able to double as a marksman rifle, with accuracy to match)
							class hlc_rifle_honeybase						{ quality = 3; price = 20000; }		// AAC 'Honey-Badger',Sans Suppressor
							class hlc_rifle_honeybadger						{ quality = 3; price = 20000; }		// AAC 'Honey-Badger' (Suppressed Carbine-length defense weapon, created to show off the low-velocity suppressed capabilities of the .300 Blackout round)
					
					////////////////
					// AR-15 Ammo //
					////////////////
					
							class 29rnd_300BLK_STANAG						{ quality = 3; price = 400; }		// 30 Round magazine of .300 Blackout FMJ
							class 29rnd_300BLK_STANAG_T						{ quality = 3; price = 500; }		// 30 Round magazine of .300 Blackout Tracer Rounds
							class 29rnd_300BLK_STANAG_S						{ quality = 3; price = 600; }		// 30 Round magazine of .300 Blackout FMJ "cold" loads for optimum sound suppression.
							
							class hlc_30rnd_556x45_EPR						{ quality = 3; price = 500; }		// 30 Round magazine of 5.56x45mm NATO Enhanced Performance Rounds.
							class hlc_30rnd_556x45_SOST						{ quality = 3; price = 550; }		// 30 Round magazine of 5.56x45mm NATO Mk318 Rounds (designed for optimal performance with even SBR-length rifles).
							class hlc_30rnd_556x45_SPR						{ quality = 3; price = 600; }		// 30 Round magazine of 5.56x45mm NATO Mk262 Rounds (designed for long range ballistic consistency).
	
					////////////////
					// AUG Rifles //
					////////////////
					
							class hlc_barrel_standard						{ quality = 3; price = 1500; }		//	Standard length(20") AUG Barrel
							class hlc_barrel_carbine						{ quality = 3; price = 1500; }		//	Carbine length (18") AUG Barrel
							class hlc_barrel_hbar							{ quality = 3; price = 1500; }		//	Heavy AUG Barrel (24")
							
							class hlc_barrel_9mm							{ quality = 3; price = 1500; }		//	9mm Parabellum Caliber Conversion Kit. (Contains Bolt, Magazine Adapter, 9" Barrel)
							
							class hlc_rifle_aug								{ quality = 4; price = 20000; }		//	Steyr AUGA1 - Rifle-barrel (Default OD)
							class hlc_rifle_auga1_t							{ quality = 4; price = 20000; }		//	Steyr AUGA1 - Rifle-barrel (Tan)
							class hlc_rifle_auga1_B							{ quality = 4; price = 20000; }		//	Steyr AUGA1 - Rifle-barrel (Black)
							
							class hlc_rifle_auga1carb						{ quality = 3; price = 17500; }		//	Steyr AUGA1 - Carbine-barrel
							class hlc_rifle_auga1carb_t						{ quality = 3; price = 17500; }		//	Steyr AUGA1 - Carbine-barrel (Tan)
							class hlc_rifle_auga1carb_b						{ quality = 3; price = 17500; }		//	Steyr AUGA1 - Carbine-barrel (Black)
							
							class hlc_rifle_aughbar							{ quality = 3; price = 22500; }		//	Steyr AUGA1 - Heavy Barrel
							class hlc_rifle_aughbar_t						{ quality = 3; price = 22500; }		//	Steyr AUGA1 - Heavy Barrel (Tan)
							class hlc_rifle_aughbar_b						{ quality = 3; price = 22500; }		//	Steyr AUGA1 - Heavy Barrel (Black)
							
							class hlc_rifle_augpara							{ quality = 3; price = 15000; }		//	Steyr AUGA1 - 9mm Para
							class hlc_rifle_augpara_t						{ quality = 3; price = 15000; }		//	Steyr AUGA1 - 9mm Para (Tan)
							class hlc_rifle_augpara_b						{ quality = 3; price = 15000; }		//	Steyr AUGA1 - 9mm Para (Black)
							
							class hlc_rifle_auga2							{ quality = 3; price = 20000; }		//	Steyr AUGA2 - Rifle-barrel (Default OD)
							class hlc_rifle_auga2_t							{ quality = 3; price = 20000; }		//	Steyr AUGA2 - Rifle-barrel (Tan)
							class hlc_rifle_auga2_b							{ quality = 3; price = 20000; }		//	Steyr AUGA2 - Rifle-barrel (Black)
							
							class hlc_rifle_auga2carb						{ quality = 3; price = 17500; }		//	Steyr AUGA2 - Carbine-barrel
							class hlc_rifle_auga2carb_t						{ quality = 3; price = 17500; }		//	Steyr AUGA2 - Carbine-barrel (Tan)
							class hlc_rifle_auga2carb_b						{ quality = 3; price = 17500; }		//	Steyr AUGA2 - Carbine-barrel (Black)
							
							class hlc_rifle_auga2lsw						{ quality = 3; price = 22500; }		//	Steyr AUGA2 - Heavy Barrel
							class hlc_rifle_auga2lsw_t						{ quality = 3; price = 22500; }		//	Steyr AUGA2 - Heavy Barrel (Tan)
							class hlc_rifle_auga2lsw_b						{ quality = 3; price = 22500; }		//	Steyr AUGA2 - Heavy Barrel (Black)
							
							class hlc_rifle_auga2para						{ quality = 3; price = 15000; }		//	Steyr AUGA2 - 9mm Para
							class hlc_rifle_auga2para_t						{ quality = 3; price = 15000; }		//	Steyr AUGA2 - 9mm Para (Tan)
							class hlc_rifle_auga2para_b						{ quality = 3; price = 15000; }		//	Steyr AUGA2 - 9mm Para (Black)
							
							class hlc_rifle_augsr							{ quality = 4; price = 20000; }		//	Steyr AUGSR (Special Receiver) - Rifle-barrel (Default OD)
							class hlc_rifle_augsr_t							{ quality = 4; price = 20000; }		//	Steyr AUGSR (Special Receiver) - Rifle-barrel (Tan)
							class hlc_rifle_augsr_b							{ quality = 4; price = 20000; }		//	Steyr AUGSR (Special Receiver) - Rifle-barrel (Black)
							
							class hlc_rifle_augsrcarb						{ quality = 3; price = 17500; }		//	Steyr AUGSR (Special Receiver) - Carbine-barrel
							class hlc_rifle_augsrcarb_t						{ quality = 3; price = 17500; }		//	Steyr AUGSR (Special Receiver) - Carbine-barrel (Tan)
							class hlc_rifle_augsrcarb_b						{ quality = 3; price = 17500; }		//	Steyr AUGSR (Special Receiver) - Carbine-barrel (Black)
							
							class hlc_rifle_augsrhbar						{ quality = 4; price = 22500; }		//	Steyr AUGSR (Special Receiver) - Heavy Barrel
							class hlc_rifle_augsrhbar_t						{ quality = 4; price = 22500; }		//	Steyr AUGSR (Special Receiver) - Heavy Barrel (Tan)
							class hlc_rifle_augsrhbar_b						{ quality = 4; price = 22500; }		//	Steyr AUGSR (Special Receiver) - Heavy Barrel (Black)
							
							class hlc_rifle_auga3							{ quality = 4; price = 20000; }		//	Steyr AUGA3- Rifle-barrel (Default Green)
							class hlc_rifle_auga3_bl						{ quality = 4; price = 20000; }		//	Steyr AUGA3- Rifle-barrel (Blue)
							class hlc_rifle_auga3_b							{ quality = 4; price = 20000; }		//	Steyr AUGA3- Rifle-barrel (Black)
							
							class hlc_rifle_auga3_GL						{ quality = 4; price = 25000; }		//	Steyr AUGA3 with M203A1
							class hlc_rifle_auga3_GL_BL						{ quality = 4; price = 25000; }		//	Steyr AUGA3 with M203A1 (Blue)
							class hlc_rifle_auga3_GL_B						{ quality = 4; price = 25000; }		//	Steyr AUGA3 with M203A1 (Black)
					
					//////////////
					// AUG Ammo //
					//////////////
					
							class hlc_30Rnd_556x45_B_AUG					{ quality = 3; price = 500; } 		//	30 Round magazine of 5.56x45mm NATO Enhanced Performance Rounds for the Steyr AUG.
							class hlc_30Rnd_556x45_SOST_AUG					{ quality = 3; price = 400; } 		//	30 Round magazine of 5.56x45mm NATO Mk318 Rounds for the Steyr AUG.
							class hlc_30Rnd_556x45_SPR_AUG					{ quality = 3; price = 600; }		//	30 Round magazine of 5.56x45mm NATO Mk262 Rounds (Designed for long range ballistic consistency for the Steyr AUG).
							class hlc_30Rnd_556x45_T_AUG					{ quality = 3; price = 400; }		//	30 Round magazine of 5.56x45mm NATO Red Trace Ball for the Steyr AUG.
							
							class hlc_40Rnd_556x45_B_AUG					{ quality = 3; price = 550; }		//	42 Round magazine of 5.56x45mm NATO Enhanced Performance Rounds for the Steyr AUG.
							class hlc_40Rnd_556x45_SOST_AUG					{ quality = 3; price = 450; }		//	42 Round magazine of 5.56x45mm NATO Mk318 Rounds for the Steyr AUG.
							class hlc_40Rnd_556x45_SPR_AUG					{ quality = 3; price = 650; } 		//	42 Round magazine of 5.56x45mm NATO Mk262 Rounds (Designed for long range ballistic consistency for the Steyr AUG).
							
							class hlc_25Rnd_9x19mm_M882_AUG					{ quality = 3; price = 300; } 		//	25 Round magazine of 9x19mm M882 NATO Ball for the Aug 9mm.
							class hlc_25Rnd_9x19mm_JHP_AUG					{ quality = 3; price = 400; } 		//	25 Round magazine of 9x19mm LE Jacketed Hollowpoint for the Aug 9mm.
							class hlc_25Rnd_9x19mm_subsonic_AUG				{ quality = 3; price = 350; }		//	25 Round magazine of 9x19mm Subsonic Ball for the Aug 9mm.
	
					////////////////
					// AWM Rifles //
					////////////////
					
							class hlc_rifle_awcovert						{ quality = 6; price = 42500; }		//	AI Arctic Warfare Covert-Magnum (Olive Drab) .300 Win Mag
							class hlc_rifle_awcovert_BL						{ quality = 6; price = 42500; }		//	AI Arctic Warfare Covert-Magnum (Flat Dark Earth) .300 Win Mag
							class hlc_rifle_awcovert_FDE					{ quality = 6; price = 42500; }		//	AI Arctic Warfare Covert-Magnum (Black) .300 Win Mag
							class hlc_rifle_awmagnum						{ quality = 6; price = 40000; }		//	AI Arctic Warfare Magnum (Olive Drab) .300 Win Mag - With Parker-Hale Bipod
							class hlc_rifle_awmagnum_BL						{ quality = 6; price = 40000; }		//	AI Arctic Warfare Magnum (Black) .300 Win Mag - With Parker-Hale Bipod
							class hlc_rifle_awmagnum_FDE					{ quality = 6; price = 40000; }		//	AI Arctic Warfare Magnum (Flat Dark Earth) .300 Win Mag - With Parker-Hale Bipod
							class hlc_rifle_awMagnum_FDE_ghillie			{ quality = 6; price = 42500; }		//	AI Arctic Warfare Magnum (Flat Dark Earth) .300 Win Mag - With Parker-Hale Bipod and Ghillie Shroud
							class hlc_rifle_awMagnum_BL_ghillie				{ quality = 6; price = 42500; }		//	AI Arctic Warfare Magnum (Black) .300 Win Mag - With Parker-Hale Bipod and Ghillie Shroud
							class hlc_rifle_awMagnum_OD_ghillie				{ quality = 6; price = 42500; }		//	AI Arctic Warfare Magnum (Olive Drab) .300 Win Mag - With Parker-Hale Bipod and Ghillie Shroud
					
					//////////////
					// AWM Ammo //
					//////////////
					
							class hlc_5rnd_300WM_FMJ_AWM					{ quality = 6; price = 600; }		//	5-round .300WM Magazine loaded with MEN S230430 FMJ rounds.
							class hlc_5rnd_300WM_AP_AWM						{ quality = 6; price = 800; }		//	5-round .300WM Magazine loaded with MEN DM131 AP rounds.
							class hlc_5rnd_300WM_BTSP_AWM					{ quality = 6; price = 400; }		//	5-round .300WM Magazine loaded with 190grain Boat-Tail Soft-Tip rounds.
							class hlc_5rnd_300WM_mk248_AWM					{ quality = 6; price = 450; }		//	5-round .300WM Magazine loaded with Mk.248 Mod.1 OTM rounds.
							class hlc_5rnd_300WM_SBT_AWM					{ quality = 6; price = 500; }		//	5-round .300WM Magazine loaded with down-loaded Soft-tip rounds.(SAAMI standards and Spartan 0536 advise me not to endorse the kind of downloading that is demonstrated in this magazine)
	
					//////////////////////////
					//    FN FAL Rifles 	//
					//////////////////////////
					
							class hlc_rifle_l1a1slr		 					{ quality = 4; price = 20000; }		//	Enfield L1A1 SLR
							class hlc_rifle_SLR		 	 					{ quality = 4; price = 20000; }		//	Lithgow SLR (Australian manufactured L1A1)
							class hlc_rifle_c1A1			 				{ quality = 4; price = 20000; }		//	Canadian Arms Limited C1A1 (Canadian SLR variant, First Formally adopted FAL Rifle)
							
							class hlc_rifle_STG58F		 					{ quality = 4; price = 20000; }		//	Steyr STG.58
							class hlc_rifle_falosw		 					{ quality = 4; price = 20000; }		//	DSA Arms FAL OSW (Offensive Suppression Weapon. Or Offensively Short Weapon)
							class hlc_rifle_osw_GL		 					{ quality = 4; price = 20000; }		//	DSA Arms FAL OSW + M203 GL	
							class hlc_rifle_FAL5061		 					{ quality = 4; price = 20000; }		//	FN FAL 50.61 'Para' 
							class hlc_rifle_FAL5061Rail						{ quality = 4; price = 25000; }		//	FN FAL 50.61 'Para' with Picatinny Rail Interface
							class hlc_rifle_FAL5000		 					{ quality = 4; price = 20000; }		//	FN FAL 50.00 
							class hlc_rifle_FAL5000Rail						{ quality = 4; price = 25000; }		//	FN FAL 50.00 with Picatinny Rail Interface
							class hlc_rifle_LAR			 					{ quality = 4; price = 20000; }		//	FN LAR (Light infantry rifle contracted to Israel, Differs from the Support variant by the omission of bipod and standard width barrel)
							class hlc_rifle_SLRchopmod		 				{ quality = 4; price = 20000; }		//	Lithgow SLR Chopmod ( Litghow SLR with the selector group from an L2A1 , Barrel sawn down and flash suppressor omitted, additional pistol grip drilled to foregrip. SASR armorer improvised solution to recon egnagements in Vietnam.)
					
					//////////////////////
					//    FN FAL Ammo 	//
					//////////////////////
					
							class hlc_20Rnd_762x51_B_fal					{ quality = 3; price = 300; }		//	20 Round magazine of 7.62x51mm Ball Rounds (i.e, standard bullets)
							class hlc_20Rnd_762x51_t_fal					{ quality = 3; price = 400; }		//	20 Round magazine of 7.62x51mm Tracer Rounds
							class hlc_20Rnd_762x51_S_fal					{ quality = 3; price = 550; }		//	20 Round magazine of 7.62x51mm cold-loaded ball (subsonic, for use with suppressor)
							class hlc_50rnd_762x51_M_FAL					{ quality = 3; price = 600; }		//	50 Round magazine of 7.62x51mm Mixed at a ratio of 1 Tracer for every 5 Standard Ball rounds (X-systems drum mag, so you can have the SAW be interoperable with the rest of the squad.)
					
					//////////////////////////
					//    FN 30-11 Rifles 	//
					//////////////////////////
					
							class hlc_rifle_FN3011		 	 				{ quality = 4; price = 30000; }		// FN 3011 Factory Issue - 7.62mmx51 NATO
							class hlc_rifle_FN3011_WDL		 				{ quality = 4; price = 30000; }		// FN 3011 (Light Woodland Camo) - 7.62mmx51 NATO
							class hlc_rifle_FN3011Modern		 			{ quality = 4; price = 30000; }		// FN 3011 (Modernised- M1913 Scout Rail, M1913 Bipod Adapter, Threaded Muzzle) - 7.62mmx51 NATO
							class hlc_rifle_FN3011Modern_camo				{ quality = 4; price = 30000; }		// FN 3011 (Modernised-Camo) - 7.62mmx51 NATO
							class hlc_rifle_FN3011Lynx						{ quality = 4; price = 30000; }		// FN 3011 (Modernised-Special Commissionfor Lynx) - 7.62mmx51 NATO
							class hlc_rifle_FN3011Tactical					{ quality = 4; price = 30000; }		// FN 3011 (Tactical, Brown Laminate) - 7.62mmx51 NATO
							class hlc_rifle_FN3011Tactical_grey				{ quality = 4; price = 30000; }		// FN 3011 (Tactical, Grey Laminate) - 7.62mmx51 NATO
							class hlc_rifle_FN3011Tactical_green			{ quality = 4; price = 30000; }		// FN 3011 (Tactical, Green Laminate) - 7.62mmx51 NATO

					////////////////////
					//	FN 30-11 Ammo //
					////////////////////

							class hlc_10Rnd_762x51_B_fal		     		{ quality = 4; price = 30000; }		// 10-round FN FAL/FN3011 Magazine loaded with EPR rounds.
							class hlc_10Rnd_762x51_mk316_fal		 		{ quality = 4; price = 30000; }		// 10-round FN FAL/FN3011 Magazine loaded with SBLR rounds.
							class hlc_10Rnd_762x51_barrier_fal	 			{ quality = 4; price = 30000; }		// 10-round FN FAL/FN3011 Magazine loaded with SOST rounds.
							class hlc_10Rnd_762x51_T_fal	        		{ quality = 4; price = 30000; }		// 10-round FN FAL/FN3011 Magazine loaded with Tracer rounds.
							class hlc_10Rnd_762x51_TDim_fal					{ quality = 4; price = 30000; }		// 10-round FN FAL/FN3011 Magazine loaded with IR-Dim Tracer rounds.
							class hlc_10Rnd_762x51_S_fal          			{ quality = 4; price = 30000; }		// 10-round FN FAL/FN3011 Magazine loaded with cold-load subsonic EPR rounds.
					
					///////////////
					// G3 Rifles //
					///////////////
					
							class hlc_rifle_g3sg1							{ quality = 3; price = 30000; }		// 1200m
							
							class hlc_rifle_g3a3							{ quality = 4; price = 30000; }		// 1200m
							class hlc_rifle_g3a3v							{ quality = 4; price = 30000; }		// 1200m
							class hlc_rifle_g3a3ris							{ quality = 4; price = 32000; }		// 1200m
							
							class hlc_rifle_g3ka4							{ quality = 4; price = 30000; }		// 1200m
							class HLC_Rifle_g3ka4_GL						{ quality = 4; price = 30000; }		// 1200m
							
							class hlc_rifle_hk51							{ quality = 4; price = 30000; }		// 1200m, 60% accuracy
							class hlc_rifle_hk53							{ quality = 4; price = 30000; }		// 600m, 80% accuracy
							class hlc_rifle_hk53RAS							{ quality = 4; price = 30000; }		// 600m, 80% accuracy
							
							class hlc_rifle_hk33a2							{ quality = 4; price = 30000; }		// 900m
							class hlc_rifle_hk33a2RIS						{ quality = 4; price = 32000; }		// 900m 
							
							class hlc_rifle_psg1							{ quality = 5; price = 40000; }		// 2000m
							class hlc_rifle_psg1A1							{ quality = 5; price = 45000; }
							class hlc_rifle_PSG1A1_RIS						{ quality = 6; price = 47500; }
					
					/////////////
					// G3 Ammo //
					/////////////
					
							class hlc_20Rnd_762x51_B_G3						{ quality = 3; price = 400; }
							class hlc_20rnd_762x51_T_G3						{ quality = 3; price = 500; }
							class hlc_50rnd_762x51_M_G3						{ quality = 3; price = 350; }
					
					////////////////
					// G36 Rifles //
					////////////////
					
							class hlc_rifle_G36A1							{ quality = 4; price = 27500; }
							class hlc_rifle_G36A1AG36						{ quality = 4; price = 27500; }
							class hlc_rifle_G36KA1							{ quality = 4; price = 27500; }
							class hlc_rifle_G36C							{ quality = 4; price = 27500; }
							class hlc_rifle_G36E1							{ quality = 4; price = 27500; }
							class hlc_rifle_G36E1AG36						{ quality = 4; price = 27500; }
							class hlc_rifle_G36KE1							{ quality = 4; price = 27500; }
							class hlc_rifle_G36V							{ quality = 4; price = 27500; }
							class hlc_rifle_G36KV							{ quality = 4; price = 27500; }
							class hlc_rifle_G36CV							{ quality = 4; price = 27500; }
							class hlc_rifle_G36VAG36						{ quality = 4; price = 27500; }
							class hlc_rifle_G36TAC							{ quality = 4; price = 27500; }
							class hlc_rifle_G36KTAC							{ quality = 4; price = 27500; }
							class hlc_rifle_G36CTAC							{ quality = 4; price = 27500; }
							class hlc_rifle_G36MLIC							{ quality = 4; price = 27500; }
							class hlc_rifle_G36KMLIC						{ quality = 4; price = 27500; }
							class hlc_rifle_G36CMLIC						{ quality = 4; price = 27500; }
							class hlc_rifle_G36MLIAG36						{ quality = 4; price = 27500; }
							class hlc_rifle_MG36							{ quality = 4; price = 47500; }
					
					//////////////
					// G36 Ammo //
					//////////////
					
							class hlc_30rnd_556x45_EPR_G36					{ quality = 4; price = 450; }
							class hlc_30rnd_556x45_SOST_G36					{ quality = 4; price = 450; }
							class hlc_30rnd_556x45_SPR_G36					{ quality = 4; price = 450; }
							class hlc_100rnd_556x45_EPR_G36					{ quality = 4; price = 450; }
					
					////////////////
					// M14 Rifles //
					////////////////
					
							class hlc_rifle_M14								{ quality = 4; price = 22500; }
							class hlc_rifle_M14_Bipod						{ quality = 4; price = 22500; }
							class hlc_rifle_M14_Rail						{ quality = 4; price = 22500; }
							class hlc_rifle_M14_Bipod_Rail					{ quality = 4; price = 22500; }

							class hlc_rifle_M14dmr							{ quality = 4; price = 25000; }	
							class hlc_rifle_M14dmr_Rail						{ quality = 4; price = 25000; }
							
							class hlc_rifle_M21								{ quality = 4; price = 27500; }	
							class hlc_rifle_M21_Rail						{ quality = 4; price = 27500; }
							
							class hlc_rifle_m14sopmod						{ quality = 5; price = 30000; }
					
					//////////////
					// M14 Ammo //
					//////////////
					
							class hlc_20Rnd_762x51_B_M14					{ quality = 4; price = 400; }
							class hlc_20rnd_762x51_T_M14					{ quality = 4; price = 500; }
							class hlc_50rnd_762x51_M_M14					{ quality = 4; price = 400; }
					
					//////////////////////////////
					// M1903 Springfield Rifles //
					//////////////////////////////
					
							class hlc_rifle_M1903A1_unertl					{ quality = 4; price = 30000; }		//	M1903A1 Rifle permenantly fitted with 8x Unertl Scope
							class hlc_rifle_M1903A1							{ quality = 4; price = 30000; }		//	M1903A1 Service Rifle
					
					////////////////////////////
					// M1903 Springfield Ammo //
					////////////////////////////

							class hlc_5rnd_3006_1903						{ quality = 4; price = 500; }		//	5-round clip of .30-06 M1 Military Ball.
					
					////////////////
					// M60E4 LMGs //
					////////////////
					
							class hlc_lmg_M60E4		 						{ quality = 5; price = 32500; }		//	M60E4
							class hlc_lmg_m60								{ quality = 5; price = 32500; } 	//	M60 (original variant, no rails, longer, heavier)
				
					////////////////
					// M60E4 Ammo //
					////////////////
				
							class hlc_100Rnd_762x51_B_M60E4	 				{ quality = 5; price = 500; }		//	100 Round magazine of 7.62x51mm Ball Rounds (i.e, standard bullets)
							class hlc_100Rnd_762x51_T_M60E4	 				{ quality = 5; price = 500; }		//	100 Round magazine of 7.62x51mm Tracer Rounds
							class hlc_100Rnd_762x51_M_M60E4	 				{ quality = 5; price = 500; }		//	100 Round magazine of 7.62x51mm Mixed at a ratio of 1 Tracer for every 2 Standard Ball rounds
					
					/////////////////////
					// MG42s/MG42 LMGs //
					/////////////////////
					
							class hlc_lmg_MG42								{ quality = 5; price = 32500; }		//	MG42 (Wooden Stock)
							class hlc_lmg_mg42_bakelite						{ quality = 5; price = 32500; }		//	MG42 (Bakelite)
							class hlc_lmg_MG3								{ quality = 5; price = 32500; }		//	Rheinmetall MG3 
							class hlc_lmg_MG3_optic							{ quality = 5; price = 32500; }		//	Rheinmetall Mg M/62 (Danish Contract MG3+Optic Mount)
							class hlc_lmg_MG3KWS							{ quality = 5; price = 32500; }		//	Rheinmetall MG3-KWS : Kampfwertsteigerung (Combat Improvements Model)(Tan/RAL)
							class hlc_lmg_MG3KWS_b			 				{ quality = 5; price = 32500; }		//	Rheinmetall MG3-KWS : Kampfwertsteigerung (Combat Improvements Model)(Green/RAL)
							class hlc_lmg_MG3KWS_g			 				{ quality = 5; price = 32500; }		//	Rheinmetall MG3-KWS : Kampfwertsteigerung (Combat Improvements Model)(Black)
							class hlc_lmg_MG42KWS_t			 				{ quality = 5; price = 32500; }		//	Rheinmetall MG42-KWS : MG3KWS fitted with MG42 components (Tan/RAL)
							class hlc_lmg_MG42KWS_g			 				{ quality = 5; price = 32500; }		//	Rheinmetall MG42-KWS : MG3KWS fitted with MG42 components (Green/RAL)
							class hlc_lmg_MG42KWS_B			 				{ quality = 5; price = 32500; }		//	Rheinmetall MG42-KWS : MG3KWS fitted with MG42 components (Black)
							
					/////////////////////
					// MG42s/MG42 Ammo //
					/////////////////////
					
							class hlc_50Rnd_792x57_B_MG42					{ quality = 5; price = 500; }		//	Gurtrommel with 50 Rounds of 7.92x57mm sS Patrone (FMJ)				 - MG42
							class hlc_50Rnd_792x57_M_MG42					{ quality = 5; price = 500; }		//	Gurtrommel with 50 Rounds of 7.92x57mm S.m.K -v and S.m.K Leuchtspur (EPR/Tracer 4:1)	 - MG42
							class hlc_50Rnd_792x57_T_MG42					{ quality = 5; price = 500; }		//	Gurtrommel with 50 Rounds of 7.92x57mm S.m.K Leuchtspur (Tracer)				 - MG42
							class hlc_100Rnd_792x57_B_MG42					{ quality = 5; price = 500; }		//	100 Rounds of 7.92x57mm sS Patrone (FMJ)						 - MG42
							class hlc_100Rnd_792x57_M_MG42					{ quality = 5; price = 500; }		//	100 Rounds of  7.92x57mm S.m.K -v and S.m.K Leuchtspur (EPR/Tracer 4:1)	 	 	 - MG42	
							class hlc_100Rnd_792x57_T_MG42					{ quality = 5; price = 500; }		//	100 Rounds of  7.92x57mm S.m.K Leuchtspur (Tracer)					 - MG42
							class hlc_200Rnd_792x57_B_MG42					{ quality = 5; price = 500; }		//	200 Rounds of 7.92x57mm sS Patrone (FMJ)						 - MG42
							class hlc_200Rnd_792x57_M_MG42					{ quality = 5; price = 500; }		//	200 Rounds of  7.92x57mm S.m.K -v and S.m.K Leuchtspur (EPR/Tracer 4:1)			 - MG42
							class hlc_200Rnd_792x57_T_MG42					{ quality = 5; price = 500; }		//	200 Rounds of  7.92x57mm S.m.K Leuchtspur (Tracer)					 - MG42
							class hlc_50Rnd_792x57_AP_MG42					{ quality = 5; price = 500; }		//	Gurtrommel with 50 Rounds of 7.92x57mm S.m.K.H (AP)					 - MG42
							class hlc_100Rnd_792x57_AP_MG42					{ quality = 5; price = 500; }		//	100 Rounds of 7.92x57mm S.m.K.H (AP)						 - MG42
							class hlc_200Rnd_792x57_AP_MG42					{ quality = 5; price = 500; }		//	200 Rounds of 7.92x57mm S.m.K.H (AP)	 					 - MG42
							class hlc_50Rnd_762x51_B_MG3					{ quality = 5; price = 500; }		//	Gurtrommel with 50 Rounds of 7.62x51mm M855A1 in DM1 Links (FMJ)
							class hlc_50Rnd_762x51_M_MG3					{ quality = 5; price = 500; }		//	Gurtrommel with 50 Rounds of 7.62x51mm M855A1 in DM1 Links (FMJ/Tracer 4:1)
							class hlc_50Rnd_762x51_Barrier_MG3				{ quality = 5; price = 500; }		//	Gurtrommel with 50 Rounds of 7.62x51mm Mk.319 EPBR in DM1 Links (Mk319/Tracer 4:1)
							class hlc_50Rnd_762x51_T_MG3					{ quality = 5; price = 500; }		//	Gurtrommel with 50 Rounds of 7.62x51mm M64 in DM1 Links (Tracer)
							class hlc_100Rnd_762x51_B_MG3					{ quality = 5; price = 500; }		//	100 Rounds of 7.62x51mm M855A1 in DM1 Links (FMJ)
							class hlc_100Rnd_762x51_M_MG3					{ quality = 5; price = 500; }		//	100 Rounds of 7.62x51mm M855A1 in DM1 Links (FMJ/Tracer 4:1)
							class hlc_100Rnd_762x51_Barrier_MG3				{ quality = 5; price = 500; }		//	100 Rounds of 7.62x51mm Mk.319 EPBR in DM1 Links (Mk319/Tracer 4:1)
							class hlc_100Rnd_762x51_T_MG3					{ quality = 5; price = 500; }		//	100 Rounds of 7.62x51mm M64 in DM1 Links (Tracer)
							class hlc_250Rnd_762x51_B_MG3					{ quality = 5; price = 500; }		//	200 Rounds of 7.62x51mm M855A1 in DM1 Links (FMJ)
							class hlc_250Rnd_762x51_M_MG3					{ quality = 5; price = 500; }		//	200 Rounds of 7.62x51mm M855A1 in DM1 Links (FMJ/Tracer 4:1)
							class hlc_250Rnd_762x51_Barrier_MG3				{ quality = 5; price = 500; }		//	200 Rounds of 7.62x51mm Mk.319 EPBR in DM1 Links (Mk319/Tracer 4:1)
							class hlc_1250Rnd_762x51_T_MG3					{ quality = 5; price = 500; }		//	200 Rounds of 7.62x51mm M64 in DM1 Links (Tracer)
					
					//////////////
					// MP5 SMGs //
					//////////////
					
							class hlc_smg_mp5k_PDW							{ quality = 3; price = 7500; }
							
							class hlc_smg_mp5k								{ quality = 3; price = 7500; }		//	Secondary 
							
							class hlc_smg_mp5a2								{ quality = 3; price = 15000; }		//	300m
							
							class hlc_smg_mp5a3								{ quality = 3; price = 15000; }		//	300m
							
							class hlc_smg_mp5a4								{ quality = 3; price = 15000; }		//	300m
							
							class hlc_smg_mp5n								{ quality = 3; price = 15000; }
							class hlc_smg_mp510								{ quality = 3; price = 15000; }		//	HK MP5/10
							class hlc_smg_mp5sd5							{ quality = 3; price = 17500; }
							class hlc_smg_mp5sd6							{ quality = 3; price = 17500; }
							class hlc_smg_9mmar								{ quality = 3; price = 15000; }
					
					//////////////
					// MP5 Ammo //
					//////////////
					
							class hlc_30Rnd_9x19_B_MP5						{ quality = 3; price = 500; }
							class hlc_30Rnd_9x19_GD_MP5						{ quality = 3; price = 500; }
							class hlc_30Rnd_9x19_SD_MP5						{ quality = 3; price = 500; }
							class hlc_30Rnd_10mm_B_MP5						{ quality = 3; price = 500; }
							class hlc_30Rnd_10mm_JHP_MP5					{ quality = 3; price = 750; }
					
					//////////////
					// SAW LMGs //
					//////////////
					
							class hlc_lmg_minimipara						{ quality = 5; price = 32500; }		//	Minimi Para (13.7" Barrel/ Para Stock) (No Optic Mount)
							class hlc_lmg_minimi							{ quality = 5; price = 32500; }		//	Minimi	(18.3" Barrel/Para Stock) (No Optic Mount)
							class hlc_lmg_minimi_railed						{ quality = 5; price = 32500; }		//	Minimi RIS (18.3" Barrel/Solid Stock/M1913 Optics Mount)
							class hlc_lmg_m249para							{ quality = 5; price = 32500; }		//	M249 Para (13.7" Barrel/Para Stock) (No Optic Mount)
							class hlc_lmg_M249E2							{ quality = 5; price = 32500; }		//	M249E2 (18.3" Barrel/Solid Stock) (No Optic Mount)
							class hlc_m249_pip1								{ quality = 5; price = 32500; }		//	M249E2 (18.3" Barrel/Solid Stock/M1913 Optics Mount)
							class hlc_m249_pip2								{ quality = 5; price = 32500; }		//	M249 Para (13.7" Barrel/Para Stock/ M1913 Optics Mount)
							class hlc_m249_pip3								{ quality = 5; price = 32500; }		//	M249 Para PIP (13.7" Barrel/PIP Stock/M1913 Optics Mount)
							class hlc_m249_pip4								{ quality = 5; price = 32500; }		//	M249 PIP (18.3" Barrel/PIP Stock/ M1913 Optics Mount/ Forward M1913 Tri-rail+VFG) (No Bipod)
							//class hlc_lmg_mk48							{ quality = 3; price = 40000; }		//	Mk.48 Mod.0 SPIW
					
					//////////////
					// SAW Ammo //
					//////////////
					
							class hlc_200rnd_556x45_M_SAW					{ quality = 5; price = 1250; }		//	200 Round magazine of 5.56x45mm M855A1 EP and M856 Tracer Rounds Mixed at a ratio of 1 Tracer for every 4 Ball rounds
							class hlc_200rnd_556x45_T_SAW					{ quality = 5; price = 1450; }		//	200 Round magazine of 5.56x45mm M856 Tracer Rounds
							class hlc_200rnd_556x45_B_SAW					{ quality = 5; price = 1250; }		//	200 Round magazine of 5.56x45mm M855A1 EP Rounds
							
					//////////////////
					// SG510 Rifles //
					//////////////////
					
							class hlc_rifle_STGW57							{ quality = 4; price = 30000; }		//	SIG Sturmgewehr 57/Fass 57.Can mount Kern AARAU 4x24 Scope. 7.5x55mm
							class hlc_rifle_stgw57_RIS						{ quality = 4; price = 30000; }		//	SIG Sturmgewehr 57/Fass 57 with Richner-Waffen Picatinny Rail Mount.
							class hlc_rifle_stgw57_commando					{ quality = 4; price = 30000; }		//	Customized STGW 57, with Cut-down barrel. Inspired by Swiss gunsmith Rudolf Aebi.
							class hlc_rifle_sig5104	 						{ quality = 4; price = 30000; }		//	SIG 510/4. 7.62x51mm NATO
							class hlc_rifle_amt								{ quality = 4; price = 30000; }		//	Sig AMT (American Match Target) in 7.62 NATO. No Bipod.
					
					////////////////
					// SG510 Ammo //
					////////////////
					
							class hlc_24Rnd_75x55_B_stgw	 				{ quality = 4; price = 500; }		//	24 Round Stgw57 magazine of GP11 175gr Military FMJ 
							class hlc_24Rnd_75x55_ap_stgw	 				{ quality = 4; price = 500; }		//	24 Round Stgw57 magazine of GP11 180gr Armour-piercing Boat-Tail
							class hlc_20Rnd_762x51_b_amt					{ quality = 4; price = 500; }		//	20 Round SG510-4 magazine of 7.62x51mm Enhanced FMJ
							class hlc_20Rnd_762x51_mk316_amt				{ quality = 4; price = 500; }		//	20 Round SG510-4 magazine of 7.62x51mm mk.316 Match
							class hlc_20Rnd_762x51_bball_amt				{ quality = 4; price = 500; }		//	20 Round SG510-4 magazine of 7.62x51mm mk.319 SOST Barrier Ball
							class hlc_20Rnd_762x51_T_amt					{ quality = 4; price = 500; }		//	20 Round SG510-4 magazine of 7.62x51mm Tracer rounds
							class hlc_24Rnd_75x55_T_stgw					{ quality = 4; price = 500; }		//	24 Round  Stgw57 magazine of GP11 Tracer rounds
					
					/////////////
					// Pistols //
					/////////////
					
							class hlc_pistol_P226WestGerman					{ quality = 3; price = 3500; }
							class hlc_pistol_P226US							{ quality = 3; price = 3500; }
							class hlc_pistol_P226R							{ quality = 3; price = 3500; }
							class hlc_pistol_P226R_Elite					{ quality = 3; price = 3500; }
							class hlc_pistol_P226R_Combat					{ quality = 3; price = 3500; }
							class hlc_pistol_Mk25							{ quality = 3; price = 3500; }
							class hlc_pistol_Mk25D							{ quality = 3; price = 3500; }
							class hlc_Pistol_mk25RX							{ quality = 3; price = 3500; }
							class hlc_pistol_P226R_40						{ quality = 3; price = 5000; }
							class hlc_pistol_P226R_40Elite					{ quality = 3; price = 5000; }
							class hlc_pistol_P226R_40Combat					{ quality = 3; price = 5000; }
							class hlc_pistol_P226R_40Enox					{ quality = 3; price = 5000; }
							class hlc_Pistol_P228							{ quality = 3; price = 3500; }
							class hlc_Pistol_M11							{ quality = 3; price = 3500; }
							class hlc_pistol_P229R							{ quality = 3; price = 3500; }
							class hlc_pistol_P229R_Combat					{ quality = 3; price = 3500; }
							class hlc_Pistol_M11A1							{ quality = 3; price = 3500; }
							class hlc_Pistol_M11A1D							{ quality = 3; price = 3500; }
							class hlc_pistol_P229R_Elite					{ quality = 3; price = 3500; }
							class hlc_pistol_P229R_40						{ quality = 3; price = 5000; }
							class hlc_pistol_P229R_40Combat					{ quality = 3; price = 5000; }
							class hlc_pistol_P229R_40Elite					{ quality = 3; price = 5000; }
							class hlc_pistol_P229R_40Enox					{ quality = 3; price = 5000; }
							class hlc_pistol_P229R_357						{ quality = 3; price = 6000; }
							class hlc_pistol_P229R_357Combat				{ quality = 3; price = 6000; }
							class hlc_pistol_P229R_357Elite					{ quality = 3; price = 6000; }
							class hlc_pistol_P229R_357Stainless				{ quality = 3; price = 6000; }
							class hlc_pistol_P226R_357						{ quality = 3; price = 6000; }
							class hlc_pistol_P226R_357Combat				{ quality = 3; price = 6000; }
							class hlc_pistol_P226R_357Elite					{ quality = 3; price = 6000; }
							class hlc_pistol_P226R_357Stainless				{ quality = 3; price = 6000; }
							class hlc_pistol_P239							{ quality = 3; price = 3500; }
							class hlc_pistol_P239_40						{ quality = 3; price = 5000; }
							class hlc_pistol_P239_357						{ quality = 3; price = 6000; }
					
					/////////////////
					// Pistol Ammo //
					/////////////////
					
							class hlc_15Rnd_9x19_B_P226						{ quality = 3; price = 200; }
							class hlc_15Rnd_9x19_JHP_P226					{ quality = 3; price = 400; }
							class hlc_15Rnd_9x19_SD_P226					{ quality = 3; price = 200; }
							class hlc_12Rnd_40SW_B_P226						{ quality = 3; price = 200; }
							class hlc_12Rnd_40SW_JHP_P226					{ quality = 3; price = 400; }
							class hlc_12Rnd_40SW_SD_P226					{ quality = 3; price = 200; }
							class hlc_12Rnd_357SIG_B_P226					{ quality = 3; price = 200; }
							class hlc_12Rnd_357SIG_JHP_P226					{ quality = 3; price = 400; }
							class hlc_13Rnd_9x19_B_P228						{ quality = 3; price = 200; }
							class hlc_13Rnd_9x19_JHP_P228					{ quality = 3; price = 400; }
							class hlc_13Rnd_9x19_SD_P228					{ quality = 3; price = 200; }
							class hlc_10Rnd_40SW_B_P229						{ quality = 3; price = 300; }
							class hlc_10Rnd_40SW_JHP_P229					{ quality = 3; price = 500; }
							class hlc_10Rnd_40SW_SD_P229					{ quality = 3; price = 300; }
							class hlc_10Rnd_357SIG_B_P229					{ quality = 3; price = 300; }
							class hlc_10Rnd_357SIG_JHP_P229					{ quality = 3; price = 500; }
							class hlc_10Rnd_9x19_B_P239						{ quality = 3; price = 200; }
							class hlc_10Rnd_9x19_JHP_P239					{ quality = 3; price = 400; }
							class hlc_10Rnd_9x19_SD_P239					{ quality = 3; price = 200; }
							class hlc_8Rnd_40SW_B_P239						{ quality = 3; price = 300; }
							class hlc_10Rnd_40sw_JHP_P239					{ quality = 3; price = 500; }
							class hlc_10Rnd_40sw_SD_P239					{ quality = 3; price = 300; }
							class hlc_8Rnd_357SIG_B_P239					{ quality = 3; price = 300; }
							class hlc_8Rnd_357SIG_JHP_P239					{ quality = 3; price = 500; }


	
	////////////////////////
	// REMOVED APEX ITEMS //
	////////////////////////
	
	//	REMOVED
	
	//class H_HelmetO_ViperSP_hex_F     			{ quality = 4; price = 1000; };		//	Thermal
	//class H_HelmetO_ViperSP_ghex_F    			{ quality = 4; price = 1000; }; 	//	Thermal
	//class NVGogglesB_blk_F            			{ quality = 1; price = 1000; };		//	Normal NightV but full screen thermal
	//class NVGogglesB_grn_F            			{ quality = 1; price = 1000; };		//	Normal NightV but full screen thermal
	//class NVGogglesB_gry_F            			{ quality = 1; price = 1000; };		//	Normal NightV but full screen thermal
	//class Laserdesignator_01_khk_F    			{ quality = 1; price = 1000; };		//	Thermal
	//class Laserdesignator_02_ghex_F   			{ quality = 1; price = 1000; };		//	Thermal
	
	// JETS DLC
	//class V_DeckCrew_yellow_F						{ quality = 2; price = 30; };
	//class V_DeckCrew_blue_F						{ quality = 2; price = 30; };
	//class V_DeckCrew_green_F						{ quality = 2; price = 30; };
	//class V_DeckCrew_red_F						{ quality = 2; price = 30; };
	//class V_DeckCrew_white_F						{ quality = 2; price = 30; };
	//class V_DeckCrew_brown_F						{ quality = 2; price = 30; };
	//class V_DeckCrew_violet_F						{ quality = 2; price = 30; };



//	VEHICLE TRADER
	
	
	
	///////////
	// BIKES //
	///////////

	class Exile_Bike_OldBike 						{ quality = 1; price = 500; };
	class Exile_Bike_MountainBike 					{ quality = 1; price = 500; };
	
	
	
	////////////////
	// KARTS (DLC)//
	////////////////

	class Exile_Car_Kart_BluKing					{ quality = 1; price = 2000; };
	class Exile_Car_Kart_RedStone					{ quality = 1; price = 2000; };
	class Exile_Car_Kart_Vrana						{ quality = 1; price = 2000; };
	class Exile_Car_Kart_Green						{ quality = 1; price = 2000; };
	class Exile_Car_Kart_Blue						{ quality = 1; price = 2000; };
	class Exile_Car_Kart_Orange						{ quality = 1; price = 2000; };
	class Exile_Car_Kart_White						{ quality = 1; price = 2000; };
	class Exile_Car_Kart_Yellow						{ quality = 1; price = 2000; };
	class Exile_Car_Kart_Black						{ quality = 1; price = 2000; };

	
	
	////////////////
	// QUAD BIKES //
	////////////////

	class Exile_Bike_QuadBike_Black					{ quality = 1; price = 5000; };
	class Exile_Bike_QuadBike_Blue					{ quality = 1; price = 5000; };
	class Exile_Bike_QuadBike_Red					{ quality = 1; price = 5000; };
	class Exile_Bike_QuadBike_White					{ quality = 1; price = 5000; };
	class Exile_Bike_QuadBike_Nato					{ quality = 1; price = 5000; };
	class Exile_Bike_QuadBike_Csat					{ quality = 1; price = 5000; };
	class Exile_Bike_QuadBike_Fia					{ quality = 1; price = 5000; };
	class Exile_Bike_QuadBike_Guerilla01			{ quality = 1; price = 5000; };
	class Exile_Bike_QuadBike_Guerilla02			{ quality = 1; price = 5000; };

	
	
	//////////////
	// TRACTORS //
	//////////////
	
	class Exile_Car_Tractor_Red 					{ quality = 1; price = 4000; };		// Tractor
	class Exile_Car_OldTractor_Red 					{ quality = 1; price = 2000; };		// Tractor (Old)
	class Exile_Car_TowTractor_White				{ quality = 1; price = 2000; };		// Tow Tractor
	
	
	
	//////////
	// CARS //
	//////////
	
	class Exile_Car_Golf_Red						{ quality = 1; price = 10000; };	//	Golf (Red)					Speed: 216 /	Capacity: 1000	/	Armor: 22	/	Fuel Tank: 50l
	class Exile_Car_Golf_Black						{ quality = 1; price = 10000; }; 	//	Golf (Black)				Speed: 216 /	Capacity: 1000	/	Armor: 22	/	Fuel Tank: 50l
	
	class Exile_Car_Hatchback_Beige					{ quality = 3; price = 12500; }; 	//	Hatchback (Beige)			Speed: 150 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_Green					{ quality = 3; price = 12500; };	//	Hatchback (Green)			Speed: 150 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_Blue					{ quality = 3; price = 12500; };	//	Hatchback (Blue)			Speed: 150 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_BlueCustom			{ quality = 3; price = 12500; };	//	Hatchback (Blue Custom)		Speed: 150 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_BeigeCustom			{ quality = 3; price = 12500; };	//	Hatchback (Beige Custom)	Speed: 150 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_Yellow				{ quality = 3; price = 12500; };	//	Hatchback (Yellow)			Speed: 150 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_Grey					{ quality = 3; price = 12500; };	//	Hatchback (Grey)			Speed: 150 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_Black					{ quality = 3; price = 12500; };	//	Hatchback (Black)			Speed: 150 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_Dark					{ quality = 3; price = 12500; };	//	Hatchback (Dark)			Speed: 150 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_Rusty1				{ quality = 3; price = 12500; };	//	Hatchback (Rusty1)			Speed: 150 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_Rusty2				{ quality = 3; price = 12500; };	//	Hatchback (Rusty2)			Speed: 150 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_Rusty3				{ quality = 3; price = 12500; };	//	Hatchback (Rusty3)			Speed: 150 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	
	class Exile_Car_Lada_Green 						{ quality = 2; price = 15000; };	//	Lada (Green)				Speed: 110 /	Capacity: 1500	/	Armor: 30	/	Fuel Tank: 50l
	class Exile_Car_Lada_Taxi 						{ quality = 2; price = 15000; };	//	Lada (Taxi)					Speed: 110 /	Capacity: 1500	/	Armor: 30	/	Fuel Tank: 50l
	class Exile_Car_Lada_Red 						{ quality = 2; price = 15000; };	//	Lada (Red)					Speed: 110 /	Capacity: 1500	/	Armor: 30	/	Fuel Tank: 50l
	class Exile_Car_Lada_White 						{ quality = 2; price = 15000; }; 	//	Lada (White)				Speed: 110 /	Capacity: 1500	/	Armor: 30	/	Fuel Tank: 50l
	class Exile_Car_Lada_Hipster 					{ quality = 2; price = 15000; }; 	//	Lada (Hipster)				Speed: 110 /	Capacity: 1500	/	Armor: 30	/	Fuel Tank: 50l
	
	class Exile_Car_Octavius_White					{ quality = 2; price = 17500; };	//	Octavius (White)			Speed: 235 /	Capacity: 1500	/	Armor: 32	/	Fuel Tank: 75l
	class Exile_Car_Octavius_Black					{ quality = 2; price = 17500; };	//	Octavius (Black)			Speed: 235 /	Capacity: 1500	/	Armor: 32	/	Fuel Tank: 75l

	class Exile_Car_Volha_Blue						{ quality = 2; price = 20000; }; 	//	Volha (Blue)				Speed: 168 /	Capacity: 1800	/	Armor: 33	/	Fuel Tank: 55l
	class Exile_Car_Volha_White						{ quality = 2; price = 20000; }; 	//	Volha (White)				Speed: 168 /	Capacity: 1800	/	Armor: 33	/	Fuel Tank: 55l
	class Exile_Car_Volha_Black						{ quality = 2; price = 20000; }; 	//	Volha (Black)				Speed: 168 /	Capacity: 1800	/	Armor: 33	/	Fuel Tank: 55l

	class Exile_Car_Hatchback_Sport_Red				{ quality = 4; price = 22500; }; 	//	Hatchback SPORT (Red)		Speed: 325 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_Sport_Blue			{ quality = 4; price = 22500; }; 	//	Hatchback SPORT (Blue)		Speed: 325 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_Sport_Orange			{ quality = 4; price = 22500; }; 	//	Hatchback SPORT (Orange)	Speed: 325 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_Sport_White			{ quality = 4; price = 22500; }; 	//	Hatchback SPORT (White)		Speed: 325 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_Sport_Beige			{ quality = 4; price = 22500; }; 	//	Hatchback SPORT (Beige)		Speed: 325 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Hatchback_Sport_Green			{ quality = 4; price = 22500; }; 	//	Hatchback SPORT (Green)		Speed: 325 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l

	
	
	///////////
	// SUV's //
	///////////
	
	class Exile_Car_SUV_Red 						{ quality = 3; price = 20000; }; 	//	SUV (Red)					Speed: 249 /	Capacity: 1600	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_SUV_Black 						{ quality = 3; price = 20000; }; 	//	SUV (Black)					Speed: 249 /	Capacity: 1600	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_SUV_Grey 						{ quality = 3; price = 20000; }; 	//	SUV (Grey)					Speed: 249 /	Capacity: 1600	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_SUV_Orange 						{ quality = 3; price = 20000; }; 	//	SUV (Orange)				Speed: 249 /	Capacity: 1600	/	Armor: 30	/	Fuel Tank: 45l

	class Exile_Car_SUVXL_Black 					{ quality = 3; price = 20000; }; 	//	SUV (Classic)				Speed: 220 /	Capacity: 1800	/	Armor: 40	/	Fuel Tank: 90l

	class Exile_Car_SUV_Armed_Black 				{ quality = 4; price = 100000; }; 	//	SUV (Classic Armed)			Speed: 230 /	Capacity: 1500	/	Armor: 80	/	Fuel Tank: 130l
	
	
	
	/////////////
	// OFFROAD //
	/////////////

	class Exile_Car_Offroad_Red						{ quality = 3; price = 30000; }; 	//	Offroad (Red)				Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Beige					{ quality = 3; price = 30000; }; 	//	Offroad (Beige)				Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_White					{ quality = 3; price = 30000; }; 	//	Offroad (White)				Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Blue					{ quality = 3; price = 30000; }; 	//	Offroad (Blue)				Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_DarkRed					{ quality = 3; price = 30000; }; 	//	Offroad (Dark Red)			Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_BlueCustom				{ quality = 3; price = 30000; }; 	//	Offroad (Blue Custom)		Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Guerilla01				{ quality = 3; price = 30000; }; 	//	Offroad (Guerilla)			Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Guerilla02				{ quality = 3; price = 30000; }; 	//	Offroad (Guerilla)			Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Guerilla03				{ quality = 3; price = 30000; }; 	//	Offroad (Guerilla)			Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Guerilla04				{ quality = 3; price = 30000; }; 	//	Offroad (Guerilla)			Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Guerilla05				{ quality = 3; price = 30000; }; 	//	Offroad (Guerilla)			Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Guerilla06				{ quality = 3; price = 30000; }; 	//	Offroad (Guerilla)			Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Guerilla07				{ quality = 3; price = 30000; }; 	//	Offroad (Guerilla)			Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Guerilla08				{ quality = 3; price = 30000; }; 	//	Offroad (Guerilla)			Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Guerilla09				{ quality = 3; price = 30000; }; 	//	Offroad (Guerilla)			Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Guerilla10				{ quality = 3; price = 30000; }; 	//	Offroad (Guerilla)			Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Guerilla11				{ quality = 3; price = 30000; }; 	//	Offroad (Guerilla)			Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Guerilla12				{ quality = 3; price = 30000; }; 	//	Offroad (Guerilla)			Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Rusty1					{ quality = 3; price = 30000; }; 	//	Offroad (Rusty)				Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Rusty2					{ quality = 3; price = 30000; }; 	//	Offroad (Rusty)				Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Rusty3					{ quality = 3; price = 30000; }; 	//	Offroad (Rusty)				Speed: 200 /	Capacity: 2000	/	Armor: 30	/	Fuel Tank: 45l

	class Exile_Car_Offroad_Armed_Guerilla01 		{ quality = 5; price = 80000; }; 	//	Offroad (Armed)				Speed: 200 /	Capacity: 1100	/	Armor: 32	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Armed_Guerilla02 		{ quality = 5; price = 80000; }; 	//	Offroad (Armed)				Speed: 200 /	Capacity: 1100	/	Armor: 32	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Armed_Guerilla03 		{ quality = 5; price = 80000; }; 	//	Offroad (Armed)				Speed: 200 /	Capacity: 1100	/	Armor: 32	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Armed_Guerilla04 		{ quality = 5; price = 80000; }; 	//	Offroad (Armed)				Speed: 200 /	Capacity: 1100	/	Armor: 32	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Armed_Guerilla05 		{ quality = 5; price = 80000; }; 	//	Offroad (Armed)				Speed: 200 /	Capacity: 1100	/	Armor: 32	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Armed_Guerilla06 		{ quality = 5; price = 80000; }; 	//	Offroad (Armed)				Speed: 200 /	Capacity: 1100	/	Armor: 32	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Armed_Guerilla07 		{ quality = 5; price = 80000; }; 	//	Offroad (Armed)				Speed: 200 /	Capacity: 1100	/	Armor: 32	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Armed_Guerilla08 		{ quality = 5; price = 80000; }; 	//	Offroad (Armed)				Speed: 200 /	Capacity: 1100	/	Armor: 32	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Armed_Guerilla09 		{ quality = 5; price = 80000; }; 	//	Offroad (Armed)				Speed: 200 /	Capacity: 1100	/	Armor: 32	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Armed_Guerilla10 		{ quality = 5; price = 80000; }; 	//	Offroad (Armed)				Speed: 200 /	Capacity: 1100	/	Armor: 32	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Armed_Guerilla11 		{ quality = 5; price = 80000; }; 	//	Offroad (Armed)				Speed: 200 /	Capacity: 1100	/	Armor: 32	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Armed_Guerilla12 		{ quality = 5; price = 80000; }; 	//	Offroad (Armed)				Speed: 200 /	Capacity: 1100	/	Armor: 32	/	Fuel Tank: 45l

	class Exile_Car_Offroad_Repair_Civillian 		{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Red 				{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Beige 			{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_White 			{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Blue 			{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_DarkRed 			{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_BlueCustom 		{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Guerilla01 		{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Guerilla02 		{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Guerilla03 		{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Guerilla04 		{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Guerilla05 		{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Guerilla06 		{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Guerilla07 		{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Guerilla08 		{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Guerilla09 		{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Guerilla10 		{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Guerilla11 		{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l
	class Exile_Car_Offroad_Repair_Guerilla12 		{ quality = 4; price = 25000; }; 	//	Offroad (Repair)			Speed: 200 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 45l

	
	
	//////////////////////
	// UAZ & LAND ROVER //
	//////////////////////
	
	class Exile_Car_UAZ_Green						{ quality = 2; price = 15000; }; 	//	UAZ (Green)					Speed: 168 /	Capacity: 1800	/	Armor: 32	/	Fuel Tank: 78l

	class Exile_Car_UAZ_Open_Green					{ quality = 2; price = 15000; }; 	//	UAZ Open (Green)			Speed: 168 /	Capacity: 1800	/	Armor: 32	/	Fuel Tank: 78l

	class Exile_Car_LandRover_Red 					{ quality = 3; price = 32500; }; 	//	Land Rover (Red)			Speed: 140 /	Capacity: 2200	/	Armor: 31	/	Fuel Tank: 70l
	class Exile_Car_LandRover_Urban 				{ quality = 3; price = 32500; }; 	//	Land Rover (Urban)			Speed: 140 /	Capacity: 2200	/	Armor: 31	/	Fuel Tank: 70l
	class Exile_Car_LandRover_Green 				{ quality = 3; price = 32500; }; 	//	Land Rover (Green)			Speed: 140 /	Capacity: 2200	/	Armor: 31	/	Fuel Tank: 70l
	class Exile_Car_LandRover_Sand 					{ quality = 3; price = 32500; }; 	//	Land Rover (Sand)			Speed: 140 /	Capacity: 2200	/	Armor: 31	/	Fuel Tank: 70l
	class Exile_Car_LandRover_Desert 				{ quality = 3; price = 32500; }; 	//	Land Rover (Desert)			Speed: 140 /	Capacity: 2200	/	Armor: 31	/	Fuel Tank: 70l

	class Exile_Car_LandRover_Ambulance_Green		{ quality = 3; price = 35000; }; 	//	Ambulance (Green)			Speed: 140 /	Capacity: 2500	/	Armor: 31	/	Fuel Tank: 70l
	class Exile_Car_LandRover_Ambulance_Desert		{ quality = 3; price = 35000; }; 	//	Ambulance (Desert)			Speed: 140 /	Capacity: 2500	/	Armor: 31	/	Fuel Tank: 70l
	class Exile_Car_LandRover_Ambulance_Sand		{ quality = 3; price = 35000; }; 	//	Ambulance (Sand)			Speed: 140 /	Capacity: 2500	/	Armor: 31	/	Fuel Tank: 70l

	
	
	///////////////////////
	// MILITARY VEHICLES //
	///////////////////////

	class Exile_Car_Hunter 							{ quality = 5; price = 80000; };	//	Hunter						Speed: 115 /	Capacity: 2200	/	Armor: 200	/	Fuel Tank: 94l

	class Exile_Car_Ifrit 							{ quality = 4; price = 50000; };	//	Ifrit						Speed: 135 /	Capacity: 1800	/	Armor: 150	/	Fuel Tank: 94l

	class Exile_Car_Strider 						{ quality = 6; price = 65000; };	//	Strider						Speed: 125 /	Capacity: 1800	/	Armor: 250	/	Fuel Tank: 94l

	class Exile_Car_BRDM2_HQ 						{ quality = 5; price = 150000; };	//	BRDM2 HQ					Speed: 139 /	Capacity: 1500	/	Armor: 130	/	Fuel Tank: 280l

	class Exile_Car_BTR40_MG_Green 					{ quality = 6; price = 125000; };	//	BTR40 MG (Green)			Speed: 150 /	Capacity: 1500	/	Armor: 110	/	Fuel Tank: 140l
	class Exile_Car_BTR40_MG_Camo 					{ quality = 6; price = 125000; };	//	BTR40 MG (Camo)				Speed: 150 /	Capacity: 1500	/	Armor: 110	/	Fuel Tank: 140l
	class Exile_Car_BTR40_Green 					{ quality = 2; price = 40000; };	//	BTR40 (Green)				Speed: 150 /	Capacity: 1500	/	Armor: 110	/	Fuel Tank: 140l
	class Exile_Car_BTR40_Camo 						{ quality = 2; price = 40000; };	//	BTR40 (Camo)				Speed: 150 /	Capacity: 1500	/	Armor: 110	/	Fuel Tank: 140l

	class Exile_Car_HMMWV_M134_Green 				{ quality = 5; price = 90000; };	//	HMMWV M134 (Green)			Speed: 160 /	Capacity: 1500	/	Armor: 45	/	Fuel Tank: 250l
	class Exile_Car_HMMWV_M134_Desert 				{ quality = 5; price = 90000; };	//	HMMWV M134 (Desert)			Speed: 160 /	Capacity: 1500	/	Armor: 45	/	Fuel Tank: 250l
	class Exile_Car_HMMWV_M2_Green 					{ quality = 6; price = 90000; };	//	HMMWV M2 (Green)			Speed: 160 /	Capacity: 1200	/	Armor: 45	/	Fuel Tank: 250l
	class Exile_Car_HMMWV_M2_Desert 				{ quality = 6; price = 90000; };	//	HMMWV M2 (Desert)			Speed: 160 /	Capacity: 1200	/	Armor: 45	/	Fuel Tank: 250l
	class Exile_Car_HMMWV_MEV_Green 				{ quality = 3; price = 70000; };	//	HMMWV Medical (Green)		Speed: 160 /	Capacity: 2000	/	Armor: 45	/	Fuel Tank: 250l
	class Exile_Car_HMMWV_MEV_Desert 				{ quality = 3; price = 70000; };	//	HMMWV Medical (Desert)		Speed: 160 /	Capacity: 2000	/	Armor: 45	/	Fuel Tank: 250l
	class Exile_Car_HMMWV_UNA_Green 				{ quality = 3; price = 70000; };	//	HMMWV Unarmed (Green)		Speed: 160 /	Capacity: 2000	/	Armor: 45	/	Fuel Tank: 250l
	class Exile_Car_HMMWV_UNA_Desert 				{ quality = 3; price = 70000; };	//	HMMWV Unarmed (Desert)		Speed: 160 /	Capacity: 2000	/	Armor: 45	/	Fuel Tank: 250l
	
	
	
	////////////
	// TRUCKS //
	////////////

	class Exile_Car_Ikarus_Blue 					{ quality = 1; price = 17000; };	//	Ikarus (Blue)
	class Exile_Car_Ikarus_Red 						{ quality = 1; price = 17000; };	//	Ikarus (Red)
	class Exile_Car_Ikarus_Party 					{ quality = 1; price = 17000; };	//	Ikarus (Party)

	class Exile_Car_Ural_Open_Blue					{ quality = 2; price = 25000; };	//	Ural Open (Blue)
	class Exile_Car_Ural_Open_Yellow				{ quality = 2; price = 25000; };	//	Ural Open (Yellow)
	class Exile_Car_Ural_Open_Worker				{ quality = 2; price = 25000; };	//	Ural Open (Worker)
	class Exile_Car_Ural_Open_Military				{ quality = 2; price = 25000; };	//	Ural Open (Military)

	class Exile_Car_Ural_Covered_Blue				{ quality = 2; price = 28000; };	//	Ural Covered (Blue)
	class Exile_Car_Ural_Covered_Yellow				{ quality = 2; price = 28000; };	//	Ural Covered (Yellow)
	class Exile_Car_Ural_Covered_Worker				{ quality = 2; price = 28000; };	//	Ural Covered (Worker)
	class Exile_Car_Ural_Covered_Military			{ quality = 2; price = 28000; };	//	Ural Covered (Military)

	class Exile_Car_V3S_Open						{ quality = 2; price = 28000; };	//	V3S Open
	class Exile_Car_V3S_Covered						{ quality = 2; price = 28000; };	//	V3S Covered

	class Exile_Car_Tempest 						{ quality = 4; price = 50000; };	//	Tempest

	class Exile_Car_Van_Black 						{ quality = 2; price = 20000; };	//	Van (Black)				Speed: 115 /	Capacity: 3600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_White 						{ quality = 2; price = 20000; };	//	Van (White)				Speed: 115 /	Capacity: 3600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Red 						{ quality = 2; price = 20000; };	//	Van (Red)				Speed: 115 /	Capacity: 3600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Guerilla01 					{ quality = 2; price = 20000; };	//	Van (Guerilla)			Speed: 115 /	Capacity: 3600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Guerilla02 					{ quality = 2; price = 20000; };	//	Van (Guerilla)			Speed: 115 /	Capacity: 3600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Guerilla03 					{ quality = 2; price = 20000; };	//	Van (Guerilla)			Speed: 115 /	Capacity: 3600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Guerilla04 					{ quality = 2; price = 20000; };	//	Van (Guerilla)			Speed: 115 /	Capacity: 3600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Guerilla05 					{ quality = 2; price = 20000; };	//	Van (Guerilla)			Speed: 115 /	Capacity: 3600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Guerilla06 					{ quality = 2; price = 20000; };	//	Van (Guerilla)			Speed: 115 /	Capacity: 3600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Guerilla07 					{ quality = 2; price = 20000; };	//	Van (Guerilla)			Speed: 115 /	Capacity: 3600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Guerilla08 					{ quality = 2; price = 20000; };	//	Van (Guerilla)			Speed: 115 /	Capacity: 3600	/	Armor: 80	/	Fuel Tank: 45l

	class Exile_Car_Van_Box_Black 					{ quality = 3; price = 25000; };	//	Van Box (Black)			Speed: 115 /	Capacity: 4600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Box_White 					{ quality = 3; price = 25000; };	//	Van Box (White)			Speed: 115 /	Capacity: 4600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Box_Red 					{ quality = 3; price = 25000; };	//	Van Box (Red)			Speed: 115 /	Capacity: 4600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Box_Guerilla01 				{ quality = 3; price = 25000; };	//	Van Box (Guerilla)		Speed: 115 /	Capacity: 4600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Box_Guerilla02 				{ quality = 3; price = 25000; };	//	Van Box (Guerilla)		Speed: 115 /	Capacity: 4600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Box_Guerilla03 				{ quality = 3; price = 25000; };	//	Van Box (Guerilla)		Speed: 115 /	Capacity: 4600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Box_Guerilla04 				{ quality = 3; price = 25000; };	//	Van Box (Guerilla)		Speed: 115 /	Capacity: 4600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Box_Guerilla05 				{ quality = 3; price = 25000; };	//	Van Box (Guerilla)		Speed: 115 /	Capacity: 4600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Box_Guerilla06 				{ quality = 3; price = 25000; };	//	Van Box (Guerilla)		Speed: 115 /	Capacity: 4600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Box_Guerilla07 				{ quality = 3; price = 25000; };	//	Van Box (Guerilla)		Speed: 115 /	Capacity: 4600	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Box_Guerilla08 				{ quality = 3; price = 25000; };	//	Van Box (Guerilla)		Speed: 115 /	Capacity: 4600	/	Armor: 80	/	Fuel Tank: 45l

	class Exile_Car_Van_Fuel_Black 					{ quality = 3; price = 45000; };	//	Van Fuel (Black)		Speed: 115 /	Capacity: 1100	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Fuel_White 					{ quality = 3; price = 45000; };	//	Van Fuel (White)		Speed: 115 /	Capacity: 1100	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Fuel_Red 					{ quality = 3; price = 45000; };	//	Van Fuel (Red)			Speed: 115 /	Capacity: 1100	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Fuel_Guerilla01 			{ quality = 3; price = 45000; };	//	Van Fuel (Guerilla)		Speed: 115 /	Capacity: 1100	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Fuel_Guerilla02 			{ quality = 3; price = 45000; };	//	Van Fuel (Guerilla)		Speed: 115 /	Capacity: 1100	/	Armor: 80	/	Fuel Tank: 45l
	class Exile_Car_Van_Fuel_Guerilla03 			{ quality = 3; price = 45000; };	//	Van Fuel (Guerilla)		Speed: 115 /	Capacity: 1100	/	Armor: 80	/	Fuel Tank: 45l

	class Exile_Car_Zamak 							{ quality = 4; price = 43000; };	//	Zamak

	class Exile_Car_HEMMT 							{ quality = 3; price = 100000; };	//	HEMMT

	//	APEX DLC
	class Exile_Car_MB4WD							{ quality = 2; price = 20000; };	//	MB4WD
	class Exile_Car_MB4WDOpen						{ quality = 2; price = 20000; };	//	MB4WD Open
	
	class Exile_Car_ProwlerLight					{ quality = 3; price = 60000; };	//	Prowler (Light)
	class Exile_Car_ProwlerUnarmed					{ quality = 3; price = 60000; };	//	Prowler Unarmed

	class Exile_Car_QilinUnarmed					{ quality = 3; price = 60000; };	//	Qilin Unarmed

	
	
//	BOAT TRADER
	
	
	
	///////////
	// BOATS //
	///////////
	
	class Exile_Boat_MotorBoat_Police				{ quality = 1; price = 30000; };	//	Motor Boat (Police)
	class Exile_Boat_MotorBoat_Orange				{ quality = 1; price = 30000; };	//	Motor Boat (Orange)
	class Exile_Boat_MotorBoat_White				{ quality = 1; price = 30000; };	//	Motor Boat (White)

	class Exile_Boat_RubberDuck_CSAT				{ quality = 1; price = 15000; };	//	Rubber Duck (CSAT)
	class Exile_Boat_RubberDuck_Digital				{ quality = 1; price = 15000; };	//	Rubber Duck (Digital)
	class Exile_Boat_RubberDuck_Orange				{ quality = 1; price = 15000; };	//	Rubber Duck (Orange)
	class Exile_Boat_RubberDuck_Blue				{ quality = 1; price = 15000; };	//	Rubber Duck (Blue)
	class Exile_Boat_RubberDuck_Black				{ quality = 1; price = 15000; };	//	Rubber Duck (Black)

	class Exile_Boat_SDV_CSAT						{ quality = 2; price = 50000; };	//	SDV (CSAT)
	class Exile_Boat_SDV_Digital					{ quality = 2; price = 50000; };	//	SDV (Digital)
	class Exile_Boat_SDV_Grey						{ quality = 2; price = 50000; };	//	SDV (Grey)
	
	class Exile_Boat_WaterScooter					{ quality = 2; price = 1500; };		//	Water Scooter

	//	Apex DLC
	class Exile_Boat_RHIB							{ quality = 3; price = 45000; };	//	RHIB		Speed: 95 /	Capacity: 500	/	Armor: 0	/	Fuel Tank: 100l


	
//	AIRCRAFT TRADER


	/////////////////
	// HELICOPTERS //
	/////////////////
	
	class Exile_Chopper_Hummingbird_Civillian_Blue				{ quality = 1; price = 225000; };	//	Hummingbird	(Civilian)	Speed: 245 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 242l
	class Exile_Chopper_Hummingbird_Civillian_Red				{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_ION				{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_BlueLine			{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_Digital			{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_Elliptical		{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_Furious			{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher		{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_Jeans				{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_Light				{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_Shadow			{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_Sheriff			{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_Speedy			{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_Sunset			{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_Vrana				{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_Wasp				{ quality = 1; price = 225000; };
	class Exile_Chopper_Hummingbird_Civillian_Wave				{ quality = 1; price = 225000; };
	
	class Exile_Chopper_Hummingbird_Green						{ quality = 3; price = 250000; };	//	Hummingbird		Speed: 245 /	Capacity: 1300	/	Armor: 30	/	Fuel Tank: 242l
	
	class Exile_Chopper_Huey_Green 								{ quality = 2; price = 300000; };	//	UH-1H Huey		Speed: 217 /	Capacity: 2500	/	Armor: 40	/	Fuel Tank: 250l
	class Exile_Chopper_Huey_Desert								{ quality = 2; price = 300000; };	//	UH-1H Huey		Speed: 217 /	Capacity: 2500	/	Armor: 40	/	Fuel Tank: 250l
	class Exile_Chopper_Huey_Armed_Green						{ quality = 2; price = 400000; };	//	UH-1H Huey		Speed: 217 /	Capacity: 2500	/	Armor: 40	/	Fuel Tank: 300l
	class Exile_Chopper_Huey_Armed_Desert						{ quality = 2; price = 400000; };	//	UH-1H Huey		Speed: 217 /	Capacity: 2500	/	Armor: 40	/	Fuel Tank: 300l

	class Exile_Chopper_Hellcat_Green							{ quality = 3; price = 350000; };	//	Hellcat			Speed: 293 /	Capacity: 2600	/	Armor: 40	/	Fuel Tank: 742l
	class Exile_Chopper_Hellcat_FIA								{ quality = 3; price = 350000; };	//	Hellcat			Speed: 293 /	Capacity: 2600	/	Armor: 40	/	Fuel Tank: 742l
	
	class Exile_Chopper_Mohawk_FIA								{ quality = 4; price = 700000; };	//	Mohawk			Speed: 300 /	Capacity: 4800	/	Armor: 40	/	Fuel Tank: 2500l
	
	class Exile_Chopper_Orca_CSAT								{ quality = 3; price = 650000; };	//	Orca			Speed: 290 /	Capacity: 4600	/	Armor: 40	/	Fuel Tank: 800l
	class Exile_Chopper_Orca_Black								{ quality = 3; price = 650000; };	//	Orca			Speed: 290 /	Capacity: 4600	/	Armor: 40	/	Fuel Tank: 800l
	class Exile_Chopper_Orca_BlackCustom						{ quality = 3; price = 650000; };	//	Orca			Speed: 290 /	Capacity: 4600	/	Armor: 40	/	Fuel Tank: 800l
	
	//	HELICOPTER DLC

	class Exile_Chopper_Taru_Transport_CSAT						{ quality = 3; price = 275000; };	//	Taru			Speed: 250 /	Capacity: 1100	/	Armor: 40	/	Fuel Tank: 2500l
	class Exile_Chopper_Taru_Transport_Black					{ quality = 3; price = 275000; };	//	Taru			Speed: 250 /	Capacity: 1100	/	Armor: 40	/	Fuel Tank: 2500l

	class Exile_Chopper_Taru_CSAT								{ quality = 4; price = 500000; };	//	Taru			Speed: 250 /	Capacity: 3200	/	Armor: 40	/	Fuel Tank: 2500l
	class Exile_Chopper_Taru_Black								{ quality = 4; price = 500000; };	//	Taru			Speed: 250 /	Capacity: 3200	/	Armor: 40	/	Fuel Tank: 2500l

	class Exile_Chopper_Taru_Covered_CSAT						{ quality = 4; price = 600000; };	//	Taru			Speed: 250 /	Capacity: 4300	/	Armor: 40	/	Fuel Tank: 2500l
	class Exile_Chopper_Taru_Covered_Black						{ quality = 4; price = 600000; };	//	Taru			Speed: 250 /	Capacity: 4300	/	Armor: 40	/	Fuel Tank: 2500l

	class Exile_Chopper_Huron_Black								{ quality = 5; price = 900000; };	//	Huron			Speed: 300 /	Capacity: 6000	/	Armor: 40	/	Fuel Tank: 1360l
	class Exile_Chopper_Huron_Green								{ quality = 5; price = 900000; };	//	Huron			Speed: 300 /	Capacity: 6000	/	Armor: 40	/	Fuel Tank: 1360l
	
	
	
	////////////
	// PLANES //
	////////////
	
	class Exile_Plane_Cessna									{ quality = 1; price = 250000; };	//	Cessna			Speed: 290 /	Capacity: 1300	/	Armor: 20	/	Fuel Tank: 1000l

	class Exile_Plane_AN2_Green									{ quality = 2; price = 400000; };	//	AN-2			Speed: 262 /	Capacity: 2500	/	Armor: 35	/	Fuel Tank: 800l
	class Exile_Plane_AN2_White									{ quality = 2; price = 400000; };	//	AN-2			Speed: 262 /	Capacity: 2500	/	Armor: 35	/	Fuel Tank: 800l
	class Exile_Plane_AN2_Stripe								{ quality = 2; price = 400000; };	//	AN-2			Speed: 262 /	Capacity: 2500	/	Armor: 35	/	Fuel Tank: 800l
	
	//	APEX DLC

	class Exile_Plane_BlackfishInfantry							{ quality = 6; price = 1000000; };	//	V-44 Blackfish	Speed: 550 /	Capacity: 7000	/	Armor: 400	/	Fuel Tank: 1000l
	class Exile_Plane_BlackfishVehicle							{ quality = 6; price = 1000000; };	//	V-44 Blackfish	Speed: 550 /	Capacity: 7000	/	Armor: 400	/	Fuel Tank: 1000l
	class Exile_Plane_BlackfishVehicle							{ quality = 6; price = 1000000; };	//	V-44 Blackfish	Speed: 550 /	Capacity: 7000	/	Armor: 400	/	Fuel Tank: 1000l
	
	class Exile_Plane_Ceasar									{ quality = 2; price = 250000; };	//	Ceasar BTT		Speed: 450 /	Capacity: 1300	/	Armor: 35	/	Fuel Tank: 386l

	///////////////////////////////////////////////////////////////////////////////
	//	Flags
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_FlagStolen1						{ quality = 1; price = 5000;  sellPrice = 5000;  };
	class Exile_Item_FlagStolen2						{ quality = 1; price = 10000; sellPrice = 10000; };
	class Exile_Item_FlagStolen3						{ quality = 1; price = 15000; sellPrice = 15000; };
	class Exile_Item_FlagStolen4						{ quality = 1; price = 20000; sellPrice = 20000; };
	class Exile_Item_FlagStolen5						{ quality = 1; price = 25000; sellPrice = 25000; };
	class Exile_Item_FlagStolen6						{ quality = 1; price = 30000; sellPrice = 30000; };
	class Exile_Item_FlagStolen7						{ quality = 1; price = 35000; sellPrice = 35000; };
	class Exile_Item_FlagStolen8						{ quality = 1; price = 40000; sellPrice = 40000; };
	class Exile_Item_FlagStolen9						{ quality = 1; price = 45000; sellPrice = 45000; };
	class Exile_Item_FlagStolen10						{ quality = 1; price = 50000; sellPrice = 50000; };
};
class CfgAdminToolkitCustomMod
{
	/* Exclude some main menu items
	 * To only show the menus loaded from an extension, use:
	 * 
	 * ExcludeMenu[] = {"Players", "Vehicles", "Weapons" , "Other"};
	 */
	ExcludeMenu[] = {};
	
	Extensions[] = {
		{"Exile Mod","ExileMod"}
	};
	
	/* 4 Quick buttons allowing to add any action you want - See example below*/
	QuickButtons[] = {
		/* send a chat message to selected player containing 'Test 123' */
		{"Chat", "['message', [AdminToolkit_Player, 'Test 123']] call AdminToolkit_doAction"},
		/* send a message to everyone using the parameters text field */
		{"Msg To All", "['messageall', AdminToolkit_Params] call AdminToolkit_doAction"},
		/* Quickly get a Helicopter */
		{"Heli", "['getvehicle', 'B_Heli_Light_01_armed_F'] call AdminToolkit_doAction"},
	};
};
class CfgExileCustomCode 
{
	exileclient_system_lootmanager_thread_spawn = "EBM\exileclient_system_lootmanager_thread_spawn.sqf";
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/
};
class CfgExileEnvironment
{
	class Altis 
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour fire flies begin to spawn
			startHour = 18;

			// At this hour fire flies stop spawning
			endHour = 4;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour anomalies begin to spawn
			startHour = 19;

			// At this hour anomalies stop spawning
			endHour = 6;
		};

		class Breathing
		{
			// 1 = enabled, 0 = disabled
			enable = 0;
		};

		class Snow
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// https://community.bistudio.com/wiki/surfaceType
			surfaces[] = {};
		};

		class Radiation 
		{
			// 1 = enabled, 0 = disabled
			enable = 1;
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		
			// Temperature change in °C when it is 100% overcast
			overcast = -2;

			// Temperature change in °C when it is 100% raining
			rain = -5;

			// Temperature change in °C when it is 100% windy
			wind = -1;

			// Temperature change per 100m altitude in °C
			altitude = -0.5;

			// Difference from the daytime temperature to the water temperature
			water = -5;
		};
	};

	class Namalsk: Altis 
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 1;
		};

		class Breathing: Breathing
		{
			enable = 1;
		};

		class Snow: Snow
		{
			enable = 1;
			surfaces[] = {"#nam_snow"};
		};

		class Radiation: Radiation
		{
			enable = 1;
			contaminatedZones[] = 
			{
				{{3960.14,	8454.75,	152.862}, 	80, 	140},	// Object A1
				{{4974.70,	6632.82,	4.74293}, 	40, 	150},	// Object A2
				{{6487.92,	9302.03,	36.0014}, 	60, 	110}	// Sebjan Chemical Factory
			};
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {-2.00,-1.77,-1.12,-0.10,1.24,2.78,4.40,6.00,7.46,8.65,9.50,9.90,9.90,9.50,8.65,7.46,6.00,4.40,2.78,1.24,-0.10,-1.12,-1.77,-2.00,-2.00};
		};
	};

	class Tanoa: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 0;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation: Radiation
		{
			enable = 1;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};

	class Malden: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation: Radiation
		{
			enable = 0;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};
	
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	/**
	 * Lifetime of loot in minutes. Synchronize this with
	 * the garbage collector settings of your server
	 * CfgSettings!
	 */
	lifeTime = 8;

	/**
	 * Interval in seconds when the client searches for
	 * new buildings to spawn loot in
	 */
	spawnInterval = 30;

	/**
	 * This is a percentage value to determine how many loot
	 * positions should contain loot when the system spawns loot.
	 *
	 * If a building has 20 positions defined, Exile will 
	 * spawn loot in 10 random positions of them.
	 * 
	 * This means smaller buildings spawn less loot and larger
	 * ones spawn more loot.
	 *
	 * You can also cap it at a maximum value. See below.
	 */
	maximumPositionCoverage = 30;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding = 3;

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 2;

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 60;

	/**
	 * Defines the radius around trader cities where the system should
	 * not spawn loot. Set this to 0 if you want to have loot spawning
	 * in trader citites, ugh.
	 */
	minimumDistanceToTraderZones = 500;

	/**
	 * Defines the radius around territories where no loot spawns.
	 * This does not regard the actual size of a territory. So do not
	 * set this to a lower value than the maximum radius of a territory,
	 * which is 150m by default.
	 */
	minimumDistanceToTerritories = 150;
};
class CfgExileMobileXM8
{
	/**
	 * Add the 4 digit permission code here, so players can authorize
	 * your server to send them messages to their Mobile XM8 app.
	 */
	code = "";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgExileRussianRoulette
{
	/*
		Minimum amount to join a session of 
		russian roulette
	*/
	buyInAmount = 100;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};
class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};
/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{
	
#include "EBM\menus.hpp"
	
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Safe";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};
	
	class Drawbridge
	{
		targetType = 2;
		target = "Exile_Construction_WoodDrawBridge_Abstract";

		class Actions
		{
			class Lower: ExileAbstractAction
			{
				title = "Lower";
				condition = "ExileClientInteractionObject call ExileClient_object_construction_openBridgeShow";
				action = "ExileClientInteractionObject animateSource ['DrawBridge_Source', 0];";
			};
			
			class Raise: ExileAbstractAction
			{
				title = "Raise";
				condition = "((ExileClientInteractionObject animationSourcePhase 'DrawBridge_Source') < 0.5)";
				action = "ExileClientInteractionObject animateSource ['DrawBridge_Source', 2]";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction.
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

			class MakeBoom : ExileAbstractAction
			{
				title = "Plant charge";
				condition = "call ExileClient_system_breaching_condition";
				action = "_this call ExileClient_system_breaching_action";
			};

			class Repair : ExileAbstractAction
			{
				title = "Repair";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
			};

		};
	};

	/*
		Tent, Storage crate etc.
	*/
	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};
			// Picks up the container so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};
	
	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			*/
			class StealFlag: ExileAbstractAction
			{
				title = "Steal Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
			};
			
			class RestoreFlag: ExileAbstractAction
			{
				title = "Restore Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
			};
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
			
			class HideCorpse: ExileAbstractAction
			{
				title = "Hide Body";
				condition = "!(alive ExileClientInteractionObject) && ('Exile_Melee_Shovel' isEqualTo (currentWeapon player))";
				action = "['HideBody', (_this select 0)] call ExileClient_action_execute";
			};
		};
	};
	
	class Animal
	{
		targetType = 2;
		target = "Exile_Animal_Abstract";

		class Actions 
		{			
			class Gut: ExileAbstractAction
			{
				title = "Gut Animal";
				condition = "!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['CanBeGutted', false])";
				action = "['GutAnimal', ExileClientInteractionObject] call ExileClient_action_execute";
			};
		};
	};
};
/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"Tank_rust_F",// added new
			"Sink_F",// added new
			"Waterpump_01_F",//added new
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",

			// Namalsk
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud",
			
			//Tanoa
			"watertank_01_f",
			"watertank_02_f",
			"watertank_03_f",
			"watertank_04_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] = 
		{
			// Arma 3
			"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			"Cargo20_light_green_F",
			"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			"Cargo40_light_green_F",
			"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",

			// Namalsk
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			
			//Tanoa
			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",

			// Also allow wrecks
			"wreck_"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/


			// TODO: Ask community for CUP/AiA model names	
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",
			//Tanoa
			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d"
		};	
	};
};
class CfgLocker 
{
	numbersOnly = "0123456789";
	
	maxDeposit = 1000000;
};
class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 90;
	thirstDecay = 75;

	// Damage taken from 0 (health||thirst)/sec
	healthDecay = 2.5;

	// Health regen if over BOTH
	thirstRegen = 80;
	hungerRegen = 80;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 2.5;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.5;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 1;
	
	// Use the current gradient to affect the players movement when autorunning.
	// 0 == default exile auto run
	useGradientAffectedAutoRun = 0;
};
class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 10100;
	
	chances[] = 
	{
		{85, ""}, 					// 85% = Nothing
		{95, "Level1"}, 			// 10% = 1pt
		{96, "Level2"}, 			// 1% = 10pt
		{97, "Level3"}, 			// 1% = 25pt
		{98, "Level4"}, 			// 1% = 50pt
		{99, "Level5"},				// 1% = 100pt
		{100, "Jackpot"} 			// 1% = Jackpot
	};

	class Prizes 
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 101;
		};

		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 110;
		};

		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 125;
		};

		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
			prize = 150;
		};

		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 200;
		};
		
		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is always for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{30000,					15,			30 					}, // Level 1
		{60000,					30,			60 					}, // Level 2 
		{90000,					45,			90 					}, // Level 3
		{120000,				60,			120					}, // Level 4
		{150000,				75,			150					}, // Level 5
		{180000,				90,			180					}, // Level 6
		{210000,				105,		210					}, // Level 7
		{240000,				120,		240					}, // Level 8
		{270000,				135,		270					}, // Level 9
		{300000,				150,		300					}  // Level 10
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus covering the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 750; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 1;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1250;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 1000;

	// Amount of pop tabs per object to pay
	popTabAmountPerObject = 100;
};
class CfgTraderCategories
{

#include "EBM\traders.hpp"

	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class MacnCheese
    {
        name = "Mac n Cheese";
        icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
        items[] =
        {
            "Exile_Item_MacasCheese"
        };
    };

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			"U_C_Journalist",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poor_1",
			"U_C_Poor_2",
			"U_C_Poor_shorts_1",
			"U_C_Scientist",
			"U_OrestesBody",
			"U_Rangemaster",
			"U_NikosAgedBody",
			"U_NikosBody",
			"U_Competitor",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_1",
			"U_B_CTRG_2",
			"U_B_CTRG_3",
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve",
			"U_I_CombatUniform_tshirt",
			"U_I_OfficerUniform",
			"U_O_CombatUniform_ocamo",
			"U_O_CombatUniform_oucamo",
			"U_O_OfficerUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_O_SpecopsUniform_blk",
			"U_O_SpecopsUniform_ocamo",
			"U_I_G_Story_Protagonist_F",
			"Exile_Uniform_Woodland",
			//"U_C_HunterBody_grn",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_1",
			"U_BG_Guerilla2_1",
			"U_IG_Guerilla3_2",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_BG_leader",
			"U_IG_leader",
			"U_I_G_resistanceLeader_F",
			"U_B_FullGhillie_ard",
			"U_B_FullGhillie_lsh",
			"U_B_FullGhillie_sard",
			"U_B_GhillieSuit",
			"U_I_FullGhillie_ard",
			"U_I_FullGhillie_lsh",
			"U_I_FullGhillie_sard",
			"U_I_GhillieSuit",
			"U_O_FullGhillie_ard",
			"U_O_FullGhillie_lsh",
			"U_O_FullGhillie_sard",
			"U_O_GhillieSuit",
			//"U_B_survival_uniform",
			"U_B_HeliPilotCoveralls",
			"U_I_HeliPilotCoveralls",
			"U_B_PilotCoveralls",
			"U_I_pilotCoveralls",
			"U_O_PilotCoveralls",
			//Apex
			"U_B_T_Soldier_F",
			"U_B_T_Soldier_AR_F",
			"U_B_T_Soldier_SL_F",
			"U_B_T_Sniper_F",
			"U_B_T_FullGhillie_tna_F",
			"U_B_CTRG_Soldier_F",
			"U_B_CTRG_Soldier_2_F",
			"U_B_CTRG_Soldier_3_F",
			"U_B_GEN_Soldier_F",
			"U_B_GEN_Commander_F",
			"U_O_T_Soldier_F",
			"U_O_T_Officer_F",
			"U_O_T_Sniper_F",
			"U_O_T_FullGhillie_tna_F",
			"U_O_V_Soldier_Viper_F",
			"U_O_V_Soldier_Viper_hex_F",
			"U_I_C_Soldier_Para_1_F",
			"U_I_C_Soldier_Para_2_F",
			"U_I_C_Soldier_Para_3_F",
			"U_I_C_Soldier_Para_4_F",
			"U_I_C_Soldier_Para_5_F",
			"U_I_C_Soldier_Bandit_1_F",
			"U_I_C_Soldier_Bandit_2_F",
			"U_I_C_Soldier_Bandit_3_F",
			"U_I_C_Soldier_Bandit_4_F",
			"U_I_C_Soldier_Bandit_5_F",
			"U_I_C_Soldier_Camo_F",
			"U_C_man_sport_1_F",
			"U_C_man_sport_2_F",
			"U_C_man_sport_3_F",
			"U_C_Man_casual_1_F",
			"U_C_Man_casual_2_F",
			"U_C_Man_casual_3_F",
			"U_C_Man_casual_4_F",
			"U_C_Man_casual_5_F",
			"U_C_Man_casual_6_F",
			"U_B_CTRG_Soldier_urb_1_F",
			"U_B_CTRG_Soldier_urb_2_F",
			"U_B_CTRG_Soldier_urb_3_F"
		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] =
		{
			"V_Press_F",
			"V_Rangemaster_belt",
			"V_TacVest_blk",
			"V_TacVest_blk_POLICE",
			"V_TacVest_brn",
			"V_TacVest_camo",
			"V_TacVest_khk",
			"V_TacVest_oli",
			"V_TacVestCamo_khk",
			"V_TacVestIR_blk",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_khk",
			"V_BandollierB_oli",
			"V_BandollierB_rgr",
			"V_Chestrig_blk",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_Chestrig_rgr",
			"V_HarnessO_brn",
			"V_HarnessO_gry",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_HarnessOSpec_brn",
			"V_HarnessOSpec_gry",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrier3_rgr",
			"V_PlateCarrierGL_blk",
			"V_PlateCarrierGL_mtp",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierH_CTRG",
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrierIAGL_oli",
			"V_PlateCarrierL_CTRG",
			"V_PlateCarrierSpec_blk",
			"V_PlateCarrierSpec_mtp",
			"V_PlateCarrierSpec_rgr",
			//Apex
			"V_TacChestrig_grn_F",
			"V_TacChestrig_oli_F",
			"V_TacChestrig_cbr_F",
			"V_PlateCarrier1_tna_F",
			"V_PlateCarrier2_tna_F",
			"V_PlateCarrierSpec_tna_F",
			"V_PlateCarrierGL_tna_F",
			"V_HarnessO_ghex_F",
			"V_HarnessOGL_ghex_F",
			"V_BandollierB_ghex_F",
			"V_TacVest_gen_F",
			"V_PlateCarrier1_rgr_noflag_F",
			"V_PlateCarrier2_rgr_noflag_F",
			// Jets
			//"V_DeckCrew_yellow_F",
			//"V_DeckCrew_blue_F",
			//"V_DeckCrew_green_F",
			//"V_DeckCrew_red_F",
			//"V_DeckCrew_white_F",
			//"V_DeckCrew_brown_F",
			//"V_DeckCrew_violet_F"
		};
	};

	class Headgear
	{
		name = "Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"Exile_Headgear_SantaHat",
			"Exile_Headgear_SafetyHelmet",
			"H_Cap_blk",
			"H_Cap_blk_Raven",
			"H_Cap_blu",
			"H_Cap_brn_SPECOPS",
			"H_Cap_grn",
			"H_Cap_headphones",
			"H_Cap_khaki_specops_UK",
			"H_Cap_oli",
			"H_Cap_press",
			"H_Cap_red",
			"H_Cap_tan",
			"H_Cap_tan_specops_US",
			"H_Watchcap_blk",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Watchcap_sgg",
			"H_MilCap_blue",
			"H_MilCap_dgtl",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_MilCap_oucamo",
			"H_MilCap_rucamo",
			"H_Bandanna_camo",
			"H_Bandanna_cbr",
			"H_Bandanna_gry",
			"H_Bandanna_khk",
			"H_Bandanna_khk_hs",
			"H_Bandanna_mcamo",
			"H_Bandanna_sgg",
			"H_Bandanna_surfer",
			"H_Booniehat_dgtl",
			"H_Booniehat_dirty",
			"H_Booniehat_grn",
			"H_Booniehat_indp",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_mcamo",
			"H_Booniehat_tan",
			"H_Hat_blue",
			"H_Hat_brown",
			"H_Hat_camo",
			"H_Hat_checker",
			"H_Hat_grey",
			"H_Hat_tan",
			"H_StrawHat",
			"H_StrawHat_dark",
			"H_Beret_02",
			"H_Beret_blk",
			"H_Beret_blk_POLICE",
			"H_Beret_brn_SF",
			"H_Beret_Colonel",
			"H_Beret_grn",
			"H_Beret_grn_SF",
			"H_Beret_ocamo",
			"H_Beret_red",
			"H_Shemag_khk",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_Shemag_tan",
			"H_ShemagOpen_khk",
			"H_ShemagOpen_tan",
			"H_TurbanO_blk",
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_desert",
			"H_HelmetB_grass",
			"H_HelmetB_light",
			"H_HelmetB_light_black",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_paint",
			"H_HelmetB_plain_blk",
			"H_HelmetB_sand",
			"H_HelmetB_snakeskin",
			"H_HelmetCrew_B",
			"H_HelmetCrew_I",
			"H_HelmetCrew_O",
			"H_HelmetIA",
			"H_HelmetIA_camo",
			"H_HelmetIA_net",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetO_ocamo",
			"H_HelmetO_oucamo",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_paint1",
			"H_HelmetSpecB_paint2",
			"H_HelmetSpecO_blk",
			"H_HelmetSpecO_ocamo",
			"H_CrewHelmetHeli_B",
			"H_CrewHelmetHeli_I",
			"H_CrewHelmetHeli_O",
			"H_HelmetCrew_I",
			"H_HelmetCrew_B",
			"H_HelmetCrew_O",
			"H_PilotHelmetHeli_B",
			"H_PilotHelmetHeli_I",
			"H_PilotHelmetHeli_O",

			//Apex
			"H_Helmet_Skate",
			"H_HelmetB_TI_tna_F",
			"H_HelmetO_ViperSP_hex_F",
			"H_HelmetO_ViperSP_ghex_F",
			"H_HelmetB_tna_F",
			"H_HelmetB_Enh_tna_F",
			"H_HelmetB_Light_tna_F",
			"H_HelmetSpecO_ghex_F",
			"H_HelmetLeaderO_ghex_F",
			"H_HelmetO_ghex_F",
			"H_HelmetCrew_O_ghex_F",
			"H_MilCap_tna_F",
			"H_MilCap_ghex_F",
			"H_Booniehat_tna_F",
			"H_Beret_gen_F",
			"H_MilCap_gen_F",
			"H_Cap_oli_Syndikat_F",
			"H_Cap_tan_Syndikat_F",
			"H_Cap_blk_Syndikat_F",
			"H_Cap_grn_Syndikat_F"
		};
	};

	class Glasses
	{
		name = "Glasses";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\Goggles_ca.paa";
		items[] =
		{
			"G_Spectacles",
			"G_Spectacles_Tinted",
			"G_Combat",
			"G_Lowprofile",
			"G_Shades_Black",
			"G_Shades_Green",
			"G_Shades_Red",
			"G_Squares",
			"G_Squares_Tinted",
			"G_Sport_BlackWhite",
			"G_Sport_Blackyellow",
			"G_Sport_Greenblack",
			"G_Sport_Checkered",
			"G_Sport_Red",
			"G_Tactical_Black",
			"G_Aviator",
			"G_Lady_Mirror",
			"G_Lady_Dark",
			"G_Lady_Red",
			"G_Lady_Blue",
			"G_Goggles_VR",
			"G_Balaclava_blk",
			"G_Balaclava_oli",
			"G_Balaclava_combat",
			"G_Balaclava_lowprofile",
			"G_Bandanna_blk",
			"G_Bandanna_oli",
			"G_Bandanna_khk",
			"G_Bandanna_tan",
			"G_Bandanna_beast",
			"G_Bandanna_shades",
			"G_Bandanna_sport",
			"G_Bandanna_aviator",
			"G_Shades_Blue",
			"G_Sport_Blackred",
			"G_Tactical_Clear",
			"G_Balaclava_TI_blk_F",
			"G_Balaclava_TI_tna_F",
			"G_Balaclava_TI_G_blk_F",
			"G_Balaclava_TI_G_tna_F",
			"G_Combat_Goggles_tna_F"
		};
	};

	class PointerAttachments
	{
		name = "Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"acc_flashlight",
			"acc_pointer_IR",
			"hlc_acc_Surefiregrip"
		};
	};

	class BipodAttachments
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] =
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli",
			//Apex
			"bipod_01_F_khk",
			//NIArms
			"HLC_bipod_UTGShooters"
		};
	};

	class MuzzleAttachments
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] =
		{
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"muzzle_snds_L",
			"muzzle_snds_M",
			//Apex
			"muzzle_snds_H_khk_F",
			"muzzle_snds_H_snd_F",
			"muzzle_snds_58_blk_F",
			"muzzle_snds_m_khk_F",
			"muzzle_snds_m_snd_F",
			"muzzle_snds_B_khk_F",
			"muzzle_snds_B_snd_F",
			"muzzle_snds_58_wdm_F",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_65_TI_hex_F",
			"muzzle_snds_65_TI_ghex_F",
			"muzzle_snds_H_MG_blk_F",
			"muzzle_snds_H_MG_khk_F",
			//NIArms
			"hlc_muzzle_556NATO_KAC",
			"hlc_muzzle_300blk_KAC",
			"hlc_muzzle_MAG58_Brake",
			"hlc_muzzle_545SUP_AK",
			"hlc_muzzle_762SUP_AK",
			"hlc_muzzle_snds_AUG",
			"hlc_muzzle_snds_a6AUG",
			"hlc_muzzle_snds_M14",
			//MP5
			"hlc_muzzle_Agendasix",
			"hlc_muzzle_Tundra",
			"hlc_muzzle_Agendasix10mm"
		};
	};
	
	class OpticAttachments
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] =
		{
			"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"optic_LRPS",
			"optic_MRCO",
			"optic_MRD",
			"optic_Nightstalker",
			"optic_NVS",
			"optic_SOS",
			"optic_tws",
			"optic_tws_mg",
			"optic_Yorris",
			//Apex
			"optic_Arco_blk_F",
			"optic_Arco_ghex_F",
			"optic_DMS_ghex_F",
			"optic_Hamr_khk_F",
			"optic_ERCO_blk_F",
			"optic_ERCO_khk_F",
			"optic_ERCO_snd_F",
			"optic_SOS_khk_F",
			"optic_LRPS_tna_F",
			"optic_LRPS_ghex_F",
			"optic_Holosight_blk_F",
			"optic_Holosight_khk_F",
			"optic_Holosight_smg_blk_F",
			//NIArms
			"hlc_optic_ZF95Base",
			"hlc_optic_LeupoldM3A",
			"hlc_optic_VOMZ",
			"hlc_optic_VOMZ3d",
			//AK Optics
			"HLC_Optic_PSO1",
			"HLC_Optic_1p29",
			"hlc_optic_kobra",
			"hlc_optic_goshawk",
			//FN FAL Optics
			"hlc_optic_PVS4FAL",
			"hlc_optic_suit",
			//FN-30-11 Optics
			"hlc_optic_ANGSCHUTZ",
			"hlc_optic_FNSTANAG4X",
			"hlc_optic_FNSTANAG2D",
			"hlc_optic_ZF95_3011",
			"hlc_optic_Kern_3011",
			"hlc_optic_Kern2d_3011",
			"hlc_optic_LeupoldM3A_3011",
			//G3 Optics
			"HLC_Optic_ZFSG1",
			"hlc_optic_STANAGZF_G3",
			"hlc_optic_STANAGZF2D_G3",
			"hlc_optic_PVS4G3",
			"hlc_optic_accupoint_g3",
			"hlc_optic_ZF95_g3",
			"hlc_optic_LeupoldM3A_G3",
			//G36 Optics
			"HLC_Optic_G36dualoptic35x",
			"HLC_Optic_G36dualoptic35x2d",
			"HLC_Optic_G36Export35x",
			"HLC_Optic_G36Export35x2d",
			"HLC_Optic_G36Dualoptic15x",
			"HLC_Optic_G36Dualoptic15x2d",
			"HLC_Optic_G36Export15x",
			"HLC_Optic_G36Export15x2d",
			//M14 Optics
			"hlc_optic_artel_m14",
			"hlc_optic_LRT_m14",
			"hlc_optic_PVS4M14",
			//SG510 Optics
			"hlc_optic_Kern",
			"hlc_optic_Kern2d",
			//NIA Pistol Optics
			"HLC_Optic_Docter_CADEX",
			"HLC_optic_HP",
			"HLC_Optic_Romeo1_RX",
			"HLC_optic_Siglite",
			"HLC_optic_ATT",
			"HLC_optic_XS",
			"HLC_optic_VTAC",
			"HLC_optic_stavenhagen",
			//	P228 Optics
			"HLC_Optic228_Docter_CADEX",
			"HLC_optic228_HP",
			"HLC_Optic228_Romeo1_RX",
			"HLC_optic228_Siglite",
			"HLC_optic228_ATT",
			"HLC_optic228_XS",
			"HLC_optic228_VTAC"
		};
	};
	
	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] =
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"O_HMG_01_support_F",
			//"O_HMG_01_support_high_F", // Does not seem to work with HMG01, only the lower version does
			"O_HMG_01_weapon_F"
		};
	};

	class Hardware
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_DuctTape",
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_SafeKit",
			"Exile_Item_CamoTentKit",
			"Exile_Item_CodeLock",
			"Exile_Item_MetalScrews",
			"Exile_Item_MetalWire",
			"Exile_Item_Laptop",
			"Exile_Item_BaseCameraKit",
			//"Exile_Item_MetalHedgehogKit",
			"Exile_Item_Cement",
			"Exile_Item_Sand",
			"Exile_Item_MobilePhone",
			"Exile_Item_SprayCan_Black",
			"Exile_Item_SprayCan_Red",
			"Exile_Item_SprayCan_Green",
			"Exile_Item_SprayCan_White",
			"Exile_Item_SprayCan_Blue",
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_OilCanister",
			"Exile_Item_Hammer",
			"Exile_Item_Carwheel",
			"Exile_Item_SleepingMat",
			"Exile_Item_Defibrillator",
			"Exile_Item_Wrench",
			"Exile_Item_Rope"
		};
	};

	class Food
	{
		name = "Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_EMRE",
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Surstromming",
			"Exile_Item_SausageGravy",
			"Exile_Item_Catfood",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_BBQSandwich",
			"Exile_Item_MacasCheese",
			"Exile_Item_Dogfood",
			"Exile_Item_BeefParts",
			"Exile_Item_Cheathas",
			"Exile_Item_Noodles",
			"Exile_Item_SeedAstics",
			"Exile_Item_Raisins",
			"Exile_Item_Moobar",
			"Exile_Item_InstantCoffee"
			
			// Hunted Animals
			// Note: Adding these to the trader will defeat the purpose of hunting!
			/*
			"Exile_Item_SheepSteak_Cooked",
			"Exile_Item_AlsatianSteak_Cooked",
			"Exile_Item_CatSharkFilet_Cooked",
			"Exile_Item_FinSteak_Cooked",
			"Exile_Item_GoatSteak_Cooked",
			"Exile_Item_TurtleFilet_Cooked",
			"Exile_Item_TunaFilet_Cooked",
			"Exile_Item_RabbitSteak_Cooked",
			"Exile_Item_ChickenFilet_Cooked",
			"Exile_Item_RoosterFilet_Cooked",
			"Exile_Item_MulletFilet_Cooked",
			"Exile_Item_SalemaFilet_Cooked",
			"Exile_Item_MackerelFilet_Cooked",
			"Exile_Item_OrnateFilet_Cooked",
			"Exile_Item_SnakeFilet_Cooked",
			"Exile_Item_CatSharkFilet_Raw",
			"Exile_Item_TunaFilet_Raw",
			"Exile_Item_AlsatianSteak_Raw",
			"Exile_Item_TurtleFilet_Raw",
			"Exile_Item_SheepSteak_Raw",
			"Exile_Item_FinSteak_Raw",
			"Exile_Item_GoatSteak_Raw",
			"Exile_Item_ChickenFilet_Raw",
			"Exile_Item_RoosterFilet_Raw",
			"Exile_Item_MackerelFilet_Raw",
			"Exile_Item_MulletFilet_Raw",
			"Exile_Item_OrnateFilet_Raw",
			"Exile_Item_RabbitSteak_Raw",
			"Exile_Item_SalemaFilet_Raw",
			"Exile_Item_SnakeFilet_Raw"
			*/
		};
	};
	
	class NonVeganFood
	{
		name = "Non-Vegan Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_CatSharkFilet_Raw",
			"Exile_Item_TunaFilet_Raw",
			"Exile_Item_AlsatianSteak_Raw",
			"Exile_Item_TurtleFilet_Raw",
			"Exile_Item_SheepSteak_Raw",
			"Exile_Item_FinSteak_Raw",
			"Exile_Item_GoatSteak_Raw",
			"Exile_Item_ChickenFilet_Raw",
			"Exile_Item_RoosterFilet_Raw",
			"Exile_Item_MackerelFilet_Raw",
			"Exile_Item_MulletFilet_Raw",
			"Exile_Item_OrnateFilet_Raw",
			"Exile_Item_RabbitSteak_Raw",
			"Exile_Item_SalemaFilet_Raw",
			"Exile_Item_SnakeFilet_Raw"
		};
	};
	
	class Drinks
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_PlasticBottleCoffee",
			"Exile_Item_PowerDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Beer",
			"Exile_Item_EnergyDrink",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleEmpty"
		};
	};

	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Exile_Item_CanOpener",
			"Exile_Item_Handsaw",
			"Exile_Item_Pliers",
			"Exile_Item_Grinder",
			"Exile_Item_Foolbox",
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_Hammer",
			"Exile_Item_OilCanister",
			"Exile_Item_Screwdriver",
			"Exile_Item_Shovel",
			"Exile_Item_Wrench",
			"Exile_Item_SleepingMat",
			"Exile_Item_ToiletPaper",
			"Exile_Item_ZipTie",
			"Exile_Item_BurlapSack",
			"Exile_Item_Bullets_556",
			"Exile_Item_Bullets_762",
			"Exile_Item_WeaponParts",
			"Binocular",
			"Rangefinder",
			/*
			"Laserdesignator",
			"Laserdesignator_02",
			"Laserdesignator_03",
			*/
			
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"Exile_Item_XM8"			
		};
	};

	class First_Aid
	{
		name = "First Aid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_InstaDoc",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin",
			"Exile_Item_Heatpack"
			"Exile_Item_Defibrillator"
		};
	};

	class Navigation
	{
		name = "Special Environment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"B_Parachute",
			"Exile_Headgear_GasMask",
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR",
			"O_NVGoggles_hex_F",
			"O_NVGoggles_urb_F",
			"O_NVGoggles_ghex_F",
			"NVGoggles_tna_F"
		};
	};

	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] =
		{
			"B_AssaultPack_blk",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_khk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_rgr",
			"B_AssaultPack_sgg",
			"B_Bergen_blk",
			"B_Bergen_mcamo",
			"B_Bergen_rgr",
			"B_Bergen_sgg",
			"B_Carryall_cbr",
			"B_Carryall_khk",
			"B_Carryall_mcamo",
			"B_Carryall_ocamo",
			"B_Carryall_oli",
			"B_Carryall_oucamo",
			"B_FieldPack_blk",
			"B_FieldPack_cbr",
			"B_FieldPack_ocamo",
			"B_FieldPack_oucamo",
			"B_HuntingBackpack",
			"B_Kitbag_cbr",
			"B_Kitbag_mcamo",
			"B_Kitbag_sgg",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_tan",
			"B_TacticalPack_blk",
			"B_TacticalPack_mcamo",
			"B_TacticalPack_ocamo",
			"B_TacticalPack_oli",
			"B_TacticalPack_rgr",
			//Apex
			"B_Bergen_mcamo_F",
			"B_Bergen_dgtl_F",
			"B_Bergen_hex_F",
			"B_Bergen_tna_F",
			"B_AssaultPack_tna_F",
			"B_Carryall_ghex_F",
			"B_FieldPack_ghex_F",
			"B_ViperHarness_blk_F",
			"B_ViperHarness_ghex_F",
			"B_ViperHarness_hex_F",
			"B_ViperHarness_khk_F",
			"B_ViperHarness_oli_F",
			"B_ViperLightHarness_blk_F",
			"B_ViperLightHarness_ghex_F",
			"B_ViperLightHarness_hex_F",
			"B_ViperLightHarness_khk_F",
			"B_ViperLightHarness_oli_F"
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
		items[] =
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			//"130Rnd_338_Mag", SPMG
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			//"150Rnd_93x64_Mag", // NAVID
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag",
			"30Rnd_9x21_Red_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag",
			"Exile_Magazine_30Rnd_762x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow",
			"Exile_Magazine_45Rnd_545x39_RPK_Green",
			"Exile_Magazine_75Rnd_545x39_RPK_Green",
			"Exile_Magazine_20Rnd_762x51_DMR",
			"Exile_Magazine_20Rnd_762x51_DMR_Yellow",
			"Exile_Magazine_20Rnd_762x51_DMR_Red",
			"Exile_Magazine_20Rnd_762x51_DMR_Green",
			"Exile_Magazine_10Rnd_303",
			"Exile_Magazine_100Rnd_762x54_PK_Green",
			"Exile_Magazine_7Rnd_45ACP",
			"Exile_Magazine_8Rnd_9x18",
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_6Rnd_45ACP",
			"Exile_Magazine_5Rnd_22LR",
			"Exile_Magazine_10Rnd_762x54",
			"Exile_Magazine_10Rnd_9x39",
			"Exile_Magazine_20Rnd_9x39",
			//"Exile_Magazine_8Rnd_74Pellets",
			"Exile_Magazine_8Rnd_74Slug",
			//Apex
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_Tracer_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_Tracer_F",
			"20Rnd_650x39_Cased_Mag_F",
			"10Rnd_50BW_Mag_F",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_Green_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Tracer_Green_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Red_F",
			"200Rnd_556x45_Box_Tracer_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"10Rnd_9x21_Mag",
			"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
			"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_765x17_SA61",
			"Exile_Magazine_20Rnd_765x17_SA61",
			"Exile_Magazine_10Rnd_127x99_m107",
			"Exile_Magazine_5Rnd_127x108_APDS_KSVK",
			"Exile_Magazine_5Rnd_127x108_KSVK"
		};
	};

	class Flares
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] =
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag"
		};
	};

	class Pistols
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] =
		{
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F",
			"Exile_Weapon_Colt1911",
			"Exile_Weapon_Makarov",
			"Exile_Weapon_Taurus",
			"Exile_Weapon_TaurusGold",
			//Apex
			"hgun_Pistol_01_F",
			"hgun_P07_khk_F",
			"Exile_Weapon_SA61"
		};
	};

	class SubMachineGuns
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hgun_PDW2000_F",
			"SMG_01_F",
			"SMG_02_F",
			"SMG_05_F"
		};
	};

	class LightMachineGuns
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F",
			"LMG_03_F",
			"Exile_Weapon_RPK",
			"Exile_Weapon_PK",
			"Exile_Weapon_PKP"

			/*
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_black_F",
			"MMG_02_camo_F",
			"MMG_02_sand_F"
			*/
		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F",
			"Exile_Weapon_AK107",
			"Exile_Weapon_AK107_GL",
			"Exile_Weapon_AK74",
			"Exile_Weapon_AK74_GL",
			"Exile_Weapon_AK47",
			"Exile_Weapon_AKS_Gold",
			//Apex
			"arifle_AK12_F",
			"arifle_AK12_GL_F",
			"arifle_AKM_F",
			"arifle_AKM_FL_F",
			"arifle_AKS_F",
			"arifle_ARX_blk_F",
			"arifle_ARX_ghex_F",
			"arifle_ARX_hex_F",
			"arifle_CTAR_blk_F",
			"arifle_CTAR_hex_F",
			"arifle_CTAR_ghex_F",
			"arifle_CTAR_GL_blk_F",
			"arifle_CTARS_blk_F",
			"arifle_CTARS_hex_F",
			"arifle_CTARS_ghex_F",
			"arifle_SPAR_01_blk_F",
			"arifle_SPAR_01_khk_F",
			"arifle_SPAR_01_snd_F",
			"arifle_SPAR_01_GL_blk_F",
			"arifle_SPAR_01_GL_khk_F",
			"arifle_SPAR_01_GL_snd_F",
			"arifle_SPAR_02_blk_F",
			"arifle_SPAR_02_khk_F",
			"arifle_SPAR_02_snd_F",
			"arifle_SPAR_03_blk_F",
			"arifle_SPAR_03_khk_F",
			"arifle_SPAR_03_snd_F",
			"arifle_MX_khk_F",
			"arifle_MX_GL_khk_F",
			"arifle_MXC_khk_F",
			"arifle_MXM_khk_F",
			"Exile_Weapon_M4",
			"Exile_Weapon_M16A4",
			"Exile_Weapon_M16A2"
		};
	};
	
	class NIAAK
	{
		name = "NIA AK Weapons";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hlc_rifle_ak74",
			"hlc_rifle_ak74_MTK",
			"hlc_rifle_ak74_dirty",
			"hlc_rifle_ak74_dirty2",
			"hlc_rifle_aks74",
			"hlc_rifle_aks74_MTK",
			"hlc_rifle_aks74u",
			"hlc_rifle_aks74u_MTK",
			"hlc_rifle_ak47",
			"hlc_rifle_akm",
			"hlc_rifle_akm_MTK",
			"hlc_rifle_rpk",
			"hlc_rifle_ak12",
			"hlc_rifle_aku12",
			"hlc_rifle_rpk12",
			"hlc_rifle_rpk74n",
			"hlc_rifle_ak12gl",
			"hlc_rifle_akmgl",
			"hlc_rifle_aks74_GL",
			"hlc_rifle_saiga12k",
			"hlc_rifle_aek971",
			"hlc_rifle_aek971_mtk",
			"hlc_rifle_RK62",
			"hlc_rifle_slr107u",
			"hlc_rifle_slr107u_MTK",
			"hlc_rifle_ak74m",
			"hlc_rifle_ak74m_gl",
			"hlc_rifle_ak74m_MTK",
			// AK Ammo
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_T_AK",
			"hlc_30Rnd_545x39_EP_AK",
			"hlc_45Rnd_545x39_t_rpk",
			"hlc_60Rnd_545x39_t_rpk",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"hlc_45Rnd_762x39_t_rpk",
			"hlc_45Rnd_762x39_m_rpk",
			"hlc_75rnd_762x39_m_rpk",
			"hlc_10rnd_12g_buck_S12",
			"hlc_10rnd_12g_slug_S12"
		};
	};
	
	class NIAACR
	{
		name = "NIA AR Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hlc_rifle_RU556",
			"hlc_rifle_RU5562",
			"hlc_rifle_Colt727",
			"hlc_rifle_Colt727_GL",
			"hlc_rifle_bcmjack",
			"hlc_rifle_Bushmaster300",
			"hlc_rifle_vendimus",
			"hlc_rifle_SAMR",
			"hlc_rifle_honeybase",
			"hlc_rifle_honeybadger"
			// ACR Ammo
			"29rnd_300BLK_STANAG",
			"29rnd_300BLK_STANAG_T",
			"29rnd_300BLK_STANAG_S",
			"hlc_30rnd_556x45_EPR",
			"hlc_30rnd_556x45_SOST",
			"hlc_30rnd_556x45_SPR"
		};
	};
	
	class NIAAUG
	{
		name = "NIA AUG Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hlc_barrel_standard",
			"hlc_barrel_carbine",
			"hlc_barrel_hbar",
			"hlc_barrel_9mm",
			"hlc_rifle_aug",
			"hlc_rifle_auga1_t",
			"hlc_rifle_auga1_B",
			"hlc_rifle_auga1carb",
			"hlc_rifle_auga1carb_t",
			"hlc_rifle_auga1carb_b",
			"hlc_rifle_aughbar",
			"hlc_rifle_aughbar_b",
			"hlc_rifle_aughbar_t",
			"hlc_rifle_augpara",
			"hlc_rifle_augpara_b",
			"hlc_rifle_augpara_t",
			"hlc_rifle_auga2",
			"hlc_rifle_auga2_b",
			"hlc_rifle_auga2_t",
			"hlc_rifle_auga2carb",
			"hlc_rifle_auga2carb_t",
			"hlc_rifle_auga2carb_b",
			"hlc_rifle_auga2lsw",
			"hlc_rifle_auga2lsw_t",
			"hlc_rifle_auga2lsw_b",
			"hlc_rifle_auga2para",
			"hlc_rifle_auga2para_b",
			"hlc_rifle_auga2para_t",
			"hlc_rifle_augsr",
			"hlc_rifle_augsr_b",
			"hlc_rifle_augsr_t",
			"hlc_rifle_augsrcarb",
			"hlc_rifle_augsrcarb_t",
			"hlc_rifle_augsrcarb_b",
			"hlc_rifle_augsrhbar",
			"hlc_rifle_augsrhbar_b",
			"hlc_rifle_augsrhbar_t",
			"hlc_rifle_auga3",
			"hlc_rifle_auga3_bl",
			"hlc_rifle_auga3_b",
			"hlc_rifle_auga3_GL",
			"hlc_rifle_auga3_GL_BL",
			"hlc_rifle_auga3_GL_B",
			// AUG Ammo
			"hlc_30Rnd_556x45_B_AUG",
			"hlc_30Rnd_556x45_SOST_AUG",
			"hlc_30Rnd_556x45_SPR_AUG",
			"hlc_30Rnd_556x45_T_AUG",
			"hlc_40Rnd_556x45_B_AUG",
			"hlc_40Rnd_556x45_SOST_AUG",
			"hlc_40Rnd_556x45_SPR_AUG",
			"hlc_25Rnd_9x19mm_M882_AUG",
			"hlc_25Rnd_9x19mm_JHP_AUG",
			"hlc_25Rnd_9x19mm_subsonic_AUG"			
		};
	};
	
	class NIAAWM
	{
		name = "NIA AWM Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hlc_rifle_awcovert",
			"hlc_rifle_awcovert_BL",
			"hlc_rifle_awcovert_FDE",
			"hlc_rifle_awmagnum",
			"hlc_rifle_awmagnum_BL",
			"hlc_rifle_awmagnum_FDE",
			"hlc_rifle_awMagnum_FDE_ghillie",
			"hlc_rifle_awMagnum_BL_ghillie",
			"hlc_rifle_awMagnum_OD_ghillie",
			// AWM Ammo
			"hlc_5rnd_300WM_FMJ_AWM",
			"hlc_5rnd_300WM_AP_AWM",
			"hlc_5rnd_300WM_BTSP_AWM",
			"hlc_5rnd_300WM_mk248_AWM",
			"hlc_5rnd_300WM_SBT_AWM"
		};
	};
	
	class NIAFAL
	{
		name = "NIA FAL Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hlc_rifle_l1a1slr",
			"hlc_rifle_SLR",
			"hlc_rifle_STG58F",
			"hlc_rifle_FAL5061",
			"hlc_rifle_FAL5061Rail",
			"hlc_rifle_FAL5000",
			"hlc_rifle_FAL5000Rail",
			"hlc_rifle_c1A1",
			"hlc_rifle_LAR",
			"hlc_rifle_SLRchopmod",
			"hlc_rifle_falosw",
			"hlc_rifle_osw_GL",
			// FN FAL Ammo
			"hlc_20Rnd_762x51_B_fal",
			"hlc_20Rnd_762x51_t_fal",
			"hlc_20Rnd_762x51_S_fal",
			"hlc_50rnd_762x51_M_FAL"
		};
	};
	
	class NIAG3
	{
		name = "NIA G3 Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hlc_rifle_g3sg1",
			"hlc_rifle_psg1",
			"hlc_rifle_g3a3",
			"hlc_rifle_g3a3ris",
			"hlc_rifle_g3ka4",
			"HLC_Rifle_g3ka4_GL",
			"hlc_rifle_hk51",
			"hlc_rifle_hk53",
			"hlc_rifle_hk53RAS",
			"hlc_rifle_hk33a2",
			"hlc_rifle_hk33a2RIS",
			"hlc_rifle_psg1A1",
			"hlc_rifle_PSG1A1_RIS",
			"hlc_rifle_g3a3v",
			// G3 Ammo
			"hlc_20Rnd_762x51_B_G3",
			"hlc_20rnd_762x51_T_G3",
			"hlc_50rnd_762x51_M_G3"
		};
	};
	
	class NIAG36
	{
		name = "NIA G36 Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hlc_rifle_G36A1",
			"hlc_rifle_G36A1AG36",
			"hlc_rifle_G36KA1",
			"hlc_rifle_G36C",
			"hlc_rifle_G36E1",
			"hlc_rifle_G36E1AG36",
			"hlc_rifle_G36KE1",
			"hlc_rifle_G36V",
			"hlc_rifle_G36KV",
			"hlc_rifle_G36CV",
			"hlc_rifle_G36VAG36",
			"hlc_rifle_G36TAC",
			"hlc_rifle_G36KTAC",
			"hlc_rifle_G36CTAC",
			"hlc_rifle_G36MLIC",
			"hlc_rifle_G36KMLIC",
			"hlc_rifle_G36CMLIC",
			"hlc_rifle_G36MLIAG36",
			"hlc_rifle_MG36",
			// G36 Ammo
			"hlc_30rnd_556x45_EPR_G36",
			"hlc_30rnd_556x45_SOST_G36",
			"hlc_30rnd_556x45_SPR_G36",
			"hlc_100rnd_556x45_EPR_G36"
		};
	};
	
	class NIAM14
	{
		name = "NIA M14 Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hlc_rifle_M14",
			"hlc_rifle_M21",
			"hlc_rifle_M14DMR",
			"hlc_rifle_m14sopmod",
			// M14 Ammo
			"hlc_20Rnd_762x51_B_M14",
			"hlc_20rnd_762x51_T_M14",
			"hlc_50rnd_762x51_M_M14"
		};
	};
	
	class NIAMP5
	{
		name = "NIA MP5 SMGs";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hlc_smg_mp5k_PDW",
			"hlc_smg_mp5k",
			"hlc_smg_mp5a2",
			"hlc_smg_mp5a3",
			"hlc_smg_mp5a4",
			"hlc_smg_mp5n",
			"hlc_smg_mp510",
			"hlc_smg_mp5sd5",
			"hlc_smg_mp5sd6",
			"hlc_smg_9mmar",
			// MP5 Ammo
			"hlc_30Rnd_9x19_B_MP5",
			"hlc_30Rnd_9x19_GD_MP5",
			"hlc_30Rnd_9x19_SD_MP5",
			"hlc_30Rnd_10mm_B_MP5",
			"hlc_30Rnd_10mm_JHP_MP5"
		};
	};
	
	class NIASAW
	{
		name = "NIA SAW";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hlc_lmg_minimipara",
			"hlc_lmg_minimi",
			"hlc_lmg_minimi_railed",
			"hlc_lmg_m249para",
			"hlc_lmg_M249E2",
			"hlc_m249_pip1",
			"hlc_m249_pip2",
			"hlc_m249_pip3",
			"hlc_m249_pip4",
			//"hlc_lmg_mk48"
			// SAW Ammo
			"hlc_200rnd_556x45_M_SAW",
			"hlc_200rnd_556x45_T_SAW",
			"hlc_200rnd_556x45_B_SAW"
		};
	};
	
	class NIAPistols
	{
		name = "NIA Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] =
		{
			"hlc_pistol_P226WestGerman",
			"hlc_pistol_P226US",
			"hlc_pistol_P226R",
			"hlc_pistol_P226R_Elite",
			"hlc_pistol_P226R_Combat",
			"hlc_pistol_Mk25",
			"hlc_pistol_Mk25D",
			"hlc_Pistol_mk25RX",
			"hlc_pistol_P226R_40",
			"hlc_pistol_P226R_40Elite",
			"hlc_pistol_P226R_40Combat",
			"hlc_pistol_P226R_40Enox",
			"hlc_Pistol_P228",
			"hlc_Pistol_M11",
			"hlc_pistol_P229R",
			"hlc_pistol_P229R_Combat",
			"hlc_Pistol_M11A1",
			"hlc_Pistol_M11A1D",
			"hlc_pistol_P229R_Elite",
			"hlc_pistol_P229R_40",
			"hlc_pistol_P229R_40Combat",
			"hlc_pistol_P229R_40Elite",
			"hlc_pistol_P229R_40Enox",
			"hlc_pistol_P229R_357",
			"hlc_pistol_P229R_357Combat",
			"hlc_pistol_P229R_357Elite",
			"hlc_pistol_P229R_357Stainless",
			"hlc_pistol_P226R_357",
			"hlc_pistol_P226R_357Combat",
			"hlc_pistol_P226R_357Elite",
			"hlc_pistol_P226R_357Stainless",
			"hlc_pistol_P239",
			"hlc_pistol_P239_40",
			"hlc_pistol_P239_357",
			// Pistol Ammo
			"hlc_15Rnd_9x19_B_P226",
			"hlc_15Rnd_9x19_JHP_P226",
			"hlc_15Rnd_9x19_SD_P226",
			"hlc_12Rnd_40SW_B_P226",
			"hlc_12Rnd_40SW_JHP_P226",
			"hlc_12Rnd_40SW_SD_P226",
			"hlc_12Rnd_357SIG_B_P226",
			"hlc_12Rnd_357SIG_JHP_P226",
			"hlc_13Rnd_9x19_B_P228",
			"hlc_13Rnd_9x19_JHP_P228",
			"hlc_13Rnd_9x19_SD_P228",
			"hlc_10Rnd_40SW_B_P229",
			"hlc_10Rnd_40SW_JHP_P229",
			"hlc_10Rnd_40SW_SD_P229",
			"hlc_10Rnd_357SIG_B_P229",
			"hlc_10Rnd_357SIG_JHP_P229",
			"hlc_10Rnd_9x19_B_P239",
			"hlc_10Rnd_9x19_JHP_P239",
			"hlc_10Rnd_9x19_SD_P239",
			"hlc_8Rnd_40SW_B_P239",
			"hlc_10Rnd_40sw_JHP_P239",
			"hlc_10Rnd_40sw_SD_P239",
			"hlc_8Rnd_357SIG_B_P239",
			"hlc_8Rnd_357SIG_JHP_P239"
		};
	};

	class Shotguns
	{
		name = "Shotguns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Weapon_M1014"
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_F",
			"Exile_Weapon_CZ550",
			"Exile_Weapon_SVD",
			"Exile_Weapon_SVDCamo",
			"Exile_Weapon_VSSVintorez",
			"Exile_Weapon_DMR",
			"Exile_Weapon_LeeEnfield",
			//Apex
			"srifle_LRR_tna_F",
			"srifle_GM6_ghex_F",
			"srifle_DMR_07_blk_F",
			"srifle_DMR_07_hex_F",
			"srifle_DMR_07_ghex_F",
			"Exile_Weapon_m107",
			"Exile_Weapon_ksvk"
		};
	};

	class Bikes
	{
		name = "Bikes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Bike_OldBike",
			"Exile_Bike_MountainBike"
		};
	};

	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Car_Kart_Black",
			"Exile_Bike_QuadBike_Black",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_TowTractor_White",
			"Exile_Car_Tractor_Red",
			"Exile_Car_UAZ_Green",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_Octavius_White",
			"Exile_Car_Golf_Red",
			"Exile_Car_LandRover_Green",
			"Exile_Car_LandRover_Ambulance_Green",
			"Exile_Car_Lada_Green",
			"Exile_Car_Volha_White",
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_SUV_Red",
			"Exile_Car_SUVXL_Black",
			"Exile_Car_SUV_Armed_Black",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Offroad_Repair_Civillian",
			"Exile_Car_Offroad_Armed_Guerilla01",
			"Exile_Car_BRDM2_HQ",
			"Exile_Car_BTR40_MG_Green",
			"Exile_Car_BTR40_Green",
			"Exile_Car_HMMWV_M134_Green",
			"Exile_Car_HMMWV_M2_Green",
			"Exile_Car_HMMWV_MEV_Green",
			"Exile_Car_HMMWV_UNA_Green",
			"Exile_Car_Strider",
			"Exile_Car_Hunter",
			"Exile_Car_Ifrit",
			"Exile_Car_ProwlerLight",
			"Exile_Car_ProwlerUnarmed",
			"Exile_Car_QilinUnarmed",
			"Exile_Car_MB4WD",
			"Exile_Car_MB4WDOpen"
		};
	};

	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Covered_Worker",
			"Exile_Car_V3S_Covered",
			"Exile_Car_Zamak",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"Exile_Car_Ikarus_Blue"
		};
	};

	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Huey_Green",
			"Exile_Chopper_Huey_Armed_Green",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Orca_BlackCustom",
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Hellcat_Green"
		};
	};

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey",
			"Exile_Boat_WaterScooter",
			"Exile_Boat_RHIB"
		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Plane_Cessna",
			"Exile_Plane_AN2_Green",
			"Exile_Plane_Ceasar",
			"Exile_Plane_BlackfishInfantry",
			"Exile_Plane_BlackfishVehicle"
		};
	};

	class Diving
	{
		name = "Diving";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"G_Diving",
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit"
		};
	};
};
class CfgTraders
{
	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"Pistols",
			"Shotguns",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles",
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"NIAAK",
			"NIAACR",
			"NIAAUG",
			"NIAAWM",
			"NIAFAL",
			"NIAG3",
			"NIAG36",
			"NIAM14",
			"NIAMP5",
			"NIAPistols",
			"NIASAW"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"Navigation"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Headgear",
			"Glasses",
			"Uniforms",
			"Vests",
			"Backpacks",
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks",
			//"NonVeganFood"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Tools",
			"Hardware",
			"ExtendedBaseMod" //neeeeuuuu :D
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers", 
			"Planes"
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats"
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving"
		};
	};

	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
        name = "MEDICAL SUPPLIES";
        showWeaponFilter = 0;
        categories[] = 
        {
            "First_Aid"
        };
	};

	class Exile_Trader_CommunityCustoms2
	{
        name = "MAC N CHEESE";
        showWeaponFilter = 0;
        categories[] = 
        {
            "MacnCheese"
        };
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};
class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 5000;
		Level3 = 10000;
		Level4 = 15000;
		Level5 = 20000;
		Level6 = 25000;
	};
};
class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] =
		{

			{"Exile_Bike_QuadBike_Blue",		100, "Blue",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"}},
			{"Exile_Bike_QuadBike_Red",			100, "Red",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"}},
			{"Exile_Bike_QuadBike_White",		100, "White",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"}},
			{"Exile_Bike_QuadBike_Nato",		150, "NATO",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"}},
			{"Exile_Bike_QuadBike_Csat",		150, "CSAT",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"}},
			{"Exile_Bike_QuadBike_Fia",			150, "FIA",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"}},
			{"Exile_Bike_QuadBike_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"}},
			{"Exile_Bike_QuadBike_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"}},
			{"Exile_Bike_QuadBike_Black",		100, "Black",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"}},
			{"Exile_Bike_QuadBike_Black",		100, "Hex",		{"\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_ghex_CO.paa","\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_wheel_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_MotorBoat_Police",		350, "Police", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"}},
			{"Exile_Boat_MotorBoat_Orange",		300, "Orange", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"}},
			{"Exile_Boat_MotorBoat_White",		300, "White",  {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_RubberDuck_CSAT",		200, "CSAT", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"}},
			{"Exile_Boat_RubberDuck_Digital",	200, "Digital",{"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"}},
			{"Exile_Boat_RubberDuck_Orange",	150, "Orange", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"}},
			{"Exile_Boat_RubberDuck_Blue",		150, "Blue", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"}},
			{"Exile_Boat_RubberDuck_Black",		150, "Black", {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_SDV_CSAT",		200, "CSAT", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"}},
			{"Exile_Boat_SDV_Digital",	200, "Digital", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"}},
			{"Exile_Boat_SDV_Grey",		100, "Grey", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hellcat_Green", 350, "Green", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"}},
			{"Exile_Chopper_Hellcat_FIA", 	500, "FIA", 	{"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Kart_BluKing", 				100, "Bluking", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_RedStone", 			100, "RedStone", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Vrana", 				100, "Vrana", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Green", 				100, "Green", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Blue", 				100, "Blue", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Orange", 				100, "Orange",		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_White", 				100, "White", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Yellow", 				100, "Yellow", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Black", 				100, "Black", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350, "Blue", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350, "Red", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350, "ION", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350, "BlueLine", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350, "Digital", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350, "Furious", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350, "Jeans", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350, "Light", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350, "Sheriff", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350, "Vrana", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350, "Wasp", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350, "Wave", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huron_Black", 	450, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"}},
			{"Exile_Chopper_Huron_Green", 	450, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Orca_CSAT", 		350, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"}},
			{"Exile_Chopper_Orca_Black", 		350, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"}},
			{"Exile_Chopper_Orca_BlackCustom", 	350, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_CSAT",		500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"}},
			{"Exile_Chopper_Taru_Black",	500, "BLACK", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"}},
			{"Exile_Chopper_Taru_Transport_Black",	500, "Black", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500, "CSAT",	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"}},
			{"Exile_Chopper_Taru_Covered_Black",	500, "Black",	{"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Rusty1", 			50, "Rusty White",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"}},
			{"Exile_Car_Hatchback_Rusty2", 			50, "Rusty Red",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"}},
			{"Exile_Car_Hatchback_Rusty3", 			50, "Rusty Yellow",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"}},
			{"Exile_Car_Hatchback_Beige", 			100, "Beige",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Hatchback_Green", 			100, "Green",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Hatchback_Blue", 			100, "Blue",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Hatchback_BlueCustom", 		100, "Blue Custom",		{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Hatchback_BeigeCustom", 	100, "Beige Custom",	{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Hatchback_Yellow", 			100, "Yellow",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"}},
			{"Exile_Car_Hatchback_Grey", 			100, "Grey",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"}},
			{"Exile_Car_Hatchback_Black", 			100, "Black",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"}},
			{"Exile_Car_Hatchback_Dark", 			100, "Dark",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100, "Red",		{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Blue", 		100, "Blue",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Orange", 	100, "Orange",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_White", 	100, "White",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Beige", 	100, "Beige",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Green", 	100, "Green",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Rusty1", 		50, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"}},
			{"Exile_Car_Offroad_Rusty2", 		50, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"}},
			{"Exile_Car_Offroad_Rusty3", 		50, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"}},
			{"Exile_Car_Offroad_Red", 			500, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"}},
			{"Exile_Car_Offroad_Beige", 		500, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Offroad_White", 		500, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Offroad_Blue", 			500, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Offroad_DarkRed", 		500, "Dark Red",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Offroad_BlueCustom", 	500, "Blue Custom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla01", 	700, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla02", 	700, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla03", 	700, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla04", 	700, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla05", 	700, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla06", 	700, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla07", 	700, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla08", 	700, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla09", 	700, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla10", 	700, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla11", 	700, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla12", 	700, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Black", {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Orange",{"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Pink",	{"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile White",	{"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Yellow",{"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Abstract
	{
		skins[] =
		{
			{"Exile_Car_LandRover_Red", 250, "Red", {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"}},
			{"Exile_Car_LandRover_Urban", 250, "Urban", {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"}},
			{"Exile_Car_LandRover_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"}},
			{"Exile_Car_LandRover_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}},
			{"Exile_Car_LandRover_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Abstract
	{
		skins[] =
		{
			{"Exile_Car_LandRover_Ambulance_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"}},
			{"Exile_Car_LandRover_Ambulance_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}},
			{"Exile_Car_LandRover_Ambulance_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Octavius_White", 250, "White", {"exile_psycho_Octavia\Data\car_body_co.paa"}},
			{"Exile_Car_Octavius_Black", 250, "Black", {"exile_psycho_Octavia\Data\car_body_bl_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huey_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}},
			{"Exile_Chopper_Huey_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Armed_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huey_Armed_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}},
			{"Exile_Chopper_Huey_Armed_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250, "Guerilla 01", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250, "Guerilla 02", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250, "Guerilla 03", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250, "Guerilla 04", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250, "Guerilla 05", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250, "Guerilla 06", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250, "Guerilla 07", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250, "Guerilla 08", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250, "Guerilla 09", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250, "Guerilla 10", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250, "Guerilla 11", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250, "Guerilla 12", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150, "Civillian",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Red",			150, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Beige",			150, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Offroad_Repair_White",			150, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Blue",			150, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Offroad_Repair_DarkRed",		150, "DarkRed",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150, "BlueCustom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] =
		{
			{"Exile_Car_SUV_Red", 		100, "Red",					{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Black",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"}},
			{"Exile_Car_SUV_Grey", 		100, "Grey",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"}},
			{"Exile_Car_SUV_Orange", 	100, "Orange",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Snow Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo (Dark)",	{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV XL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Abstract
    {
        skins[] = 
        {
            {"Exile_Car_SUVXL_Black", 100, "Black", {"\Exile_psycho_SUV_a3\Data\suv_body_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Blue White", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_bluewhite.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Charcoal", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_charcoal_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Orange", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_orange_co.paa"}},
            {"Exile_Car_SUVXL_Black", 200, "Hello Kitty", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_Pink_hello_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Red", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_red_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Silver", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_silver_co.paa"}},
            {"Exile_Car_SUVXL_Black", 100, "White", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_white_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Yellow", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_yellow_co.paa"}}
        };
    };

	///////////////////////////////////////////////////////////////////////////////
	// Van
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Red",			100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"}},
			{"Exile_Car_Van_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"}},
			{"Exile_Car_Van_Guerilla03",	150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"}},
			{"Exile_Car_Van_Guerilla04",	150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"}},
			{"Exile_Car_Van_Guerilla05",	150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"}},
			{"Exile_Car_Van_Guerilla06",	150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"}},
			{"Exile_Car_Van_Guerilla07",	150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"}},
			{"Exile_Car_Van_Guerilla08",	150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"}},
			{"Exile_Car_Van_Black",	150, "Brown",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"}},
			{"Exile_Car_Van_Black",	150, "Olive",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Box_Black",				100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_White",				100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla04",		150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla05",		150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla06",		150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla07",		150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla08",		150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Fuel_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Tempest", 		200, "Green Hex",	{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ikarus_Blue", 		200, "Blue",	{"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"}},
			{"Exile_Car_Ikarus_Red", 		200, "Red",		{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"}},
			{"Exile_Car_Ikarus_Party", 		500, "Party",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ural_Open_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Open_Yellow",			300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"}},
			{"Exile_Car_Ural_Open_Worker",			300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Open_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ural_Covered_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Covered_Yellow",		300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"}},
			{"Exile_Car_Ural_Covered_Worker",		300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Covered_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Lada_Green", 		100, "Green",	{"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"}},
			{"Exile_Car_Lada_Taxi", 		100, "Taxi",	{"exile_psycho_lada\data\Lada_red_CO.paa"}},
			{"Exile_Car_Lada_Red", 			100, "Red",		{"exile_psycho_lada\data\Lada_red_CO.paa"}},
			{"Exile_Car_Lada_Hipster", 		100, "Hipster",	{"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Volha_Blue", 		100, "Blue",	{"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"}},
			{"Exile_Car_Volha_White", 		100, "White",	{"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"}},
			{"Exile_Car_Volha_Black",		100, "Black",	{"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// HUNTER
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Hunter",		1000, "Exile White Edition",	{"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"}},
			{"Exile_Car_Hunter",		1000, "Exile Hex",				{"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"}},
			{"Exile_Car_Hunter",		1000, "Exile Black",			{"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// IFRIT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Ifrit",		1000, "Green Hex",	{"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M2_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_M2_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_M2_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};

	class Exile_Car_HMMWV_M134_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_M134_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_M134_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};

	class Exile_Car_HMMWV_MEV_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_MEV_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"}},
			{"Exile_Car_HMMWV_MEV_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"}}
		};
	};

	class Exile_Car_HMMWV_UNA_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_UNA_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_UNA_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Abstract
	{
		skins[] =
		{

			{"Exile_Car_BTR40_MG_Green",		1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"}},
			{"Exile_Car_BTR40_MG_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"}}
		};
	};

	class Exile_Car_BTR40_Abstract
	{
		skins[] =
		{

			{"Exile_Car_BTR40_Green",			1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"}},
			{"Exile_Car_BTR40_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Golf_Red",				1000, "Red",	{"exile_psycho_VWGolf\data\vwgolf_body_co.paa"}},
			{"Exile_Car_Golf_Black",			1000, "Black",	{"exile_psycho_VWGolf\data\texture\black_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// AN-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Abstract
	{
		skins[] =
		{
			{"Exile_Plane_AN2_Green", 700, "Green", {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"}},
			{"Exile_Plane_AN2_White", 700, "Red, White & Blue", {"Exile_psycho_An2\data\an2_1_a_co.paa",
		"Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"}},
			{"Exile_Plane_AN2_Stripe", 700, "Green Stripe", {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RHIB
	///////////////////////////////////////////////////////////////////////////////
	class B_G_Boat_Transport_02_F
	{
		skins[] =
		{
			{"Exile_Boat_RHIB",		150, "Blue", {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Water Scooter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_WaterScooter",		150, "Blue", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Grey", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Lime", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Red", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"}},
			{"Exile_Boat_WaterScooter",		150, "White", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Yellow", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ceasar BTT
	///////////////////////////////////////////////////////////////////////////////
	class C_Plane_Civil_01_F
	{
		skins[] =
		{
			{"Exile_Plane_Ceasar",		150, "Racing (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Racing", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Red Line (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Tribal (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Tribal", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Blue Wave (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Blue Wave", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Infantry Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_infantry_F
	{
		skins[] =
		{
			{"Exile_Plane_BlackfishInfantry",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Vehicle Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_vehicle_F
	{
		skins[] =
		{
			{"Exile_Plane_BlackfishVehicle",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Light)
	///////////////////////////////////////////////////////////////////////////////
	class B_CTRG_LSV_01_light_F
	{
		skins[] =
		{
			{"Exile_Car_ProwlerLight",		150, "Black", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"}},
			{"Exile_Car_ProwlerLight",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerLight",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_LSV_01_unarmed_black_F
	{
		skins[] =
		{
			{"Exile_Car_ProwlerUnarmed",		150, "Olive", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerUnarmed",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerUnarmed",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Qilin (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class O_T_LSV_02_unarmed_black_F
	{
		skins[] =
		{
			{"Exile_Car_QilinUnarmed",		150, "Arid", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"}},
			{"Exile_Car_QilinUnarmed",		150, "Green Hex", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class C_Offroad_02_unarmed_orange_F
	{
		skins[] =
		{
			{"Exile_Car_MB4WD",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"}},
			{"Exile_Car_MB4WD",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"}}
		};
	};

	class I_C_Offroad_02_unarmed_F
	{
		skins[] =
		{
			{"Exile_Car_MB4WDOpen",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Orange", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"}}
		};
	};
};
class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};
};