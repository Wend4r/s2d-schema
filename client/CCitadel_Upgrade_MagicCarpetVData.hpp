#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1668
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_MagicCarpetVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // 0x1530	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetModifier; // 0x1610	
	CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetModifier; // 0x1620	
	CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetVisualModifier; // 0x1630	
	CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetVisualModifier; // 0x1640	
	// MPropertyStartGroup "Gameplay"
	float m_flSummonVisualDuration; // 0x1650	
	float m_flBurstSpeedBonus; // 0x1654	
	float m_flBurstSpeedMin; // 0x1658	
	float m_flBurstSpeedDuration; // 0x165c	
	float m_flMinDistanceAboveGround; // 0x1660	
};

