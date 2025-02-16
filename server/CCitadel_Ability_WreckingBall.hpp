#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc10
// Has VTable
// 
// MNetworkVarNames "bool m_bHoldingBall"
class CCitadel_Ability_WreckingBall : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x8]; // 0xb00
public:
	ParticleIndex_t m_nBallParticle; // 0xb08	
	ParticleIndex_t m_nCastCompleteParticle; // 0xb0c	
	CUtlVector< CHandle< CBaseEntity > > m_vecTargetsHit; // 0xb10	
private:
	[[maybe_unused]] uint8_t __pad0b28[0xe0]; // 0xb28
public:
	// MNetworkEnable
	bool m_bHoldingBall; // 0xc08	
};

