#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
class CModelConfigElement_RandomPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48	
	CUtlVector< float32 > m_ChoiceWeights; // 0x60	
};

