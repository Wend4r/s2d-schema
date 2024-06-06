#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa98
// Has VTable
class CFlashbangProjectile : public CBaseCSGrenadeProjectile
{
public:
	float m_flTimeToDetonate; // 0xa90	
	uint8_t m_numOpponentsHit; // 0xa94	
	uint8_t m_numTeammatesHit; // 0xa95	
};

