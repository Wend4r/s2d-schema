#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierKnockdownVData : public CCitadel_Modifier_StunnedVData
{
public:
	float m_flSatVolumeRadius; // 0x718	
	float m_flSatVolumeFadeOut; // 0x71c	
	float m_flGravityScale; // 0x720	
	// MPropertyStartGroup "Camera"
	float m_flGetUpSeqDuration; // 0x724	
	CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // 0x728	
};

