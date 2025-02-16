#pragma once

#include <cstdint>

struct HeroBuildID_t;
struct PlayerDataGlobal_t;
struct CitadelLobbyPlayerSlot_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xac8
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
	EPlayerPlayState m_ePlayState; // 0x768	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchLastHits; // 0x76c	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsSecured; // 0x770	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsDenied; // 0x774	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToGuardians; // 0x778	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToPlayers; // 0x77c	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageTaken; // 0x780	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchNetWorth; // 0x784	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchModsPurchased; // 0x788	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x78c	
	// MNetworkEnable
	float m_flGuideBotMatchLastTaskNagVO; // 0x790	
	// MNetworkEnable
	float m_flGuideBotLastTimeTaskCompleted; // 0x794	
	// MNetworkEnable
	EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x798	
	// MNetworkEnable
	int32_t m_nCurrentRank; // 0x79c	
	// MNetworkEnable
	// MNetworkChangeCallback "AssignedLaneChanged"
	int8_t m_nAssignedLane; // 0x7a0	
	// MNetworkEnable
	int8_t m_nOriginalLaneAssignment; // 0x7a1	
	// MNetworkEnable
	bool m_bIsKingPanda; // 0x7a2	
	// MNetworkEnable
	bool m_bBotDisconnectTakeover; // 0x7a3	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInTeamChat; // 0x7a4	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInPartyChat; // 0x7a5	
private:
	[[maybe_unused]] uint8_t __pad07a6[0x2]; // 0x7a6
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	HeroBuildID_t m_unHeroBuildID; // 0x7a8	
	// MNetworkEnable
	bool m_bLaneSwapLocked; // 0x7ac	
private:
	[[maybe_unused]] uint8_t __pad07ad[0x3]; // 0x7ad
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecLaneSwapRequests; // 0x7b0	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecLaneSwapRejects; // 0x7c8	
	// MNetworkEnable
	C_NetworkUtlVectorBase< int32 > m_vecMutedPlayers; // 0x7e0	
	// MNetworkEnable
	CHandle< C_CitadelPlayerPawn > m_hHeroPawn; // 0x7f8	
private:
	[[maybe_unused]] uint8_t __pad07fc[0x34]; // 0x7fc
public:
	// MNetworkEnable
	PlayerDataGlobal_t m_PlayerDataGlobal; // 0x830	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nDeathReplayAvailable; // 0xab8	
	// MNetworkEnable
	CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0xab9	
	bool m_bHasCheckedFriendName; // 0xaba	
private:
	[[maybe_unused]] uint8_t __pad0abb[0x5]; // 0xabb
public:
	CUtlString m_sFriendName; // 0xac0	
};

