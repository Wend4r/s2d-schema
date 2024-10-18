#pragma once

#include <cstdint>

struct SceneEventId_t;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1120
// Has VTable
// 
// MNetworkVarNames "float32 m_flexWeight"
// MNetworkVarNames "bool m_blinktoggle"
class C_BaseFlex : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0f88[0x10]; // 0xf88
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	C_NetworkUtlVectorBase< float32 > m_flexWeight; // 0xf98	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnViewTargetChanged"
	Vector m_vLookTargetPosition; // 0xfb0	
private:
	[[maybe_unused]] uint8_t __pad0fbc[0xc]; // 0xfbc
public:
	// MNetworkEnable
	bool m_blinktoggle; // 0xfc8	
private:
	[[maybe_unused]] uint8_t __pad0fc9[0x5f]; // 0xfc9
public:
	int32_t m_nLastFlexUpdateFrameCount; // 0x1028	
	Vector m_CachedViewTarget; // 0x102c	
	SceneEventId_t m_nNextSceneEventId; // 0x1038	
	int32_t m_iBlink; // 0x103c	
	float m_blinktime; // 0x1040	
	bool m_prevblinktoggle; // 0x1044	
private:
	[[maybe_unused]] uint8_t __pad1045[0x3]; // 0x1045
public:
	int32_t m_iJawOpen; // 0x1048	
	float m_flJawOpenAmount; // 0x104c	
	float m_flBlinkAmount; // 0x1050	
	AttachmentHandle_t m_iMouthAttachment; // 0x1054	
	AttachmentHandle_t m_iEyeAttachment; // 0x1055	
	bool m_bResetFlexWeightsOnModelChange; // 0x1056	
private:
	[[maybe_unused]] uint8_t __pad1057[0x19]; // 0x1057
public:
	int32_t m_nEyeOcclusionRendererBone; // 0x1070	
	matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0x1074	
	Vector m_vEyeOcclusionRendererHalfExtent; // 0x10a4	
private:
	[[maybe_unused]] uint8_t __pad10b0[0x10]; // 0x10b0
public:
	// -> m_sClassName - 0x10c0
	// -> m_flAmount - 0x10d8
	// -> m_bRequired - 0x10dc
	// -> m_bBasechecked - 0x10dd
	// -> m_bValid - 0x10de
	C_BaseFlex::Emphasized_Phoneme m_PhonemeClasses[3]; // 0x10c0	
};

