#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x890
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_EtherealBullets_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TriggerParticle; // 0x6c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletBurstTimerParticle; // 0x7a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBulletSound; // 0x880	
};

