#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1668
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PrimaryWeapon_BebopVData : public CCitadel_Ability_PrimaryWeaponVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWindupSound; // 0x1530	
	CSoundEventName m_strBeamStartSound; // 0x1540	
	CSoundEventName m_strBeamLoopSound1; // 0x1550	
	CSoundEventName m_strBeamLoopSound2; // 0x1560	
	CSoundEventName m_strBeamStopSound; // 0x1570	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szWeaponBeamParticle; // 0x1580	
	// MPropertyStartGroup "Misc"
	float m_flWindupRepeatCycle; // 0x1660	
};

