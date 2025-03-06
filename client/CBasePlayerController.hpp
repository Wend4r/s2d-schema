#pragma once

#include <cstdint>

struct C_CommandContext;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x718
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
	[[maybe_unused]] uint8_t __pad0510[0x8]; // 0x510
public:
	int32_t m_nFinalPredictedTick; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad051c[0x4]; // 0x51c
public:
	C_CommandContext m_CommandContext; // 0x520	
	uint64_t m_nInButtonsWhichAreToggles; // 0x5d8	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x5e0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle< C_BasePlayerPawn > m_hPawn; // 0x5e4	
	// MNetworkEnable
	bool m_bKnownTeamMismatch; // 0x5e8	
private:
	[[maybe_unused]] uint8_t __pad05e9[0x3]; // 0x5e9
public:
	CHandle< C_BasePlayerPawn > m_hPredictedPawn; // 0x5ec	
	CSplitScreenSlot m_nSplitScreenSlot; // 0x5f0	
	CHandle< CBasePlayerController > m_hSplitOwner; // 0x5f4	
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x5f8	
	bool m_bIsHLTV; // 0x610	
private:
	[[maybe_unused]] uint8_t __pad0611[0x3]; // 0x611
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; // 0x614	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char m_iszPlayerName[128]; // 0x618	
private:
	[[maybe_unused]] uint8_t __pad0698[0x8]; // 0x698
public:
	// MNetworkEnable
	// MNetworkEncoder "fixed64"
	// MNetworkChangeCallback "OnSteamIDChanged"
	uint64_t m_steamID; // 0x6a0	
	bool m_bIsLocalPlayerController; // 0x6a8	
private:
	[[maybe_unused]] uint8_t __pad06a9[0x3]; // 0x6a9
public:
	// MNetworkEnable
	uint32_t m_iDesiredFOV; // 0x6ac	
	
	// Datamap fields:
	// bool fakeclient; // 0x7fffffff
	// bool is_hltv; // 0x7fffffff
	// const char * playername; // 0x7fffffff
	// bool reserving; // 0x7fffffff
	// void m_pCurrentCommand; // 0x698
};

