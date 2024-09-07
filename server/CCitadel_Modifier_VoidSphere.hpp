#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x250
// Has VTable
class CCitadel_Modifier_VoidSphere : public CCitadelModifier
{
public:
	bool m_bTeleported; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
public:
	ParticleIndex_t m_particleStart; // 0xcc	
	ParticleIndex_t m_particleEnd; // 0xd0	
	ParticleIndex_t m_particleTrail; // 0xd4	
	Vector m_vecEndLocation; // 0xd8	
	Vector m_vecStartPosition; // 0xe4	
	Vector m_vecEndLocationCaster; // 0xf0	
};

