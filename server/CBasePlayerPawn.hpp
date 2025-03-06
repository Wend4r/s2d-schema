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
// Size: 0xd98
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
// MNetworkVarNames "CHandle< CBasePlayerController> m_hDefaultController"
class CBasePlayerPawn : public CBaseCombatCharacter
{
public:
	// MNetworkEnable
	CPlayer_WeaponServices* m_pWeaponServices; // 0xbe8	
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; // 0xbf0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; // 0xbf8	
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; // 0xc00	
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; // 0xc08	
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; // 0xc10	
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; // 0xc18	
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; // 0xc20	
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c30[0x8]; // 0xc30
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0xc38	
	QAngle v_angle; // 0xca0	
	QAngle v_anglePrevious; // 0xcac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; // 0xcb8	
private:
	[[maybe_unused]] uint8_t __pad0cbc[0x4]; // 0xcbc
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// -> scale - 0xcc8
	// -> origin - 0xccc
	// -> bClip3DSkyBoxNearToWorldFar - 0xcd8
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0xcdc
	// -> fog - 0xce0
	// -> m_nWorldGroupID - 0xd48
	sky3dparams_t m_skybox3d; // 0xcc0	
	GameTime_t m_fTimeLastHurt; // 0xd50	
	// MNetworkEnable
	GameTime_t m_flDeathTime; // 0xd54	
	GameTime_t m_fNextSuicideTime; // 0xd58	
	bool m_fInitHUD; // 0xd5c	
private:
	[[maybe_unused]] uint8_t __pad0d5d[0x3]; // 0xd5d
public:
	CAI_Expresser* m_pExpresser; // 0xd60	
	// MNetworkEnable
	CHandle< CBasePlayerController > m_hController; // 0xd68	
	// MNetworkEnable
	CHandle< CBasePlayerController > m_hDefaultController; // 0xd6c	
private:
	[[maybe_unused]] uint8_t __pad0d70[0x4]; // 0xd70
public:
	float m_fHltvReplayDelay; // 0xd74	
	float m_fHltvReplayEnd; // 0xd78	
	CEntityIndex m_iHltvReplayEntity; // 0xd7c	
	CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // 0xd80	
	
	// Datamap fields:
	// void m_hPawnListEntry; // 0xd70
	// void m_hLastValidNavArea; // 0xb58
	// void m_hCurrentNavArea; // 0xb48
	// void m_hCurrentNavAreaBlocked; // 0xb68
	// CHandle< CBaseEntity > controller; // 0x7fffffff
	// int32_t InputSetHealth; // 0x0
	// bool InputSetHUDVisibility; // 0x0
	// CUtlSymbolLarge InputSetFogController; // 0x0
};

