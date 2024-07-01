#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa60
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_SandPhantom_WhirlwindEvasion_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackerHitFx; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x6c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_playerBuffSelf; // 0x7a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_playerBuffEnemy; // 0x880	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ReflectedBulletTracerParticle; // 0x960	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strAttackerHitSound; // 0xa40	
	CSoundEventName m_strVictimHitSound; // 0xa50	
};

