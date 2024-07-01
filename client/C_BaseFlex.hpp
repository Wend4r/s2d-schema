#pragma once

#include <cstdint>

struct SceneEventId_t;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc08
// Has VTable
// 
// MNetworkVarNames "float32 m_flexWeight"
// MNetworkVarNames "bool m_blinktoggle"
class C_BaseFlex : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a70[0x10]; // 0xa70
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	C_NetworkUtlVectorBase< float32 > m_flexWeight; // 0xa80	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnViewTargetChanged"
	Vector m_vLookTargetPosition; // 0xa98	
private:
	[[maybe_unused]] uint8_t __pad0aa4[0xc]; // 0xaa4
public:
	// MNetworkEnable
	bool m_blinktoggle; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab1[0x5f]; // 0xab1
public:
	int32_t m_nLastFlexUpdateFrameCount; // 0xb10	
	Vector m_CachedViewTarget; // 0xb14	
	SceneEventId_t m_nNextSceneEventId; // 0xb20	
	int32_t m_iBlink; // 0xb24	
	float m_blinktime; // 0xb28	
	bool m_prevblinktoggle; // 0xb2c	
private:
	[[maybe_unused]] uint8_t __pad0b2d[0x3]; // 0xb2d
public:
	int32_t m_iJawOpen; // 0xb30	
	float m_flJawOpenAmount; // 0xb34	
	float m_flBlinkAmount; // 0xb38	
	AttachmentHandle_t m_iMouthAttachment; // 0xb3c	
	AttachmentHandle_t m_iEyeAttachment; // 0xb3d	
	bool m_bResetFlexWeightsOnModelChange; // 0xb3e	
private:
	[[maybe_unused]] uint8_t __pad0b3f[0x19]; // 0xb3f
public:
	int32_t m_nEyeOcclusionRendererBone; // 0xb58	
	matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xb5c	
	Vector m_vEyeOcclusionRendererHalfExtent; // 0xb8c	
private:
	[[maybe_unused]] uint8_t __pad0b98[0x10]; // 0xb98
public:
	// -> m_sClassName - 0xba8
	// -> m_flAmount - 0xbc0
	// -> m_bRequired - 0xbc4
	// -> m_bBasechecked - 0xbc5
	// -> m_bValid - 0xbc6
	C_BaseFlex::Emphasized_Phoneme m_PhonemeClasses[3]; // 0xba8	
};

