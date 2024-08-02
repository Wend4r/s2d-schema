#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x740
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierRestorativeGooVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RestorativeGooEndParticle; // 0x5f0	
	float m_flDistanceCameraOffsetLerpTime; // 0x6d0	
	float m_flDistanceCameraOffsetBias; // 0x6d4	
	float m_flDistanceCameraOffset; // 0x6d8	
private:
	[[maybe_unused]] uint8_t __pad06dc[0x4]; // 0x6dc
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BreakoutProgressBarModifier; // 0x6e0	
	CEmbeddedSubclass< CCitadelModifier > m_PostCubeBuffModifier; // 0x6f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_NonTargetLoopingSound; // 0x700	
	CSoundEventName m_TargetLoopingSound; // 0x710	
	CSoundEventName m_LightMeleeImpact; // 0x720	
	CSoundEventName m_HeavyMeleeImpact; // 0x730	
};

