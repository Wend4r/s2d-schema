#pragma once

#include <cstdint>

struct C_CommandContext;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
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
	[[maybe_unused]] uint8_t __pad0568[0x8]; // 0x568
public:
	int32_t m_nFinalPredictedTick; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad0574[0x4]; // 0x574
public:
	C_CommandContext m_CommandContext; // 0x578	
	uint64_t m_nInButtonsWhichAreToggles; // 0x620	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x628	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle< C_BasePlayerPawn > m_hPawn; // 0x62c	
	// MNetworkEnable
	bool m_bKnownTeamMismatch; // 0x630	
private:
	[[maybe_unused]] uint8_t __pad0631[0x3]; // 0x631
public:
	CHandle< C_BasePlayerPawn > m_hPredictedPawn; // 0x634	
	CSplitScreenSlot m_nSplitScreenSlot; // 0x638	
	CHandle< CBasePlayerController > m_hSplitOwner; // 0x63c	
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x640	
	bool m_bIsHLTV; // 0x658	
private:
	[[maybe_unused]] uint8_t __pad0659[0x3]; // 0x659
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; // 0x65c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char m_iszPlayerName[128]; // 0x660	
private:
	[[maybe_unused]] uint8_t __pad06e0[0x8]; // 0x6e0
public:
	// MNetworkEnable
	// MNetworkEncoder "fixed64"
	// MNetworkChangeCallback "OnSteamIDChanged"
	uint64_t m_steamID; // 0x6e8	
	bool m_bIsLocalPlayerController; // 0x6f0	
private:
	[[maybe_unused]] uint8_t __pad06f1[0x3]; // 0x6f1
public:
	// MNetworkEnable
	uint32_t m_iDesiredFOV; // 0x6f4	
	
	// Static fields:
	static bool &Get_sm_bRunningPredictedClientStringCommands(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBasePlayerController")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// bool fakeclient; // 0x7fffffff
	// bool is_hltv; // 0x7fffffff
	// const char * playername; // 0x7fffffff
	// bool reserving; // 0x7fffffff
	// void m_pCurrentCommand; // 0x6e0
};

