#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
struct InfoDataFilter_t
{
public:
	CUtlString m_Name; // 0x0	
	AssetEditInfoFilterFunc_t m_FilterFunc; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlString m_Value; // 0x10	
};

