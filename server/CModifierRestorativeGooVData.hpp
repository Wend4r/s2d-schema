#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x700
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierRestorativeGooVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RestorativeGooEndParticle; // 0x5e0	
	float m_flDistanceCameraOffsetLerpTime; // 0x6c0	
	float m_flDistanceCameraOffsetBias; // 0x6c4	
	float m_flDistanceCameraOffset; // 0x6c8	
private:
	[[maybe_unused]] uint8_t __pad06cc[0x4]; // 0x6cc
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BreakoutProgressBarModifier; // 0x6d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_NonTargetLoopingSound; // 0x6e0	
	CSoundEventName m_TargetLoopingSound; // 0x6f0	
};

