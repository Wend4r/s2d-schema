#pragma once

#include <cstdint>

struct CTouchExpansionComponent;
struct CCSPlayer_PingServices;
struct CPlayer_ViewModelServices;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkVarNames "CTouchExpansionComponent::Storage_t m_CTouchExpansionComponent"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkVarNames "CCSPlayer_PingServices * m_pPingServices"
// MNetworkVarNames "CPlayer_ViewModelServices * m_pViewModelServices"
// MNetworkVarNames "CSPlayerState m_iPlayerState"
// MNetworkVarNames "GameTime_t m_fImmuneToGunGameDamageTime"
// MNetworkVarNames "bool m_bGunGameImmunity"
// MNetworkVarNames "float m_fMolotovDamageTime"
// MNetworkVarNames "bool m_bHasMovedSinceSpawn"
// MNetworkVarNames "float m_flFlashDuration"
// MNetworkVarNames "float m_flFlashMaxAlpha"
// MNetworkVarNames "float m_flProgressBarStartTime"
// MNetworkVarNames "int m_iProgressBarDuration"
// MNetworkVarNames "QAngle m_angEyeAngles"
// MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalController"
class CCSPlayerPawnBase : public CBasePlayerPawn
{
private:
	[[maybe_unused]] uint8_t __pad0ba0[0x10]; // 0xba0
public:
	// MNetworkEnable
	// MNetworkUserGroup "CTouchExpansionComponent"
	// MNetworkAlias "CTouchExpansionComponent"
	// MNetworkTypeAlias "CTouchExpansionComponent"
	CTouchExpansionComponent m_CTouchExpansionComponent; // 0xbb0	
	// MNetworkEnable
	CCSPlayer_PingServices* m_pPingServices; // 0xc00	
	// MNetworkEnable
	CPlayer_ViewModelServices* m_pViewModelServices; // 0xc08	
	GameTime_t m_blindUntilTime; // 0xc10	
	GameTime_t m_blindStartTime; // 0xc14	
	// MNetworkEnable
	CSPlayerState m_iPlayerState; // 0xc18	
private:
	[[maybe_unused]] uint8_t __pad0c1c[0xac]; // 0xc1c
public:
	bool m_bRespawning; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0cc9[0x3]; // 0xcc9
public:
	// MNetworkEnable
	GameTime_t m_fImmuneToGunGameDamageTime; // 0xccc	
	// MNetworkEnable
	bool m_bGunGameImmunity; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd1[0x3]; // 0xcd1
public:
	// MNetworkEnable
	float m_fMolotovDamageTime; // 0xcd4	
	// MNetworkEnable
	bool m_bHasMovedSinceSpawn; // 0xcd8	
private:
	[[maybe_unused]] uint8_t __pad0cd9[0x3]; // 0xcd9
public:
	int32_t m_iNumSpawns; // 0xcdc	
private:
	[[maybe_unused]] uint8_t __pad0ce0[0x4]; // 0xce0
public:
	float m_flIdleTimeSinceLastAction; // 0xce4	
	float m_fNextRadarUpdateTime; // 0xce8	
	// MNetworkEnable
	float m_flFlashDuration; // 0xcec	
	// MNetworkEnable
	float m_flFlashMaxAlpha; // 0xcf0	
	// MNetworkEnable
	float m_flProgressBarStartTime; // 0xcf4	
	// MNetworkEnable
	int32_t m_iProgressBarDuration; // 0xcf8	
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0xcfc	
	bool m_wasNotKilledNaturally; // 0xd08	
	bool m_bCommittingSuicideOnTeamChange; // 0xd09	
private:
	[[maybe_unused]] uint8_t __pad0d0a[0x2]; // 0xd0a
public:
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalController; // 0xd0c	
	
	// Datamap fields:
	// CHandle< CBaseEntity > original_controller; // 0x7fffffff
};

