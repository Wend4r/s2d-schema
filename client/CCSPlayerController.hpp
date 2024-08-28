#pragma once

#include <cstdint>

struct CCSPlayerController_InGameMoneyServices;
struct CCSPlayerController_InventoryServices;
struct CCSPlayerController_ActionTrackingServices;
struct CCSPlayerController_DamageServices;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x848
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
	[[maybe_unused]] uint8_t __pad06f0[0x10]; // 0x6f0
public:
	// MNetworkEnable
	CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x700	
	// MNetworkEnable
	CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x708	
	// MNetworkEnable
	CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x710	
	// MNetworkEnable
	CCSPlayerController_DamageServices* m_pDamageServices; // 0x718	
	// MNetworkEnable
	uint32_t m_iPing; // 0x720	
	// MNetworkEnable
	bool m_bHasCommunicationAbuseMute; // 0x724	
private:
	[[maybe_unused]] uint8_t __pad0725[0x3]; // 0x725
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szCrosshairCodes; // 0x728	
	// MNetworkEnable
	uint8_t m_iPendingTeamNum; // 0x730	
private:
	[[maybe_unused]] uint8_t __pad0731[0x3]; // 0x731
public:
	// MNetworkEnable
	GameTime_t m_flForceTeamTime; // 0x734	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCompTeammateColorChanged"
	int32_t m_iCompTeammateColor; // 0x738	
	// MNetworkEnable
	bool m_bEverPlayedOnTeam; // 0x73c	
private:
	[[maybe_unused]] uint8_t __pad073d[0x3]; // 0x73d
public:
	GameTime_t m_flPreviousForceJoinTeamTime; // 0x740	
private:
	[[maybe_unused]] uint8_t __pad0744[0x4]; // 0x744
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szClan; // 0x748	
	CUtlString m_sSanitizedPlayerName; // 0x750	
	// MNetworkEnable
	int32_t m_iCoachingTeam; // 0x758	
private:
	[[maybe_unused]] uint8_t __pad075c[0x4]; // 0x75c
public:
	// MNetworkEnable
	uint64_t m_nPlayerDominated; // 0x760	
	// MNetworkEnable
	uint64_t m_nPlayerDominatingMe; // 0x768	
	// MNetworkEnable
	int32_t m_iCompetitiveRanking; // 0x770	
	// MNetworkEnable
	int32_t m_iCompetitiveWins; // 0x774	
	// MNetworkEnable
	int8_t m_iCompetitiveRankType; // 0x778	
private:
	[[maybe_unused]] uint8_t __pad0779[0x3]; // 0x779
public:
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Win; // 0x77c	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Loss; // 0x780	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Tie; // 0x784	
	// MNetworkEnable
	int32_t m_nEndMatchNextMapVote; // 0x788	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint16_t m_unActiveQuestId; // 0x78c	
private:
	[[maybe_unused]] uint8_t __pad078e[0x2]; // 0x78e
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QuestProgress::Reason m_nQuestProgressReason; // 0x790	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_unPlayerTvControlFlags; // 0x794	
private:
	[[maybe_unused]] uint8_t __pad0798[0x28]; // 0x798
public:
	int32_t m_iDraftIndex; // 0x7c0	
	uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7c4	
	uint32_t m_uiAbandonRecordedReason; // 0x7c8	
	bool m_bCannotBeKicked; // 0x7cc	
	bool m_bEverFullyConnected; // 0x7cd	
	bool m_bAbandonAllowsSurrender; // 0x7ce	
	bool m_bAbandonOffersInstantSurrender; // 0x7cf	
	bool m_bDisconnection1MinWarningPrinted; // 0x7d0	
	bool m_bScoreReported; // 0x7d1	
private:
	[[maybe_unused]] uint8_t __pad07d2[0x2]; // 0x7d2
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nDisconnectionTick; // 0x7d4	
private:
	[[maybe_unused]] uint8_t __pad07d8[0x8]; // 0x7d8
public:
	// MNetworkEnable
	bool m_bControllingBot; // 0x7e0	
	// MNetworkEnable
	bool m_bHasControlledBotThisRound; // 0x7e1	
	bool m_bHasBeenControlledByPlayerThisRound; // 0x7e2	
private:
	[[maybe_unused]] uint8_t __pad07e3[0x1]; // 0x7e3
public:
	int32_t m_nBotsControlledThisRound; // 0x7e4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bCanControlObservedBot; // 0x7e8	
private:
	[[maybe_unused]] uint8_t __pad07e9[0x3]; // 0x7e9
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_hPlayerPawn; // 0x7ec	
	// MNetworkEnable
	CHandle< C_CSObserverPawn > m_hObserverPawn; // 0x7f0	
	// MNetworkEnable
	bool m_bPawnIsAlive; // 0x7f4	
private:
	[[maybe_unused]] uint8_t __pad07f5[0x3]; // 0x7f5
public:
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	uint32_t m_iPawnHealth; // 0x7f8	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iPawnArmor; // 0x7fc	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasDefuser; // 0x800	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasHelmet; // 0x801	
	// MNetworkEnable
	uint16_t m_nPawnCharacterDefIndex; // 0x802	
	// MNetworkEnable
	int32_t m_iPawnLifetimeStart; // 0x804	
	// MNetworkEnable
	int32_t m_iPawnLifetimeEnd; // 0x808	
	// MNetworkEnable
	int32_t m_iPawnBotDifficulty; // 0x80c	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // 0x810	
	// MNetworkEnable
	int32_t m_iScore; // 0x814	
	// MNetworkEnable
	C_NetworkUtlVectorBase< EKillTypes_t > m_vecKills; // 0x818	
	// MNetworkEnable
	bool m_bMvpNoMusic; // 0x830	
private:
	[[maybe_unused]] uint8_t __pad0831[0x3]; // 0x831
public:
	// MNetworkEnable
	int32_t m_eMvpReason; // 0x834	
	// MNetworkEnable
	int32_t m_iMusicKitID; // 0x838	
	// MNetworkEnable
	int32_t m_iMusicKitMVPs; // 0x83c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMVPCountChanged"
	int32_t m_iMVPs; // 0x840	
	bool m_bIsPlayerNameDirty; // 0x844	
};

