#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x238
// Has VTable
// 
// MNetworkVarNames "float32 m_flFallVelocity"
// MNetworkVarNames "bool m_bInCrouch"
// MNetworkVarNames "uint32 m_nCrouchState"
// MNetworkVarNames "GameTime_t m_flCrouchTransitionStartTime"
// MNetworkVarNames "bool m_bDucked"
// MNetworkVarNames "bool m_bDucking"
// MNetworkVarNames "bool m_bInDuckJump"
class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices
{
public:
	float m_flStepSoundTime; // 0x1e8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags "4"
	float m_flFallVelocity; // 0x1ec	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInCrouch; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f1[0x3]; // 0x1f1
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nCrouchState; // 0x1f4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flCrouchTransitionStartTime; // 0x1f8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucked; // 0x1fc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucking; // 0x1fd	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInDuckJump; // 0x1fe	
private:
	[[maybe_unused]] uint8_t __pad01ff[0x1]; // 0x1ff
public:
	Vector m_groundNormal; // 0x200	
	float m_flSurfaceFriction; // 0x20c	
	CUtlStringToken m_surfaceProps; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0xc]; // 0x214
public:
	int32_t m_nStepside; // 0x220	
	int32_t m_iTargetVolume; // 0x224	
	bool m_bDisableMovementSounds; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad0229[0x3]; // 0x229
public:
	Vector m_vecSmoothedVelocity; // 0x22c	
	
	// Datamap fields:
	// void m_pSurfaceData; // 0x218
};

