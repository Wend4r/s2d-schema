#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPowerSurgeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChainParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastHitParticle; // 0x16a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1788	
	CEmbeddedSubclass< CCitadelModifier > m_ChainModifier; // 0x1798	
};

