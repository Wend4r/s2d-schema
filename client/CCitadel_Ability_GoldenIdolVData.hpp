#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_GoldenIdolVData : public CCitadel_Ability_BaseHeldItemVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sIdolDropOffSound; // 0x15c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DropoffTimerModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_Bonus01; // 0x15e0	
	CEmbeddedSubclass< CCitadelModifier > m_Bonus02; // 0x15f0	
	// MPropertyStartGroup "Gameplay"
	float m_flInstantGoldPercentage; // 0x1600	
	int32_t m_iComebackBounty; // 0x1604	
	int32_t m_iComebackGoldThreshold; // 0x1608	
	float m_flCasterBonusPercent; // 0x160c	
};

