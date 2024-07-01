#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb00
// Has VTable
class CCitadel_Ability_Tier2Boss_LaserBeam : public CCitadelBaseAbilityServerOnly
{
public:
	CModifierHandleTyped< CCitadelModifier > m_pBeamModifier; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0ac0[0x38]; // 0xac0
public:
	AttachmentHandle_t m_hAttackPosHigh; // 0xaf8	
	AttachmentHandle_t m_hAttackPosLow; // 0xaf9	
	AttachmentHandle_t m_hAttackPosLeft; // 0xafa	
	AttachmentHandle_t m_hAttackPosRight; // 0xafb	
};

