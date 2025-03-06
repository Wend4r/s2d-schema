#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x688
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TargetPracticeDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x658	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x668	
	CEmbeddedSubclass< CCitadelModifier > m_EMPModifier; // 0x678	
};

