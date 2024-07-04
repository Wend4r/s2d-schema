#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f0
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
	// MPropertyStartGroup "Gameplay"
	float m_flInstantGoldPercentage; // 0x15e0	
	int32_t m_iComebackBounty; // 0x15e4	
	int32_t m_iComebackGoldThreshold; // 0x15e8	
	float m_flCasterBonusPercent; // 0x15ec	
};

