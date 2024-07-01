#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1588
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Chrono_KineticCarbineVData : public CitadelAbilityVData
{
public:
	float m_flShotTimeScaleLingerDuration; // 0x14e0	
private:
	[[maybe_unused]] uint8_t __pad14e4[0x4]; // 0x14e4
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargingModifier; // 0x14e8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x14f8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraKineticCarbineShotFired; // 0x1508	
};

