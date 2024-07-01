#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe8
// Has VTable
class CGameModifier_OverrideTargetIdentifier : public CCitadelModifier
{
public:
	CGlobalSymbol m_sTargetIdentifier; // 0xc8	
	CHandle< CBaseEntity > m_hTarget; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d4[0x4]; // 0xd4
public:
	CGlobalSymbol m_sAttachmentName; // 0xd8	
	AttachmentHandle_t m_hAttachment; // 0xe0	
};

