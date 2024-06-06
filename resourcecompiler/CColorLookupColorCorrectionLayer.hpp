#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
class CColorLookupColorCorrectionLayer : public CColorCorrectionLayer
{
public:
	CUtlString m_fileName; // 0x28	
	CUtlVector< float32 > m_lut; // 0x30	
	int32_t m_nDim; // 0x48	
};

