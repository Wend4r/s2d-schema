#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
// MPropertyArrayElementNameKey "m_eAbilitySectionType"
struct ItemSectionInfo_t
{
public:
	AbilitySectionType_t m_eAbilitySectionType; // 0x0	
	// MPropertyAutoExpandSelf
	CUtlVector< SectionAttributes_t > m_vecSectionAttributes; // 0x8	
};

