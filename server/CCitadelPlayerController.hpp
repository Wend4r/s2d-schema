#pragma once

#include <cstdint>

struct HeroBuildID_t;
struct PlayerDataGlobal_t;
struct CitadelLobbyPlayerSlot_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc58
// Has VTable
// 
// MNetworkVarNames "EPlayerPlayState m_ePlayState"
// MNetworkVarNames "int m_iGuidedBotMatchLastHits"
// MNetworkVarNames "int m_iGuidedBotMatchOrbsSecured"
// MNetworkVarNames "int m_iGuidedBotMatchOrbsDenied"
// MNetworkVarNames "int m_iGuidedBotMatchDamageToGuardians"
// MNetworkVarNames "int m_iGuidedBotMatchDamageToPlayers"
// MNetworkVarNames "int m_iGuidedBotMatchDamageTaken"
// MNetworkVarNames "int m_iGuidedBotMatchNetWorth"
// MNetworkVarNames "int m_iGuidedBotMatchModsPurchased"
// MNetworkVarNames "int m_iGuidedBotMatchAbilityUpgrades"
// MNetworkVarNames "float m_flGuideBotMatchLastTaskNagVO"
// MNetworkVarNames "float m_flGuideBotLastTimeTaskCompleted"
// MNetworkVarNames "EGuidedBotMatchObjective m_eGuidedBotMatchObjective"
// MNetworkVarNames "int m_nCurrentRank"
// MNetworkVarNames "int8 m_nAssignedLane"
// MNetworkVarNames "int8 m_nOriginalLaneAssignment"
// MNetworkVarNames "bool m_bIsKingPanda"
// MNetworkVarNames "bool m_bBotDisconnectTakeover"
// MNetworkVarNames "bool m_bInTeamChat"
// MNetworkVarNames "bool m_bInPartyChat"
// MNetworkVarNames "HeroBuildID_t m_unHeroBuildID"
// MNetworkVarNames "bool m_bLaneSwapLocked"
// MNetworkVarNames "EHANDLE m_vecLaneSwapRequests"
// MNetworkVarNames "EHANDLE m_vecLaneSwapRejects"
// MNetworkVarNames "int32 m_vecMutedPlayers"
// MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hHeroPawn"
// MNetworkVarNames "PlayerDataGlobal_t m_PlayerDataGlobal"
// MNetworkVarNames "int8 m_nDeathReplayAvailable"
// MNetworkVarNames "CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot"
class CCitadelPlayerController : public CBasePlayerController
{
public:
	// MNetworkEnable
	EPlayerPlayState m_ePlayState; // 0x7d8	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchLastHits; // 0x7dc	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsSecured; // 0x7e0	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsDenied; // 0x7e4	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToGuardians; // 0x7e8	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToPlayers; // 0x7ec	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageTaken; // 0x7f0	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchNetWorth; // 0x7f4	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchModsPurchased; // 0x7f8	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x7fc	
	// MNetworkEnable
	float m_flGuideBotMatchLastTaskNagVO; // 0x800	
	// MNetworkEnable
	float m_flGuideBotLastTimeTaskCompleted; // 0x804	
	// MNetworkEnable
	EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x808	
	// MNetworkEnable
	int32_t m_nCurrentRank; // 0x80c	
	// MNetworkEnable
	// MNetworkChangeCallback "AssignedLaneChanged"
	int8_t m_nAssignedLane; // 0x810	
	// MNetworkEnable
	int8_t m_nOriginalLaneAssignment; // 0x811	
	// MNetworkEnable
	bool m_bIsKingPanda; // 0x812	
	// MNetworkEnable
	bool m_bBotDisconnectTakeover; // 0x813	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInTeamChat; // 0x814	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInPartyChat; // 0x815	
private:
	[[maybe_unused]] uint8_t __pad0816[0x2]; // 0x816
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	HeroBuildID_t m_unHeroBuildID; // 0x818	
	// MNetworkEnable
	bool m_bLaneSwapLocked; // 0x81c	
private:
	[[maybe_unused]] uint8_t __pad081d[0x3]; // 0x81d
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecLaneSwapRequests; // 0x820	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecLaneSwapRejects; // 0x838	
	// MNetworkEnable
	CNetworkUtlVectorBase< int32 > m_vecMutedPlayers; // 0x850	
private:
	[[maybe_unused]] uint8_t __pad0868[0xd8]; // 0x868
public:
	// MNetworkEnable
	CHandle< CCitadelPlayerPawn > m_hHeroPawn; // 0x940	
private:
	[[maybe_unused]] uint8_t __pad0944[0x34]; // 0x944
public:
	// MNetworkEnable
	PlayerDataGlobal_t m_PlayerDataGlobal; // 0x978	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nDeathReplayAvailable; // 0xc00	
	// MNetworkEnable
	CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0xc01	
private:
	[[maybe_unused]] uint8_t __pad0c02[0x2]; // 0xc02
public:
	GameTime_t m_flLastCommsTime; // 0xc04	
	GameTime_t m_flLastFailedCommsTime; // 0xc08	
	bool m_bLastCommsWasDoublePing; // 0xc0c	
private:
	[[maybe_unused]] uint8_t __pad0c0d[0x3]; // 0xc0d
public:
	int32_t m_nGuideBotNumTasksComplete; // 0xc10	
	bool m_bHasBeenReportedAsCheater; // 0xc14	
	bool m_bHasGCACKedCheaterReport; // 0xc15	
	bool m_bHasBeenLoggedAsCheater; // 0xc16	
	
	// Datamap fields:
	// void CCitadelPlayerControllerResourceDataThink; // 0x0
};

