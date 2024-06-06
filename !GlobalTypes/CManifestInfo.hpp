#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x40
// 
// MGetKV3ClassDefaults
class CManifestInfo
{
public:
	CUtlString m_Name; // 0x0	
	CUtlString m_Group; // 0x8	
	CUtlString m_Mod; // 0x10	
	CUtlString m_SourceFile; // 0x18	
	int32_t m_nSourceLine; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CUtlVector< CUtlString > m_Resources; // 0x28	
};

