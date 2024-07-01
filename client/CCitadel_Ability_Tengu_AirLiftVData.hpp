#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1530
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_AirLiftVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_GrabModifier; // 0x14f0	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x1500	
	float m_flMaxFallSpeed; // 0x1504	
	float m_flTargetAirSpeedFast; // 0x1508	
	float m_flTargetAirSpeedBase; // 0x150c	
	float m_flAcceleration; // 0x1510	
	float m_flDecceleration; // 0x1514	
	float m_flAirSideSpeedPercent; // 0x1518	
	float m_flBoostTime; // 0x151c	
	float m_flBoostSpeed; // 0x1520	
	float m_flChannelingAirDrag; // 0x1524	
	float m_flChannelingMaxFallSpeed; // 0x1528	
};

