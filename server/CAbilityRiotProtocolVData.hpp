#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1798
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityRiotProtocolVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeUpParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x16a8	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WardenBuffModifier; // 0x1788	
};

