#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct HSequence;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xff0
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
	[[maybe_unused]] uint8_t __pad0f88[0x8]; // 0xf88
public:
	Vector m_vecLastFacing; // 0xf90	
	// MNetworkEnable
	uint32_t m_nViewModelIndex; // 0xf9c	
	// MNetworkEnable
	uint32_t m_nAnimationParity; // 0xfa0	
	// MNetworkEnable
	float m_flAnimationStartTime; // 0xfa4	
	// MNetworkEnable
	CHandle< C_BasePlayerWeapon > m_hWeapon; // 0xfa8	
private:
	[[maybe_unused]] uint8_t __pad0fac[0x4]; // 0xfac
public:
	CUtlSymbolLarge m_sVMName; // 0xfb0	
	CUtlSymbolLarge m_sAnimationPrefix; // 0xfb8	
	AttachmentHandle_t m_iCameraAttachment; // 0xfc0	
private:
	[[maybe_unused]] uint8_t __pad0fc1[0x3]; // 0xfc1
public:
	QAngle m_vecLastCameraAngles; // 0xfc4	
	float m_previousElapsedDuration; // 0xfd0	
	float m_previousCycle; // 0xfd4	
	int32_t m_nOldAnimationParity; // 0xfd8	
	HSequence m_hOldLayerSequence; // 0xfdc	
	int32_t m_oldLayer; // 0xfe0	
	float m_oldLayerStartTime; // 0xfe4	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPanel; // 0xfe8	
};

