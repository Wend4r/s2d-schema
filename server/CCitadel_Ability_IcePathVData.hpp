#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1518
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IcePathVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_IcePathModifier; // 0x14e8	
	// MPropertyStartGroup "Gameplay"
	float m_flMomentumDecayRate; // 0x14f8	
	float m_flMomentumWeight; // 0x14fc	
	float m_flMaxPitchChange; // 0x1500	
	float m_flMaxPitchUp; // 0x1504	
	float m_flMaxPitchDown; // 0x1508	
	float m_flMaxHeight; // 0x150c	
	float m_flForwardAngleBias; // 0x1510	
};

