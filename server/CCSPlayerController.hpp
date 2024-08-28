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
// Size: 0xf9c8
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
	[[maybe_unused]] uint8_t __pad0758[0x10]; // 0x758
public:
	// MNetworkEnable
	CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x768	
	// MNetworkEnable
	CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x770	
	// MNetworkEnable
	CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x778	
	// MNetworkEnable
	CCSPlayerController_DamageServices* m_pDamageServices; // 0x780	
	// MNetworkEnable
	uint32_t m_iPing; // 0x788	
	// MNetworkEnable
	bool m_bHasCommunicationAbuseMute; // 0x78c	
private:
	[[maybe_unused]] uint8_t __pad078d[0x3]; // 0x78d
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szCrosshairCodes; // 0x790	
	// MNetworkEnable
	uint8_t m_iPendingTeamNum; // 0x798	
private:
	[[maybe_unused]] uint8_t __pad0799[0x3]; // 0x799
public:
	// MNetworkEnable
	GameTime_t m_flForceTeamTime; // 0x79c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCompTeammateColorChanged"
	int32_t m_iCompTeammateColor; // 0x7a0	
	// MNetworkEnable
	bool m_bEverPlayedOnTeam; // 0x7a4	
	bool m_bAttemptedToGetColor; // 0x7a5	
private:
	[[maybe_unused]] uint8_t __pad07a6[0x2]; // 0x7a6
public:
	int32_t m_iTeammatePreferredColor; // 0x7a8	
	bool m_bTeamChanged; // 0x7ac	
	bool m_bInSwitchTeam; // 0x7ad	
	bool m_bHasSeenJoinGame; // 0x7ae	
	bool m_bJustBecameSpectator; // 0x7af	
	bool m_bSwitchTeamsOnNextRoundReset; // 0x7b0	
	bool m_bRemoveAllItemsOnNextRoundReset; // 0x7b1	
private:
	[[maybe_unused]] uint8_t __pad07b2[0x6]; // 0x7b2
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szClan; // 0x7b8	
	char m_szClanName[32]; // 0x7c0	
	// MNetworkEnable
	int32_t m_iCoachingTeam; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; // 0x7e4
public:
	// MNetworkEnable
	uint64_t m_nPlayerDominated; // 0x7e8	
	// MNetworkEnable
	uint64_t m_nPlayerDominatingMe; // 0x7f0	
	// MNetworkEnable
	int32_t m_iCompetitiveRanking; // 0x7f8	
	// MNetworkEnable
	int32_t m_iCompetitiveWins; // 0x7fc	
	// MNetworkEnable
	int8_t m_iCompetitiveRankType; // 0x800	
private:
	[[maybe_unused]] uint8_t __pad0801[0x3]; // 0x801
public:
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Win; // 0x804	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Loss; // 0x808	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Tie; // 0x80c	
	// MNetworkEnable
	int32_t m_nEndMatchNextMapVote; // 0x810	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint16_t m_unActiveQuestId; // 0x814	
private:
	[[maybe_unused]] uint8_t __pad0816[0x2]; // 0x816
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QuestProgress::Reason m_nQuestProgressReason; // 0x818	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_unPlayerTvControlFlags; // 0x81c	
private:
	[[maybe_unused]] uint8_t __pad0820[0x28]; // 0x820
public:
	int32_t m_iDraftIndex; // 0x848	
	uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x84c	
	uint32_t m_uiAbandonRecordedReason; // 0x850	
	bool m_bCannotBeKicked; // 0x854	
	bool m_bEverFullyConnected; // 0x855	
	bool m_bAbandonAllowsSurrender; // 0x856	
	bool m_bAbandonOffersInstantSurrender; // 0x857	
	bool m_bDisconnection1MinWarningPrinted; // 0x858	
	bool m_bScoreReported; // 0x859	
private:
	[[maybe_unused]] uint8_t __pad085a[0x2]; // 0x85a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nDisconnectionTick; // 0x85c	
private:
	[[maybe_unused]] uint8_t __pad0860[0x8]; // 0x860
public:
	// MNetworkEnable
	bool m_bControllingBot; // 0x868	
	// MNetworkEnable
	bool m_bHasControlledBotThisRound; // 0x869	
	bool m_bHasBeenControlledByPlayerThisRound; // 0x86a	
private:
	[[maybe_unused]] uint8_t __pad086b[0x1]; // 0x86b
public:
	int32_t m_nBotsControlledThisRound; // 0x86c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bCanControlObservedBot; // 0x870	
private:
	[[maybe_unused]] uint8_t __pad0871[0x3]; // 0x871
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hPlayerPawn; // 0x874	
	// MNetworkEnable
	CHandle< CCSObserverPawn > m_hObserverPawn; // 0x878	
	int32_t m_DesiredObserverMode; // 0x87c	
	CEntityHandle m_hDesiredObserverTarget; // 0x880	
	// MNetworkEnable
	bool m_bPawnIsAlive; // 0x884	
private:
	[[maybe_unused]] uint8_t __pad0885[0x3]; // 0x885
public:
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	uint32_t m_iPawnHealth; // 0x888	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iPawnArmor; // 0x88c	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasDefuser; // 0x890	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasHelmet; // 0x891	
	// MNetworkEnable
	uint16_t m_nPawnCharacterDefIndex; // 0x892	
	// MNetworkEnable
	int32_t m_iPawnLifetimeStart; // 0x894	
	// MNetworkEnable
	int32_t m_iPawnLifetimeEnd; // 0x898	
	// MNetworkEnable
	int32_t m_iPawnBotDifficulty; // 0x89c	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // 0x8a0	
	// MNetworkEnable
	int32_t m_iScore; // 0x8a4	
	int32_t m_iRoundScore; // 0x8a8	
	int32_t m_iRoundsWon; // 0x8ac	
	// MNetworkEnable
	CNetworkUtlVectorBase< EKillTypes_t > m_vecKills; // 0x8b0	
	// MNetworkEnable
	bool m_bMvpNoMusic; // 0x8c8	
private:
	[[maybe_unused]] uint8_t __pad08c9[0x3]; // 0x8c9
public:
	// MNetworkEnable
	int32_t m_eMvpReason; // 0x8cc	
	// MNetworkEnable
	int32_t m_iMusicKitID; // 0x8d0	
	// MNetworkEnable
	int32_t m_iMusicKitMVPs; // 0x8d4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMVPCountChanged"
	int32_t m_iMVPs; // 0x8d8	
	int32_t m_nUpdateCounter; // 0x8dc	
	float m_flSmoothedPing; // 0x8e0	
private:
	[[maybe_unused]] uint8_t __pad08e4[0xf0a4]; // 0x8e4
public:
	IntervalTimer m_lastHeldVoteTimer; // 0xf988	
private:
	[[maybe_unused]] uint8_t __padf998[0x8]; // 0xf998
public:
	bool m_bShowHints; // 0xf9a0	
private:
	[[maybe_unused]] uint8_t __padf9a1[0x3]; // 0xf9a1
public:
	int32_t m_iNextTimeCheck; // 0xf9a4	
	bool m_bJustDidTeamKill; // 0xf9a8	
	bool m_bPunishForTeamKill; // 0xf9a9	
	bool m_bGaveTeamDamageWarning; // 0xf9aa	
	bool m_bGaveTeamDamageWarningThisRound; // 0xf9ab	
private:
	[[maybe_unused]] uint8_t __padf9ac[0x4]; // 0xf9ac
public:
	double m_dblLastReceivedPacketPlatFloatTime; // 0xf9b0	
	GameTime_t m_LastTeamDamageWarningTime; // 0xf9b8	
	GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // 0xf9bc	
	uint32_t m_nSuspiciousHitCount; // 0xf9c0	
	uint32_t m_nNonSuspiciousHitStreak; // 0xf9c4	
	
	// Datamap fields:
	// void CCSPlayerControllerPlayerForceTeamThink; // 0x0
	// void CCSPlayerControllerResetForceTeamThink; // 0x0
	// void CCSPlayerControllerResourceDataThink; // 0x0
	// void CCSPlayerControllerInventoryUpdateThink; // 0x0
};

