#pragma once

#include <cstdint>

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x130
// 
// MGetKV3ClassDefaults
struct MaterialResourceData_t
{
public:
	CUtlString m_materialName; // 0x0	
	CUtlString m_shaderName; // 0x8	
	CUtlVector< MaterialParamInt_t > m_intParams; // 0x10	
	CUtlVector< MaterialParamFloat_t > m_floatParams; // 0x28	
	CUtlVector< MaterialParamVector_t > m_vectorParams; // 0x40	
	CUtlVector< MaterialParamTexture_t > m_textureParams; // 0x58	
	CUtlVector< MaterialParamBuffer_t > m_dynamicParams; // 0x70	
	CUtlVector< MaterialParamBuffer_t > m_dynamicTextureParams; // 0x88	
	CUtlVector< MaterialParamInt_t > m_intAttributes; // 0xa0	
	CUtlVector< MaterialParamFloat_t > m_floatAttributes; // 0xb8	
	CUtlVector< MaterialParamVector_t > m_vectorAttributes; // 0xd0	
	CUtlVector< MaterialParamTexture_t > m_textureAttributes; // 0xe8	
	CUtlVector< MaterialParamString_t > m_stringAttributes; // 0x100	
	CUtlVector< CUtlString > m_renderAttributesUsed; // 0x118	
};

