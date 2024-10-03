#pragma once

#include <cstdint>

struct GameTime_t;
struct CCSGameModeRules;
struct C_RetakeGameRules;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8f28
// Has VTable
// 
// MNetworkVarNames "bool m_bFreezePeriod"
// MNetworkVarNames "bool m_bWarmupPeriod"
// MNetworkVarNames "GameTime_t m_fWarmupPeriodEnd"
// MNetworkVarNames "GameTime_t m_fWarmupPeriodStart"
// MNetworkVarNames "bool m_bServerPaused"
// MNetworkVarNames "bool m_bTerroristTimeOutActive"
// MNetworkVarNames "bool m_bCTTimeOutActive"
// MNetworkVarNames "float m_flTerroristTimeOutRemaining"
// MNetworkVarNames "float m_flCTTimeOutRemaining"
// MNetworkVarNames "int m_nTerroristTimeOuts"
// MNetworkVarNames "int m_nCTTimeOuts"
// MNetworkVarNames "bool m_bTechnicalTimeOut"
// MNetworkVarNames "bool m_bMatchWaitingForResume"
// MNetworkVarNames "int m_iRoundTime"
// MNetworkVarNames "float m_fMatchStartTime"
// MNetworkVarNames "GameTime_t m_fRoundStartTime"
// MNetworkVarNames "GameTime_t m_flRestartRoundTime"
// MNetworkVarNames "bool m_bGameRestart"
// MNetworkVarNames "float m_flGameStartTime"
// MNetworkVarNames "float m_timeUntilNextPhaseStarts"
// MNetworkVarNames "int m_gamePhase"
// MNetworkVarNames "int m_totalRoundsPlayed"
// MNetworkVarNames "int m_nRoundsPlayedThisPhase"
// MNetworkVarNames "int m_nOvertimePlaying"
// MNetworkVarNames "int m_iHostagesRemaining"
// MNetworkVarNames "bool m_bAnyHostageReached"
// MNetworkVarNames "bool m_bMapHasBombTarget"
// MNetworkVarNames "bool m_bMapHasRescueZone"
// MNetworkVarNames "bool m_bMapHasBuyZone"
// MNetworkVarNames "bool m_bIsQueuedMatchmaking"
// MNetworkVarNames "int m_nQueuedMatchmakingMode"
// MNetworkVarNames "bool m_bIsValveDS"
// MNetworkVarNames "bool m_bLogoMap"
// MNetworkVarNames "bool m_bPlayAllStepSoundsOnServer"
// MNetworkVarNames "int m_iSpectatorSlotCount"
// MNetworkVarNames "int m_MatchDevice"
// MNetworkVarNames "bool m_bHasMatchStarted"
// MNetworkVarNames "int m_nNextMapInMapgroup"
// MNetworkVarNames "char m_szTournamentEventName"
// MNetworkVarNames "char m_szTournamentEventStage"
// MNetworkVarNames "char m_szMatchStatTxt"
// MNetworkVarNames "char m_szTournamentPredictionsTxt"
// MNetworkVarNames "int m_nTournamentPredictionsPct"
// MNetworkVarNames "GameTime_t m_flCMMItemDropRevealStartTime"
// MNetworkVarNames "GameTime_t m_flCMMItemDropRevealEndTime"
// MNetworkVarNames "bool m_bIsDroppingItems"
// MNetworkVarNames "bool m_bIsQuestEligible"
// MNetworkVarNames "bool m_bIsHltvActive"
// MNetworkVarNames "uint16 m_arrProhibitedItemIndices"
// MNetworkVarNames "uint32 m_arrTournamentActiveCasterAccounts"
// MNetworkVarNames "int m_numBestOfMaps"
// MNetworkVarNames "int m_nHalloweenMaskListSeed"
// MNetworkVarNames "bool m_bBombDropped"
// MNetworkVarNames "bool m_bBombPlanted"
// MNetworkVarNames "int m_iRoundWinStatus"
// MNetworkVarNames "int m_eRoundWinReason"
// MNetworkVarNames "bool m_bTCantBuy"
// MNetworkVarNames "bool m_bCTCantBuy"
// MNetworkVarNames "int m_iMatchStats_RoundResults"
// MNetworkVarNames "int m_iMatchStats_PlayersAlive_CT"
// MNetworkVarNames "int m_iMatchStats_PlayersAlive_T"
// MNetworkVarNames "float m_TeamRespawnWaveTimes"
// MNetworkVarNames "GameTime_t m_flNextRespawnWave"
// MNetworkVarNames "int m_nServerQuestID"
// MNetworkVarNames "Vector m_vMinimapMins"
// MNetworkVarNames "Vector m_vMinimapMaxs"
// MNetworkVarNames "float m_MinimapVerticalSectionHeights"
// MNetworkVarNames "int m_nEndMatchMapGroupVoteTypes"
// MNetworkVarNames "int m_nEndMatchMapGroupVoteOptions"
// MNetworkVarNames "int m_nEndMatchMapVoteWinner"
// MNetworkVarNames "int m_iNumConsecutiveCTLoses"
// MNetworkVarNames "int m_iNumConsecutiveTerroristLoses"
// MNetworkVarNames "int m_nMatchAbortedEarlyReason"
// MNetworkVarNames "CCSGameModeRules * m_pGameModeRules"
// MNetworkVarNames "CRetakeGameRules m_RetakeRules"
// MNetworkVarNames "uint8 m_nMatchEndCount"
// MNetworkVarNames "int m_nTTeamIntroVariant"
// MNetworkVarNames "int m_nCTTeamIntroVariant"
// MNetworkVarNames "bool m_bTeamIntroPeriod"
// MNetworkVarNames "int m_iRoundEndWinnerTeam"
// MNetworkVarNames "int m_eRoundEndReason"
// MNetworkVarNames "bool m_bRoundEndShowTimerDefend"
// MNetworkVarNames "int m_iRoundEndTimerTime"
// MNetworkVarNames "CUtlString m_sRoundEndFunFactToken"
// MNetworkVarNames "CPlayerSlot m_iRoundEndFunFactPlayerSlot"
// MNetworkVarNames "int m_iRoundEndFunFactData1"
// MNetworkVarNames "int m_iRoundEndFunFactData2"
// MNetworkVarNames "int m_iRoundEndFunFactData3"
// MNetworkVarNames "CUtlString m_sRoundEndMessage"
// MNetworkVarNames "int m_iRoundEndPlayerCount"
// MNetworkVarNames "bool m_bRoundEndNoMusic"
// MNetworkVarNames "int m_iRoundEndLegacy"
// MNetworkVarNames "uint8 m_nRoundEndCount"
// MNetworkVarNames "int m_iRoundStartRoundNumber"
// MNetworkVarNames "uint8 m_nRoundStartCount"
class C_CSGameRules : public C_TeamplayRules
{
public:
	// MNetworkEnable
	bool m_bFreezePeriod; // 0x40	
	// MNetworkEnable
	bool m_bWarmupPeriod; // 0x41	
private:
	[[maybe_unused]] uint8_t __pad0042[0x2]; // 0x42
public:
	// MNetworkEnable
	GameTime_t m_fWarmupPeriodEnd; // 0x44	
	// MNetworkEnable
	GameTime_t m_fWarmupPeriodStart; // 0x48	
	// MNetworkEnable
	bool m_bServerPaused; // 0x4c	
	// MNetworkEnable
	bool m_bTerroristTimeOutActive; // 0x4d	
	// MNetworkEnable
	bool m_bCTTimeOutActive; // 0x4e	
private:
	[[maybe_unused]] uint8_t __pad004f[0x1]; // 0x4f
public:
	// MNetworkEnable
	float m_flTerroristTimeOutRemaining; // 0x50	
	// MNetworkEnable
	float m_flCTTimeOutRemaining; // 0x54	
	// MNetworkEnable
	int32_t m_nTerroristTimeOuts; // 0x58	
	// MNetworkEnable
	int32_t m_nCTTimeOuts; // 0x5c	
	// MNetworkEnable
	bool m_bTechnicalTimeOut; // 0x60	
	// MNetworkEnable
	bool m_bMatchWaitingForResume; // 0x61	
private:
	[[maybe_unused]] uint8_t __pad0062[0x2]; // 0x62
public:
	// MNetworkEnable
	int32_t m_iRoundTime; // 0x64	
	// MNetworkEnable
	float m_fMatchStartTime; // 0x68	
	// MNetworkEnable
	GameTime_t m_fRoundStartTime; // 0x6c	
	// MNetworkEnable
	GameTime_t m_flRestartRoundTime; // 0x70	
	// MNetworkEnable
	bool m_bGameRestart; // 0x74	
private:
	[[maybe_unused]] uint8_t __pad0075[0x3]; // 0x75
public:
	// MNetworkEnable
	float m_flGameStartTime; // 0x78	
	// MNetworkEnable
	float m_timeUntilNextPhaseStarts; // 0x7c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGamePhaseChanged"
	int32_t m_gamePhase; // 0x80	
	// MNetworkEnable
	int32_t m_totalRoundsPlayed; // 0x84	
	// MNetworkEnable
	int32_t m_nRoundsPlayedThisPhase; // 0x88	
	// MNetworkEnable
	int32_t m_nOvertimePlaying; // 0x8c	
	// MNetworkEnable
	int32_t m_iHostagesRemaining; // 0x90	
	// MNetworkEnable
	bool m_bAnyHostageReached; // 0x94	
	// MNetworkEnable
	bool m_bMapHasBombTarget; // 0x95	
	// MNetworkEnable
	bool m_bMapHasRescueZone; // 0x96	
	// MNetworkEnable
	bool m_bMapHasBuyZone; // 0x97	
	// MNetworkEnable
	bool m_bIsQueuedMatchmaking; // 0x98	
private:
	[[maybe_unused]] uint8_t __pad0099[0x3]; // 0x99
public:
	// MNetworkEnable
	int32_t m_nQueuedMatchmakingMode; // 0x9c	
	// MNetworkEnable
	bool m_bIsValveDS; // 0xa0	
	// MNetworkEnable
	bool m_bLogoMap; // 0xa1	
	// MNetworkEnable
	bool m_bPlayAllStepSoundsOnServer; // 0xa2	
private:
	[[maybe_unused]] uint8_t __pad00a3[0x1]; // 0xa3
public:
	// MNetworkEnable
	int32_t m_iSpectatorSlotCount; // 0xa4	
	// MNetworkEnable
	int32_t m_MatchDevice; // 0xa8	
	// MNetworkEnable
	bool m_bHasMatchStarted; // 0xac	
private:
	[[maybe_unused]] uint8_t __pad00ad[0x3]; // 0xad
public:
	// MNetworkEnable
	int32_t m_nNextMapInMapgroup; // 0xb0	
	// MNetworkEnable
	char m_szTournamentEventName[512]; // 0xb4	
	// MNetworkEnable
	char m_szTournamentEventStage[512]; // 0x2b4	
	// MNetworkEnable
	char m_szMatchStatTxt[512]; // 0x4b4	
	// MNetworkEnable
	char m_szTournamentPredictionsTxt[512]; // 0x6b4	
	// MNetworkEnable
	int32_t m_nTournamentPredictionsPct; // 0x8b4	
	// MNetworkEnable
	GameTime_t m_flCMMItemDropRevealStartTime; // 0x8b8	
	// MNetworkEnable
	GameTime_t m_flCMMItemDropRevealEndTime; // 0x8bc	
	// MNetworkEnable
	bool m_bIsDroppingItems; // 0x8c0	
	// MNetworkEnable
	bool m_bIsQuestEligible; // 0x8c1	
	// MNetworkEnable
	bool m_bIsHltvActive; // 0x8c2	
private:
	[[maybe_unused]] uint8_t __pad08c3[0x1]; // 0x8c3
public:
	// MNetworkEnable
	uint16_t m_arrProhibitedItemIndices[100]; // 0x8c4	
	// MNetworkEnable
	uint32_t m_arrTournamentActiveCasterAccounts[4]; // 0x98c	
	// MNetworkEnable
	int32_t m_numBestOfMaps; // 0x99c	
	// MNetworkEnable
	int32_t m_nHalloweenMaskListSeed; // 0x9a0	
	// MNetworkEnable
	bool m_bBombDropped; // 0x9a4	
	// MNetworkEnable
	bool m_bBombPlanted; // 0x9a5	
private:
	[[maybe_unused]] uint8_t __pad09a6[0x2]; // 0x9a6
public:
	// MNetworkEnable
	int32_t m_iRoundWinStatus; // 0x9a8	
	// MNetworkEnable
	int32_t m_eRoundWinReason; // 0x9ac	
	// MNetworkEnable
	bool m_bTCantBuy; // 0x9b0	
	// MNetworkEnable
	bool m_bCTCantBuy; // 0x9b1	
private:
	[[maybe_unused]] uint8_t __pad09b2[0x2]; // 0x9b2
public:
	// MNetworkEnable
	int32_t m_iMatchStats_RoundResults[30]; // 0x9b4	
	// MNetworkEnable
	int32_t m_iMatchStats_PlayersAlive_CT[30]; // 0xa2c	
	// MNetworkEnable
	int32_t m_iMatchStats_PlayersAlive_T[30]; // 0xaa4	
	// MNetworkEnable
	float m_TeamRespawnWaveTimes[32]; // 0xb1c	
	// MNetworkEnable
	GameTime_t m_flNextRespawnWave[32]; // 0xb9c	
	// MNetworkEnable
	int32_t m_nServerQuestID; // 0xc1c	
	// MNetworkEnable
	Vector m_vMinimapMins; // 0xc20	
	// MNetworkEnable
	Vector m_vMinimapMaxs; // 0xc2c	
	// MNetworkEnable
	float m_MinimapVerticalSectionHeights[8]; // 0xc38	
	bool m_bSpawnedTerrorHuntHeavy; // 0xc58	
private:
	[[maybe_unused]] uint8_t __pad0c59[0x3]; // 0xc59
public:
	// MNetworkEnable
	int32_t m_nEndMatchMapGroupVoteTypes[10]; // 0xc5c	
	// MNetworkEnable
	int32_t m_nEndMatchMapGroupVoteOptions[10]; // 0xc84	
	// MNetworkEnable
	int32_t m_nEndMatchMapVoteWinner; // 0xcac	
	// MNetworkEnable
	int32_t m_iNumConsecutiveCTLoses; // 0xcb0	
	// MNetworkEnable
	int32_t m_iNumConsecutiveTerroristLoses; // 0xcb4	
private:
	[[maybe_unused]] uint8_t __pad0cb8[0x18]; // 0xcb8
public:
	bool m_bMarkClientStopRecordAtRoundEnd; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd1[0xa7]; // 0xcd1
public:
	// MNetworkEnable
	int32_t m_nMatchAbortedEarlyReason; // 0xd78	
	bool m_bHasTriggeredRoundStartMusic; // 0xd7c	
	bool m_bSwitchingTeamsAtRoundReset; // 0xd7d	
private:
	[[maybe_unused]] uint8_t __pad0d7e[0x1a]; // 0xd7e
public:
	// MNetworkEnable
	// MNetworkPolymorphic
	CCSGameModeRules* m_pGameModeRules; // 0xd98	
	// MNetworkEnable
	C_RetakeGameRules m_RetakeRules; // 0xda0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMatchEndCountChanged"
	uint8_t m_nMatchEndCount; // 0xeb8	
private:
	[[maybe_unused]] uint8_t __pad0eb9[0x3]; // 0xeb9
public:
	// MNetworkEnable
	int32_t m_nTTeamIntroVariant; // 0xebc	
	// MNetworkEnable
	int32_t m_nCTTeamIntroVariant; // 0xec0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnTeamIntroPeriodChanged"
	bool m_bTeamIntroPeriod; // 0xec4	
private:
	[[maybe_unused]] uint8_t __pad0ec5[0x3]; // 0xec5
public:
	// MNetworkEnable
	int32_t m_iRoundEndWinnerTeam; // 0xec8	
	// MNetworkEnable
	int32_t m_eRoundEndReason; // 0xecc	
	// MNetworkEnable
	bool m_bRoundEndShowTimerDefend; // 0xed0	
private:
	[[maybe_unused]] uint8_t __pad0ed1[0x3]; // 0xed1
public:
	// MNetworkEnable
	int32_t m_iRoundEndTimerTime; // 0xed4	
	// MNetworkEnable
	CUtlString m_sRoundEndFunFactToken; // 0xed8	
	// MNetworkEnable
	CPlayerSlot m_iRoundEndFunFactPlayerSlot; // 0xee0	
	// MNetworkEnable
	int32_t m_iRoundEndFunFactData1; // 0xee4	
	// MNetworkEnable
	int32_t m_iRoundEndFunFactData2; // 0xee8	
	// MNetworkEnable
	int32_t m_iRoundEndFunFactData3; // 0xeec	
	// MNetworkEnable
	CUtlString m_sRoundEndMessage; // 0xef0	
	// MNetworkEnable
	int32_t m_iRoundEndPlayerCount; // 0xef8	
	// MNetworkEnable
	bool m_bRoundEndNoMusic; // 0xefc	
private:
	[[maybe_unused]] uint8_t __pad0efd[0x3]; // 0xefd
public:
	// MNetworkEnable
	int32_t m_iRoundEndLegacy; // 0xf00	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRoundEndCountChanged"
	uint8_t m_nRoundEndCount; // 0xf04	
private:
	[[maybe_unused]] uint8_t __pad0f05[0x3]; // 0xf05
public:
	// MNetworkEnable
	int32_t m_iRoundStartRoundNumber; // 0xf08	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRoundStartCountChanged"
	uint8_t m_nRoundStartCount; // 0xf0c	
private:
	[[maybe_unused]] uint8_t __pad0f0d[0x400b]; // 0xf0d
public:
	double m_flLastPerfSampleTime; // 0x4f18	
};

