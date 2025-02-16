#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb58
// Has VTable
class CCitadel_Ability_Tier2Boss_LaserBeam : public CCitadelBaseAbilityServerOnly
{
public:
	CModifierHandleTyped< CCitadelModifier > m_pBeamModifier; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b18[0x38]; // 0xb18
public:
	AttachmentHandle_t m_hAttackPosHigh; // 0xb50	
	AttachmentHandle_t m_hAttackPosLow; // 0xb51	
	AttachmentHandle_t m_hAttackPosLeft; // 0xb52	
	AttachmentHandle_t m_hAttackPosRight; // 0xb53	
};

