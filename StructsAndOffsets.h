#pragma once
#include <Windows.h>

struct BasePlayer_
{
	uintptr_t BasePlayer = 0x3275DE8;
	uintptr_t PlayerFlags = 0x658; 
	uintptr_t Movement = 0x4E8;
	uintptr_t PlayerModel = 0x4C0;
	uintptr_t UID = 0x6A0;
	uintptr_t PlayerInventory = 0x668;
	uintptr_t ClActiveItem = 0x5D0;
	uintptr_t VisPlayerList = 0x10; 
} BasePlayer_c;

struct PlayerWalkMovement_
{
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
};

struct PlayerInventory_
{
	uintptr_t ContainerBelt = 0x28;
} PlayerInventory; 

struct ContainerBelt_
{
	uintptr_t ItemList = 0x38;
} ContainerBelt; 

struct List_
{
	uintptr_t buffer = 0x10;
	uintptr_t size = 0x18;
} List; 

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

struct ListDictionary_
{
	uintptr_t buffer = 0x18;
	uintptr_t size = 0x10;
} ListDictionary;

enum PlayerFlags
{
	IsAdmin = 4,
};