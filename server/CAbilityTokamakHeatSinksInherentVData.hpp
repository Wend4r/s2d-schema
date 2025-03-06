#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTokamakHeatSinksInherentVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HotTracerParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HotWeaponFxParticle; // 0x16a8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHotWeaponShootSound; // 0x1788	
	CSoundEventName m_strOverheatRed; // 0x1798	
	CSoundEventName m_strOverheatFull; // 0x17a8	
};

