#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1618
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityChargedTackleVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargePreviewParticle; // 0x14e8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargePrepareModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_ChargeActiveModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15e8	
	CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // 0x15f8	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strHitSound; // 0x1608	
};

