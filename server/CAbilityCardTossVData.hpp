#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCardTossVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonedCard; // 0x16a8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCardTossSound; // 0x1788	
	CSoundEventName m_strCardSummonSound; // 0x1798	
	// MPropertyStartGroup "+Card Toss Properties"
	float m_flSummonedCardStartSideOffset; // 0x17a8	
	float m_flSummonedCardSideOffsetStep; // 0x17ac	
	float m_flSummonedCardForwardOffset; // 0x17b0	
	float m_flSummonedCardVerticalOffset; // 0x17b4	
};

