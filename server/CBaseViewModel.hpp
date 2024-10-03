#pragma once

#include <cstdint>

struct HSequence;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a8
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
class CBaseViewModel : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0960[0x8]; // 0x960
public:
	Vector m_vecLastFacing; // 0x968	
	// MNetworkEnable
	uint32_t m_nViewModelIndex; // 0x974	
	// MNetworkEnable
	uint32_t m_nAnimationParity; // 0x978	
	// MNetworkEnable
	float m_flAnimationStartTime; // 0x97c	
	// MNetworkEnable
	CHandle< CBasePlayerWeapon > m_hWeapon; // 0x980	
private:
	[[maybe_unused]] uint8_t __pad0984[0x4]; // 0x984
public:
	CUtlSymbolLarge m_sVMName; // 0x988	
	CUtlSymbolLarge m_sAnimationPrefix; // 0x990	
	HSequence m_hOldLayerSequence; // 0x998	
	int32_t m_oldLayer; // 0x99c	
	float m_oldLayerStartTime; // 0x9a0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hControlPanel; // 0x9a4	
};

