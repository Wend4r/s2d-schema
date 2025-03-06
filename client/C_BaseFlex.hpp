#pragma once

#include <cstdint>

struct SceneEventId_t;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
// 
// MNetworkVarNames "float32 m_flexWeight"
// MNetworkVarNames "bool m_blinktoggle"
class C_BaseFlex : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x10]; // 0xb00
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	C_NetworkUtlVectorBase< float32 > m_flexWeight; // 0xb10	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnViewTargetChanged"
	Vector m_vLookTargetPosition; // 0xb28	
private:
	[[maybe_unused]] uint8_t __pad0b34[0xc]; // 0xb34
public:
	// MNetworkEnable
	bool m_blinktoggle; // 0xb40	
private:
	[[maybe_unused]] uint8_t __pad0b41[0x5f]; // 0xb41
public:
	int32_t m_nLastFlexUpdateFrameCount; // 0xba0	
	Vector m_CachedViewTarget; // 0xba4	
	SceneEventId_t m_nNextSceneEventId; // 0xbb0	
	int32_t m_iBlink; // 0xbb4	
	float m_blinktime; // 0xbb8	
	bool m_prevblinktoggle; // 0xbbc	
private:
	[[maybe_unused]] uint8_t __pad0bbd[0x3]; // 0xbbd
public:
	int32_t m_iJawOpen; // 0xbc0	
	float m_flJawOpenAmount; // 0xbc4	
	float m_flBlinkAmount; // 0xbc8	
	AttachmentHandle_t m_iMouthAttachment; // 0xbcc	
	AttachmentHandle_t m_iEyeAttachment; // 0xbcd	
	bool m_bResetFlexWeightsOnModelChange; // 0xbce	
private:
	[[maybe_unused]] uint8_t __pad0bcf[0x19]; // 0xbcf
public:
	int32_t m_nEyeOcclusionRendererBone; // 0xbe8	
	matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xbec	
	Vector m_vEyeOcclusionRendererHalfExtent; // 0xc1c	
private:
	[[maybe_unused]] uint8_t __pad0c28[0x10]; // 0xc28
public:
	// -> m_sClassName - 0xc38
	// -> m_flAmount - 0xc50
	// -> m_bRequired - 0xc54
	// -> m_bBasechecked - 0xc55
	// -> m_bValid - 0xc56
	C_BaseFlex::Emphasized_Phoneme m_PhonemeClasses[3]; // 0xc38	
};

