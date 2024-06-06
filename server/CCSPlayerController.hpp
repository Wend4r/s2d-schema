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
// Size: 0xf928
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
	[[maybe_unused]] uint8_t __pad06b8[0x10]; // 0x6b8
public:
	// MNetworkEnable
	CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x6c8	
	// MNetworkEnable
	CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x6d0	
	// MNetworkEnable
	CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x6d8	
	// MNetworkEnable
	CCSPlayerController_DamageServices* m_pDamageServices; // 0x6e0	
	// MNetworkEnable
	uint32_t m_iPing; // 0x6e8	
	// MNetworkEnable
	bool m_bHasCommunicationAbuseMute; // 0x6ec	
private:
	[[maybe_unused]] uint8_t __pad06ed[0x3]; // 0x6ed
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szCrosshairCodes; // 0x6f0	
	// MNetworkEnable
	uint8_t m_iPendingTeamNum; // 0x6f8	
private:
	[[maybe_unused]] uint8_t __pad06f9[0x3]; // 0x6f9
public:
	// MNetworkEnable
	GameTime_t m_flForceTeamTime; // 0x6fc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCompTeammateColorChanged"
	int32_t m_iCompTeammateColor; // 0x700	
	// MNetworkEnable
	bool m_bEverPlayedOnTeam; // 0x704	
	bool m_bAttemptedToGetColor; // 0x705	
private:
	[[maybe_unused]] uint8_t __pad0706[0x2]; // 0x706
public:
	int32_t m_iTeammatePreferredColor; // 0x708	
	bool m_bTeamChanged; // 0x70c	
	bool m_bInSwitchTeam; // 0x70d	
	bool m_bHasSeenJoinGame; // 0x70e	
	bool m_bJustBecameSpectator; // 0x70f	
	bool m_bSwitchTeamsOnNextRoundReset; // 0x710	
	bool m_bRemoveAllItemsOnNextRoundReset; // 0x711	
private:
	[[maybe_unused]] uint8_t __pad0712[0x6]; // 0x712
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szClan; // 0x718	
	char m_szClanName[32]; // 0x720	
	// MNetworkEnable
	int32_t m_iCoachingTeam; // 0x740	
private:
	[[maybe_unused]] uint8_t __pad0744[0x4]; // 0x744
public:
	// MNetworkEnable
	uint64_t m_nPlayerDominated; // 0x748	
	// MNetworkEnable
	uint64_t m_nPlayerDominatingMe; // 0x750	
	// MNetworkEnable
	int32_t m_iCompetitiveRanking; // 0x758	
	// MNetworkEnable
	int32_t m_iCompetitiveWins; // 0x75c	
	// MNetworkEnable
	int8_t m_iCompetitiveRankType; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad0761[0x3]; // 0x761
public:
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Win; // 0x764	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Loss; // 0x768	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Tie; // 0x76c	
	// MNetworkEnable
	int32_t m_nEndMatchNextMapVote; // 0x770	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint16_t m_unActiveQuestId; // 0x774	
private:
	[[maybe_unused]] uint8_t __pad0776[0x2]; // 0x776
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QuestProgress::Reason m_nQuestProgressReason; // 0x778	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_unPlayerTvControlFlags; // 0x77c	
private:
	[[maybe_unused]] uint8_t __pad0780[0x28]; // 0x780
public:
	int32_t m_iDraftIndex; // 0x7a8	
	uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7ac	
	uint32_t m_uiAbandonRecordedReason; // 0x7b0	
	bool m_bCannotBeKicked; // 0x7b4	
	bool m_bEverFullyConnected; // 0x7b5	
	bool m_bAbandonAllowsSurrender; // 0x7b6	
	bool m_bAbandonOffersInstantSurrender; // 0x7b7	
	bool m_bDisconnection1MinWarningPrinted; // 0x7b8	
	bool m_bScoreReported; // 0x7b9	
private:
	[[maybe_unused]] uint8_t __pad07ba[0x2]; // 0x7ba
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nDisconnectionTick; // 0x7bc	
private:
	[[maybe_unused]] uint8_t __pad07c0[0x8]; // 0x7c0
public:
	// MNetworkEnable
	bool m_bControllingBot; // 0x7c8	
	// MNetworkEnable
	bool m_bHasControlledBotThisRound; // 0x7c9	
	bool m_bHasBeenControlledByPlayerThisRound; // 0x7ca	
private:
	[[maybe_unused]] uint8_t __pad07cb[0x1]; // 0x7cb
public:
	int32_t m_nBotsControlledThisRound; // 0x7cc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bCanControlObservedBot; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d1[0x3]; // 0x7d1
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hPlayerPawn; // 0x7d4	
	// MNetworkEnable
	CHandle< CCSObserverPawn > m_hObserverPawn; // 0x7d8	
	int32_t m_DesiredObserverMode; // 0x7dc	
	CEntityHandle m_hDesiredObserverTarget; // 0x7e0	
	// MNetworkEnable
	bool m_bPawnIsAlive; // 0x7e4	
private:
	[[maybe_unused]] uint8_t __pad07e5[0x3]; // 0x7e5
public:
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	uint32_t m_iPawnHealth; // 0x7e8	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iPawnArmor; // 0x7ec	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasDefuser; // 0x7f0	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasHelmet; // 0x7f1	
	// MNetworkEnable
	uint16_t m_nPawnCharacterDefIndex; // 0x7f2	
	// MNetworkEnable
	int32_t m_iPawnLifetimeStart; // 0x7f4	
	// MNetworkEnable
	int32_t m_iPawnLifetimeEnd; // 0x7f8	
	// MNetworkEnable
	int32_t m_iPawnBotDifficulty; // 0x7fc	
	// MNetworkEnable
	CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // 0x800	
	// MNetworkEnable
	int32_t m_iScore; // 0x804	
	int32_t m_iRoundScore; // 0x808	
	int32_t m_iRoundsWon; // 0x80c	
	// MNetworkEnable
	CNetworkUtlVectorBase< EKillTypes_t > m_vecKills; // 0x810	
	// MNetworkEnable
	bool m_bMvpNoMusic; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad0829[0x3]; // 0x829
public:
	// MNetworkEnable
	int32_t m_eMvpReason; // 0x82c	
	// MNetworkEnable
	int32_t m_iMusicKitID; // 0x830	
	// MNetworkEnable
	int32_t m_iMusicKitMVPs; // 0x834	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMVPCountChanged"
	int32_t m_iMVPs; // 0x838	
	int32_t m_nUpdateCounter; // 0x83c	
	float m_flSmoothedPing; // 0x840	
private:
	[[maybe_unused]] uint8_t __pad0844[0xf0a4]; // 0x844
public:
	IntervalTimer m_lastHeldVoteTimer; // 0xf8e8	
private:
	[[maybe_unused]] uint8_t __padf8f8[0x8]; // 0xf8f8
public:
	bool m_bShowHints; // 0xf900	
private:
	[[maybe_unused]] uint8_t __padf901[0x3]; // 0xf901
public:
	int32_t m_iNextTimeCheck; // 0xf904	
	bool m_bJustDidTeamKill; // 0xf908	
	bool m_bPunishForTeamKill; // 0xf909	
	bool m_bGaveTeamDamageWarning; // 0xf90a	
	bool m_bGaveTeamDamageWarningThisRound; // 0xf90b	
private:
	[[maybe_unused]] uint8_t __padf90c[0x4]; // 0xf90c
public:
	double m_dblLastReceivedPacketPlatFloatTime; // 0xf910	
	GameTime_t m_LastTeamDamageWarningTime; // 0xf918	
	GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // 0xf91c	
	uint32_t m_nSuspiciousHitCount; // 0xf920	
	uint32_t m_nNonSuspiciousHitStreak; // 0xf924	
	
	// Datamap fields:
	// void CCSPlayerControllerPlayerForceTeamThink; // 0x0
	// void CCSPlayerControllerResetForceTeamThink; // 0x0
	// void CCSPlayerControllerResourceDataThink; // 0x0
	// void CCSPlayerControllerInventoryUpdateThink; // 0x0
};

