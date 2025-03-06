#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x758
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TargetPracticeSelfVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x658	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWeaponShootSound; // 0x738	
	CSoundEventName m_strBulletWhizSound; // 0x748	
};

