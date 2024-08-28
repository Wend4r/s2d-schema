#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb08
// Has VTable
class CCitadel_Ability_Tier2Boss_LaserBeam : public CCitadelBaseAbilityServerOnly
{
public:
	CModifierHandleTyped< CCitadelModifier > m_pBeamModifier; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ac8[0x38]; // 0xac8
public:
	AttachmentHandle_t m_hAttackPosHigh; // 0xb00	
	AttachmentHandle_t m_hAttackPosLow; // 0xb01	
	AttachmentHandle_t m_hAttackPosLeft; // 0xb02	
	AttachmentHandle_t m_hAttackPosRight; // 0xb03	
};

