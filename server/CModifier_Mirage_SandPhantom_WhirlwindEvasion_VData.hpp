#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xad8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_SandPhantom_WhirlwindEvasion_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackerHitFx; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_playerBuffSelf; // 0x818	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_playerBuffEnemy; // 0x8f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ReflectedBulletTracerParticle; // 0x9d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strAttackerHitSound; // 0xab8	
	CSoundEventName m_strVictimHitSound; // 0xac8	
};

