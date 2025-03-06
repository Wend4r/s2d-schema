#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1758
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_MagicCarpetVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // 0x1610	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetModifier; // 0x16f0	
	CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetModifier; // 0x1700	
	CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetVisualModifier; // 0x1710	
	CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetVisualModifier; // 0x1720	
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x1730	
	// MPropertyStartGroup "Gameplay"
	float m_flSummonVisualDuration; // 0x1740	
	float m_flBurstSpeedBonus; // 0x1744	
	float m_flBurstSpeedMin; // 0x1748	
	float m_flBurstSpeedDuration; // 0x174c	
	float m_flMinDistanceAboveGround; // 0x1750	
};

