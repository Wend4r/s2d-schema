#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1610
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityChargedTackleVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargePreviewParticle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargePrepareModifier; // 0x15c0	
	CEmbeddedSubclass< CCitadelModifier > m_ChargeActiveModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15e0	
	CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // 0x15f0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strHitSound; // 0x1600	
};

