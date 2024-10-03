#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct HSequence;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xfe8
// Has VTable
// 
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_hModel"
// MNetworkIncludeByName "m_hOwnerEntity"
// MNetworkIncludeByName "m_MeshGroupMask"
// MNetworkIncludeByName "m_fEffects"
// MNetworkIncludeByName "m_baseLayer.m_hSequence"
// MNetworkIncludeByName "m_animationController.m_flPlaybackRate"
// MNetworkIncludeByName "m_flAnimTime"
// MNetworkIncludeByName "m_flSimulationTime"
// MNetworkIncludeByName "m_animationController.m_animGraphNetworkedVars"
// MNetworkIncludeByName "m_nResetEventsParity"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkOverride "m_fEffects"
// MNetworkIncludeByName "m_clrRender"
// MNetworkVarNames "uint32 m_nViewModelIndex"
// MNetworkVarNames "uint32 m_nAnimationParity"
// MNetworkVarNames "float32 m_flAnimationStartTime"
// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hWeapon"
// MNetworkVarNames "CHandle< CBaseEntity> m_hControlPanel"
class C_BaseViewModel : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0f80[0x8]; // 0xf80
public:
	Vector m_vecLastFacing; // 0xf88	
	// MNetworkEnable
	uint32_t m_nViewModelIndex; // 0xf94	
	// MNetworkEnable
	uint32_t m_nAnimationParity; // 0xf98	
	// MNetworkEnable
	float m_flAnimationStartTime; // 0xf9c	
	// MNetworkEnable
	CHandle< C_BasePlayerWeapon > m_hWeapon; // 0xfa0	
private:
	[[maybe_unused]] uint8_t __pad0fa4[0x4]; // 0xfa4
public:
	CUtlSymbolLarge m_sVMName; // 0xfa8	
	CUtlSymbolLarge m_sAnimationPrefix; // 0xfb0	
	AttachmentHandle_t m_iCameraAttachment; // 0xfb8	
private:
	[[maybe_unused]] uint8_t __pad0fb9[0x3]; // 0xfb9
public:
	QAngle m_vecLastCameraAngles; // 0xfbc	
	float m_previousElapsedDuration; // 0xfc8	
	float m_previousCycle; // 0xfcc	
	int32_t m_nOldAnimationParity; // 0xfd0	
	HSequence m_hOldLayerSequence; // 0xfd4	
	int32_t m_oldLayer; // 0xfd8	
	float m_oldLayerStartTime; // 0xfdc	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPanel; // 0xfe0	
};

