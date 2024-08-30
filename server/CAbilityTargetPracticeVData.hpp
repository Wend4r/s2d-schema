#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTargetPracticeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetPracticeSelfModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_TargetPracticeEnemyModifier; // 0x1500	
};

