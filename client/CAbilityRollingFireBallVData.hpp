#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityRollingFireBallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	// MPropertyStartGroup "Sounds"
	// MPropertyStartGroup "Modifiers"
	// MPropertyStartGroup "Gameplay"
	float m_flBallLifetime; // 0x15c8	
	float m_flBallStepUpHeight; // 0x15cc	
	float m_flBallDistAboveGround; // 0x15d0	
	float m_flBallFloatDownRate; // 0x15d4	
	float m_flBallSpeed; // 0x15d8	
	float m_flBallTraceRadius; // 0x15dc	
};

