#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x788
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierRestorativeGooVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RestorativeGooEndParticle; // 0x638	
	float m_flDistanceCameraOffsetLerpTime; // 0x718	
	float m_flDistanceCameraOffsetBias; // 0x71c	
	float m_flDistanceCameraOffset; // 0x720	
private:
	[[maybe_unused]] uint8_t __pad0724[0x4]; // 0x724
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BreakoutProgressBarModifier; // 0x728	
	CEmbeddedSubclass< CCitadelModifier > m_PostCubeBuffModifier; // 0x738	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_NonTargetLoopingSound; // 0x748	
	CSoundEventName m_TargetLoopingSound; // 0x758	
	CSoundEventName m_LightMeleeImpact; // 0x768	
	CSoundEventName m_HeavyMeleeImpact; // 0x778	
};

