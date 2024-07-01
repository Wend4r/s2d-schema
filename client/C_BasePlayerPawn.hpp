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
// Size: 0xe30
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
	CPlayer_WeaponServices* m_pWeaponServices; // 0xc90	
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; // 0xc98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; // 0xca0	
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; // 0xca8	
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; // 0xcb0	
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; // 0xcb8	
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; // 0xcc0	
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; // 0xcc8	
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd8[0x8]; // 0xcd8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0xce0	
	uint32_t m_nHighestConsumedServerViewAngleChangeIndex; // 0xd30	
	QAngle v_angle; // 0xd34	
	QAngle v_anglePrevious; // 0xd40	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; // 0xd4c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// -> scale - 0xd58
	// -> origin - 0xd5c
	// -> bClip3DSkyBoxNearToWorldFar - 0xd68
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0xd6c
	// -> fog - 0xd70
	// -> m_nWorldGroupID - 0xdd8
	sky3dparams_t m_skybox3d; // 0xd50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flDeathTime; // 0xde0	
	Vector m_vecPredictionError; // 0xde4	
	GameTime_t m_flPredictionErrorTime; // 0xdf0	
	Vector m_vecLastCameraSetupLocalOrigin; // 0xdf4	
	GameTime_t m_flLastCameraSetupTime; // 0xe00	
	float m_flFOVSensitivityAdjust; // 0xe04	
	float m_flMouseSensitivity; // 0xe08	
	Vector m_vOldOrigin; // 0xe0c	
	float m_flOldSimulationTime; // 0xe18	
	int32_t m_nLastExecutedCommandNumber; // 0xe1c	
	int32_t m_nLastExecutedCommandTick; // 0xe20	
	// MNetworkEnable
	// MNetworkChangeCallback "OnControllerChanged"
	CHandle< CBasePlayerController > m_hController; // 0xe24	
	bool m_bIsSwappingToPredictableController; // 0xe28	
	
	// Datamap fields:
	// void m_hPawnListEntry; // 0xe2a
};

