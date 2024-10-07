import json
import glob
import os
from collections import defaultdict

actor_pretty_names = {"BoxWooden": "Wooden Box", "Zol": "Zol", "Signboard": "Sign", "Skulltula": "Strandtula", "RockCave": "Boulder", "Pot": "Pot", "ZolFire": "Ignizol", "RockSolid": "Rock", "SeaUrchin": "Sea Urchin", "Walltula": "Crawltula", "Octorok": "Octorok", "Octorok01": "Fire Octo", "Octorok02": "Ice Octo", "CharmMeat": "Meat", "MoriblinSword00": "Sword Moblin", "MoriblinSword01": "Sword Moblin Lv. 2", "MoriblinSword02": "Sword Moblin Lv. 3", "Bed": "Old Bed", "Table": "Table", "Rope": "Rope", "Boundillo00": "Caromadillo", "Peahat": "Peahat", "Kerotone": "Ribbitune", "Dekubaba00": "Deku Baba", "Dekubaba": "Deku Baba Lv. 2", "FoliagePlant": "Decorative Shrub", "Darknut00": "Darknut", "PotHyruleCastle": "Hyrule Castle Pot", "Taggler00": "Tangler", "Boundillo01": "Caromadillo Lv. 2", "BedMedium": "Soft Bed", "Bombfish": "Bombfish", "TrapBladeTimer": "Pathblade", "Biri": "Biri", "Guay": "Guay", "CharmFish": "Grilled Fish", "WindMaker": "Wind Cannon", "FlyingTile": "Flying Tile", "ZoroZoroHill": "Beetle Mound", "Taggler01": "Tangler Lv. 2", "Dekubaba01": "Bio Deku Baba", "ZolWater": "Hydrozol", "Poe": "Poe", "Peese": "Sand Crab", "BirdSea": "Albatrawl", "Gabufin": "Chompfin", "Megadon": "Platboom", "ZoroZoro": "Beetle", "Gibdos00": "Gibdo", "Gibdos01": "Gibdo Lv. 2", "ReDead": "ReDead", "Wolfos00": "Wolfos", "Wolfos01": "White Wolfos", "Tektight00": "Tektite", "Tektight01": "Tektite Lv. 2", "PotGerudo": "Gerudo Pot", "BlockWater": "Water Block", "Piranha00": "Piranha", "Piranha01": "Sand Piranha", "StatueL003": "Elephant Statue", "BoarblinClub00": "Club Boarblin", "BoarblinClub01": "Club Boarblin Lv. 2", "BoarblinBoomerang00": "Boomerang Boarblin", "BoarblinBoomerang01": "Boomerang Boarblin Lv. 2", "MoriblinSpear01": "Spear Moblin Lv. 2", "MoriblinSpear00": "Spear Moblin", "BedZelda": "Zelda's Bed", "Bonfire": "Brazier", "CharmRockRoast": "Rock Roast", "Pitty": "Holmill", "SoldierIronBall": "Ball-and-Chain Trooper", "Spark00": "Spark", "Dragonfly": "Needlefly", "DeathBallReverse": "Gustmaster", "Creepee00": "Zirro", "Creepee01": "Ghirro", "Darknut01": "Darknut Lv. 2", "Darknut02": "Darknut Lv. 3", "Keese00": "Keese", "Keese01": "Fire Keese", "Keese02": "Ice Keese", "Keese03": "Electric Keese", "Lizalfos00": "Lizalfos", "Lizalfos01": "Lizalfos Lv. 2", "Lizalfos02": "Lizalfos Lv. 3", "StoneFragile": "Tweelus", "Toppyu": "Tornando", "Wizzrobe00": "Fire Wizzrobe", "Wizzrobe01": "Ice Wizzrobe", "Wizzrobe02": "Electric Wizzrobe", "TorchSlug": "Torch Slug", "Tail": "Mini-Moldorm", "Aruroda": "Aruroda", "Firework": "Firework", "Crowly": "Crow", "BoardFloatLava": "Lava Rock", "TorchSlug01": "Freeze Slug", "AnaMonea": "Giant Goponga Flower", "Ghini00": "Ghini", "Ghini01": "Ghini Lv. 2", "CharmDoll": "Stuffed Toy", "CharmCarrot": "Carrot", "StretchyGhost": "Goo Specter", "Hidy": "Hoarder", "BuzzBlob": "Buzz Blob", "Crowly01": "Beakon", "Kerotone01": "Drippitune", "Armos": "Armos", "Beamos": "Beamos", "Leever": "Leever", "BlockIce": "Ice Block", "StatueL003Bird": "Hawk Statue", "StatueL003Cat": "Cat Statue", "StatueL003Snake": "Snake Statue", "Freezard": "Freezard", "RollingPole": "Spiked Roller", "Cloud": "Cloud", "GhomaBaby": "Baby Gohma", "SnowBall": "Snowball", "Moa": "Moa", "Trampoline": "Trampoline", "StoneFragile01": "Temper Tweelus", "Mothula00": "Mothula", "Mothula01": "Mothula Lv. 2", "NorthForestRelic": "Ancient Orb", "Dandarma": "Snomaul", "Lynel": "Lynel"}

location_pretty_names = {"L_Dungeon001": "Suthorn Ruins", "L_Dungeon002": "Jabul Ruins", "L_Dungeon003": "Gerudo Sanctum", "L_Dungeon004": "Eldin Temple", "L_Dungeon005": "Faron Temple", "L_Dungeon006": "Lanayru Temple", "L_DungeonCastle": "Hyrule Castle", "L_DungeonLast": "Null's Body", "FieldBoundary001": "Stilled Suthorn Forest", "FieldBoundary002": "Stilled Jabul Waters", "FieldBoundary003": "Stilled Gerudo Sanctum", "FieldBoundary004": "Stilled Eldin Volcano", "FieldBoundary005": "Stilled Faron Wetlands", "FieldBoundary006_001": "Stilled Hebra Mountain", "FieldBoundary006_002": "Stilled Holy Mount Lanayru", "FieldBoundaryCastle": "Stilled Hyrule Castle Town", "FieldBoundaryLast": "Stilled Ancient Ruins", "TriForceRemains": "Ancient Ruins", "S_Dungeon002": "Beach Cave", "S_Dungeon006": "Lord Jabu-Jabu's Den", "S_Dungeon014": "Treasury", "S_Dungeon018": "Crater Shortcut", "S_Dungeon019": "Rock-Roast Quarry", "S_Dungeon020": "Lizalfos Burrow", "S_Dungeon022": "Summit Cave", "S_Dungeon034": "The Sweet Spot", "S_Dungeon041": "Ancestor's Cave of Rest", "S_Dungeon042": "Bottom of the Well", "S_Dungeon102": "Wrecked Ship", "S_Dungeon104": "Hidden Ruins", "S_Dungeon109": "Deku Scrub Lockup", "S_Dungeon110": "Eastern Temple", "S_Dungeon115": "Cryptic Cavern", "ZoraSeaVillage": "Sea Zora Village", "HyruleCastle_002": "Throne Room", "HyruleCastle_003": "Zelda's Room", "HyruleHouse002": "Hyrule Castle Town Shop", "HyruleHouse003": "Barracks", "LuberiHouse": "Lueburry's House", "VillageHouse003": "Suthorn Village Shop", "GerudoPalace": "Gerudo Palace", "SeasideHouse004": "Seesyde Village Shop", "ZoraRiverHouse005": "River Zora Shop", "GerudoHouse004": "Gerudo Shop", "Church": "Northern Sanctuary", "GoronVillage": "Goron City", "OasisTent": "Tough Mango Plant Lab", "KakarikoHouse004": "Kakariko Village Shop", "DekuHouse001": "Smoothie Shop", "YetiHouse001": "Condé's House", "MachineEngineerHouse": "Dampé Studio", "GreatFairyFoutain": "Great Fairy Shrine", "BattleChallengeRoom": "Slumber Dojo", "HyruleCastlePrison_001": "Hyrule Castle Underground", "HyruleCastlePrison_002": "Royal-Family Shortcut", "Field_001": "Suthorn Prairie", "Field_002": "Suthorn Forest", "Field_003": "Lake Hylia", "Field_004": "Gerudo Desert", "Field_005": "Hyrule Field", "Field_006": "Hyrule Castle", "Field_008": "Zora River", "Field_009": "Zora Cove", "Field_010": "Faron Wetlands", "Field_011": "Eldin Volcano", "Field_012": "Hebra Mountain", "Field_013": "Eternal Forest", "Field_014": "Suthorn Village", "Field_017": "Oasis", "Field_018": "Gerudo Town", "Field_019": "Hyrule Ranch", "Field_020": "Hyrule Castle Town", "Field_021": "River Zora Village", "Field_022": "Seesyde Village", "Field_023": "Sea Zora Village", "Field_024": "Scrubton", "Field_025": "Kakariko Village", "Field_030": "Southern Oasis Ruins", "Field_032": "Eldin Volcano Trail", "Field_033": "Desert Temple Ruins", "Field_035": "Southern Gerudo Desert", "Field_036": "Crossflows Plaza", "Field_037": "Holy Mount Lanayru", "Field_038": "Suthorn Beach", "Field_039": "Eastern Hyrule Field", "S_Dungeon030": "Stilled Heart Lake", "S_Dungeon050": "Stilled Lake Hylia", "S_Dungeon051": "Stilled Southern Hyrule Field", "S_Dungeon052": "Stilled Carrot Patch", "S_Dungeon053": "Stilled Northern Sanctuary", "S_Dungeon054": "Stilled Eastern Zora River", "S_Dungeon055": "Stilled Northern Gerudo Desert", "S_Dungeon056": "Stilled Lower Suthorn Forest", "S_Dungeon057": "Stilled Hebra Mountain Passage", "S_Dungeon108": "Stilled Hebra Mountain Cave", "S_Dungeon029": "Stilled Blossu's House", "S_Dungeon101": "Stilled Upper Zora River", "S_Dungeon103": "Stilled Desert Temple Ruins", "S_Dungeon105": "Stilled Goron City", "S_Dungeon111": "Stilled Western Eldin Volcano", "region001": "Suthorn", "region002": "Faron", "region003": "Jabul Waters", "region005": "Eldin", "region006": "Gerudo",
"BS_Dungeon001": "cave in Stilled Suthorn Forest",
"BS_Dungeon002": "cave in Stilled Suthorn Forest",
"BS_Dungeon003": "cave in Stilled Upper Zora River",
"BS_Dungeon007": "cave in Stilled Blossu's House",
"BS_Dungeon008": "cave in Stilled Heart Lake",
"BS_Dungeon009": "cave in Stilled Faron Wetlands",
"BS_Dungeon010": "cave in Stilled Hebra Mountain",
"BS_Dungeon014": "cave in Stilled Carrot Patch",
"BS_Dungeon015": "cave in Stilled Carrot Patch",
"BS_Dungeon017": "cave in Stilled Western Eldin Volcano",
"BS_Dungeon018": "cave in Stilled Desert Temple Ruins",
"BS_Dungeon019": "cave in Stilled Northern Gerudo Desert",
"S_Dungeon001": "cave in Beach",
"S_Dungeon003": "cave in Forest",
"S_Dungeon004": "cave in Forest",
"S_Dungeon005": "cave in Forest",
"S_Dungeon007": "cave in River",
"S_Dungeon008": "cave in River",
"S_Dungeon009": "cave in Coast",
"S_Dungeon010": "cave in Coast",
"S_Dungeon011": "cave in Desert",
"S_Dungeon012": "cave in Desert",
"S_Dungeon013": "cave in Wildernesst",
"S_Dungeon015": "cave in Wildernesst",
"S_Dungeon016": "cave in Wildernesst",
"S_Dungeon017": "cave in Volcano",
"S_Dungeon021": "cave in Volcano",
"S_Dungeon023": "cave in HyrulePlains",
"S_Dungeon024": "cave in HyrulePlains",
"S_Dungeon031": "cave in Jungle",
"S_Dungeon032": "cave in Jungle",
"S_Dungeon033": "cave in Jungle",
"S_Dungeon035": "cave in SnowyMountain",
"S_Dungeon036": "cave in SnowyMountain",
"S_Dungeon037": "cave in SnowyMountain",
"S_Dungeon038": "cave in SnowyMountain",
"S_Dungeon039": "cave in SnowyMountain",
"S_Dungeon045": "cave in Forest",
"S_Dungeon061": "cave in HyrulePlains",
"S_Dungeon063": "cave in HyrulePlains",
"S_Dungeon064": "cave in HyruleLake",
"S_Dungeon065": "cave in HyrulePlains",
"S_Dungeon107": "cave in SnowyMountain",
"S_Dungeon114": "cave in SnowyMountain",
"S_Dungeon116": "cave in SouthernVillage",
}

level_actors = {}

for fname in os.listdir("level_json/1.0.1/"):
    level_actors[fname.split(".")[0]] = json.load(open("level_json/1.0.1/"+fname))["actors"]

echoes = json.load(open("gsheet_json/1.0.1/datasheets/ui/UiActorSelect.json"))["rows"]
echoes = sorted(echoes, key=lambda d: d['mPriority'])
for echo in echoes:
    symbol = echo['mSymbol']
    print(actor_pretty_names[symbol])
    count_per_level = defaultdict(int)
    for level_sym, actors in level_actors.items():
        if not (level_sym.startswith("EV_") or level_sym.startswith("OP_") or level_sym.startswith("BC_")): # ignore cutscene maps, link's dungeon, and dream challenges (they don't let you keep the echoes)
            for actor in actors:
                if actor[-16] == symbol or (symbol == "Trampoline" and actor[-16] == "evTrampoline"):
                    count_per_level[level_sym] += 1
    for level_name, count in count_per_level.items():
        if level_name in location_pretty_names:
            print("  %s - %s (x%d)"%(level_name, location_pretty_names[level_name], count))
        else:
            print("  %s (x%d)"%(level_name, count))
