#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifier_CatTargetVData : public CCitadelModifierVData
{
public:
	float m_flBaseCatScale; // 0x5e0	
	float m_flMinPitch; // 0x5e4	
	float m_flMaxPitch; // 0x5e8	
private:
	[[maybe_unused]] uint8_t __pad05ec[0x4]; // 0x5ec
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatPuffParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatGlowParticle; // 0x6d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTurnIntoCatSound; // 0x7b0	
};

