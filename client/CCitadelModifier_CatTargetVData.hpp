#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifier_CatTargetVData : public CCitadelModifierVData
{
public:
	float m_flBaseCatScale; // 0x5f8	
	float m_flMinPitch; // 0x5fc	
	float m_flMaxPitch; // 0x600	
private:
	[[maybe_unused]] uint8_t __pad0604[0x4]; // 0x604
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatPuffParticle; // 0x608	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatGlowParticle; // 0x6e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTurnIntoCatSound; // 0x7c8	
};

