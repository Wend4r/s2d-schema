#pragma once

#include <cstdint>

struct HSequence;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x930
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
	[[maybe_unused]] uint8_t __pad08e8[0x8]; // 0x8e8
public:
	Vector m_vecLastFacing; // 0x8f0	
	// MNetworkEnable
	uint32_t m_nViewModelIndex; // 0x8fc	
	// MNetworkEnable
	uint32_t m_nAnimationParity; // 0x900	
	// MNetworkEnable
	float m_flAnimationStartTime; // 0x904	
	// MNetworkEnable
	CHandle< CBasePlayerWeapon > m_hWeapon; // 0x908	
private:
	[[maybe_unused]] uint8_t __pad090c[0x4]; // 0x90c
public:
	CUtlSymbolLarge m_sVMName; // 0x910	
	CUtlSymbolLarge m_sAnimationPrefix; // 0x918	
	HSequence m_hOldLayerSequence; // 0x920	
	int32_t m_oldLayer; // 0x924	
	float m_oldLayerStartTime; // 0x928	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hControlPanel; // 0x92c	
};

