#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1728
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_GoldenIdolVData : public CCitadel_Ability_BaseHeldItemVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sIdolDropOffSound; // 0x16a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DropoffTimerModifier; // 0x16b8	
	CEmbeddedSubclass< CCitadelModifier > m_HoldingIdolModifier; // 0x16c8	
	CEmbeddedSubclass< CCitadelModifier > m_Bonus01; // 0x16d8	
	CEmbeddedSubclass< CCitadelModifier > m_Bonus02; // 0x16e8	
	CEmbeddedSubclass< CCitadelModifier > m_NoPickupModifier; // 0x16f8	
	// MPropertyStartGroup "Gameplay"
	float m_flInstantGoldPercentage; // 0x1708	
	int32_t m_iComebackBounty; // 0x170c	
	float m_flCasterBonusPercent; // 0x1710	
	float m_flRevealTime; // 0x1714	
	float m_flDamageTickRate; // 0x1718	
	float m_flMaxHealthDamage; // 0x171c	
	float m_flTimeToDamage; // 0x1720	
	float m_flNoPickupTime; // 0x1724	
};

