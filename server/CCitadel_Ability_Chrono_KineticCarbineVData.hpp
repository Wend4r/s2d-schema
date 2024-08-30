#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1598
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Chrono_KineticCarbineVData : public CitadelAbilityVData
{
public:
	float m_flShotTimeScaleLingerDuration; // 0x14f0	
private:
	[[maybe_unused]] uint8_t __pad14f4[0x4]; // 0x14f4
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargingModifier; // 0x14f8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1508	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraKineticCarbineShotFired; // 0x1518	
};

