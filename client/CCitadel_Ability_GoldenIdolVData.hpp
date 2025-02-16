#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1700
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_GoldenIdolVData : public CCitadel_Ability_BaseHeldItemVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sIdolDropOffSound; // 0x1670	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DropoffTimerModifier; // 0x1680	
	CEmbeddedSubclass< CCitadelModifier > m_HoldingIdolModifier; // 0x1690	
	CEmbeddedSubclass< CCitadelModifier > m_RevealedHoldingIdolModifier; // 0x16a0	
	CEmbeddedSubclass< CCitadelModifier > m_Bonus01; // 0x16b0	
	CEmbeddedSubclass< CCitadelModifier > m_Bonus02; // 0x16c0	
	CEmbeddedSubclass< CCitadelModifier > m_NoPickupModifier; // 0x16d0	
	// MPropertyStartGroup "Gameplay"
	float m_flInstantGoldPercentage; // 0x16e0	
	int32_t m_iComebackBounty; // 0x16e4	
	float m_flCasterBonusPercent; // 0x16e8	
	float m_flRevealTime; // 0x16ec	
	float m_flDamageTickRate; // 0x16f0	
	float m_flMaxHealthDamage; // 0x16f4	
	float m_flTimeToDamage; // 0x16f8	
	float m_flNoPickupTime; // 0x16fc	
};

