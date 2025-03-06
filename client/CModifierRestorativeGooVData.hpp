#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierRestorativeGooVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RestorativeGooEndParticle; // 0x658	
	float m_flDistanceCameraOffsetLerpTime; // 0x738	
	float m_flDistanceCameraOffsetBias; // 0x73c	
	float m_flDistanceCameraOffset; // 0x740	
private:
	[[maybe_unused]] uint8_t __pad0744[0x4]; // 0x744
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BreakoutProgressBarModifier; // 0x748	
	CEmbeddedSubclass< CCitadelModifier > m_PostCubeBuffModifier; // 0x758	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_NonTargetLoopingSound; // 0x768	
	CSoundEventName m_TargetLoopingSound; // 0x778	
	CSoundEventName m_LightMeleeImpact; // 0x788	
	CSoundEventName m_HeavyMeleeImpact; // 0x798	
};

