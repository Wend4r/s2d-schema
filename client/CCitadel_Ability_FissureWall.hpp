#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd40
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
	[[maybe_unused]] uint8_t __pad0c28[0x10]; // 0xc28
public:
	CUtlVector< ParticleIndex_t > m_vecWallPreviewParticles; // 0xc38	
private:
	[[maybe_unused]] uint8_t __pad0c50[0xa8]; // 0xc50
public:
	// MNetworkEnable
	Vector m_vecStartPos; // 0xcf8	
	// MNetworkEnable
	Vector m_vecPosition; // 0xd04	
	// MNetworkEnable
	Vector m_vecInitialPosition; // 0xd10	
	// MNetworkEnable
	GameTime_t m_CastTime; // 0xd1c	
	// MNetworkEnable
	Vector m_vecDirection; // 0xd20	
	// MNetworkEnable
	Vector m_vecLeft; // 0xd2c	
	// MNetworkEnable
	float m_Length; // 0xd38	
	// MNetworkEnable
	// MNetworkChangeCallback "PreviewModeChanged"
	bool m_bTraveling; // 0xd3c	
	// MNetworkEnable
	// MNetworkChangeCallback "PreviewModeChanged"
	bool m_bPreview; // 0xd3d	
};

