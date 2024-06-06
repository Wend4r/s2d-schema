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
// Size: 0xba0
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
	CPlayer_WeaponServices* m_pWeaponServices; // 0xa08	
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; // 0xa10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; // 0xa18	
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; // 0xa20	
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; // 0xa28	
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; // 0xa30	
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; // 0xa38	
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; // 0xa40	
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; // 0xa48	
private:
	[[maybe_unused]] uint8_t __pad0a50[0x8]; // 0xa50
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0xa58	
	uint32_t m_nHighestGeneratedServerViewAngleChangeIndex; // 0xaa8	
	QAngle v_angle; // 0xaac	
	QAngle v_anglePrevious; // 0xab8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; // 0xac4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// -> scale - 0xad0
	// -> origin - 0xad4
	// -> bClip3DSkyBoxNearToWorldFar - 0xae0
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0xae4
	// -> fog - 0xae8
	// -> m_nWorldGroupID - 0xb50
	sky3dparams_t m_skybox3d; // 0xac8	
	GameTime_t m_fTimeLastHurt; // 0xb58	
	// MNetworkEnable
	GameTime_t m_flDeathTime; // 0xb5c	
	GameTime_t m_fNextSuicideTime; // 0xb60	
	bool m_fInitHUD; // 0xb64	
private:
	[[maybe_unused]] uint8_t __pad0b65[0x3]; // 0xb65
public:
	CAI_Expresser* m_pExpresser; // 0xb68	
	// MNetworkEnable
	CHandle< CBasePlayerController > m_hController; // 0xb70	
private:
	[[maybe_unused]] uint8_t __pad0b74[0x4]; // 0xb74
public:
	float m_fHltvReplayDelay; // 0xb78	
	float m_fHltvReplayEnd; // 0xb7c	
	CEntityIndex m_iHltvReplayEntity; // 0xb80	
private:
	[[maybe_unused]] uint8_t __pad0b84[0x4]; // 0xb84
public:
	CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // 0xb88	
	
	// Datamap fields:
	// void m_hPawnListEntry; // 0xb74
	// void m_hLastValidNavArea; // 0x9b8
	// void m_hCurrentNavArea; // 0x9a8
	// void m_hCurrentNavAreaBlocked; // 0x9c8
	// CHandle< CBaseEntity > controller; // 0x7fffffff
	// int32_t InputSetHealth; // 0x0
	// bool InputSetHUDVisibility; // 0x0
	// CUtlSymbolLarge InputSetFogController; // 0x0
};

