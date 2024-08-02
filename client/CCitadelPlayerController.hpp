#pragma once

#include <cstdint>

struct PlayerDataGlobal_t;
struct CitadelLobbyPlayerSlot_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x910
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
	EPlayerPlayState m_ePlayState; // 0x6d0	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchLastHits; // 0x6d4	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsSecured; // 0x6d8	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsDenied; // 0x6dc	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToGuardians; // 0x6e0	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToPlayers; // 0x6e4	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageTaken; // 0x6e8	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchNetWorth; // 0x6ec	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchModsPurchased; // 0x6f0	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x6f4	
	// MNetworkEnable
	float m_flGuideBotMatchLastTaskNagVO; // 0x6f8	
	// MNetworkEnable
	float m_flGuideBotLastTimeTaskCompleted; // 0x6fc	
	// MNetworkEnable
	EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x700	
	// MNetworkEnable
	// MNetworkChangeCallback "AssignedLaneChanged"
	int8_t m_nAssignedLane; // 0x704	
	// MNetworkEnable
	int8_t m_nOriginalLaneAssignment; // 0x705	
	// MNetworkEnable
	bool m_bSwapCastModeAbility1; // 0x706	
	// MNetworkEnable
	bool m_bSwapCastModeAbility2; // 0x707	
	// MNetworkEnable
	bool m_bSwapCastModeAbility3; // 0x708	
	// MNetworkEnable
	bool m_bSwapCastModeAbility4; // 0x709	
	// MNetworkEnable
	bool m_bIsKingPanda; // 0x70a	
	// MNetworkEnable
	bool m_bBotDisconnectTakeover; // 0x70b	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInTeamChat; // 0x70c	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInPartyChat; // 0x70d	
private:
	[[maybe_unused]] uint8_t __pad070e[0x2]; // 0x70e
public:
	// MNetworkEnable
	CHandle< C_CitadelPlayerPawn > m_hHeroPawn; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0714[0x14]; // 0x714
public:
	// MNetworkEnable
	PlayerDataGlobal_t m_PlayerDataGlobal; // 0x728	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nDeathReplayAvailable; // 0x900	
	// MNetworkEnable
	CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0x901	
	bool m_bHasCheckedFriendName; // 0x902	
private:
	[[maybe_unused]] uint8_t __pad0903[0x5]; // 0x903
public:
	CUtlString m_sFriendName; // 0x908	
};

