#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbc0
// Has VTable
// 
// MNetworkVarNames "bool m_bHoldingBall"
class CCitadel_Ability_WreckingBall : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x8]; // 0xab0
public:
	ParticleIndex_t m_nBallParticle; // 0xab8	
	ParticleIndex_t m_nCastCompleteParticle; // 0xabc	
	CUtlVector< CHandle< CBaseEntity > > m_vecTargetsHit; // 0xac0	
private:
	[[maybe_unused]] uint8_t __pad0ad8[0xe0]; // 0xad8
public:
	// MNetworkEnable
	bool m_bHoldingBall; // 0xbb8	
};

