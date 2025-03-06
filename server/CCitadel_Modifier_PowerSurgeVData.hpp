#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x848
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_PowerSurgeVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeaponFxParticle; // 0x738	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWeaponShootSound; // 0x818	
	CSoundEventName m_strBulletWhizSound; // 0x828	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x838	
};

