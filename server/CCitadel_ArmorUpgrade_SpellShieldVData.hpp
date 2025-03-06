#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1620
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_SpellShieldVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SpellShieldBuffModifier; // 0x1610	
};

