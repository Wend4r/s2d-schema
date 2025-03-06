#pragma once

#include <cstdint>

struct AttackData_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1b60
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityUppercutVData : public CAbilityMeleeVData
{
public:
	AttackData_t m_UppercutAttackData; // 0x15f8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_UppercutModifier; // 0x1b20	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1b30	
	CEmbeddedSubclass< CCitadelModifier > m_ClipModifier; // 0x1b40	
	// MPropertyStartGroup "Gameplay"
	float m_flMaxPitchUp; // 0x1b50	
	float m_flTossDurationEnemy; // 0x1b54	
	float m_flTossDurationFriendly; // 0x1b58	
};

