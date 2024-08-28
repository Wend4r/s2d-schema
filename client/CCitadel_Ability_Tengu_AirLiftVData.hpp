#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1770
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_AirLiftVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // 0x14e8	
	CEmbeddedSubclass< CCitadelModifier > m_GrabModifier; // 0x14f8	
	CEmbeddedSubclass< CCitadelModifier > m_HoldBombModifier; // 0x1508	
	CEmbeddedSubclass< CCitadelModifier > m_DroppedBuffModifier; // 0x1518	
	CEmbeddedSubclass< CCitadelModifier > m_ExplodingAllyModifier; // 0x1528	
	CEmbeddedSubclass< CCitadelModifier > m_AoEModifier; // 0x1538	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialExplodeParticle; // 0x1548	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBombEffect; // 0x1628	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1708	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x1718	
	float m_flMaxFallSpeed; // 0x171c	
	float m_flTargetAirSpeedFast; // 0x1720	
	float m_flTargetAirSpeedBase; // 0x1724	
	float m_flAcceleration; // 0x1728	
	float m_flDecceleration; // 0x172c	
	float m_flAirSideSpeedPercent; // 0x1730	
	float m_flBoostTime; // 0x1734	
	float m_flBoostSpeedUp; // 0x1738	
	float m_flMinFlyHeight; // 0x173c	
	float m_flMaxFlyHeight; // 0x1740	
	float m_flAllyDelayedBoostTime; // 0x1744	
	float m_flChannelingAirDrag; // 0x1748	
	float m_flChannelingMaxFallSpeed; // 0x174c	
	float m_flBombReleaseSpeed; // 0x1750	
	float m_flBombReleasePitch; // 0x1754	
	float m_flBombDropReleaseOffset; // 0x1758	
	float m_flHoldBombOffsetX; // 0x175c	
	float m_flHoldBombOffsetY; // 0x1760	
	float m_flHoldBombOffsetZ; // 0x1764	
	float m_flAnglePitchBias; // 0x1768	
};

