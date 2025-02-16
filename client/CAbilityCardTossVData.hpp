#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1780
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCardTossVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonedCard; // 0x1670	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCardTossSound; // 0x1750	
	CSoundEventName m_strCardSummonSound; // 0x1760	
	// MPropertyStartGroup "+Card Toss Properties"
	float m_flSummonedCardStartSideOffset; // 0x1770	
	float m_flSummonedCardSideOffsetStep; // 0x1774	
	float m_flSummonedCardForwardOffset; // 0x1778	
	float m_flSummonedCardVerticalOffset; // 0x177c	
};

