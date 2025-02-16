#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1720
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PrimaryWeapon_BebopVData : public CCitadel_Ability_PrimaryWeaponVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWindupSound; // 0x15e8	
	CSoundEventName m_strBeamStartSound; // 0x15f8	
	CSoundEventName m_strBeamLoopSound1; // 0x1608	
	CSoundEventName m_strBeamLoopSound2; // 0x1618	
	CSoundEventName m_strBeamStopSound; // 0x1628	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szWeaponBeamParticle; // 0x1638	
	// MPropertyStartGroup "Misc"
	float m_flWindupRepeatCycle; // 0x1718	
};

