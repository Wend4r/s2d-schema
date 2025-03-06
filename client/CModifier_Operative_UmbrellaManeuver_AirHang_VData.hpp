#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x838
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Operative_UmbrellaManeuver_AirHang_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x738	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x818	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x828	
	float m_flAirSpeed; // 0x82c	
	float m_flFallSpeed; // 0x830	
};

