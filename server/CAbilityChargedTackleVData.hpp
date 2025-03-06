#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityChargedTackleVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargePreviewParticle; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargePrepareModifier; // 0x16a8	
	CEmbeddedSubclass< CCitadelModifier > m_ChargeActiveModifier; // 0x16b8	
	CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // 0x16c8	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strHitSound; // 0x16d8	
};

