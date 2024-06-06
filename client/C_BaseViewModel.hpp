#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct HSequence;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf38
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
	[[maybe_unused]] uint8_t __pad0ed0[0x8]; // 0xed0
public:
	Vector m_vecLastFacing; // 0xed8	
	// MNetworkEnable
	uint32_t m_nViewModelIndex; // 0xee4	
	// MNetworkEnable
	uint32_t m_nAnimationParity; // 0xee8	
	// MNetworkEnable
	float m_flAnimationStartTime; // 0xeec	
	// MNetworkEnable
	CHandle< C_BasePlayerWeapon > m_hWeapon; // 0xef0	
private:
	[[maybe_unused]] uint8_t __pad0ef4[0x4]; // 0xef4
public:
	CUtlSymbolLarge m_sVMName; // 0xef8	
	CUtlSymbolLarge m_sAnimationPrefix; // 0xf00	
	CHandle< C_ViewmodelWeapon > m_hWeaponModel; // 0xf08	
	AttachmentHandle_t m_iCameraAttachment; // 0xf0c	
private:
	[[maybe_unused]] uint8_t __pad0f0d[0x3]; // 0xf0d
public:
	QAngle m_vecLastCameraAngles; // 0xf10	
	float m_previousElapsedDuration; // 0xf1c	
	float m_previousCycle; // 0xf20	
	int32_t m_nOldAnimationParity; // 0xf24	
	HSequence m_hOldLayerSequence; // 0xf28	
	int32_t m_oldLayer; // 0xf2c	
	float m_oldLayerStartTime; // 0xf30	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPanel; // 0xf34	
};

