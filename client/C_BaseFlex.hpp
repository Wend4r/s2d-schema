#pragma once

#include <cstdint>

struct SceneEventId_t;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1068
// Has VTable
// 
// MNetworkVarNames "float32 m_flexWeight"
// MNetworkVarNames "bool m_blinktoggle"
class C_BaseFlex : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0ed0[0x10]; // 0xed0
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	C_NetworkUtlVectorBase< float32 > m_flexWeight; // 0xee0	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnViewTargetChanged"
	Vector m_vLookTargetPosition; // 0xef8	
private:
	[[maybe_unused]] uint8_t __pad0f04[0xc]; // 0xf04
public:
	// MNetworkEnable
	bool m_blinktoggle; // 0xf10	
private:
	[[maybe_unused]] uint8_t __pad0f11[0x5f]; // 0xf11
public:
	int32_t m_nLastFlexUpdateFrameCount; // 0xf70	
	Vector m_CachedViewTarget; // 0xf74	
	SceneEventId_t m_nNextSceneEventId; // 0xf80	
	int32_t m_iBlink; // 0xf84	
	float m_blinktime; // 0xf88	
	bool m_prevblinktoggle; // 0xf8c	
private:
	[[maybe_unused]] uint8_t __pad0f8d[0x3]; // 0xf8d
public:
	int32_t m_iJawOpen; // 0xf90	
	float m_flJawOpenAmount; // 0xf94	
	float m_flBlinkAmount; // 0xf98	
	AttachmentHandle_t m_iMouthAttachment; // 0xf9c	
	AttachmentHandle_t m_iEyeAttachment; // 0xf9d	
	bool m_bResetFlexWeightsOnModelChange; // 0xf9e	
private:
	[[maybe_unused]] uint8_t __pad0f9f[0x19]; // 0xf9f
public:
	int32_t m_nEyeOcclusionRendererBone; // 0xfb8	
	matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xfbc	
	Vector m_vEyeOcclusionRendererHalfExtent; // 0xfec	
private:
	[[maybe_unused]] uint8_t __pad0ff8[0x10]; // 0xff8
public:
	// -> m_sClassName - 0x1008
	// -> m_flAmount - 0x1020
	// -> m_bRequired - 0x1024
	// -> m_bBasechecked - 0x1025
	// -> m_bValid - 0x1026
	C_BaseFlex::Emphasized_Phoneme m_PhonemeClasses[3]; // 0x1008	
};

