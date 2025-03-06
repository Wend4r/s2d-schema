#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1758
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PrimaryWeapon_BebopVData : public CCitadel_Ability_PrimaryWeaponVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWindupSound; // 0x1620	
	CSoundEventName m_strBeamStartSound; // 0x1630	
	CSoundEventName m_strBeamLoopSound1; // 0x1640	
	CSoundEventName m_strBeamLoopSound2; // 0x1650	
	CSoundEventName m_strBeamStopSound; // 0x1660	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szWeaponBeamParticle; // 0x1670	
	// MPropertyStartGroup "Misc"
	float m_flWindupRepeatCycle; // 0x1750	
};

