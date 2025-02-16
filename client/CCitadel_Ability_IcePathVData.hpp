#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IcePathVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_IcePathModifier; // 0x1590	
	// MPropertyStartGroup "Gameplay"
	float m_flMomentumDecayRate; // 0x15a0	
	float m_flMomentumWeight; // 0x15a4	
	float m_flMaxPitchChange; // 0x15a8	
	float m_flMaxPitchUp; // 0x15ac	
	float m_flMaxPitchDown; // 0x15b0	
	float m_flMaxHeight; // 0x15b4	
	float m_flForwardAngleBias; // 0x15b8	
};

