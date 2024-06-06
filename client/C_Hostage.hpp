#pragma once

#include <cstdint>

struct EntitySpottedState_t;
struct CountdownTimer;
struct GameTime_t;
struct AttachmentHandle_t;
struct CBasePlayerController;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x11c8
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
	EntitySpottedState_t m_entitySpottedState; // 0x10f8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_leader; // 0x1110	
private:
	[[maybe_unused]] uint8_t __pad1114[0x4]; // 0x1114
public:
	// MNetworkEnable
	CountdownTimer m_reuseTimer; // 0x1118	
	// MNetworkEnable
	Vector m_vel; // 0x1130	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_Rescued"
	bool m_isRescued; // 0x113c	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_Jumped"
	bool m_jumpedThisFrame; // 0x113d	
private:
	[[maybe_unused]] uint8_t __pad113e[0x2]; // 0x113e
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnHostageStateChanged"
	int32_t m_nHostageState; // 0x1140	
	// MNetworkEnable
	bool m_bHandsHaveBeenCut; // 0x1144	
private:
	[[maybe_unused]] uint8_t __pad1145[0x3]; // 0x1145
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrabberChanged"
	CHandle< C_CSPlayerPawn > m_hHostageGrabber; // 0x1148	
	GameTime_t m_fLastGrabTime; // 0x114c	
	Vector m_vecGrabbedPos; // 0x1150	
	// MNetworkEnable
	GameTime_t m_flRescueStartTime; // 0x115c	
	// MNetworkEnable
	GameTime_t m_flGrabSuccessTime; // 0x1160	
	// MNetworkEnable
	GameTime_t m_flDropStartTime; // 0x1164	
	GameTime_t m_flDeadOrRescuedTime; // 0x1168	
private:
	[[maybe_unused]] uint8_t __pad116c[0x4]; // 0x116c
public:
	CountdownTimer m_blinkTimer; // 0x1170	
	Vector m_lookAt; // 0x1188	
private:
	[[maybe_unused]] uint8_t __pad1194[0x4]; // 0x1194
public:
	CountdownTimer m_lookAroundTimer; // 0x1198	
	bool m_isInit; // 0x11b0	
	AttachmentHandle_t m_eyeAttachment; // 0x11b1	
	AttachmentHandle_t m_chestAttachment; // 0x11b2	
private:
	[[maybe_unused]] uint8_t __pad11b3[0x5]; // 0x11b3
public:
	CBasePlayerController* m_pPredictionOwner; // 0x11b8	
	GameTime_t m_fNewestAlphaThinkTime; // 0x11c0	
};

