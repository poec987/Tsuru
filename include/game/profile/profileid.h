#pragma once

namespace ProfileID {

//* Remember to add your new profile to the profile array in profile.cpp as well as the end of the list below
enum ProfileIDType {
    BowserAmpController = 19,
    MovingMushroomPlatform = 78,
    Water = 84,
    Lava = 85,
    Poison = 86,
    Quicksand = 87,
    Fog = 88,
    GhostFog = 89,
    BillBlaster = 101,
    MovingBillBlaster = 102,
    BanzaiBillBlaster = 103,
    UpsideDownBanzaiBillBlaster = 104,
    HomingBillBlaster = 105,
    HomingBanzaiBillBlaster = 106,
    UpsideDownHomingBanzaiBillBlaster = 107,
    BanzaiBillBlaster_RDash = 108,
    UpsideDownBanzaiBillBlaster_RDash = 109,
    HomingBanzaiBillBlaster_RDash = 110,
    UpsideDownHomingBanzaiBillBlaster_RDash = 111,
    RotatingBillBlaster = 112,
    RedCoin = 118,
    GreenCoin = 119,
    SandGeyser = 121,
    LocationSandGeyser = 122,
    WaterGeyser = 123,
    LocationWaterGeyser = 124,
    LavaGeyser = 128,
    ShiftingCheckeredPlatforms = 129,
    HammerPendulum = 167,
    StoneEye = 168,
    UpsideDownStoneEye = 170,
    LimitedPassengerRaft = 180,
    Spotlight = 187,
    PalmTree = 190,
    GrrrolPassage = 191,
    SnakeBlock = 194,
    SnakeBlock_RDash_7_6 = 195,
    SnakeBlock_RDash = 196,
    GhostHouseFramePlatform = 199,
    GlowBlockPlatform = 200,
    ParaBeetle = 205,
    BigParaBeetle = 206,
    ParaBeetle_RDash = 207,
    Gear = 208,
    Gear_RDash = 209,
    SeesawMushroomPlatform = 220,
    SeesawMushroomPlatform_RDash = 221,
    Log = 222,
    FloatingBarrel = 223,
    Burner = 224,
    BigBurner = 225,
    SyncedBurner = 226,
    RotatingBurner = 227,
    NoteBlock = 228,
    ClimbablePole = 229,
    WobbleRock = 233,
    IceBlock = 235,
    WaterBubble = 236,
    PlayerIceBlock = 237,
    SwingingVine = 238,
    SwingingChain = 239,
    RopeLadder = 240,
    MarioPhysicsBlock = 249,
    BossCannon = 262,
    StretchingBeanstalkPlatform = 263,
    WendyRoom = 273,
    IggyRoom = 274,
    GoalPole = 275,
    PaintedGoalPole = 276,
    GoalPole_RDash = 277,
    PaintedGoalPole_RDash = 278,
    BrickBlock = 291,
    RouletteBlock = 321,
    DonutBlock = 322,
    KamekFloorBlock = 323,
    QuestionSwitch = 344,
    PSwitch = 345,
    LemmyBall = 351,
    LemmyBomb = 352,
    Clampy = 353,
    FireBar = 375,
    BuzzyBeetle = 381,
    BigBuzzyBeetle = 382,
    Urchin = 383,
    Urchin_RDash_BGChk_Narrow = 384, // wtf
    BigUrchin = 385,
    Urchin_RDash = 386,
    POWBlock = 387,
    GlowBlock = 388,
    PropellerBlock = 389,
    PortableIceBlock = 390,
    Barrel = 391,
    BeanstalkLeaf = 396,
    StarCoin = 426,
    Yoshi = 442,
    NabbitPlayer = 443,
    Player = 444,
    Nabbit = 459,
    Goomba = 467,
    Goombrat = 468,
    ParaGoomba = 469,
    PricklyGoomba = 470,
    MiniGoomba = 471,
    MediumGoomba = 472,
    BigGoomba = 473,
    PlayerIceBall = 474,
    PiranhaPlantIceBall = 475,
    PlayerFireball = 476,
    PiranhaPlantFireball = 477,
    YoshiFireball = 478,
    PipePiranhaPlantUp = 479,
    PipePiranhaPlantDown = 480,
    PipePiranhaPlantLeft = 481,
    PipePiranhaPlantRight = 482,
    PipeFirePiranhaPlantUp = 483,
    PipeFirePiranhaPlantDown = 484,
    PipeFirePiranhaPlantLeft = 485,
    PipeFirePiranhaPlantRight = 486,
    PipeIcePiranhaPlantUp = 487,
    PipeIcePiranhaPlantDown = 488,
    PipeIcePiranhaPlantLeft = 489,
    PipeIcePiranhaPlantRight = 490,
    BigPipePiranhaPlant = 491,
    GroundPiranhaPlant = 492,
    GroundPiranhaPlant_RDash = 493,
    GroundPiranhaPlant_RDash_3_3 = 494,
    GroundFirePiranhaPlant = 495,
    GroundIcePiranhaPlant = 496,
    Pokey = 505,
    PokeyParts = 506,
    Wiggler = 508,
    Wiggler_RDash = 509,
    BigWiggler = 510,
    KoopaTroopa = 512,
    BigKoopa = 514,
    ParaKoopa = 515,
    GroupParaKoopa = 516,
    Spiny = 517,
    UpsideDownSpiny = 518,
    HuckitCrab = 519,
    ParaBomb = 522,
    Mechakoopa = 524,
    CheepCheep = 530,
    GroupedCheepCheep = 531,
    BigCheepCheep = 532,
    GroupedBigCheepCheep = 533,
    DeepCheep = 534,
    BigDeepCheep = 535,
    EepCheep = 536,
    BigEepCheep = 537,
    MechaCheep = 538,
    SpinyCheepCheep = 539,
    FlyingCheepCheep = 540,
    FlyingMechaCheep = 541,
    CheepCheepSpawner = 542,
    DeepCheepSpawner = 543,
    EepCheepSpawner = 544,
    FlyingCheepCheepSpawner = 545,
    FlyingMechaCheepSpawner = 546,
    CheepCheepFormation = 547,
    FishBone = 548,
    Grrrol = 562,
    BigGrrrol = 563,
    BigGrrrol_RDash = 564,
    CheckpointFlag = 565,
    Seaweed = 601,
    MontyMole = 610,
    Thwomp = 635,
    BigThwomp = 636,
    StoneSpike = 641,
    StationaryStoneSpike = 642,
    StoneSpikeRock = 643,
    Fliprus = 644,
    DryBonesHead = 647,
    DryBones = 648,
    BigDryBones = 649,
    Magmaw = 650,
    ScaredyRat = 651,
    Fuzzy = 652,
    GroupedFuzzy = 653,
    LavaBubble = 654,
    SyncedLavaBubble = 655,
    LavaBubble_RDash = 656,
    SyncedLavaBubble_RDash = 657,
    Broozer = 658,
    Dragoneel = 659,
    SumoBro = 665,
    StationarySumoBro = 666,
    SumoBro_RDash = 667,
    SumoBroLightning = 668,
    Poltergeist = 670,
    CheepChompSpawner = 672,
    Bramball = 674,
    SpikeTop = 676,
    Larry = 693,
    KoopalingMagic = 694,
    Lemmy = 695,
    Morton = 696,
    Wendy = 699,
    WendyRing = 700,
    Ludwig = 701,
    LudwigClone = 702,
    Iggy = 703,
    IggyMagic = 704,
    Roy = 706,
    RoyPlatformSpawner = 707,
    SumoBoss = 708,
    SumoBossLightning = 709,
    Kamek = 710,
    KamekMagic = 713,
    Bowser = 715,
    BowserFireballSpawner = 716,
    BowserFireball = 717,
    CutsceneKamek = 720,
    DemoSumoBoss = 723,
    FinalBowserFireball = 724,
    FinalBowserJrFireball = 726,
    YoshiFruit = 755,
    HammerBro = 757,
    Hammer = 758,
    BoomerangBro = 759,
    FireBro = 761,
    FireBroFireball = 762,
    IceBro = 763,
    IceBroIceBall = 764,
    SledgeBro = 765,
    Star = 853,
    CSW2Goomba = 898,
    CSW9StarGate = 908,
    CSEventAssistant = 909,

    NumOriginal = 913,

    //* Start of custom entries
    ActorSpawner = NumOriginal,
    ParaBones,
    CustomDoor,
    FakeActor,
    PAcorn,
    StarCoinShard,
    StarCoinShardMgr,
    BeepBlock,
    FallingChestnut,
    TaskChanger,
    Cataquack,
    TimeClock,
    AngrySun,
    AngryMoon,
    RainbowLight,
    WavePlatform,
    DebugActor,
    LiquidOverlay,
    PhysicsModifier,
    Kamiya,
    KamiyaMagic,
    ModelLoader,
    StringBank,
    UniversalBossController,
    GiantSkewer,
    Scuttlebug,
    AngryGrrrol,
    PoisonMushroom,
    MagicPlatform,
    ColdFuzzy,
    WavyWater,
    WavyPoison,
    WavyQuicksand,
    LayerChanger,
    Biddybud,
    HelicalBar,
    BasaltBones,
    SizeModifierActivator,
    Splunkin,
    SwitchBlock,
    PowerupSwitcher,

    Num
};

}
