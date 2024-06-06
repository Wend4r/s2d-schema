#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
// 
// MNetworkVarNames "float m_flMaxFallVelocity"
// MNetworkVarNames "Vector m_vecLadderNormal"
// MNetworkVarNames "int m_nLadderSurfacePropIndex"
// MNetworkVarNames "float m_flDuckAmount"
// MNetworkVarNames "float m_flDuckSpeed"
// MNetworkVarNames "bool m_bDuckOverride"
// MNetworkVarNames "bool m_bDesiresDuck"
// MNetworkVarNames "uint32 m_nDuckTimeMsecs"
// MNetworkVarNames "uint32 m_nDuckJumpTimeMsecs"
// MNetworkVarNames "uint32 m_nJumpTimeMsecs"
// MNetworkVarNames "float m_flLastDuckTime"
// MNetworkVarNames "int m_nGameCodeHasMovedPlayerAfterCommand"
// MNetworkVarNames "bool m_bOldJumpPressed"
// MNetworkVarNames "float m_flJumpUntil"
// MNetworkVarNames "float m_flJumpVel"
// MNetworkVarNames "GameTime_t m_fStashGrenadeParameterWhen"
// MNetworkVarNames "ButtonBitMask_t m_nButtonDownMaskPrev"
// MNetworkVarNames "float m_flOffsetTickCompleteTime"
// MNetworkVarNames "float m_flOffsetTickStashedSpeed"
// MNetworkVarNames "float m_flStamina"
class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
public:
	// MNetworkEnable
	float m_flMaxFallVelocity; // 0x228	
	// MNetworkEnable
	// MNetworkEncoder "normal"
	Vector m_vecLadderNormal; // 0x22c	
	// MNetworkEnable
	int32_t m_nLadderSurfacePropIndex; // 0x238	
	// MNetworkEnable
	float m_flDuckAmount; // 0x23c	
	// MNetworkEnable
	float m_flDuckSpeed; // 0x240	
	// MNetworkEnable
	bool m_bDuckOverride; // 0x244	
	// MNetworkEnable
	bool m_bDesiresDuck; // 0x245	
private:
	[[maybe_unused]] uint8_t __pad0246[0x2]; // 0x246
public:
	float m_flDuckOffset; // 0x248	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	uint32_t m_nDuckTimeMsecs; // 0x24c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nDuckJumpTimeMsecs; // 0x250	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nJumpTimeMsecs; // 0x254	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flLastDuckTime; // 0x258	
private:
	[[maybe_unused]] uint8_t __pad025c[0xc]; // 0x25c
public:
	Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x268	
	bool m_duckUntilOnGround; // 0x270	
	bool m_bHasWalkMovedSinceLastJump; // 0x271	
	bool m_bInStuckTest; // 0x272	
private:
	[[maybe_unused]] uint8_t __pad0273[0xd]; // 0x273
public:
	float m_flStuckCheckTime[2][64]; // 0x280	
	int32_t m_nTraceCount; // 0x480	
	int32_t m_StuckLast; // 0x484	
	bool m_bSpeedCropped; // 0x488	
private:
	[[maybe_unused]] uint8_t __pad0489[0x3]; // 0x489
public:
	int32_t m_nOldWaterLevel; // 0x48c	
	float m_flWaterEntryTime; // 0x490	
	Vector m_vecForward; // 0x494	
	Vector m_vecLeft; // 0x4a0	
	Vector m_vecUp; // 0x4ac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x4b8	
	bool m_bMadeFootstepNoise; // 0x4bc	
private:
	[[maybe_unused]] uint8_t __pad04bd[0x3]; // 0x4bd
public:
	int32_t m_iFootsteps; // 0x4c0	
	// MNetworkEnable
	bool m_bOldJumpPressed; // 0x4c4	
private:
	[[maybe_unused]] uint8_t __pad04c5[0x3]; // 0x4c5
public:
	float m_flJumpPressedTime; // 0x4c8	
	// MNetworkEnable
	float m_flJumpUntil; // 0x4cc	
	// MNetworkEnable
	float m_flJumpVel; // 0x4d0	
	// MNetworkEnable
	GameTime_t m_fStashGrenadeParameterWhen; // 0x4d4	
	// MNetworkEnable
	uint64_t m_nButtonDownMaskPrev; // 0x4d8	
	// MNetworkEnable
	float m_flOffsetTickCompleteTime; // 0x4e0	
	// MNetworkEnable
	float m_flOffsetTickStashedSpeed; // 0x4e4	
	// MNetworkEnable
	float m_flStamina; // 0x4e8	
	float m_flHeightAtJumpStart; // 0x4ec	
	float m_flMaxJumpHeightThisJump; // 0x4f0	
};

