struct GameObjectManager_
{
	uintptr_t GameObjectManager = 0x17C1F18;
	uintptr_t GameObject = 0x10;
} GameObjectManager_c;

struct BaseNetworkable_
{
	uintptr_t BaseNetworkable = 0x32A4668;
	uintptr_t EntityRealm = 0x0;
	uintptr_t EntityList = 0x10;
	uintptr_t PrefabId = 0x48;
	uintptr_t Net = 0x50;
	uintptr_t PrefabName = 0x60;
} BaseNetworkable_c;

struct BasePlayer_
{
	uintptr_t BasePlayer = 0x32A51B0;
	uintptr_t PlayerModel = 0x4C0;
	uintptr_t PlayerFlags = 0x658;
	uintptr_t Movement = 0x4E8;
	uintptr_t UID = 0x6A0;
	uintptr_t PlayerInventory = 0x668;
	uintptr_t ClActiveItem = 0x5D0;
	uintptr_t VisPlayerList = 0x10;
	uintptr_t PlayerName = 0x6B8;
} BasePlayer_c;

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
	uintptr_t AimCone = 0x2E8;
	uintptr_t AimSway = 0x2D0;
	uintptr_t AimSwaySpeed = 0x2D4;
	uintptr_t AimConeHip = 0x2EC;
	uintptr_t successFraction = 0x360;
	uintptr_t CreatedProjectilesList = 0x358;
	uintptr_t stringHoldDurationMax = 0x378;
} BaseProjectile;

struct Projectile_
{
	uintptr_t ProjectileMod = 0xE8;
	uintptr_t Thickness = 0x2C;
} Projectile;

struct ItemModProjectile_
{
	uintptr_t Spread = 0x30;
	uintptr_t ProjectileVelocitySpread = 0x38;
} ItemModProjectile;

struct TOD_Sky_
{
	uintptr_t TOD_Sky = 0x32A6EE0; 
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
