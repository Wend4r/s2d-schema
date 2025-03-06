#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x778
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Gunslinger_DemonMarkVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcEffect; // 0x658	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x738	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x748	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_CasterMarkTriggerSound; // 0x758	
	CSoundEventName m_VictimMarkTriggerSound; // 0x768	
};

