#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x618
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BoloVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TrapModifier; // 0x5f8	
	CEmbeddedSubclass< CCitadelModifier > m_ReverseLeechModifier; // 0x608	
};

