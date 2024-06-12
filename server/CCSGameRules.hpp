#pragma once

#include <cstdint>

struct GameTime_t;
struct CCSGameModeRules;
struct CRetakeGameRules;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x157d8
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
class CCSGameRules : public CTeamplayRules
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x8]; // 0xc0
public:
	// MNetworkEnable
	bool m_bFreezePeriod; // 0xc8	
	// MNetworkEnable
	bool m_bWarmupPeriod; // 0xc9	
private:
	[[maybe_unused]] uint8_t __pad00ca[0x2]; // 0xca
public:
	// MNetworkEnable
	GameTime_t m_fWarmupPeriodEnd; // 0xcc	
	// MNetworkEnable
	GameTime_t m_fWarmupPeriodStart; // 0xd0	
	// MNetworkEnable
	bool m_bServerPaused; // 0xd4	
	// MNetworkEnable
	bool m_bTerroristTimeOutActive; // 0xd5	
	// MNetworkEnable
	bool m_bCTTimeOutActive; // 0xd6	
private:
	[[maybe_unused]] uint8_t __pad00d7[0x1]; // 0xd7
public:
	// MNetworkEnable
	float m_flTerroristTimeOutRemaining; // 0xd8	
	// MNetworkEnable
	float m_flCTTimeOutRemaining; // 0xdc	
	// MNetworkEnable
	int32_t m_nTerroristTimeOuts; // 0xe0	
	// MNetworkEnable
	int32_t m_nCTTimeOuts; // 0xe4	
	// MNetworkEnable
	bool m_bTechnicalTimeOut; // 0xe8	
	// MNetworkEnable
	bool m_bMatchWaitingForResume; // 0xe9	
private:
	[[maybe_unused]] uint8_t __pad00ea[0x2]; // 0xea
public:
	// MNetworkEnable
	int32_t m_iRoundTime; // 0xec	
	// MNetworkEnable
	float m_fMatchStartTime; // 0xf0	
	// MNetworkEnable
	GameTime_t m_fRoundStartTime; // 0xf4	
	// MNetworkEnable
	GameTime_t m_flRestartRoundTime; // 0xf8	
	// MNetworkEnable
	bool m_bGameRestart; // 0xfc	
private:
	[[maybe_unused]] uint8_t __pad00fd[0x3]; // 0xfd
public:
	// MNetworkEnable
	float m_flGameStartTime; // 0x100	
	// MNetworkEnable
	float m_timeUntilNextPhaseStarts; // 0x104	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGamePhaseChanged"
	int32_t m_gamePhase; // 0x108	
	// MNetworkEnable
	int32_t m_totalRoundsPlayed; // 0x10c	
	// MNetworkEnable
	int32_t m_nRoundsPlayedThisPhase; // 0x110	
	// MNetworkEnable
	int32_t m_nOvertimePlaying; // 0x114	
	// MNetworkEnable
	int32_t m_iHostagesRemaining; // 0x118	
	// MNetworkEnable
	bool m_bAnyHostageReached; // 0x11c	
	// MNetworkEnable
	bool m_bMapHasBombTarget; // 0x11d	
	// MNetworkEnable
	bool m_bMapHasRescueZone; // 0x11e	
	// MNetworkEnable
	bool m_bMapHasBuyZone; // 0x11f	
	// MNetworkEnable
	bool m_bIsQueuedMatchmaking; // 0x120	
private:
	[[maybe_unused]] uint8_t __pad0121[0x3]; // 0x121
public:
	// MNetworkEnable
	int32_t m_nQueuedMatchmakingMode; // 0x124	
	// MNetworkEnable
	bool m_bIsValveDS; // 0x128	
	// MNetworkEnable
	bool m_bLogoMap; // 0x129	
	// MNetworkEnable
	bool m_bPlayAllStepSoundsOnServer; // 0x12a	
private:
	[[maybe_unused]] uint8_t __pad012b[0x1]; // 0x12b
public:
	// MNetworkEnable
	int32_t m_iSpectatorSlotCount; // 0x12c	
	// MNetworkEnable
	int32_t m_MatchDevice; // 0x130	
	// MNetworkEnable
	bool m_bHasMatchStarted; // 0x134	
private:
	[[maybe_unused]] uint8_t __pad0135[0x3]; // 0x135
public:
	// MNetworkEnable
	int32_t m_nNextMapInMapgroup; // 0x138	
	// MNetworkEnable
	char m_szTournamentEventName[512]; // 0x13c	
	// MNetworkEnable
	char m_szTournamentEventStage[512]; // 0x33c	
	// MNetworkEnable
	char m_szMatchStatTxt[512]; // 0x53c	
	// MNetworkEnable
	char m_szTournamentPredictionsTxt[512]; // 0x73c	
	// MNetworkEnable
	int32_t m_nTournamentPredictionsPct; // 0x93c	
	// MNetworkEnable
	GameTime_t m_flCMMItemDropRevealStartTime; // 0x940	
	// MNetworkEnable
	GameTime_t m_flCMMItemDropRevealEndTime; // 0x944	
	// MNetworkEnable
	bool m_bIsDroppingItems; // 0x948	
	// MNetworkEnable
	bool m_bIsQuestEligible; // 0x949	
	// MNetworkEnable
	bool m_bIsHltvActive; // 0x94a	
private:
	[[maybe_unused]] uint8_t __pad094b[0x1]; // 0x94b
public:
	// MNetworkEnable
	uint16_t m_arrProhibitedItemIndices[100]; // 0x94c	
	// MNetworkEnable
	uint32_t m_arrTournamentActiveCasterAccounts[4]; // 0xa14	
	// MNetworkEnable
	int32_t m_numBestOfMaps; // 0xa24	
	// MNetworkEnable
	int32_t m_nHalloweenMaskListSeed; // 0xa28	
	// MNetworkEnable
	bool m_bBombDropped; // 0xa2c	
	// MNetworkEnable
	bool m_bBombPlanted; // 0xa2d	
private:
	[[maybe_unused]] uint8_t __pad0a2e[0x2]; // 0xa2e
public:
	// MNetworkEnable
	int32_t m_iRoundWinStatus; // 0xa30	
	// MNetworkEnable
	int32_t m_eRoundWinReason; // 0xa34	
	// MNetworkEnable
	bool m_bTCantBuy; // 0xa38	
	// MNetworkEnable
	bool m_bCTCantBuy; // 0xa39	
private:
	[[maybe_unused]] uint8_t __pad0a3a[0x2]; // 0xa3a
public:
	// MNetworkEnable
	int32_t m_iMatchStats_RoundResults[30]; // 0xa3c	
	// MNetworkEnable
	int32_t m_iMatchStats_PlayersAlive_CT[30]; // 0xab4	
	// MNetworkEnable
	int32_t m_iMatchStats_PlayersAlive_T[30]; // 0xb2c	
	// MNetworkEnable
	float m_TeamRespawnWaveTimes[32]; // 0xba4	
	// MNetworkEnable
	GameTime_t m_flNextRespawnWave[32]; // 0xc24	
	// MNetworkEnable
	int32_t m_nServerQuestID; // 0xca4	
	// MNetworkEnable
	Vector m_vMinimapMins; // 0xca8	
	// MNetworkEnable
	Vector m_vMinimapMaxs; // 0xcb4	
	// MNetworkEnable
	float m_MinimapVerticalSectionHeights[8]; // 0xcc0	
	bool m_bSpawnedTerrorHuntHeavy; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0ce1[0x3]; // 0xce1
public:
	// MNetworkEnable
	int32_t m_nEndMatchMapGroupVoteTypes[10]; // 0xce4	
	// MNetworkEnable
	int32_t m_nEndMatchMapGroupVoteOptions[10]; // 0xd0c	
	// MNetworkEnable
	int32_t m_nEndMatchMapVoteWinner; // 0xd34	
	// MNetworkEnable
	int32_t m_iNumConsecutiveCTLoses; // 0xd38	
	// MNetworkEnable
	int32_t m_iNumConsecutiveTerroristLoses; // 0xd3c	
private:
	[[maybe_unused]] uint8_t __pad0d40[0x18]; // 0xd40
public:
	bool m_bHasHostageBeenTouched; // 0xd58	
private:
	[[maybe_unused]] uint8_t __pad0d59[0x3]; // 0xd59
public:
	GameTime_t m_flIntermissionStartTime; // 0xd5c	
	GameTime_t m_flIntermissionEndTime; // 0xd60	
	bool m_bLevelInitialized; // 0xd64	
private:
	[[maybe_unused]] uint8_t __pad0d65[0x3]; // 0xd65
public:
	int32_t m_iTotalRoundsPlayed; // 0xd68	
	int32_t m_iUnBalancedRounds; // 0xd6c	
	bool m_endMatchOnRoundReset; // 0xd70	
	bool m_endMatchOnThink; // 0xd71	
private:
	[[maybe_unused]] uint8_t __pad0d72[0x2]; // 0xd72
public:
	int32_t m_iFreezeTime; // 0xd74	
	int32_t m_iNumTerrorist; // 0xd78	
	int32_t m_iNumCT; // 0xd7c	
	int32_t m_iNumSpawnableTerrorist; // 0xd80	
	int32_t m_iNumSpawnableCT; // 0xd84	
	CUtlVector< int32 > m_arrSelectedHostageSpawnIndices; // 0xd88	
	int32_t m_nSpawnPointsRandomSeed; // 0xda0	
	bool m_bFirstConnected; // 0xda4	
	bool m_bCompleteReset; // 0xda5	
	bool m_bPickNewTeamsOnReset; // 0xda6	
	bool m_bScrambleTeamsOnRestart; // 0xda7	
	bool m_bSwapTeamsOnRestart; // 0xda8	
private:
	[[maybe_unused]] uint8_t __pad0da9[0x7]; // 0xda9
public:
	CUtlVector< int32 > m_nEndMatchTiedVotes; // 0xdb0	
private:
	[[maybe_unused]] uint8_t __pad0dc8[0x4]; // 0xdc8
public:
	bool m_bNeedToAskPlayersForContinueVote; // 0xdcc	
private:
	[[maybe_unused]] uint8_t __pad0dcd[0x3]; // 0xdcd
public:
	uint32_t m_numQueuedMatchmakingAccounts; // 0xdd0	
	float m_fAvgPlayerRank; // 0xdd4	
	char* m_pQueuedMatchmakingReservationString; // 0xdd8	
	uint32_t m_numTotalTournamentDrops; // 0xde0	
	uint32_t m_numSpectatorsCountMax; // 0xde4	
	uint32_t m_numSpectatorsCountMaxTV; // 0xde8	
	uint32_t m_numSpectatorsCountMaxLnk; // 0xdec	
private:
	[[maybe_unused]] uint8_t __pad0df0[0x8]; // 0xdf0
public:
	bool m_bForceTeamChangeSilent; // 0xdf8	
	bool m_bLoadingRoundBackupData; // 0xdf9	
private:
	[[maybe_unused]] uint8_t __pad0dfa[0x36]; // 0xdfa
public:
	int32_t m_nMatchInfoShowType; // 0xe30	
	float m_flMatchInfoDecidedTime; // 0xe34	
private:
	[[maybe_unused]] uint8_t __pad0e38[0x18]; // 0xe38
public:
	int32_t mTeamDMLastWinningTeamNumber; // 0xe50	
	float mTeamDMLastThinkTime; // 0xe54	
	float m_flTeamDMLastAnnouncementTime; // 0xe58	
	int32_t m_iAccountTerrorist; // 0xe5c	
	int32_t m_iAccountCT; // 0xe60	
	int32_t m_iSpawnPointCount_Terrorist; // 0xe64	
	int32_t m_iSpawnPointCount_CT; // 0xe68	
	int32_t m_iMaxNumTerrorists; // 0xe6c	
	int32_t m_iMaxNumCTs; // 0xe70	
	int32_t m_iLoserBonusMostRecentTeam; // 0xe74	
	float m_tmNextPeriodicThink; // 0xe78	
	bool m_bVoiceWonMatchBragFired; // 0xe7c	
private:
	[[maybe_unused]] uint8_t __pad0e7d[0x3]; // 0xe7d
public:
	float m_fWarmupNextChatNoticeTime; // 0xe80	
private:
	[[maybe_unused]] uint8_t __pad0e84[0x4]; // 0xe84
public:
	int32_t m_iHostagesRescued; // 0xe88	
	int32_t m_iHostagesTouched; // 0xe8c	
	float m_flNextHostageAnnouncement; // 0xe90	
	bool m_bNoTerroristsKilled; // 0xe94	
	bool m_bNoCTsKilled; // 0xe95	
	bool m_bNoEnemiesKilled; // 0xe96	
	bool m_bCanDonateWeapons; // 0xe97	
private:
	[[maybe_unused]] uint8_t __pad0e98[0x4]; // 0xe98
public:
	float m_firstKillTime; // 0xe9c	
private:
	[[maybe_unused]] uint8_t __pad0ea0[0x4]; // 0xea0
public:
	float m_firstBloodTime; // 0xea4	
private:
	[[maybe_unused]] uint8_t __pad0ea8[0x18]; // 0xea8
public:
	bool m_hostageWasInjured; // 0xec0	
	bool m_hostageWasKilled; // 0xec1	
private:
	[[maybe_unused]] uint8_t __pad0ec2[0xe]; // 0xec2
public:
	bool m_bVoteCalled; // 0xed0	
	bool m_bServerVoteOnReset; // 0xed1	
private:
	[[maybe_unused]] uint8_t __pad0ed2[0x2]; // 0xed2
public:
	float m_flVoteCheckThrottle; // 0xed4	
	bool m_bBuyTimeEnded; // 0xed8	
private:
	[[maybe_unused]] uint8_t __pad0ed9[0x3]; // 0xed9
public:
	int32_t m_nLastFreezeEndBeep; // 0xedc	
	bool m_bTargetBombed; // 0xee0	
	bool m_bBombDefused; // 0xee1	
	bool m_bMapHasBombZone; // 0xee2	
private:
	[[maybe_unused]] uint8_t __pad0ee3[0x1d]; // 0xee3
public:
	Vector m_vecMainCTSpawnPos; // 0xf00	
private:
	[[maybe_unused]] uint8_t __pad0f0c[0x4]; // 0xf0c
public:
	CUtlVector< SpawnPoint* > m_CTSpawnPointsMasterList; // 0xf10	
	CUtlVector< SpawnPoint* > m_TerroristSpawnPointsMasterList; // 0xf28	
	bool m_bRespawningAllRespawnablePlayers; // 0xf40	
private:
	[[maybe_unused]] uint8_t __pad0f41[0x3]; // 0xf41
public:
	int32_t m_iNextCTSpawnPoint; // 0xf44	
	float m_flCTSpawnPointUsedTime; // 0xf48	
	int32_t m_iNextTerroristSpawnPoint; // 0xf4c	
	float m_flTerroristSpawnPointUsedTime; // 0xf50	
private:
	[[maybe_unused]] uint8_t __pad0f54[0x4]; // 0xf54
public:
	CUtlVector< SpawnPoint* > m_CTSpawnPoints; // 0xf58	
	CUtlVector< SpawnPoint* > m_TerroristSpawnPoints; // 0xf70	
	bool m_bIsUnreservedGameServer; // 0xf88	
private:
	[[maybe_unused]] uint8_t __pad0f89[0x3]; // 0xf89
public:
	float m_fAutobalanceDisplayTime; // 0xf8c	
private:
	[[maybe_unused]] uint8_t __pad0f90[0x268]; // 0xf90
public:
	bool m_bAllowWeaponSwitch; // 0x11f8	
	bool m_bRoundTimeWarningTriggered; // 0x11f9	
private:
	[[maybe_unused]] uint8_t __pad11fa[0x2]; // 0x11fa
public:
	GameTime_t m_phaseChangeAnnouncementTime; // 0x11fc	
	float m_fNextUpdateTeamClanNamesTime; // 0x1200	
	GameTime_t m_flLastThinkTime; // 0x1204	
	float m_fAccumulatedRoundOffDamage; // 0x1208	
	int32_t m_nShorthandedBonusLastEvalRound; // 0x120c	
private:
	[[maybe_unused]] uint8_t __pad1210[0x278]; // 0x1210
public:
	// MNetworkEnable
	int32_t m_nMatchAbortedEarlyReason; // 0x1488	
	bool m_bHasTriggeredRoundStartMusic; // 0x148c	
	bool m_bSwitchingTeamsAtRoundReset; // 0x148d	
private:
	[[maybe_unused]] uint8_t __pad148e[0x1a]; // 0x148e
public:
	// MNetworkEnable
	// MNetworkPolymorphic
	CCSGameModeRules* m_pGameModeRules; // 0x14a8	
	KeyValues3 m_BtGlobalBlackboard; // 0x14b0	
private:
	[[maybe_unused]] uint8_t __pad14c0[0x60]; // 0x14c0
public:
	CHandle< CBaseEntity > m_hPlayerResource; // 0x1520	
private:
	[[maybe_unused]] uint8_t __pad1524[0x4]; // 0x1524
public:
	// MNetworkEnable
	CRetakeGameRules m_RetakeRules; // 0x1528	
	CUtlVector< int32 > m_arrTeamUniqueKillWeaponsMatch[4]; // 0x16c0	
	bool m_bTeamLastKillUsedUniqueWeaponMatch[4]; // 0x1720	
private:
	[[maybe_unused]] uint8_t __pad1724[0x24]; // 0x1724
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnMatchEndCountChanged"
	uint8_t m_nMatchEndCount; // 0x1748	
private:
	[[maybe_unused]] uint8_t __pad1749[0x3]; // 0x1749
public:
	// MNetworkEnable
	int32_t m_nTTeamIntroVariant; // 0x174c	
	// MNetworkEnable
	int32_t m_nCTTeamIntroVariant; // 0x1750	
	// MNetworkEnable
	// MNetworkChangeCallback "OnTeamIntroPeriodChanged"
	bool m_bTeamIntroPeriod; // 0x1754	
private:
	[[maybe_unused]] uint8_t __pad1755[0x3]; // 0x1755
public:
	GameTime_t m_fTeamIntroPeriodEnd; // 0x1758	
	bool m_bPlayedTeamIntroVO; // 0x175c	
private:
	[[maybe_unused]] uint8_t __pad175d[0x3]; // 0x175d
public:
	// MNetworkEnable
	int32_t m_iRoundEndWinnerTeam; // 0x1760	
	// MNetworkEnable
	int32_t m_eRoundEndReason; // 0x1764	
	// MNetworkEnable
	bool m_bRoundEndShowTimerDefend; // 0x1768	
private:
	[[maybe_unused]] uint8_t __pad1769[0x3]; // 0x1769
public:
	// MNetworkEnable
	int32_t m_iRoundEndTimerTime; // 0x176c	
	// MNetworkEnable
	CUtlString m_sRoundEndFunFactToken; // 0x1770	
	// MNetworkEnable
	CPlayerSlot m_iRoundEndFunFactPlayerSlot; // 0x1778	
	// MNetworkEnable
	int32_t m_iRoundEndFunFactData1; // 0x177c	
	// MNetworkEnable
	int32_t m_iRoundEndFunFactData2; // 0x1780	
	// MNetworkEnable
	int32_t m_iRoundEndFunFactData3; // 0x1784	
	// MNetworkEnable
	CUtlString m_sRoundEndMessage; // 0x1788	
	// MNetworkEnable
	int32_t m_iRoundEndPlayerCount; // 0x1790	
	// MNetworkEnable
	bool m_bRoundEndNoMusic; // 0x1794	
private:
	[[maybe_unused]] uint8_t __pad1795[0x3]; // 0x1795
public:
	// MNetworkEnable
	int32_t m_iRoundEndLegacy; // 0x1798	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRoundEndCountChanged"
	uint8_t m_nRoundEndCount; // 0x179c	
private:
	[[maybe_unused]] uint8_t __pad179d[0x3]; // 0x179d
public:
	// MNetworkEnable
	int32_t m_iRoundStartRoundNumber; // 0x17a0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRoundStartCountChanged"
	uint8_t m_nRoundStartCount; // 0x17a4	
private:
	[[maybe_unused]] uint8_t __pad17a5[0x400b]; // 0x17a5
public:
	double m_flLastPerfSampleTime; // 0x57b0	
	
	// Static fields:
	static int64_t &Get_m_nMapCycleTimeStamp(){return *reinterpret_cast<int64_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCSGameRules")->m_static_fields[0]->m_instance);};
	static int32_t &Get_m_nMapCycleindex(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCSGameRules")->m_static_fields[1]->m_instance);};
};

