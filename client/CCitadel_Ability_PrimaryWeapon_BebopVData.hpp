#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1670
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PrimaryWeapon_BebopVData : public CCitadel_Ability_PrimaryWeaponVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWindupSound; // 0x1538	
	CSoundEventName m_strBeamStartSound; // 0x1548	
	CSoundEventName m_strBeamLoopSound1; // 0x1558	
	CSoundEventName m_strBeamLoopSound2; // 0x1568	
	CSoundEventName m_strBeamStopSound; // 0x1578	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szWeaponBeamParticle; // 0x1588	
	// MPropertyStartGroup "Misc"
	float m_flWindupRepeatCycle; // 0x1668	
};

