#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb58
// Has VTable
class CFlashbangProjectile : public CBaseCSGrenadeProjectile
{
public:
	float m_flTimeToDetonate; // 0xb50	
	uint8_t m_numOpponentsHit; // 0xb54	
	uint8_t m_numTeammatesHit; // 0xb55	
};

