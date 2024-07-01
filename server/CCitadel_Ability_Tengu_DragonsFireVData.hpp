#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1770
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_DragonsFireVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x15c0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // 0x16a0	
	CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // 0x16b0	
	CEmbeddedSubclass< CCitadelModifier > m_BurnModifier; // 0x16c0	
	// MPropertyStartGroup "Sound"
	CSoundEventName m_BeamStartSound; // 0x16d0	
	CSoundEventName m_BeamStopSound; // 0x16e0	
	CSoundEventName m_BeamPointStartLoopSound; // 0x16f0	
	CSoundEventName m_BeamPointEndLoopSound; // 0x1700	
	CSoundEventName m_BeamPointClosestLoopSound; // 0x1710	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x1720	
	float m_flMaxFallSpeed; // 0x1724	
	float m_flTargetAirSpeedFast; // 0x1728	
	float m_flTargetAirSpeedBase; // 0x172c	
	float m_flTargetAirSpeedSlow; // 0x1730	
	float m_flAcceleration; // 0x1734	
	float m_flDecceleration; // 0x1738	
	float m_flBoostTime; // 0x173c	
	float m_flAirSideSpeedPercent; // 0x1740	
	float m_flAttackHeightMax; // 0x1744	
	float m_flMaxPitchChange; // 0x1748	
	float m_flMaxPitchUp; // 0x174c	
	float m_flMaxPitchDown; // 0x1750	
	float m_flMaxHeight; // 0x1754	
	float m_flForwardPitchBias; // 0x1758	
	float m_flBelowMinHeightPitch; // 0x175c	
	float m_flMinHeight; // 0x1760	
	float m_flChannelingAirDrag; // 0x1764	
	float m_flChannelingMaxFallSpeed; // 0x1768	
};

