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
// Size: 0xf9b8
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
	[[maybe_unused]] uint8_t __pad0748[0x10]; // 0x748
public:
	// MNetworkEnable
	CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x758	
	// MNetworkEnable
	CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x760	
	// MNetworkEnable
	CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x768	
	// MNetworkEnable
	CCSPlayerController_DamageServices* m_pDamageServices; // 0x770	
	// MNetworkEnable
	uint32_t m_iPing; // 0x778	
	// MNetworkEnable
	bool m_bHasCommunicationAbuseMute; // 0x77c	
private:
	[[maybe_unused]] uint8_t __pad077d[0x3]; // 0x77d
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szCrosshairCodes; // 0x780	
	// MNetworkEnable
	uint8_t m_iPendingTeamNum; // 0x788	
private:
	[[maybe_unused]] uint8_t __pad0789[0x3]; // 0x789
public:
	// MNetworkEnable
	GameTime_t m_flForceTeamTime; // 0x78c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCompTeammateColorChanged"
	int32_t m_iCompTeammateColor; // 0x790	
	// MNetworkEnable
	bool m_bEverPlayedOnTeam; // 0x794	
	bool m_bAttemptedToGetColor; // 0x795	
private:
	[[maybe_unused]] uint8_t __pad0796[0x2]; // 0x796
public:
	int32_t m_iTeammatePreferredColor; // 0x798	
	bool m_bTeamChanged; // 0x79c	
	bool m_bInSwitchTeam; // 0x79d	
	bool m_bHasSeenJoinGame; // 0x79e	
	bool m_bJustBecameSpectator; // 0x79f	
	bool m_bSwitchTeamsOnNextRoundReset; // 0x7a0	
	bool m_bRemoveAllItemsOnNextRoundReset; // 0x7a1	
private:
	[[maybe_unused]] uint8_t __pad07a2[0x6]; // 0x7a2
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szClan; // 0x7a8	
	char m_szClanName[32]; // 0x7b0	
	// MNetworkEnable
	int32_t m_iCoachingTeam; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d4[0x4]; // 0x7d4
public:
	// MNetworkEnable
	uint64_t m_nPlayerDominated; // 0x7d8	
	// MNetworkEnable
	uint64_t m_nPlayerDominatingMe; // 0x7e0	
	// MNetworkEnable
	int32_t m_iCompetitiveRanking; // 0x7e8	
	// MNetworkEnable
	int32_t m_iCompetitiveWins; // 0x7ec	
	// MNetworkEnable
	int8_t m_iCompetitiveRankType; // 0x7f0	
private:
	[[maybe_unused]] uint8_t __pad07f1[0x3]; // 0x7f1
public:
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Win; // 0x7f4	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Loss; // 0x7f8	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Tie; // 0x7fc	
	// MNetworkEnable
	int32_t m_nEndMatchNextMapVote; // 0x800	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint16_t m_unActiveQuestId; // 0x804	
private:
	[[maybe_unused]] uint8_t __pad0806[0x2]; // 0x806
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QuestProgress::Reason m_nQuestProgressReason; // 0x808	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_unPlayerTvControlFlags; // 0x80c	
private:
	[[maybe_unused]] uint8_t __pad0810[0x28]; // 0x810
public:
	int32_t m_iDraftIndex; // 0x838	
	uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x83c	
	uint32_t m_uiAbandonRecordedReason; // 0x840	
	bool m_bCannotBeKicked; // 0x844	
	bool m_bEverFullyConnected; // 0x845	
	bool m_bAbandonAllowsSurrender; // 0x846	
	bool m_bAbandonOffersInstantSurrender; // 0x847	
	bool m_bDisconnection1MinWarningPrinted; // 0x848	
	bool m_bScoreReported; // 0x849	
private:
	[[maybe_unused]] uint8_t __pad084a[0x2]; // 0x84a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nDisconnectionTick; // 0x84c	
private:
	[[maybe_unused]] uint8_t __pad0850[0x8]; // 0x850
public:
	// MNetworkEnable
	bool m_bControllingBot; // 0x858	
	// MNetworkEnable
	bool m_bHasControlledBotThisRound; // 0x859	
	bool m_bHasBeenControlledByPlayerThisRound; // 0x85a	
private:
	[[maybe_unused]] uint8_t __pad085b[0x1]; // 0x85b
public:
	int32_t m_nBotsControlledThisRound; // 0x85c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bCanControlObservedBot; // 0x860	
private:
	[[maybe_unused]] uint8_t __pad0861[0x3]; // 0x861
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hPlayerPawn; // 0x864	
	// MNetworkEnable
	CHandle< CCSObserverPawn > m_hObserverPawn; // 0x868	
	int32_t m_DesiredObserverMode; // 0x86c	
	CEntityHandle m_hDesiredObserverTarget; // 0x870	
	// MNetworkEnable
	bool m_bPawnIsAlive; // 0x874	
private:
	[[maybe_unused]] uint8_t __pad0875[0x3]; // 0x875
public:
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	uint32_t m_iPawnHealth; // 0x878	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iPawnArmor; // 0x87c	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasDefuser; // 0x880	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasHelmet; // 0x881	
	// MNetworkEnable
	uint16_t m_nPawnCharacterDefIndex; // 0x882	
	// MNetworkEnable
	int32_t m_iPawnLifetimeStart; // 0x884	
	// MNetworkEnable
	int32_t m_iPawnLifetimeEnd; // 0x888	
	// MNetworkEnable
	int32_t m_iPawnBotDifficulty; // 0x88c	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // 0x890	
	// MNetworkEnable
	int32_t m_iScore; // 0x894	
	int32_t m_iRoundScore; // 0x898	
	int32_t m_iRoundsWon; // 0x89c	
	// MNetworkEnable
	CNetworkUtlVectorBase< EKillTypes_t > m_vecKills; // 0x8a0	
	// MNetworkEnable
	bool m_bMvpNoMusic; // 0x8b8	
private:
	[[maybe_unused]] uint8_t __pad08b9[0x3]; // 0x8b9
public:
	// MNetworkEnable
	int32_t m_eMvpReason; // 0x8bc	
	// MNetworkEnable
	int32_t m_iMusicKitID; // 0x8c0	
	// MNetworkEnable
	int32_t m_iMusicKitMVPs; // 0x8c4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMVPCountChanged"
	int32_t m_iMVPs; // 0x8c8	
	int32_t m_nUpdateCounter; // 0x8cc	
	float m_flSmoothedPing; // 0x8d0	
private:
	[[maybe_unused]] uint8_t __pad08d4[0xf0a4]; // 0x8d4
public:
	IntervalTimer m_lastHeldVoteTimer; // 0xf978	
private:
	[[maybe_unused]] uint8_t __padf988[0x8]; // 0xf988
public:
	bool m_bShowHints; // 0xf990	
private:
	[[maybe_unused]] uint8_t __padf991[0x3]; // 0xf991
public:
	int32_t m_iNextTimeCheck; // 0xf994	
	bool m_bJustDidTeamKill; // 0xf998	
	bool m_bPunishForTeamKill; // 0xf999	
	bool m_bGaveTeamDamageWarning; // 0xf99a	
	bool m_bGaveTeamDamageWarningThisRound; // 0xf99b	
private:
	[[maybe_unused]] uint8_t __padf99c[0x4]; // 0xf99c
public:
	double m_dblLastReceivedPacketPlatFloatTime; // 0xf9a0	
	GameTime_t m_LastTeamDamageWarningTime; // 0xf9a8	
	GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // 0xf9ac	
	uint32_t m_nSuspiciousHitCount; // 0xf9b0	
	uint32_t m_nNonSuspiciousHitStreak; // 0xf9b4	
	
	// Datamap fields:
	// void CCSPlayerControllerPlayerForceTeamThink; // 0x0
	// void CCSPlayerControllerResetForceTeamThink; // 0x0
	// void CCSPlayerControllerResourceDataThink; // 0x0
	// void CCSPlayerControllerInventoryUpdateThink; // 0x0
};

