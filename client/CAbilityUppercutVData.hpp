#pragma once

#include <cstdint>

struct AttackData_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b18
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityUppercutVData : public CAbilityMeleeVData
{
public:
	AttackData_t m_UppercutAttackData; // 0x15b8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_UppercutModifier; // 0x1ae0	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1af0	
	CEmbeddedSubclass< CCitadelModifier > m_ClipModifier; // 0x1b00	
	// MPropertyStartGroup "Gameplay"
	float m_flMaxPitchUp; // 0x1b10	
	float m_flTossDuration; // 0x1b14	
};

