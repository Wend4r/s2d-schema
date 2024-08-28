#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x768
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierKnockdownVData : public CCitadel_Modifier_StunnedVData
{
public:
	float m_flSatVolumeRadius; // 0x6d8	
	float m_flSatVolumeFadeOut; // 0x6dc	
	// MPropertyStartGroup "Camera"
	float m_flGetUpSeqDuration; // 0x6e0	
private:
	[[maybe_unused]] uint8_t __pad06e4[0x4]; // 0x6e4
public:
	CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // 0x6e8	
};

