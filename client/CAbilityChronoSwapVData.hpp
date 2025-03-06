#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityChronoSwapVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BubbleMoveModifier; // 0x15c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSwapStarted; // 0x15d8	
};

