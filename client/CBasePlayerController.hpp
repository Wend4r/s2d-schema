#pragma once

#include <cstdint>

struct C_CommandContext;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
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
// MNetworkReplayCompatField "m_skeletonInstance\.m_vecOrigin\..*|"
class CBasePlayerController : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x8]; // 0x548
public:
	int32_t m_nFinalPredictedTick; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0554[0x4]; // 0x554
public:
	C_CommandContext m_CommandContext; // 0x558	
	uint64_t m_nInButtonsWhichAreToggles; // 0x5f0	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x5f8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle< C_BasePlayerPawn > m_hPawn; // 0x5fc	
	// MNetworkEnable
	bool m_bKnownTeamMismatch; // 0x600	
private:
	[[maybe_unused]] uint8_t __pad0601[0x3]; // 0x601
public:
	CHandle< C_BasePlayerPawn > m_hPredictedPawn; // 0x604	
	CSplitScreenSlot m_nSplitScreenSlot; // 0x608	
	CHandle< CBasePlayerController > m_hSplitOwner; // 0x60c	
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x610	
	bool m_bIsHLTV; // 0x628	
private:
	[[maybe_unused]] uint8_t __pad0629[0x3]; // 0x629
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; // 0x62c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char m_iszPlayerName[128]; // 0x630	
private:
	[[maybe_unused]] uint8_t __pad06b0[0x8]; // 0x6b0
public:
	// MNetworkEnable
	// MNetworkEncoder "fixed64"
	// MNetworkChangeCallback "OnSteamIDChanged"
	uint64_t m_steamID; // 0x6b8	
	bool m_bIsLocalPlayerController; // 0x6c0	
private:
	[[maybe_unused]] uint8_t __pad06c1[0x3]; // 0x6c1
public:
	// MNetworkEnable
	uint32_t m_iDesiredFOV; // 0x6c4	
	
	// Static fields:
	static bool &Get_sm_bRunningPredictedClientStringCommands(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBasePlayerController")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// bool fakeclient; // 0x7fffffff
	// bool is_hltv; // 0x7fffffff
	// const char * playername; // 0x7fffffff
	// bool reserving; // 0x7fffffff
	// void m_pCurrentCommand; // 0x6b0
};

