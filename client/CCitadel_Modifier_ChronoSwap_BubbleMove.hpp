#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x258
// Has VTable
class CCitadel_Modifier_ChronoSwap_BubbleMove : public CCitadelModifier
{
public:
	bool m_bOtherIsInFrontAtStart; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	Vector m_vOtherToDest; // 0xc4	
	Vector m_vStart; // 0xd0	
	Vector m_vDest; // 0xdc	
	CHandle< C_BaseEntity > m_hOther; // 0xe8	
	Vector m_vLastSafePos; // 0xec	
	int32_t m_nNumTicks; // 0xf8	
	int32_t m_nTicksLeft; // 0xfc	
	ParticleIndex_t m_nBeamIndex; // 0x100	
};

