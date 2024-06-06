#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x40
// 
// MGetKV3ClassDefaults
class CAssetWarning
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CBufferString m_Title; // 0x8	
	CBufferString m_Message; // 0x18	
	CUtlVector< CAssetWarningCheck > m_Checks; // 0x28	
};

