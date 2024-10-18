#pragma once

#include <cstdint>

struct GameTick_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16a0
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
class C_BasePlayerWeapon : public C_EconEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextPrimaryAttackTick; // 0x1668	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextPrimaryAttackTickRatio; // 0x166c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextSecondaryAttackTick; // 0x1670	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextSecondaryAttackTickRatio; // 0x1674	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip1; // 0x1678	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iClip2; // 0x167c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_pReserveAmmo[2]; // 0x1680	
};

