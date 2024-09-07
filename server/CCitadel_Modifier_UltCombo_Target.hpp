#pragma once

#include <cstdint>

struct CCitadelModifier;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe8
// Has VTable
class CCitadel_Modifier_UltCombo_Target : public CCitadel_Modifier_Stunned
{
public:
	QAngle m_angles; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00dc[0x4]; // 0xdc
public:
	CCitadelModifier* m_pAttachmentModifier; // 0xe0	
};

