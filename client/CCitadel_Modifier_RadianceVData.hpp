#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x908
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_RadianceVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadianceFxParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadianceDamageParticle; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ClientsideDamageParticle; // 0x818	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageRecievedSound; // 0x8f8	
};

