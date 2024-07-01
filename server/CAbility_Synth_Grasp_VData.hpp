#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Grasp_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_VictimModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_BulletShieldModifier; // 0x1500	
};

