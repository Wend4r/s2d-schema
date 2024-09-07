#pragma once

#include <cstdint>

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
struct WorldNodeOnDiskBufferData_t
{
public:
	int32_t m_nElementCount; // 0x0	
	int32_t m_nElementSizeInBytes; // 0x4	
	CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields; // 0x8	
	CUtlVector< uint8 > m_pData; // 0x20	
};

