#pragma once

#include <cstdint>

struct HeroBuildID_t;
struct PlayerDataGlobal_t;
struct CitadelLobbyPlayerSlot_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa78
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
	EPlayerPlayState m_ePlayState; // 0x718	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchLastHits; // 0x71c	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsSecured; // 0x720	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsDenied; // 0x724	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToGuardians; // 0x728	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToPlayers; // 0x72c	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageTaken; // 0x730	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchNetWorth; // 0x734	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchModsPurchased; // 0x738	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x73c	
	// MNetworkEnable
	float m_flGuideBotMatchLastTaskNagVO; // 0x740	
	// MNetworkEnable
	float m_flGuideBotLastTimeTaskCompleted; // 0x744	
	// MNetworkEnable
	EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x748	
	// MNetworkEnable
	int32_t m_nCurrentRank; // 0x74c	
	// MNetworkEnable
	// MNetworkChangeCallback "AssignedLaneChanged"
	int8_t m_nAssignedLane; // 0x750	
	// MNetworkEnable
	int8_t m_nOriginalLaneAssignment; // 0x751	
	// MNetworkEnable
	bool m_bIsKingPanda; // 0x752	
	// MNetworkEnable
	bool m_bBotDisconnectTakeover; // 0x753	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInTeamChat; // 0x754	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInPartyChat; // 0x755	
private:
	[[maybe_unused]] uint8_t __pad0756[0x2]; // 0x756
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	HeroBuildID_t m_unHeroBuildID; // 0x758	
	// MNetworkEnable
	bool m_bLaneSwapLocked; // 0x75c	
private:
	[[maybe_unused]] uint8_t __pad075d[0x3]; // 0x75d
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecLaneSwapRequests; // 0x760	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecLaneSwapRejects; // 0x778	
	// MNetworkEnable
	C_NetworkUtlVectorBase< int32 > m_vecMutedPlayers; // 0x790	
	// MNetworkEnable
	CHandle< C_CitadelPlayerPawn > m_hHeroPawn; // 0x7a8	
private:
	[[maybe_unused]] uint8_t __pad07ac[0x34]; // 0x7ac
public:
	// MNetworkEnable
	PlayerDataGlobal_t m_PlayerDataGlobal; // 0x7e0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nDeathReplayAvailable; // 0xa68	
	// MNetworkEnable
	CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0xa69	
	bool m_bHasCheckedFriendName; // 0xa6a	
private:
	[[maybe_unused]] uint8_t __pad0a6b[0x5]; // 0xa6b
public:
	CUtlString m_sFriendName; // 0xa70	
};

