#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCadenceGrandFinaleVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_StageModel; // 0x14e0	
	float m_flStageModelHeight; // 0x15c0	
	float m_flStageModelWidth; // 0x15c4	
	float m_flStageModelLength; // 0x15c8	
	float m_flStageModelScale; // 0x15cc	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GrandFinaleAOEModifier; // 0x15d0	
};

