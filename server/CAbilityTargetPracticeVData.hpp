#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTargetPracticeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetPracticeSelfModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_TargetPracticeEnemyModifier; // 0x15d8	
};

