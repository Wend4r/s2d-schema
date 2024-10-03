#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4e8
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
	float m_flMaxFallVelocity; // 0x218	
	// MNetworkEnable
	// MNetworkEncoder "normal"
	Vector m_vecLadderNormal; // 0x21c	
	// MNetworkEnable
	int32_t m_nLadderSurfacePropIndex; // 0x228	
	// MNetworkEnable
	float m_flDuckAmount; // 0x22c	
	// MNetworkEnable
	float m_flDuckSpeed; // 0x230	
	// MNetworkEnable
	bool m_bDuckOverride; // 0x234	
	// MNetworkEnable
	bool m_bDesiresDuck; // 0x235	
private:
	[[maybe_unused]] uint8_t __pad0236[0x2]; // 0x236
public:
	float m_flDuckOffset; // 0x238	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	uint32_t m_nDuckTimeMsecs; // 0x23c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nDuckJumpTimeMsecs; // 0x240	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nJumpTimeMsecs; // 0x244	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flLastDuckTime; // 0x248	
private:
	[[maybe_unused]] uint8_t __pad024c[0xc]; // 0x24c
public:
	Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x258	
	bool m_duckUntilOnGround; // 0x260	
	bool m_bHasWalkMovedSinceLastJump; // 0x261	
	bool m_bInStuckTest; // 0x262	
private:
	[[maybe_unused]] uint8_t __pad0263[0xd]; // 0x263
public:
	float m_flStuckCheckTime[2][64]; // 0x270	
	int32_t m_nTraceCount; // 0x470	
	int32_t m_StuckLast; // 0x474	
	bool m_bSpeedCropped; // 0x478	
private:
	[[maybe_unused]] uint8_t __pad0479[0x3]; // 0x479
public:
	float m_flGroundMoveEfficiency; // 0x47c	
	int32_t m_nOldWaterLevel; // 0x480	
	float m_flWaterEntryTime; // 0x484	
	Vector m_vecForward; // 0x488	
	Vector m_vecLeft; // 0x494	
	Vector m_vecUp; // 0x4a0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x4ac	
	// MNetworkEnable
	bool m_bOldJumpPressed; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x3]; // 0x4b1
public:
	float m_flJumpPressedTime; // 0x4b4	
	// MNetworkEnable
	float m_flJumpUntil; // 0x4b8	
	// MNetworkEnable
	float m_flJumpVel; // 0x4bc	
	// MNetworkEnable
	GameTime_t m_fStashGrenadeParameterWhen; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	// MNetworkEnable
	uint64_t m_nButtonDownMaskPrev; // 0x4c8	
	// MNetworkEnable
	float m_flOffsetTickCompleteTime; // 0x4d0	
	// MNetworkEnable
	float m_flOffsetTickStashedSpeed; // 0x4d4	
	// MNetworkEnable
	float m_flStamina; // 0x4d8	
	float m_flHeightAtJumpStart; // 0x4dc	
	float m_flMaxJumpHeightThisJump; // 0x4e0	
	float m_flMaxJumpHeightLastJump; // 0x4e4	
};

