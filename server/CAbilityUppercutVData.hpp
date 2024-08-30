#pragma once

#include <cstdint>

struct AttackData_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a60
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityUppercutVData : public CAbilityMeleeVData
{
public:
	AttackData_t m_UppercutAttackData; // 0x1508	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_UppercutModifier; // 0x1a28	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1a38	
	CEmbeddedSubclass< CCitadelModifier > m_ClipModifier; // 0x1a48	
	// MPropertyStartGroup "Gameplay"
	float m_flMaxPitchUp; // 0x1a58	
};

