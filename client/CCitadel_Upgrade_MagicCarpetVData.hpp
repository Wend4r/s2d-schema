#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1680
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_MagicCarpetVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // 0x1538	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetModifier; // 0x1618	
	CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetModifier; // 0x1628	
	CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetVisualModifier; // 0x1638	
	CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetVisualModifier; // 0x1648	
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x1658	
	// MPropertyStartGroup "Gameplay"
	float m_flSummonVisualDuration; // 0x1668	
	float m_flBurstSpeedBonus; // 0x166c	
	float m_flBurstSpeedMin; // 0x1670	
	float m_flBurstSpeedDuration; // 0x1674	
	float m_flMinDistanceAboveGround; // 0x1678	
};

