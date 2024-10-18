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
// Size: 0xc58
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
	CPlayer_WeaponServices* m_pWeaponServices; // 0xac0	
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; // 0xac8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; // 0xad0	
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; // 0xad8	
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; // 0xae0	
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; // 0xae8	
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; // 0xaf0	
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; // 0xaf8	
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b08[0x8]; // 0xb08
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0xb10	
	uint32_t m_nHighestGeneratedServerViewAngleChangeIndex; // 0xb60	
	QAngle v_angle; // 0xb64	
	QAngle v_anglePrevious; // 0xb70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; // 0xb7c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// -> scale - 0xb88
	// -> origin - 0xb8c
	// -> bClip3DSkyBoxNearToWorldFar - 0xb98
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0xb9c
	// -> fog - 0xba0
	// -> m_nWorldGroupID - 0xc08
	sky3dparams_t m_skybox3d; // 0xb80	
	GameTime_t m_fTimeLastHurt; // 0xc10	
	// MNetworkEnable
	GameTime_t m_flDeathTime; // 0xc14	
	GameTime_t m_fNextSuicideTime; // 0xc18	
	bool m_fInitHUD; // 0xc1c	
private:
	[[maybe_unused]] uint8_t __pad0c1d[0x3]; // 0xc1d
public:
	CAI_Expresser* m_pExpresser; // 0xc20	
	// MNetworkEnable
	CHandle< CBasePlayerController > m_hController; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c2c[0x4]; // 0xc2c
public:
	float m_fHltvReplayDelay; // 0xc30	
	float m_fHltvReplayEnd; // 0xc34	
	CEntityIndex m_iHltvReplayEntity; // 0xc38	
private:
	[[maybe_unused]] uint8_t __pad0c3c[0x4]; // 0xc3c
public:
	CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // 0xc40	
	
	// Datamap fields:
	// void m_hPawnListEntry; // 0xc2c
	// void m_hLastValidNavArea; // 0xa70
	// void m_hCurrentNavArea; // 0xa60
	// void m_hCurrentNavAreaBlocked; // 0xa80
	// CHandle< CBaseEntity > controller; // 0x7fffffff
	// int32_t InputSetHealth; // 0x0
	// bool InputSetHUDVisibility; // 0x0
	// CUtlSymbolLarge InputSetFogController; // 0x0
};

