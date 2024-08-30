#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb30
// Has VTable
class CCitadel_Ability_Tier2Boss_LaserBeam : public CCitadelBaseAbilityServerOnly
{
public:
	CModifierHandleTyped< CCitadelModifier > m_pBeamModifier; // 0xad8	
private:
	[[maybe_unused]] uint8_t __pad0af0[0x38]; // 0xaf0
public:
	AttachmentHandle_t m_hAttackPosHigh; // 0xb28	
	AttachmentHandle_t m_hAttackPosLow; // 0xb29	
	AttachmentHandle_t m_hAttackPosLeft; // 0xb2a	
	AttachmentHandle_t m_hAttackPosRight; // 0xb2b	
};

