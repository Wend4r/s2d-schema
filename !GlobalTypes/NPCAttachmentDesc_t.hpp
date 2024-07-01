#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x118
// 
// MGetKV3ClassDefaults
struct NPCAttachmentDesc_t
{
public:
	CUtlString m_sAttachmentName; // 0x0	
	CUtlString m_sEntityName; // 0x8	
	Vector m_vOffset; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x20	
	CUtlVector< NPCAttachmentSpawnKV_t > m_vecSpawnKV; // 0x100	
};

