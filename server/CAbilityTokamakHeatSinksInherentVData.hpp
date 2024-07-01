#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTokamakHeatSinksInherentVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HotTracerParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HotWeaponFxParticle; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHotWeaponShootSound; // 0x16a0	
	CSoundEventName m_strOverheatRed; // 0x16b0	
	CSoundEventName m_strOverheatFull; // 0x16c0	
};

