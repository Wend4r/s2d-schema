#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierKnockdownVData : public CCitadel_Modifier_StunnedVData
{
public:
	float m_flSatVolumeRadius; // 0x738	
	float m_flSatVolumeFadeOut; // 0x73c	
	float m_flGravityScale; // 0x740	
	// MPropertyStartGroup "Camera"
	float m_flGetUpSeqDuration; // 0x744	
	CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // 0x748	
};

