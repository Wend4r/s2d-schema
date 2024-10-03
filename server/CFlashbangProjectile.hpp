#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb10
// Has VTable
class CFlashbangProjectile : public CBaseCSGrenadeProjectile
{
public:
	float m_flTimeToDetonate; // 0xb08	
	uint8_t m_numOpponentsHit; // 0xb0c	
	uint8_t m_numTeammatesHit; // 0xb0d	
};

