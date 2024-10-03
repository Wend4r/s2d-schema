#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x778
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
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	uint64_t m_nInButtonsWhichAreToggles; // 0x4e8	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x2c]; // 0x4f4
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle< CBasePlayerPawn > m_hPawn; // 0x520	
	// MNetworkEnable
	bool m_bKnownTeamMismatch; // 0x524	
private:
	[[maybe_unused]] uint8_t __pad0525[0x3]; // 0x525
public:
	CSplitScreenSlot m_nSplitScreenSlot; // 0x528	
	CHandle< CBasePlayerController > m_hSplitOwner; // 0x52c	
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x530	
	bool m_bIsHLTV; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; // 0x54c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char m_iszPlayerName[128]; // 0x550	
	CUtlString m_szNetworkIDString; // 0x5d0	
	float m_fLerpTime; // 0x5d8	
	bool m_bLagCompensation; // 0x5dc	
	bool m_bPredict; // 0x5dd	
	bool m_bAutoKickDisabled; // 0x5de	
	bool m_bIsLowViolence; // 0x5df	
	bool m_bGamePaused; // 0x5e0	
private:
	[[maybe_unused]] uint8_t __pad05e1[0x13f]; // 0x5e1
public:
	ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x720	
	float m_flLastPlayerTalkTime; // 0x724	
	float m_flLastEntitySteadyState; // 0x728	
	int32_t m_nAvailableEntitySteadyState; // 0x72c	
	bool m_bHasAnySteadyStateEnts; // 0x730	
private:
	[[maybe_unused]] uint8_t __pad0731[0xf]; // 0x731
public:
	// MNetworkEnable
	// MNetworkEncoder "fixed64"
	// MNetworkChangeCallback "OnSteamIDChanged"
	uint64_t m_steamID; // 0x740	
	// MNetworkEnable
	uint32_t m_iDesiredFOV; // 0x748	
	
	// Static fields:
	static bool &Get_sm_bRunningPredictedClientStringCommands(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBasePlayerController")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// bool fakeclient; // 0x7fffffff
	// bool is_hltv; // 0x7fffffff
	// const char * playername; // 0x7fffffff
	// bool reserving; // 0x7fffffff
	// void m_pCurrentCommand; // 0x738
	// void m_LastCmd; // 0x5e8
	// void m_nLastRealCommandNumberExecuted; // 0x704
	// void m_nLastLateCommandExecuted; // 0x708
};

