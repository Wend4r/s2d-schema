#pragma once

#include <cstdint>

struct CCSPlayerController_InGameMoneyServices;
struct CCSPlayerController_InventoryServices;
struct CCSPlayerController_ActionTrackingServices;
struct CCSPlayerController_DamageServices;
struct GameTime_t;
struct IntervalTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xfa90
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
	[[maybe_unused]] uint8_t __pad0778[0x10]; // 0x778
public:
	// MNetworkEnable
	CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x788	
	// MNetworkEnable
	CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x790	
	// MNetworkEnable
	CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x798	
	// MNetworkEnable
	CCSPlayerController_DamageServices* m_pDamageServices; // 0x7a0	
	// MNetworkEnable
	uint32_t m_iPing; // 0x7a8	
	// MNetworkEnable
	bool m_bHasCommunicationAbuseMute; // 0x7ac	
private:
	[[maybe_unused]] uint8_t __pad07ad[0x3]; // 0x7ad
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szCrosshairCodes; // 0x7b0	
	// MNetworkEnable
	uint8_t m_iPendingTeamNum; // 0x7b8	
private:
	[[maybe_unused]] uint8_t __pad07b9[0x3]; // 0x7b9
public:
	// MNetworkEnable
	GameTime_t m_flForceTeamTime; // 0x7bc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCompTeammateColorChanged"
	int32_t m_iCompTeammateColor; // 0x7c0	
	// MNetworkEnable
	bool m_bEverPlayedOnTeam; // 0x7c4	
	bool m_bAttemptedToGetColor; // 0x7c5	
private:
	[[maybe_unused]] uint8_t __pad07c6[0x2]; // 0x7c6
public:
	int32_t m_iTeammatePreferredColor; // 0x7c8	
	bool m_bTeamChanged; // 0x7cc	
	bool m_bInSwitchTeam; // 0x7cd	
	bool m_bHasSeenJoinGame; // 0x7ce	
	bool m_bJustBecameSpectator; // 0x7cf	
	bool m_bSwitchTeamsOnNextRoundReset; // 0x7d0	
	bool m_bRemoveAllItemsOnNextRoundReset; // 0x7d1	
private:
	[[maybe_unused]] uint8_t __pad07d2[0x6]; // 0x7d2
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szClan; // 0x7d8	
	char m_szClanName[32]; // 0x7e0	
	// MNetworkEnable
	int32_t m_iCoachingTeam; // 0x800	
private:
	[[maybe_unused]] uint8_t __pad0804[0x4]; // 0x804
public:
	// MNetworkEnable
	uint64_t m_nPlayerDominated; // 0x808	
	// MNetworkEnable
	uint64_t m_nPlayerDominatingMe; // 0x810	
	// MNetworkEnable
	int32_t m_iCompetitiveRanking; // 0x818	
	// MNetworkEnable
	int32_t m_iCompetitiveWins; // 0x81c	
	// MNetworkEnable
	int8_t m_iCompetitiveRankType; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0821[0x3]; // 0x821
public:
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Win; // 0x824	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Loss; // 0x828	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Tie; // 0x82c	
	// MNetworkEnable
	int32_t m_nEndMatchNextMapVote; // 0x830	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint16_t m_unActiveQuestId; // 0x834	
private:
	[[maybe_unused]] uint8_t __pad0836[0x2]; // 0x836
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QuestProgress::Reason m_nQuestProgressReason; // 0x838	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_unPlayerTvControlFlags; // 0x83c	
private:
	[[maybe_unused]] uint8_t __pad0840[0x28]; // 0x840
public:
	int32_t m_iDraftIndex; // 0x868	
	uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x86c	
	uint32_t m_uiAbandonRecordedReason; // 0x870	
	bool m_bCannotBeKicked; // 0x874	
	bool m_bEverFullyConnected; // 0x875	
	bool m_bAbandonAllowsSurrender; // 0x876	
	bool m_bAbandonOffersInstantSurrender; // 0x877	
	bool m_bDisconnection1MinWarningPrinted; // 0x878	
	bool m_bScoreReported; // 0x879	
private:
	[[maybe_unused]] uint8_t __pad087a[0x2]; // 0x87a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nDisconnectionTick; // 0x87c	
private:
	[[maybe_unused]] uint8_t __pad0880[0x8]; // 0x880
public:
	// MNetworkEnable
	bool m_bControllingBot; // 0x888	
	// MNetworkEnable
	bool m_bHasControlledBotThisRound; // 0x889	
	bool m_bHasBeenControlledByPlayerThisRound; // 0x88a	
private:
	[[maybe_unused]] uint8_t __pad088b[0x1]; // 0x88b
public:
	int32_t m_nBotsControlledThisRound; // 0x88c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bCanControlObservedBot; // 0x890	
private:
	[[maybe_unused]] uint8_t __pad0891[0x3]; // 0x891
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hPlayerPawn; // 0x894	
	// MNetworkEnable
	CHandle< CCSObserverPawn > m_hObserverPawn; // 0x898	
	int32_t m_DesiredObserverMode; // 0x89c	
	CEntityHandle m_hDesiredObserverTarget; // 0x8a0	
	// MNetworkEnable
	bool m_bPawnIsAlive; // 0x8a4	
private:
	[[maybe_unused]] uint8_t __pad08a5[0x3]; // 0x8a5
public:
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	uint32_t m_iPawnHealth; // 0x8a8	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iPawnArmor; // 0x8ac	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasDefuser; // 0x8b0	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasHelmet; // 0x8b1	
	// MNetworkEnable
	uint16_t m_nPawnCharacterDefIndex; // 0x8b2	
	// MNetworkEnable
	int32_t m_iPawnLifetimeStart; // 0x8b4	
	// MNetworkEnable
	int32_t m_iPawnLifetimeEnd; // 0x8b8	
	// MNetworkEnable
	int32_t m_iPawnBotDifficulty; // 0x8bc	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // 0x8c0	
	// MNetworkEnable
	int32_t m_iScore; // 0x8c4	
	int32_t m_iRoundScore; // 0x8c8	
	int32_t m_iRoundsWon; // 0x8cc	
	// MNetworkEnable
	CNetworkUtlVectorBase< EKillTypes_t > m_vecKills; // 0x8d0	
	// MNetworkEnable
	bool m_bMvpNoMusic; // 0x8e8	
private:
	[[maybe_unused]] uint8_t __pad08e9[0x3]; // 0x8e9
public:
	// MNetworkEnable
	int32_t m_eMvpReason; // 0x8ec	
	// MNetworkEnable
	int32_t m_iMusicKitID; // 0x8f0	
	// MNetworkEnable
	int32_t m_iMusicKitMVPs; // 0x8f4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMVPCountChanged"
	int32_t m_iMVPs; // 0x8f8	
	int32_t m_nUpdateCounter; // 0x8fc	
	float m_flSmoothedPing; // 0x900	
private:
	[[maybe_unused]] uint8_t __pad0904[0xf0a4]; // 0x904
public:
	IntervalTimer m_lastHeldVoteTimer; // 0xf9a8	
private:
	[[maybe_unused]] uint8_t __padf9b8[0x8]; // 0xf9b8
public:
	bool m_bShowHints; // 0xf9c0	
private:
	[[maybe_unused]] uint8_t __padf9c1[0x3]; // 0xf9c1
public:
	int32_t m_iNextTimeCheck; // 0xf9c4	
	bool m_bJustDidTeamKill; // 0xf9c8	
	bool m_bPunishForTeamKill; // 0xf9c9	
	bool m_bGaveTeamDamageWarning; // 0xf9ca	
	bool m_bGaveTeamDamageWarningThisRound; // 0xf9cb	
private:
	[[maybe_unused]] uint8_t __padf9cc[0x4]; // 0xf9cc
public:
	double m_dblLastReceivedPacketPlatFloatTime; // 0xf9d0	
	GameTime_t m_LastTeamDamageWarningTime; // 0xf9d8	
	GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // 0xf9dc	
	uint32_t m_nSuspiciousHitCount; // 0xf9e0	
	uint32_t m_nNonSuspiciousHitStreak; // 0xf9e4	
	
	// Datamap fields:
	// void CCSPlayerControllerPlayerForceTeamThink; // 0x0
	// void CCSPlayerControllerResetForceTeamThink; // 0x0
	// void CCSPlayerControllerResourceDataThink; // 0x0
	// void CCSPlayerControllerInventoryUpdateThink; // 0x0
};

