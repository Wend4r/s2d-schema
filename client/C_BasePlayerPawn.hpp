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
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1340
// Has VTable
// 
// MNetworkUserGroupProxy "C_BasePlayerPawn"
// MNetworkUserGroupProxy "C_BasePlayerPawn"
// MNetworkExcludeByUserGroup "FogController"
// MNetworkIncludeByUserGroup "Player"
// MNetworkIncludeByUserGroup "Water"
// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
// MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_lifeState"
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
// MNetworkVarNames "ViewAngleServerChange_t m_ServerViewAngleChanges"
// MNetworkVarNames "uint32 m_iHideHUD"
// MNetworkVarNames "sky3dparams_t m_skybox3d"
// MNetworkVarNames "GameTime_t m_flDeathTime"
// MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
class C_BasePlayerPawn : public C_BaseCombatCharacter
{
public:
	// MNetworkEnable
	CPlayer_WeaponServices* m_pWeaponServices; // 0x11a0	
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; // 0x11a8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; // 0x11b0	
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; // 0x11b8	
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; // 0x11c0	
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; // 0x11c8	
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; // 0x11d0	
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; // 0x11d8	
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; // 0x11e0	
private:
	[[maybe_unused]] uint8_t __pad11e8[0x8]; // 0x11e8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0x11f0	
	uint32_t m_nHighestConsumedServerViewAngleChangeIndex; // 0x1240	
	QAngle v_angle; // 0x1244	
	QAngle v_anglePrevious; // 0x1250	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; // 0x125c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// -> scale - 0x1268
	// -> origin - 0x126c
	// -> bClip3DSkyBoxNearToWorldFar - 0x1278
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x127c
	// -> fog - 0x1280
	// -> m_nWorldGroupID - 0x12e8
	sky3dparams_t m_skybox3d; // 0x1260	
	// MNetworkEnable
	GameTime_t m_flDeathTime; // 0x12f0	
	Vector m_vecPredictionError; // 0x12f4	
	GameTime_t m_flPredictionErrorTime; // 0x1300	
	Vector m_vecLastCameraSetupLocalOrigin; // 0x1304	
	GameTime_t m_flLastCameraSetupTime; // 0x1310	
	float m_flFOVSensitivityAdjust; // 0x1314	
	float m_flMouseSensitivity; // 0x1318	
	Vector m_vOldOrigin; // 0x131c	
	float m_flOldSimulationTime; // 0x1328	
	int32_t m_nLastExecutedCommandNumber; // 0x132c	
	int32_t m_nLastExecutedCommandTick; // 0x1330	
	// MNetworkEnable
	// MNetworkChangeCallback "OnControllerChanged"
	CHandle< CBasePlayerController > m_hController; // 0x1334	
	bool m_bIsSwappingToPredictableController; // 0x1338	
	
	// Datamap fields:
	// void m_hPawnListEntry; // 0x133a
};

