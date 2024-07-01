#pragma once

#include <cstdint>

struct AttackData_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a50
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityUppercutVData : public CAbilityMeleeVData
{
public:
	AttackData_t m_UppercutAttackData; // 0x1500	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_UppercutModifier; // 0x1a20	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1a30	
	CEmbeddedSubclass< CCitadelModifier > m_ClipModifier; // 0x1a40	
};

