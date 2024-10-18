#pragma once

#include <cstdint>

struct CTouchExpansionComponent;
struct CCSPlayer_PingServices;
struct CPlayer_ViewModelServices;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdc8
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
	[[maybe_unused]] uint8_t __pad0c58[0x10]; // 0xc58
public:
	// MNetworkEnable
	// MNetworkUserGroup "CTouchExpansionComponent"
	// MNetworkAlias "CTouchExpansionComponent"
	// MNetworkTypeAlias "CTouchExpansionComponent"
	CTouchExpansionComponent m_CTouchExpansionComponent; // 0xc68	
	// MNetworkEnable
	CCSPlayer_PingServices* m_pPingServices; // 0xcb8	
	// MNetworkEnable
	CPlayer_ViewModelServices* m_pViewModelServices; // 0xcc0	
	GameTime_t m_blindUntilTime; // 0xcc8	
	GameTime_t m_blindStartTime; // 0xccc	
	// MNetworkEnable
	CSPlayerState m_iPlayerState; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd4[0xac]; // 0xcd4
public:
	bool m_bRespawning; // 0xd80	
private:
	[[maybe_unused]] uint8_t __pad0d81[0x3]; // 0xd81
public:
	// MNetworkEnable
	GameTime_t m_fImmuneToGunGameDamageTime; // 0xd84	
	// MNetworkEnable
	bool m_bGunGameImmunity; // 0xd88	
private:
	[[maybe_unused]] uint8_t __pad0d89[0x3]; // 0xd89
public:
	// MNetworkEnable
	float m_fMolotovDamageTime; // 0xd8c	
	// MNetworkEnable
	bool m_bHasMovedSinceSpawn; // 0xd90	
private:
	[[maybe_unused]] uint8_t __pad0d91[0x3]; // 0xd91
public:
	int32_t m_iNumSpawns; // 0xd94	
private:
	[[maybe_unused]] uint8_t __pad0d98[0x4]; // 0xd98
public:
	float m_flIdleTimeSinceLastAction; // 0xd9c	
	float m_fNextRadarUpdateTime; // 0xda0	
	// MNetworkEnable
	float m_flFlashDuration; // 0xda4	
	// MNetworkEnable
	float m_flFlashMaxAlpha; // 0xda8	
	// MNetworkEnable
	float m_flProgressBarStartTime; // 0xdac	
	// MNetworkEnable
	int32_t m_iProgressBarDuration; // 0xdb0	
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0xdb4	
	bool m_wasNotKilledNaturally; // 0xdc0	
	bool m_bCommittingSuicideOnTeamChange; // 0xdc1	
private:
	[[maybe_unused]] uint8_t __pad0dc2[0x2]; // 0xdc2
public:
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalController; // 0xdc4	
	
	// Datamap fields:
	// CHandle< CBaseEntity > original_controller; // 0x7fffffff
};

