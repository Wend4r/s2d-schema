#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Grasp_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_VictimModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_BulletShieldModifier; // 0x15e8	
};

