#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCadenceGrandFinaleVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_StageModel; // 0x14f0	
	float m_flStageModelHeight; // 0x15d0	
	float m_flStageModelWidth; // 0x15d4	
	float m_flStageModelLength; // 0x15d8	
	float m_flStageModelScale; // 0x15dc	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GrandFinaleAOEModifier; // 0x15e0	
};

