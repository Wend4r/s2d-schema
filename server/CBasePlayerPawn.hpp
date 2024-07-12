#pragma once

#include <cstdint>

struct CPlayer_WeaponServices;
struct CPlayer_ItemServices;
struct CPlayer_AutoaimServices;
struct CPlayer_ObserverServices;
struct CPlayer_WaterServices;
struct CPlayer_UseServices;
struct CPlayer_FlashlightServices;
struct CPlayer_CameraServices;
struct CPlayer_MovementServices;
struct sky3dparams_t;
struct GameTime_t;
struct CAI_Expresser;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc10
// Has VTable
// 
// MNetworkUserGroupProxy "CBasePlayerPawn"
// MNetworkUserGroupProxy "CBasePlayerPawn"
// MNetworkExcludeByUserGroup "FogController"
// MNetworkIncludeByUserGroup "Player"
// MNetworkIncludeByUserGroup "Water"
// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
// MNetworkExcludeByName "m_pWeaponServices"
// MNetworkExcludeByName "m_pItemServices"
// MNetworkExcludeByName "m_pAutoaimServices"
// MNetworkExcludeByName "m_pObserverServices"
// MNetworkExcludeByName "m_pWaterServices"
// MNetworkExcludeByName "m_pUseServices"
// MNetworkExcludeByName "m_pFlashlightServices"
// MNetworkExcludeByName "m_pMovementServices"
// MNetworkVarNames "CPlayer_WeaponServices * m_pWeaponServices"
// MNetworkVarNames "CPlayer_ItemServices * m_pItemServices"
// MNetworkVarNames "CPlayer_AutoaimServices * m_pAutoaimServices"
// MNetworkVarNames "CPlayer_ObserverServices * m_pObserverServices"
// MNetworkVarNames "CPlayer_WaterServices * m_pWaterServices"
// MNetworkVarNames "CPlayer_UseServices * m_pUseServices"
// MNetworkVarNames "CPlayer_FlashlightServices * m_pFlashlightServices"
// MNetworkVarNames "CPlayer_CameraServices * m_pCameraServices"
// MNetworkVarNames "CPlayer_MovementServices * m_pMovementServices"
// MNetworkUserGroupProxy "CBasePlayerPawn"
// MNetworkVarNames "ViewAngleServerChange_t m_ServerViewAngleChanges"
// MNetworkVarNames "uint32 m_iHideHUD"
// MNetworkVarNames "sky3dparams_t m_skybox3d"
// MNetworkVarNames "GameTime_t m_flDeathTime"
// MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
class CBasePlayerPawn : public CBaseCombatCharacter
{
public:
	// MNetworkEnable
	CPlayer_WeaponServices* m_pWeaponServices; // 0xa78	
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; // 0xa80	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; // 0xa88	
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; // 0xa90	
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; // 0xa98	
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; // 0xaa0	
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; // 0xaa8	
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; // 0xab0	
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; // 0xab8	
private:
	[[maybe_unused]] uint8_t __pad0ac0[0x8]; // 0xac0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0xac8	
	uint32_t m_nHighestGeneratedServerViewAngleChangeIndex; // 0xb18	
	QAngle v_angle; // 0xb1c	
	QAngle v_anglePrevious; // 0xb28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; // 0xb34	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// -> scale - 0xb40
	// -> origin - 0xb44
	// -> bClip3DSkyBoxNearToWorldFar - 0xb50
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0xb54
	// -> fog - 0xb58
	// -> m_nWorldGroupID - 0xbc0
	sky3dparams_t m_skybox3d; // 0xb38	
	GameTime_t m_fTimeLastHurt; // 0xbc8	
	// MNetworkEnable
	GameTime_t m_flDeathTime; // 0xbcc	
	GameTime_t m_fNextSuicideTime; // 0xbd0	
	bool m_fInitHUD; // 0xbd4	
private:
	[[maybe_unused]] uint8_t __pad0bd5[0x3]; // 0xbd5
public:
	CAI_Expresser* m_pExpresser; // 0xbd8	
	// MNetworkEnable
	CHandle< CBasePlayerController > m_hController; // 0xbe0	
private:
	[[maybe_unused]] uint8_t __pad0be4[0x4]; // 0xbe4
public:
	float m_fHltvReplayDelay; // 0xbe8	
	float m_fHltvReplayEnd; // 0xbec	
	CEntityIndex m_iHltvReplayEntity; // 0xbf0	
private:
	[[maybe_unused]] uint8_t __pad0bf4[0x4]; // 0xbf4
public:
	CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // 0xbf8	
	
	// Datamap fields:
	// void m_hPawnListEntry; // 0xbe4
	// void m_hLastValidNavArea; // 0xa28
	// void m_hCurrentNavArea; // 0xa18
	// void m_hCurrentNavAreaBlocked; // 0xa38
	// CHandle< CBaseEntity > controller; // 0x7fffffff
	// int32_t InputSetHealth; // 0x0
	// bool InputSetHUDVisibility; // 0x0
	// CUtlSymbolLarge InputSetFogController; // 0x0
};

