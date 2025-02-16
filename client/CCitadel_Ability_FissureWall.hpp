#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb8
// Has VTable
// 
// MNetworkVarNames "Vector m_vecStartPos"
// MNetworkVarNames "Vector m_vecPosition"
// MNetworkVarNames "Vector m_vecInitialPosition"
// MNetworkVarNames "GameTime_t m_CastTime"
// MNetworkVarNames "Vector m_vecDirection"
// MNetworkVarNames "Vector m_vecLeft"
// MNetworkVarNames "float m_Length"
// MNetworkVarNames "bool m_bTraveling"
// MNetworkVarNames "bool m_bPreview"
class CCitadel_Ability_FissureWall : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x10]; // 0xca0
public:
	CUtlVector< ParticleIndex_t > m_vecWallPreviewParticles; // 0xcb0	
private:
	[[maybe_unused]] uint8_t __pad0cc8[0xa8]; // 0xcc8
public:
	// MNetworkEnable
	Vector m_vecStartPos; // 0xd70	
	// MNetworkEnable
	Vector m_vecPosition; // 0xd7c	
	// MNetworkEnable
	Vector m_vecInitialPosition; // 0xd88	
	// MNetworkEnable
	GameTime_t m_CastTime; // 0xd94	
	// MNetworkEnable
	Vector m_vecDirection; // 0xd98	
	// MNetworkEnable
	Vector m_vecLeft; // 0xda4	
	// MNetworkEnable
	float m_Length; // 0xdb0	
	// MNetworkEnable
	// MNetworkChangeCallback "PreviewModeChanged"
	bool m_bTraveling; // 0xdb4	
	// MNetworkEnable
	// MNetworkChangeCallback "PreviewModeChanged"
	bool m_bPreview; // 0xdb5	
};

