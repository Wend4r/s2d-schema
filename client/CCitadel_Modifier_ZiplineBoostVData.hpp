#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x680
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ZiplineBoostVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Gameplay"
	float m_flRampUpTime; // 0x5f8	
	float m_flPercentageSpeedIncrease; // 0x5fc	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceStartBoost; // 0x600	
};

