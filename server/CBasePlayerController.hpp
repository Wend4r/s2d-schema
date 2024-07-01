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
	[[maybe_unused]] uint8_t __pad04b8[0x8]; // 0x4b8
public:
	uint64_t m_nInButtonsWhichAreToggles; // 0x4c0	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x2c]; // 0x4cc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle< CBasePlayerPawn > m_hPawn; // 0x4f8	
	// MNetworkEnable
	bool m_bKnownTeamMismatch; // 0x4fc	
private:
	[[maybe_unused]] uint8_t __pad04fd[0x3]; // 0x4fd
public:
	CSplitScreenSlot m_nSplitScreenSlot; // 0x500	
	CHandle< CBasePlayerController > m_hSplitOwner; // 0x504	
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x508	
	bool m_bIsHLTV; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0521[0x3]; // 0x521
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; // 0x524	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char m_iszPlayerName[128]; // 0x528	
	CUtlString m_szNetworkIDString; // 0x5a8	
	float m_fLerpTime; // 0x5b0	
	bool m_bLagCompensation; // 0x5b4	
	bool m_bPredict; // 0x5b5	
	bool m_bAutoKickDisabled; // 0x5b6	
	bool m_bIsLowViolence; // 0x5b7	
	bool m_bGamePaused; // 0x5b8	
private:
	[[maybe_unused]] uint8_t __pad05b9[0x137]; // 0x5b9
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
	// void m_LastCmd; // 0x5c0
	// void m_nLastRealCommandNumberExecuted; // 0x6d4
	// void m_nLastLateCommandExecuted; // 0x6d8
};

