#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1618
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_GoldenIdolVData : public CCitadel_Ability_BaseHeldItemVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sIdolDropOffSound; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DropoffTimerModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_Bonus01; // 0x15e8	
	CEmbeddedSubclass< CCitadelModifier > m_Bonus02; // 0x15f8	
	// MPropertyStartGroup "Gameplay"
	float m_flInstantGoldPercentage; // 0x1608	
	int32_t m_iComebackBounty; // 0x160c	
	int32_t m_iComebackGoldThreshold; // 0x1610	
	float m_flCasterBonusPercent; // 0x1614	
};

