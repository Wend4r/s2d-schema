#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
struct ResourceBlockTypeInfo_t
{
public:
	ResourceDataEncodingType_t m_Encoding; // 0x0	
	CUtlString m_BlockID; // 0x8	
	CUtlString m_IntrospectedRootStruct; // 0x10	
	int32_t m_ResourceVersion; // 0x18	
};

