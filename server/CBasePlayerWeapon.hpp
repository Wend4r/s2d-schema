#pragma once

#include <cstdint>

struct GameTick_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a0
// Has VTable
// 
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkIncludeByName "m_nNextThinkTick"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkUserGroupProxy "CBasePlayerWeapon"
// MNetworkVarNames "GameTick_t m_nNextPrimaryAttackTick"
// MNetworkVarNames "float32 m_flNextPrimaryAttackTickRatio"
// MNetworkVarNames "GameTick_t m_nNextSecondaryAttackTick"
// MNetworkVarNames "float32 m_flNextSecondaryAttackTickRatio"
// MNetworkVarNames "int32 m_iClip1"
// MNetworkVarNames "int32 m_iClip2"
// MNetworkVarNames "int m_pReserveAmmo"
class CBasePlayerWeapon : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextPrimaryAttackTick; // 0x958	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextPrimaryAttackTickRatio; // 0x95c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextSecondaryAttackTick; // 0x960	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextSecondaryAttackTickRatio; // 0x964	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip1; // 0x968	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iClip2; // 0x96c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_pReserveAmmo[2]; // 0x970	
	CEntityIOOutput m_OnPlayerUse; // 0x978	
	
	// Datamap fields:
	// int32_t InputSetClipPrimary; // 0x0
	// int32_t InputSetClipSecondary; // 0x0
};

