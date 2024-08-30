#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd68
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
	[[maybe_unused]] uint8_t __pad0c50[0x10]; // 0xc50
public:
	CUtlVector< ParticleIndex_t > m_vecWallPreviewParticles; // 0xc60	
private:
	[[maybe_unused]] uint8_t __pad0c78[0xa8]; // 0xc78
public:
	// MNetworkEnable
	Vector m_vecStartPos; // 0xd20	
	// MNetworkEnable
	Vector m_vecPosition; // 0xd2c	
	// MNetworkEnable
	Vector m_vecInitialPosition; // 0xd38	
	// MNetworkEnable
	GameTime_t m_CastTime; // 0xd44	
	// MNetworkEnable
	Vector m_vecDirection; // 0xd48	
	// MNetworkEnable
	Vector m_vecLeft; // 0xd54	
	// MNetworkEnable
	float m_Length; // 0xd60	
	// MNetworkEnable
	// MNetworkChangeCallback "PreviewModeChanged"
	bool m_bTraveling; // 0xd64	
	// MNetworkEnable
	// MNetworkChangeCallback "PreviewModeChanged"
	bool m_bPreview; // 0xd65	
};

