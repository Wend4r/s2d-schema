#pragma once

#include <cstdint>

struct PlayerDataGlobal_t;
struct CitadelLobbyPlayerSlot_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa50
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
// MNetworkVarNames "bool m_bDeathReplayAvailable"
// MNetworkVarNames "CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot"
class CCitadelPlayerController : public CBasePlayerController
{
public:
	// MNetworkEnable
	EPlayerPlayState m_ePlayState; // 0x748	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchLastHits; // 0x74c	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsSecured; // 0x750	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsDenied; // 0x754	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToGuardians; // 0x758	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToPlayers; // 0x75c	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageTaken; // 0x760	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchNetWorth; // 0x764	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchModsPurchased; // 0x768	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x76c	
	// MNetworkEnable
	float m_flGuideBotMatchLastTaskNagVO; // 0x770	
	// MNetworkEnable
	float m_flGuideBotLastTimeTaskCompleted; // 0x774	
	// MNetworkEnable
	EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x778	
	// MNetworkEnable
	// MNetworkChangeCallback "AssignedLaneChanged"
	int8_t m_nAssignedLane; // 0x77c	
	// MNetworkEnable
	int8_t m_nOriginalLaneAssignment; // 0x77d	
	// MNetworkEnable
	bool m_bSwapCastModeAbility1; // 0x77e	
	// MNetworkEnable
	bool m_bSwapCastModeAbility2; // 0x77f	
	// MNetworkEnable
	bool m_bSwapCastModeAbility3; // 0x780	
	// MNetworkEnable
	bool m_bSwapCastModeAbility4; // 0x781	
	// MNetworkEnable
	bool m_bIsKingPanda; // 0x782	
	// MNetworkEnable
	bool m_bBotDisconnectTakeover; // 0x783	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInTeamChat; // 0x784	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInPartyChat; // 0x785	
private:
	[[maybe_unused]] uint8_t __pad0786[0xc2]; // 0x786
public:
	// MNetworkEnable
	CHandle< CCitadelPlayerPawn > m_hHeroPawn; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad084c[0x14]; // 0x84c
public:
	// MNetworkEnable
	PlayerDataGlobal_t m_PlayerDataGlobal; // 0x860	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bDeathReplayAvailable; // 0xa38	
	// MNetworkEnable
	CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0xa39	
private:
	[[maybe_unused]] uint8_t __pad0a3a[0x2]; // 0xa3a
public:
	GameTime_t m_flLastCommsTime; // 0xa3c	
	GameTime_t m_flLastFailedCommsTime; // 0xa40	
	bool m_bLastCommsWasDoublePing; // 0xa44	
private:
	[[maybe_unused]] uint8_t __pad0a45[0x3]; // 0xa45
public:
	int32_t m_nGuideBotNumTasksComplete; // 0xa48	
	
	// Datamap fields:
	// void CCitadelPlayerControllerResourceDataThink; // 0x0
};

