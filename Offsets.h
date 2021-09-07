struct GameObject_
{
	uintptr_t GameObject = 0x32B1FC8; //"Name" : "UnityEngine.GameObject_TypeInfo",
	uintptr_t gm1 = 0x8;
	uintptr_t gm2 = 0x10;
	uintptr_t gm3 = 0x30;
	uintptr_t gm4 = 0x18;
	uintptr_t Player_Camera_Matrix = 0x2E4;
} GameObject_c; 

struct GameObjectManager_
{
	uintptr_t GameObjectManager = 0x17C1F18;
	uintptr_t GameObject = 0x10;
} GameObjectManager_c; 

struct BaseNetworkable_
{
	uintptr_t BaseNetworkable = 0x329B028;
	uintptr_t EntityRealm = 0x0;
	uintptr_t EntityList = 0x10;
	uintptr_t PrefabId = 0x48;
	uintptr_t Net = 0x50;
} BaseNetworkable_c; 

struct BasePlayer_
{
	uintptr_t BasePlayer = 0x329BB68;
	uintptr_t PlayerFlags = 0x658; 
	uintptr_t Movement = 0x4E8;
	uintptr_t PlayerModel = 0x4C0;
	uintptr_t UID = 0x6A0;
	uintptr_t PlayerInventory = 0x668;
	uintptr_t ClActiveItem = 0x5D0;
	uintptr_t VisPlayerList = 0x10; 
	uintptr_t PlayerName = 0x6B8;
	uintptr_t PlayerEyes = 0x660;
} BasePlayer_c; 

struct PlayerEyes_
{
	uintptr_t ViewOffset = 0x38;
	uintptr_t EyeOffset = 0x0;
} PlayerEyes;  

enum PlayerFlags
{
	IsAdmin = 4,
}; //

struct PlayerWalkMovement_
{
	uintptr_t TargetMovement = 0x34;
	uintptr_t CapsuleCenter = 0x6C;
	uintptr_t MaxAngleClimbing = 0x90;
	uintptr_t MaxAngleWalking = 0x8C;
	uintptr_t GroundAngle = 0xC4; 
	uintptr_t GroundAngleNew = 0xC8; 
	uintptr_t GroundTime = 0xCC; 
	uintptr_t Grounded = 0x140;
} PlayerWalkMovement; 

struct PlayerModel_
{
	uintptr_t position = 0x208;
	uintptr_t SkinnedMultiMesh = 0x2C0;
} PlayerModel;

struct PlayerInventory_
{
	uintptr_t ContainerBelt = 0x28;
} PlayerInventory; 

struct ContainerBelt_
{
	uintptr_t ItemList = 0x38;
} ContainerBelt; 

struct Item_
{
	uintptr_t Flags = 0x70;
	uintptr_t Info = 0x20;
	uintptr_t Name = 0x58;
	uintptr_t Skin = 0x50;
	uintptr_t EntityRef = 0x98;
	uintptr_t UID = 0x28; 
} Item; 

struct ItemDefinition_
{
	uintptr_t ShortName = 0x20;
	uintptr_t ItemId = 0x18;
} ItemDefinition;

struct BaseProjectile_
{
	uintptr_t CreatedProjectilesList = 0x358;
} BaseProjectile;

struct Projectile_
{
	uintptr_t Thickness = 0x2C;
} Projectile;

struct TOD_Sky_
{
	uintptr_t TOD_Sky = 0x329D8A8;
	uintptr_t InstanceList = 0x0;
	uintptr_t Cycle = 0x38;
	uintptr_t Day = 0x50;
	uintptr_t Night = 0x58;
	uintptr_t Sun = 0x60;
} TOD_Sky_c;

struct TOD_Day_
{
	uintptr_t AmbientMultiplier = 0x50;
	uintptr_t ReflectionMultiplier = 0x54;
} TOD_Day;

struct TOD_Night_
{
	uintptr_t AmbientMultiplier = 0x50;
	uintptr_t ReflectionMultiplier = 0x54;
} TOD_Night;

struct TOD_Cycle_
{
	uintptr_t Hour = 0x10;
} TOD_Cycle;

struct TOD_SunParameters_
{
	uintptr_t MeshBrightness = 0x14;
} TOD_SunParameters;

struct ListDictionary_
{
	uintptr_t buffer = 0x18;
	uintptr_t size = 0x10;
	uintptr_t ArrayValue = 0x20;
} ListDictionary;

struct List_
{

	uintptr_t buffer = 0x10;
	uintptr_t size = 0x18;
	uintptr_t ArrayValue = 0x20;
} List;
