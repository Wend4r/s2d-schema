#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1640
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_AmmoScavenger_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1610	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_StackSound; // 0x1620	
	CSoundEventName m_AmmoSound; // 0x1630	
};

