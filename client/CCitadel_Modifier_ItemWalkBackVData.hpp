#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x820
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ItemWalkBackVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdleParticle; // 0x638	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RunningParticle; // 0x718	
	// MPropertyStartGroup "Gameplay"
	float m_flStopDistance; // 0x7f8	
	float m_flMaxSpeedDistance; // 0x7fc	
	float m_flSlowSpeed; // 0x800	
	float m_flFastSpeed; // 0x804	
	float m_flVerticalOffset; // 0x808	
	float m_flTolerance; // 0x80c	
	float m_flRepathTime; // 0x810	
	float m_flAutoRunTime; // 0x814	
	float m_flTimeToStartAutoRun; // 0x818	
};

