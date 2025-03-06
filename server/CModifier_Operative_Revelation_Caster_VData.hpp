#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x748
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Operative_Revelation_Caster_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // 0x658	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0x668	
};

