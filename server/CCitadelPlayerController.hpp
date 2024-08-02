#pragma once

#include <cstdint>

struct PlayerDataGlobal_t;
struct CitadelLobbyPlayerSlot_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa48
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
// MNetworkVarNames "int8 m_nAssignedLane"
// MNetworkVarNames "int8 m_nOriginalLaneAssignment"
// MNetworkVarNames "bool m_bSwapCastModeAbility1"
// MNetworkVarNames "bool m_bSwapCastModeAbility2"
// MNetworkVarNames "bool m_bSwapCastModeAbility3"
// MNetworkVarNames "bool m_bSwapCastModeAbility4"
// MNetworkVarNames "bool m_bIsKingPanda"
// MNetworkVarNames "bool m_bBotDisconnectTakeover"
// MNetworkVarNames "bool m_bInTeamChat"
// MNetworkVarNames "bool m_bInPartyChat"
// MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hHeroPawn"
// MNetworkVarNames "PlayerDataGlobal_t m_PlayerDataGlobal"
// MNetworkVarNames "int8 m_nDeathReplayAvailable"
// MNetworkVarNames "CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot"
class CCitadelPlayerController : public CBasePlayerController
{
public:
	// MNetworkEnable
	EPlayerPlayState m_ePlayState; // 0x740	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchLastHits; // 0x744	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsSecured; // 0x748	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsDenied; // 0x74c	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToGuardians; // 0x750	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToPlayers; // 0x754	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageTaken; // 0x758	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchNetWorth; // 0x75c	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchModsPurchased; // 0x760	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x764	
	// MNetworkEnable
	float m_flGuideBotMatchLastTaskNagVO; // 0x768	
	// MNetworkEnable
	float m_flGuideBotLastTimeTaskCompleted; // 0x76c	
	// MNetworkEnable
	EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x770	
	// MNetworkEnable
	// MNetworkChangeCallback "AssignedLaneChanged"
	int8_t m_nAssignedLane; // 0x774	
	// MNetworkEnable
	int8_t m_nOriginalLaneAssignment; // 0x775	
	// MNetworkEnable
	bool m_bSwapCastModeAbility1; // 0x776	
	// MNetworkEnable
	bool m_bSwapCastModeAbility2; // 0x777	
	// MNetworkEnable
	bool m_bSwapCastModeAbility3; // 0x778	
	// MNetworkEnable
	bool m_bSwapCastModeAbility4; // 0x779	
	// MNetworkEnable
	bool m_bIsKingPanda; // 0x77a	
	// MNetworkEnable
	bool m_bBotDisconnectTakeover; // 0x77b	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInTeamChat; // 0x77c	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInPartyChat; // 0x77d	
private:
	[[maybe_unused]] uint8_t __pad077e[0xc2]; // 0x77e
public:
	// MNetworkEnable
	CHandle< CCitadelPlayerPawn > m_hHeroPawn; // 0x840	
private:
	[[maybe_unused]] uint8_t __pad0844[0x14]; // 0x844
public:
	// MNetworkEnable
	PlayerDataGlobal_t m_PlayerDataGlobal; // 0x858	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nDeathReplayAvailable; // 0xa30	
	// MNetworkEnable
	CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0xa31	
private:
	[[maybe_unused]] uint8_t __pad0a32[0x2]; // 0xa32
public:
	GameTime_t m_flLastCommsTime; // 0xa34	
	GameTime_t m_flLastFailedCommsTime; // 0xa38	
	bool m_bLastCommsWasDoublePing; // 0xa3c	
private:
	[[maybe_unused]] uint8_t __pad0a3d[0x3]; // 0xa3d
public:
	int32_t m_nGuideBotNumTasksComplete; // 0xa40	
	
	// Datamap fields:
	// void CCitadelPlayerControllerResourceDataThink; // 0x0
};

