#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1718
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_CheatDeathVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamagePulseParticle; // 0x1528	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageTargetParticle; // 0x1608	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sHealPulseSound; // 0x16e8	
	CSoundEventName m_sHealAndDamagePulseSound; // 0x16f8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DeathImmuneModifier; // 0x1708	
};

