#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1720
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_MagicCarpetVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // 0x15d8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetModifier; // 0x16b8	
	CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetModifier; // 0x16c8	
	CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetVisualModifier; // 0x16d8	
	CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetVisualModifier; // 0x16e8	
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x16f8	
	// MPropertyStartGroup "Gameplay"
	float m_flSummonVisualDuration; // 0x1708	
	float m_flBurstSpeedBonus; // 0x170c	
	float m_flBurstSpeedMin; // 0x1710	
	float m_flBurstSpeedDuration; // 0x1714	
	float m_flMinDistanceAboveGround; // 0x1718	
};

