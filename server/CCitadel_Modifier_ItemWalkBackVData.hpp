#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x840
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ItemWalkBackVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdleParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RunningParticle; // 0x738	
	// MPropertyStartGroup "Gameplay"
	float m_flStopDistance; // 0x818	
	float m_flMaxSpeedDistance; // 0x81c	
	float m_flSlowSpeed; // 0x820	
	float m_flFastSpeed; // 0x824	
	float m_flVerticalOffset; // 0x828	
	float m_flTolerance; // 0x82c	
	float m_flRepathTime; // 0x830	
	float m_flAutoRunTime; // 0x834	
	float m_flTimeToStartAutoRun; // 0x838	
};

