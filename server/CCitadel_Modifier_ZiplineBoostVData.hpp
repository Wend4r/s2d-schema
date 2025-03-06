#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ZiplineBoostVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Gameplay"
	float m_flRampUpTime; // 0x658	
	float m_flPercentageSpeedIncrease; // 0x65c	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceStartBoost; // 0x660	
};

