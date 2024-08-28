#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Killing_Blow_GlowVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShivOnlyDeathStatus; // 0x5f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShivOnlyDeathTrail; // 0x6d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strShivOnlyActivateSound; // 0x7b8	
	CSoundEventName m_strShivOnlyLoopSound; // 0x7c8	
};

