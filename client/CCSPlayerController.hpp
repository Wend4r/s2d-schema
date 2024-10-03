#pragma once

#include <cstdint>

struct CCSPlayerController_InGameMoneyServices;
struct CCSPlayerController_InventoryServices;
struct CCSPlayerController_ActionTrackingServices;
struct CCSPlayerController_DamageServices;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x868
// Has VTable
// 
// MNetworkUserGroupProxy "CCSPlayerController"
// MNetworkUserGroupProxy "CCSPlayerController"
// MNetworkUserGroupProxy "CCSPlayerController"
// MNetworkVarNames "CCSPlayerController_InGameMoneyServices * m_pInGameMoneyServices"
// MNetworkVarNames "CCSPlayerController_InventoryServices * m_pInventoryServices"
// MNetworkVarNames "CCSPlayerController_ActionTrackingServices * m_pActionTrackingServices"
// MNetworkVarNames "CCSPlayerController_DamageServices * m_pDamageServices"
// MNetworkVarNames "uint32 m_iPing"
// MNetworkVarNames "bool m_bHasCommunicationAbuseMute"
// MNetworkVarNames "string_t m_szCrosshairCodes"
// MNetworkVarNames "uint8 m_iPendingTeamNum"
// MNetworkVarNames "GameTime_t m_flForceTeamTime"
// MNetworkVarNames "int m_iCompTeammateColor"
// MNetworkVarNames "bool m_bEverPlayedOnTeam"
// MNetworkVarNames "string_t m_szClan"
// MNetworkVarNames "int m_iCoachingTeam"
// MNetworkVarNames "uint64 m_nPlayerDominated"
// MNetworkVarNames "uint64 m_nPlayerDominatingMe"
// MNetworkVarNames "int m_iCompetitiveRanking"
// MNetworkVarNames "int m_iCompetitiveWins"
// MNetworkVarNames "int8 m_iCompetitiveRankType"
// MNetworkVarNames "int m_iCompetitiveRankingPredicted_Win"
// MNetworkVarNames "int m_iCompetitiveRankingPredicted_Loss"
// MNetworkVarNames "int m_iCompetitiveRankingPredicted_Tie"
// MNetworkVarNames "int m_nEndMatchNextMapVote"
// MNetworkVarNames "uint16 m_unActiveQuestId"
// MNetworkVarNames "QuestProgress::Reason m_nQuestProgressReason"
// MNetworkVarNames "uint32 m_unPlayerTvControlFlags"
// MNetworkVarNames "int m_nDisconnectionTick"
// MNetworkVarNames "bool m_bControllingBot"
// MNetworkVarNames "bool m_bHasControlledBotThisRound"
// MNetworkVarNames "bool m_bCanControlObservedBot"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPlayerPawn"
// MNetworkVarNames "CHandle< CCSObserverPawn> m_hObserverPawn"
// MNetworkVarNames "bool m_bPawnIsAlive"
// MNetworkVarNames "uint32 m_iPawnHealth"
// MNetworkVarNames "int m_iPawnArmor"
// MNetworkVarNames "bool m_bPawnHasDefuser"
// MNetworkVarNames "bool m_bPawnHasHelmet"
// MNetworkVarNames "item_definition_index_t m_nPawnCharacterDefIndex"
// MNetworkVarNames "int m_iPawnLifetimeStart"
// MNetworkVarNames "int m_iPawnLifetimeEnd"
// MNetworkVarNames "int m_iPawnBotDifficulty"
// MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalControllerOfCurrentPawn"
// MNetworkVarNames "int32 m_iScore"
// MNetworkVarNames "EKillTypes_t m_vecKills"
// MNetworkVarNames "bool m_bMvpNoMusic"
// MNetworkVarNames "int m_eMvpReason"
// MNetworkVarNames "int m_iMusicKitID"
// MNetworkVarNames "int m_iMusicKitMVPs"
// MNetworkVarNames "int m_iMVPs"
class CCSPlayerController : public CBasePlayerController
{
private:
	[[maybe_unused]] uint8_t __pad0710[0x10]; // 0x710
public:
	// MNetworkEnable
	CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x720	
	// MNetworkEnable
	CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x728	
	// MNetworkEnable
	CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x730	
	// MNetworkEnable
	CCSPlayerController_DamageServices* m_pDamageServices; // 0x738	
	// MNetworkEnable
	uint32_t m_iPing; // 0x740	
	// MNetworkEnable
	bool m_bHasCommunicationAbuseMute; // 0x744	
private:
	[[maybe_unused]] uint8_t __pad0745[0x3]; // 0x745
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szCrosshairCodes; // 0x748	
	// MNetworkEnable
	uint8_t m_iPendingTeamNum; // 0x750	
private:
	[[maybe_unused]] uint8_t __pad0751[0x3]; // 0x751
public:
	// MNetworkEnable
	GameTime_t m_flForceTeamTime; // 0x754	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCompTeammateColorChanged"
	int32_t m_iCompTeammateColor; // 0x758	
	// MNetworkEnable
	bool m_bEverPlayedOnTeam; // 0x75c	
private:
	[[maybe_unused]] uint8_t __pad075d[0x3]; // 0x75d
public:
	GameTime_t m_flPreviousForceJoinTeamTime; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad0764[0x4]; // 0x764
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szClan; // 0x768	
	CUtlString m_sSanitizedPlayerName; // 0x770	
	// MNetworkEnable
	int32_t m_iCoachingTeam; // 0x778	
private:
	[[maybe_unused]] uint8_t __pad077c[0x4]; // 0x77c
public:
	// MNetworkEnable
	uint64_t m_nPlayerDominated; // 0x780	
	// MNetworkEnable
	uint64_t m_nPlayerDominatingMe; // 0x788	
	// MNetworkEnable
	int32_t m_iCompetitiveRanking; // 0x790	
	// MNetworkEnable
	int32_t m_iCompetitiveWins; // 0x794	
	// MNetworkEnable
	int8_t m_iCompetitiveRankType; // 0x798	
private:
	[[maybe_unused]] uint8_t __pad0799[0x3]; // 0x799
public:
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Win; // 0x79c	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Loss; // 0x7a0	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Tie; // 0x7a4	
	// MNetworkEnable
	int32_t m_nEndMatchNextMapVote; // 0x7a8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint16_t m_unActiveQuestId; // 0x7ac	
private:
	[[maybe_unused]] uint8_t __pad07ae[0x2]; // 0x7ae
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QuestProgress::Reason m_nQuestProgressReason; // 0x7b0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_unPlayerTvControlFlags; // 0x7b4	
private:
	[[maybe_unused]] uint8_t __pad07b8[0x28]; // 0x7b8
public:
	int32_t m_iDraftIndex; // 0x7e0	
	uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7e4	
	uint32_t m_uiAbandonRecordedReason; // 0x7e8	
	bool m_bCannotBeKicked; // 0x7ec	
	bool m_bEverFullyConnected; // 0x7ed	
	bool m_bAbandonAllowsSurrender; // 0x7ee	
	bool m_bAbandonOffersInstantSurrender; // 0x7ef	
	bool m_bDisconnection1MinWarningPrinted; // 0x7f0	
	bool m_bScoreReported; // 0x7f1	
private:
	[[maybe_unused]] uint8_t __pad07f2[0x2]; // 0x7f2
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nDisconnectionTick; // 0x7f4	
private:
	[[maybe_unused]] uint8_t __pad07f8[0x8]; // 0x7f8
public:
	// MNetworkEnable
	bool m_bControllingBot; // 0x800	
	// MNetworkEnable
	bool m_bHasControlledBotThisRound; // 0x801	
	bool m_bHasBeenControlledByPlayerThisRound; // 0x802	
private:
	[[maybe_unused]] uint8_t __pad0803[0x1]; // 0x803
public:
	int32_t m_nBotsControlledThisRound; // 0x804	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bCanControlObservedBot; // 0x808	
private:
	[[maybe_unused]] uint8_t __pad0809[0x3]; // 0x809
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_hPlayerPawn; // 0x80c	
	// MNetworkEnable
	CHandle< C_CSObserverPawn > m_hObserverPawn; // 0x810	
	// MNetworkEnable
	bool m_bPawnIsAlive; // 0x814	
private:
	[[maybe_unused]] uint8_t __pad0815[0x3]; // 0x815
public:
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	uint32_t m_iPawnHealth; // 0x818	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iPawnArmor; // 0x81c	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasDefuser; // 0x820	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasHelmet; // 0x821	
	// MNetworkEnable
	uint16_t m_nPawnCharacterDefIndex; // 0x822	
	// MNetworkEnable
	int32_t m_iPawnLifetimeStart; // 0x824	
	// MNetworkEnable
	int32_t m_iPawnLifetimeEnd; // 0x828	
	// MNetworkEnable
	int32_t m_iPawnBotDifficulty; // 0x82c	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // 0x830	
	// MNetworkEnable
	int32_t m_iScore; // 0x834	
	// MNetworkEnable
	C_NetworkUtlVectorBase< EKillTypes_t > m_vecKills; // 0x838	
	// MNetworkEnable
	bool m_bMvpNoMusic; // 0x850	
private:
	[[maybe_unused]] uint8_t __pad0851[0x3]; // 0x851
public:
	// MNetworkEnable
	int32_t m_eMvpReason; // 0x854	
	// MNetworkEnable
	int32_t m_iMusicKitID; // 0x858	
	// MNetworkEnable
	int32_t m_iMusicKitMVPs; // 0x85c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMVPCountChanged"
	int32_t m_iMVPs; // 0x860	
	bool m_bIsPlayerNameDirty; // 0x864	
};

