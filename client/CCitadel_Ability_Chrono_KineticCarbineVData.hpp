#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1590
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Chrono_KineticCarbineVData : public CitadelAbilityVData
{
public:
	float m_flShotTimeScaleLingerDuration; // 0x14e8	
private:
	[[maybe_unused]] uint8_t __pad14ec[0x4]; // 0x14ec
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargingModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1500	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraKineticCarbineShotFired; // 0x1510	
};

