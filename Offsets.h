struct GameObjectManager_
{
	uintptr_t GameObjectManager = 0x17D1F18;
	uintptr_t GameObject = 0x10;
} GameObjectManager_c; 

struct BaseNetworkable_
{
	uintptr_t BaseNetworkable = 0x329B028;
	uintptr_t EntityRealm = 0x0;
	uintptr_t EntityList = 0x10;
	uintptr_t PrefabId = 0x48;

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
	uintptr_t speed = 0x2C;
	uintptr_t position = 0x1F8;
	uintptr_t islocal = 0x279;
	uintptr_t cachedrfootpos = 0x118;
	uintptr_t cachedlfootpos = 0x2FC;
	uintptr_t SkinnedMultiMesh = 0x2B0;
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

struct Globals_
{
	//Always Day///////////////////////////////
	uintptr_t Cycle;
	///////////////////////////////////////////

	//Thick Projectiles////////////////////////
	//uintptr_t Projectile;
	///////////////////////////////////////////

	//Bright Caves/////////////////////////////
	uintptr_t sky;
	//////////////////////////////////////////
} Globals;

struct Matrix
{
	union
	{
		struct
		{
			float        _11, _12, _13, _14;
			float        _21, _22, _23, _24;
			float        _31, _32, _33, _34;
			float        _41, _42, _43, _44;

		};
		float m[4][4];
	};
};

enum Bones : int {
	// assets / prefabs / player / player_mod = 0,
	pelvis = 1,
	l_hip = 2,
	l_knee = 3,
	l_foot = 4,
	l_toe = 5,
	l_ankle_scale = 6,
	penis = 7,
	GenitalCensor = 8,
	GenitalCensor_LOD0 = 9,
	Inner_LOD0 = 10,
	GenitalCensor_LOD1 = 11,
	GenitalCensor_LOD2 = 12,
	r_hip = 13,
	r_knee = 14,
	r_foot = 15,
	r_toe = 16,
	r_ankle_scale = 17,
	spine1 = 18,
	spine1_scale = 19,
	spine2 = 20,
	spine3 = 21,
	spine4 = 22,
	l_clavicle = 23,
	l_upperarm = 24,
	l_forearm = 25,
	l_hand = 26,
	l_index1 = 27,
	l_index2 = 28,
	l_index3 = 29,
	l_little1 = 30,
	l_little2 = 31,
	l_little3 = 32,
	l_middle1 = 33,
	l_middle2 = 34,
	l_middle3 = 35,
	l_prop = 36,
	l_ring1 = 37,
	l_ring2 = 38,
	l_ring3 = 39,
	l_thumb1 = 40,
	l_thumb2 = 41,
	l_thumb3 = 42,
	IKtarget_righthand_min = 43,
	IKtarget_righthand_max = 44,
	l_ulna = 45,
	neck = 46,
	head = 47,
	jaw = 48,
	eyeTranform = 49,
	l_eye = 50,
	l_Eyelid = 51,
	r_eye = 52,
	r_Eyelid = 53,
	r_clavicle = 54,
	r_upperarm = 55,
	r_forearm = 56,
	r_hand = 57,
	r_index1 = 58,
	r_index2 = 59,
	r_index3 = 60,
	r_little1 = 61,
	r_little2 = 62,
	r_little3 = 63,
	r_middle1 = 64,
	r_middle2 = 65,
	r_middle3 = 66,
	r_prop = 67,
	r_ring1 = 68,
	r_ring2 = 69,
	r_ring3 = 70,
	r_thumb1 = 71,
	r_thumb2 = 72,
	r_thumb3 = 73,
	IKtarget_lefthand_min = 74,
	IKtarget_lefthand_max = 75,
	r_ulna = 76,
	l_breast = 77,
	r_breast = 78,
	BoobCensor = 79,
	BreastCensor_LOD0 = 80,
	BreastCensor_LOD1 = 81,
	BreastCensor_LOD2 = 82,
	collision = 83,
	displacement = 84
};
