#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf0
// Has VTable
class CCitadel_Modifier_Obscured : public CCitadelModifier
{
public:
	float m_flStartObscuredAmount; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c4[0x4]; // 0xc4
public:
	CUtlVectorFixedGrowable< ParticleIndex_t, 3 > m_AmbientParticles; // 0xc8	
};

