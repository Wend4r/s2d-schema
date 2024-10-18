#pragma once

#include <cstdint>

struct EntitySpottedState_t;
struct CountdownTimer;
struct GameTime_t;
struct AttachmentHandle_t;
struct CBasePlayerController;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
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
	EntitySpottedState_t m_entitySpottedState; // 0x11a8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_leader; // 0x11c0	
private:
	[[maybe_unused]] uint8_t __pad11c4[0x4]; // 0x11c4
public:
	// MNetworkEnable
	CountdownTimer m_reuseTimer; // 0x11c8	
	// MNetworkEnable
	Vector m_vel; // 0x11e0	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_Rescued"
	bool m_isRescued; // 0x11ec	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_Jumped"
	bool m_jumpedThisFrame; // 0x11ed	
private:
	[[maybe_unused]] uint8_t __pad11ee[0x2]; // 0x11ee
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnHostageStateChanged"
	int32_t m_nHostageState; // 0x11f0	
	// MNetworkEnable
	bool m_bHandsHaveBeenCut; // 0x11f4	
private:
	[[maybe_unused]] uint8_t __pad11f5[0x3]; // 0x11f5
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrabberChanged"
	CHandle< C_CSPlayerPawn > m_hHostageGrabber; // 0x11f8	
	GameTime_t m_fLastGrabTime; // 0x11fc	
	Vector m_vecGrabbedPos; // 0x1200	
	// MNetworkEnable
	GameTime_t m_flRescueStartTime; // 0x120c	
	// MNetworkEnable
	GameTime_t m_flGrabSuccessTime; // 0x1210	
	// MNetworkEnable
	GameTime_t m_flDropStartTime; // 0x1214	
	GameTime_t m_flDeadOrRescuedTime; // 0x1218	
private:
	[[maybe_unused]] uint8_t __pad121c[0x4]; // 0x121c
public:
	CountdownTimer m_blinkTimer; // 0x1220	
	Vector m_lookAt; // 0x1238	
private:
	[[maybe_unused]] uint8_t __pad1244[0x4]; // 0x1244
public:
	CountdownTimer m_lookAroundTimer; // 0x1248	
	bool m_isInit; // 0x1260	
	AttachmentHandle_t m_eyeAttachment; // 0x1261	
	AttachmentHandle_t m_chestAttachment; // 0x1262	
private:
	[[maybe_unused]] uint8_t __pad1263[0x5]; // 0x1263
public:
	CBasePlayerController* m_pPredictionOwner; // 0x1268	
	GameTime_t m_fNewestAlphaThinkTime; // 0x1270	
};

