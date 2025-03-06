#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCadenceGrandFinaleVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_StageModel; // 0x15c8	
	float m_flStageModelHeight; // 0x16a8	
	float m_flStageModelWidth; // 0x16ac	
	float m_flStageModelLength; // 0x16b0	
	float m_flStageModelScale; // 0x16b4	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GrandFinaleAOEModifier; // 0x16b8	
};

