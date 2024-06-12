#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x748
// Has VTable
// 
// MNetworkIncludeByName "m_pEntity"
// MNetworkIncludeByName "m_flSimulationTime"
// MNetworkIncludeByName "m_flCreateTime"
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkIncludeByName "m_nNextThinkTick"
// MNetworkIncludeByName "m_fFlags"
// MNetworkUserGroupProxy "CBasePlayerController"
// MNetworkUserGroupProxy "CBasePlayerController"
// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "uint32 m_nTickBase"
// MNetworkVarNames "CHandle< CBasePlayerPawn> m_hPawn"
// MNetworkVarNames "bool m_bKnownTeamMismatch"
// MNetworkVarNames "PlayerConnectedState m_iConnected"
// MNetworkVarNames "char m_iszPlayerName"
// MNetworkVarNames "uint64 m_steamID"
// MNetworkVarNames "uint32 m_iDesiredFOV"
class CBasePlayerController : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	uint64_t m_nInButtonsWhichAreToggles; // 0x4c8	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x2c]; // 0x4d4
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle< CBasePlayerPawn > m_hPawn; // 0x500	
	// MNetworkEnable
	bool m_bKnownTeamMismatch; // 0x504	
private:
	[[maybe_unused]] uint8_t __pad0505[0x3]; // 0x505
public:
	CSplitScreenSlot m_nSplitScreenSlot; // 0x508	
	CHandle< CBasePlayerController > m_hSplitOwner; // 0x50c	
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x510	
	bool m_bIsHLTV; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad0529[0x3]; // 0x529
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; // 0x52c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char m_iszPlayerName[128]; // 0x530	
	CUtlString m_szNetworkIDString; // 0x5b0	
	float m_fLerpTime; // 0x5b8	
	bool m_bLagCompensation; // 0x5bc	
	bool m_bPredict; // 0x5bd	
	bool m_bAutoKickDisabled; // 0x5be	
	bool m_bIsLowViolence; // 0x5bf	
	bool m_bGamePaused; // 0x5c0	
private:
	[[maybe_unused]] uint8_t __pad05c1[0x12f]; // 0x5c1
public:
	ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x6f0	
	float m_flLastPlayerTalkTime; // 0x6f4	
	float m_flLastEntitySteadyState; // 0x6f8	
	int32_t m_nAvailableEntitySteadyState; // 0x6fc	
	bool m_bHasAnySteadyStateEnts; // 0x700	
private:
	[[maybe_unused]] uint8_t __pad0701[0xf]; // 0x701
public:
	// MNetworkEnable
	// MNetworkEncoder "fixed64"
	// MNetworkChangeCallback "OnSteamIDChanged"
	uint64_t m_steamID; // 0x710	
	// MNetworkEnable
	uint32_t m_iDesiredFOV; // 0x718	
	
	// Static fields:
	static bool &Get_sm_bRunningPredictedClientStringCommands(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBasePlayerController")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// bool fakeclient; // 0x7fffffff
	// bool is_hltv; // 0x7fffffff
	// const char * playername; // 0x7fffffff
	// bool reserving; // 0x7fffffff
	// void m_pCurrentCommand; // 0x708
	// void m_LastCmd; // 0x5c8
	// void m_nLastRealCommandNumberExecuted; // 0x6d4
	// void m_nLastLateCommandExecuted; // 0x6d8
};

