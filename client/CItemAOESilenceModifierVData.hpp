#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x678
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemAOESilenceModifierVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strSilenceTargetSound; // 0x658	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x668	
};

