#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x750
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierKnockdownVData : public CCitadel_Modifier_StunnedVData
{
public:
	float m_flSatVolumeRadius; // 0x6c0	
	float m_flSatVolumeFadeOut; // 0x6c4	
	// MPropertyStartGroup "Camera"
	float m_flGetUpSeqDuration; // 0x6c8	
private:
	[[maybe_unused]] uint8_t __pad06cc[0x4]; // 0x6cc
public:
	CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // 0x6d0	
};

