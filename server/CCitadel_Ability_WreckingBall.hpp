#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbb8
// Has VTable
// 
// MNetworkVarNames "bool m_bHoldingBall"
class CCitadel_Ability_WreckingBall : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x8]; // 0xaa8
public:
	ParticleIndex_t m_nBallParticle; // 0xab0	
	ParticleIndex_t m_nCastCompleteParticle; // 0xab4	
	CUtlVector< CHandle< CBaseEntity > > m_vecTargetsHit; // 0xab8	
private:
	[[maybe_unused]] uint8_t __pad0ad0[0xe0]; // 0xad0
public:
	// MNetworkEnable
	bool m_bHoldingBall; // 0xbb0	
};

