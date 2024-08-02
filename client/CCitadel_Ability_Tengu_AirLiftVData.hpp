#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1558
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_AirLiftVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_GrabModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1500	
	CEmbeddedSubclass< CCitadelModifier > m_ExplodingAllyModifier; // 0x1510	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x1520	
	float m_flMaxFallSpeed; // 0x1524	
	float m_flTargetAirSpeedFast; // 0x1528	
	float m_flTargetAirSpeedBase; // 0x152c	
	float m_flAcceleration; // 0x1530	
	float m_flDecceleration; // 0x1534	
	float m_flAirSideSpeedPercent; // 0x1538	
	float m_flBoostTime; // 0x153c	
	float m_flBoostSpeedUp; // 0x1540	
	float m_flMinFlyHeight; // 0x1544	
	float m_flMaxFlyHeight; // 0x1548	
	float m_flAllyDelayedBoostTime; // 0x154c	
	float m_flChannelingAirDrag; // 0x1550	
	float m_flChannelingMaxFallSpeed; // 0x1554	
};

