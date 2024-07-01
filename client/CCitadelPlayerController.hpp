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
// MNetworkVarNames "bool m_bIsDevTeamMember"
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
	EPlayerPlayState m_ePlayState; // 0x6d8	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchLastHits; // 0x6dc	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsSecured; // 0x6e0	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsDenied; // 0x6e4	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToGuardians; // 0x6e8	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToPlayers; // 0x6ec	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageTaken; // 0x6f0	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchNetWorth; // 0x6f4	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchModsPurchased; // 0x6f8	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x6fc	
	// MNetworkEnable
	float m_flGuideBotMatchLastTaskNagVO; // 0x700	
	// MNetworkEnable
	float m_flGuideBotLastTimeTaskCompleted; // 0x704	
	// MNetworkEnable
	EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x708	
	// MNetworkEnable
	// MNetworkChangeCallback "AssignedLaneChanged"
	int8_t m_nAssignedLane; // 0x70c	
	// MNetworkEnable
	int8_t m_nOriginalLaneAssignment; // 0x70d	
	// MNetworkEnable
	bool m_bSwapCastModeAbility1; // 0x70e	
	// MNetworkEnable
	bool m_bSwapCastModeAbility2; // 0x70f	
	// MNetworkEnable
	bool m_bSwapCastModeAbility3; // 0x710	
	// MNetworkEnable
	bool m_bSwapCastModeAbility4; // 0x711	
	// MNetworkEnable
	bool m_bIsKingPanda; // 0x712	
	// MNetworkEnable
	bool m_bIsDevTeamMember; // 0x713	
	// MNetworkEnable
	bool m_bBotDisconnectTakeover; // 0x714	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInTeamChat; // 0x715	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInPartyChat; // 0x716	
private:
	[[maybe_unused]] uint8_t __pad0717[0x1]; // 0x717
public:
	// MNetworkEnable
	CHandle< C_CitadelPlayerPawn > m_hHeroPawn; // 0x718	
private:
	[[maybe_unused]] uint8_t __pad071c[0x14]; // 0x71c
public:
	// MNetworkEnable
	PlayerDataGlobal_t m_PlayerDataGlobal; // 0x730	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bDeathReplayAvailable; // 0x908	
	// MNetworkEnable
	CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0x909	
};

