#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1620
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityChargedTackleVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargePreviewParticle; // 0x14f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargePrepareModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_ChargeActiveModifier; // 0x15e0	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15f0	
	CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // 0x1600	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strHitSound; // 0x1610	
};

