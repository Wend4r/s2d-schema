#pragma once

#include <cstdint>

struct EntitySpottedState_t;
struct CountdownTimer;
struct GameTime_t;
struct AttachmentHandle_t;
struct CBasePlayerController;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1270
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_lifeState"
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecViewOffset"
// MNetworkOverride "m_vecViewOffset C_BaseModelEntity"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
// MNetworkVarNames "CHandle< CBaseEntity> m_leader"
// MNetworkVarNames "CountdownTimer m_reuseTimer"
// MNetworkVarNames "Vector m_vel"
// MNetworkVarNames "bool m_isRescued"
// MNetworkVarNames "bool m_jumpedThisFrame"
// MNetworkVarNames "int m_nHostageState"
// MNetworkVarNames "bool m_bHandsHaveBeenCut"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hHostageGrabber"
// MNetworkVarNames "GameTime_t m_flRescueStartTime"
// MNetworkVarNames "GameTime_t m_flGrabSuccessTime"
// MNetworkVarNames "GameTime_t m_flDropStartTime"
class C_Hostage : public C_BaseCombatCharacter
{
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x11a0	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_leader; // 0x11b8	
private:
	[[maybe_unused]] uint8_t __pad11bc[0x4]; // 0x11bc
public:
	// MNetworkEnable
	CountdownTimer m_reuseTimer; // 0x11c0	
	// MNetworkEnable
	Vector m_vel; // 0x11d8	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_Rescued"
	bool m_isRescued; // 0x11e4	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_Jumped"
	bool m_jumpedThisFrame; // 0x11e5	
private:
	[[maybe_unused]] uint8_t __pad11e6[0x2]; // 0x11e6
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnHostageStateChanged"
	int32_t m_nHostageState; // 0x11e8	
	// MNetworkEnable
	bool m_bHandsHaveBeenCut; // 0x11ec	
private:
	[[maybe_unused]] uint8_t __pad11ed[0x3]; // 0x11ed
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrabberChanged"
	CHandle< C_CSPlayerPawn > m_hHostageGrabber; // 0x11f0	
	GameTime_t m_fLastGrabTime; // 0x11f4	
	Vector m_vecGrabbedPos; // 0x11f8	
	// MNetworkEnable
	GameTime_t m_flRescueStartTime; // 0x1204	
	// MNetworkEnable
	GameTime_t m_flGrabSuccessTime; // 0x1208	
	// MNetworkEnable
	GameTime_t m_flDropStartTime; // 0x120c	
	GameTime_t m_flDeadOrRescuedTime; // 0x1210	
private:
	[[maybe_unused]] uint8_t __pad1214[0x4]; // 0x1214
public:
	CountdownTimer m_blinkTimer; // 0x1218	
	Vector m_lookAt; // 0x1230	
private:
	[[maybe_unused]] uint8_t __pad123c[0x4]; // 0x123c
public:
	CountdownTimer m_lookAroundTimer; // 0x1240	
	bool m_isInit; // 0x1258	
	AttachmentHandle_t m_eyeAttachment; // 0x1259	
	AttachmentHandle_t m_chestAttachment; // 0x125a	
private:
	[[maybe_unused]] uint8_t __pad125b[0x5]; // 0x125b
public:
	CBasePlayerController* m_pPredictionOwner; // 0x1260	
	GameTime_t m_fNewestAlphaThinkTime; // 0x1268	
};

