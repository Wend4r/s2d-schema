#pragma once

#include <cstdint>

struct SceneEventId_t;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1118
// Has VTable
// 
// MNetworkVarNames "float32 m_flexWeight"
// MNetworkVarNames "bool m_blinktoggle"
class C_BaseFlex : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0f80[0x10]; // 0xf80
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	C_NetworkUtlVectorBase< float32 > m_flexWeight; // 0xf90	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnViewTargetChanged"
	Vector m_vLookTargetPosition; // 0xfa8	
private:
	[[maybe_unused]] uint8_t __pad0fb4[0xc]; // 0xfb4
public:
	// MNetworkEnable
	bool m_blinktoggle; // 0xfc0	
private:
	[[maybe_unused]] uint8_t __pad0fc1[0x5f]; // 0xfc1
public:
	int32_t m_nLastFlexUpdateFrameCount; // 0x1020	
	Vector m_CachedViewTarget; // 0x1024	
	SceneEventId_t m_nNextSceneEventId; // 0x1030	
	int32_t m_iBlink; // 0x1034	
	float m_blinktime; // 0x1038	
	bool m_prevblinktoggle; // 0x103c	
private:
	[[maybe_unused]] uint8_t __pad103d[0x3]; // 0x103d
public:
	int32_t m_iJawOpen; // 0x1040	
	float m_flJawOpenAmount; // 0x1044	
	float m_flBlinkAmount; // 0x1048	
	AttachmentHandle_t m_iMouthAttachment; // 0x104c	
	AttachmentHandle_t m_iEyeAttachment; // 0x104d	
	bool m_bResetFlexWeightsOnModelChange; // 0x104e	
private:
	[[maybe_unused]] uint8_t __pad104f[0x19]; // 0x104f
public:
	int32_t m_nEyeOcclusionRendererBone; // 0x1068	
	matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0x106c	
	Vector m_vEyeOcclusionRendererHalfExtent; // 0x109c	
private:
	[[maybe_unused]] uint8_t __pad10a8[0x10]; // 0x10a8
public:
	// -> m_sClassName - 0x10b8
	// -> m_flAmount - 0x10d0
	// -> m_bRequired - 0x10d4
	// -> m_bBasechecked - 0x10d5
	// -> m_bValid - 0x10d6
	C_BaseFlex::Emphasized_Phoneme m_PhonemeClasses[3]; // 0x10b8	
};

