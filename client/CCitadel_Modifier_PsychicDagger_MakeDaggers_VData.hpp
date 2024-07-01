#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa80
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_PsychicDagger_MakeDaggers_VData : public CCitadelModifierVData
{
public:
	float m_flDesatAmount; // 0x5e0	
	Color m_DesatTint; // 0x5e4	
	Color m_SatTint; // 0x5e8	
	Color m_Outline; // 0x5ec	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerShot; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerSpawn; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerAoE; // 0x7b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerTargetPreview; // 0x890	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerShotFail; // 0x970	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DaggerFireSound; // 0xa50	
	CSoundEventName m_DaggerMissSound; // 0xa60	
	CSoundEventName m_LastDaggerMissSound; // 0xa70	
};

