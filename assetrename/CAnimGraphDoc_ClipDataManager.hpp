#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Clip Data Manager"
class CAnimGraphDoc_ClipDataManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlHashtable< CUtlString, CSmartPtr< CAnimGraphDoc_ClipData > > m_itemTable; // 0x10	
};

