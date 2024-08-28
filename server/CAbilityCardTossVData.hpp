#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCardTossVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonedCard; // 0x15c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCardTossSound; // 0x16a8	
	CSoundEventName m_strCardSummonSound; // 0x16b8	
	// MPropertyStartGroup "+Card Toss Properties"
	float m_flSummonedCardStartSideOffset; // 0x16c8	
	float m_flSummonedCardSideOffsetStep; // 0x16cc	
	float m_flSummonedCardForwardOffset; // 0x16d0	
	float m_flSummonedCardVerticalOffset; // 0x16d4	
};

