#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_PsychicDagger_MakeDaggers_VData : public CCitadelModifierVData
{
public:
	float m_flDesatAmount; // 0x658	
	Color m_DesatTint; // 0x65c	
	Color m_SatTint; // 0x660	
	Color m_Outline; // 0x664	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerShot; // 0x668	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerSpawn; // 0x748	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerAoE; // 0x828	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerTargetPreview; // 0x908	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerShotFail; // 0x9e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DaggerFireSound; // 0xac8	
	CSoundEventName m_DaggerMissSound; // 0xad8	
	CSoundEventName m_LastDaggerMissSound; // 0xae8	
};

