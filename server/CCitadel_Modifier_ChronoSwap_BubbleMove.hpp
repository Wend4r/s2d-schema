#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x260
// Has VTable
class CCitadel_Modifier_ChronoSwap_BubbleMove : public CCitadelModifier
{
public:
	bool m_bOtherIsInFrontAtStart; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
public:
	Vector m_vOtherToDest; // 0xcc	
	Vector m_vStart; // 0xd8	
	Vector m_vDest; // 0xe4	
	CHandle< CBaseEntity > m_hOther; // 0xf0	
	Vector m_vLastSafePos; // 0xf4	
	int32_t m_nNumTicks; // 0x100	
	int32_t m_nTicksLeft; // 0x104	
	ParticleIndex_t m_nBeamIndex; // 0x108	
};

