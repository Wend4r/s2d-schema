#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IcePathVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_IcePathModifier; // 0x15c8	
	// MPropertyStartGroup "Gameplay"
	float m_flMomentumDecayRate; // 0x15d8	
	float m_flMomentumWeight; // 0x15dc	
	float m_flMaxPitchChange; // 0x15e0	
	float m_flMaxPitchUp; // 0x15e4	
	float m_flMaxPitchDown; // 0x15e8	
	float m_flMaxHeight; // 0x15ec	
	float m_flForwardAngleBias; // 0x15f0	
};

