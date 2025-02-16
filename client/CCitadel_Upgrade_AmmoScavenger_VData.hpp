#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1608
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_AmmoScavenger_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_StackSound; // 0x15e8	
	CSoundEventName m_AmmoSound; // 0x15f8	
};

