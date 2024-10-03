#pragma once

#include <cstdint>

struct CTouchExpansionComponent;
struct CCSPlayer_PingServices;
struct CPlayer_ViewModelServices;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd88
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
	[[maybe_unused]] uint8_t __pad0c18[0x10]; // 0xc18
public:
	// MNetworkEnable
	// MNetworkUserGroup "CTouchExpansionComponent"
	// MNetworkAlias "CTouchExpansionComponent"
	// MNetworkTypeAlias "CTouchExpansionComponent"
	CTouchExpansionComponent m_CTouchExpansionComponent; // 0xc28	
	// MNetworkEnable
	CCSPlayer_PingServices* m_pPingServices; // 0xc78	
	// MNetworkEnable
	CPlayer_ViewModelServices* m_pViewModelServices; // 0xc80	
	GameTime_t m_blindUntilTime; // 0xc88	
	GameTime_t m_blindStartTime; // 0xc8c	
	// MNetworkEnable
	CSPlayerState m_iPlayerState; // 0xc90	
private:
	[[maybe_unused]] uint8_t __pad0c94[0xac]; // 0xc94
public:
	bool m_bRespawning; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d41[0x3]; // 0xd41
public:
	// MNetworkEnable
	GameTime_t m_fImmuneToGunGameDamageTime; // 0xd44	
	// MNetworkEnable
	bool m_bGunGameImmunity; // 0xd48	
private:
	[[maybe_unused]] uint8_t __pad0d49[0x3]; // 0xd49
public:
	// MNetworkEnable
	float m_fMolotovDamageTime; // 0xd4c	
	// MNetworkEnable
	bool m_bHasMovedSinceSpawn; // 0xd50	
private:
	[[maybe_unused]] uint8_t __pad0d51[0x3]; // 0xd51
public:
	int32_t m_iNumSpawns; // 0xd54	
private:
	[[maybe_unused]] uint8_t __pad0d58[0x4]; // 0xd58
public:
	float m_flIdleTimeSinceLastAction; // 0xd5c	
	float m_fNextRadarUpdateTime; // 0xd60	
	// MNetworkEnable
	float m_flFlashDuration; // 0xd64	
	// MNetworkEnable
	float m_flFlashMaxAlpha; // 0xd68	
	// MNetworkEnable
	float m_flProgressBarStartTime; // 0xd6c	
	// MNetworkEnable
	int32_t m_iProgressBarDuration; // 0xd70	
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0xd74	
	bool m_wasNotKilledNaturally; // 0xd80	
	bool m_bCommittingSuicideOnTeamChange; // 0xd81	
private:
	[[maybe_unused]] uint8_t __pad0d82[0x2]; // 0xd82
public:
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalController; // 0xd84	
	
	// Datamap fields:
	// CHandle< CBaseEntity > original_controller; // 0x7fffffff
};

