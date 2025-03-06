#pragma once

#include <cstdint>

struct GameTime_t;
struct CountdownTimer;
struct MatchID_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2878
// Has VTable
// 
// MNetworkVarNames "bool m_bFreezePeriod"
// MNetworkVarNames "GameTime_t m_fLevelStartTime"
// MNetworkVarNames "GameTime_t m_flGameStartTime"
// MNetworkVarNames "GameTime_t m_flRoundStartTime"
// MNetworkVarNames "EGameState m_eGameState"
// MNetworkVarNames "EHANDLE m_hTowerAmber"
// MNetworkVarNames "EHANDLE m_hTowerSapphire"
// MNetworkVarNames "bool m_bEnemyInAmberBase"
// MNetworkVarNames "bool m_bEnemyInSapphireBase"
// MNetworkVarNames "bool m_bEnemyPlayersInAmberBase"
// MNetworkVarNames "bool m_bEnemyPlayersInSapphireBase"
// MNetworkVarNames "Vector m_vMinimapMins"
// MNetworkVarNames "Vector m_vMinimapMaxs"
// MNetworkVarNames "bool m_bMatchSafeToAbandon"
// MNetworkVarNames "bool m_bMatchNotScored"
// MNetworkVarNames "bool m_bNoDeathEnabled"
// MNetworkVarNames "bool m_bFastCooldownsEnabled"
// MNetworkVarNames "bool m_bStaminaCooldownsEnabled"
// MNetworkVarNames "bool m_bUnlimitedAmmoEnabled"
// MNetworkVarNames "bool m_bInfiniteResourcesEnabled"
// MNetworkVarNames "bool m_bFlexSlotsForcedUnlocked"
// MNetworkVarNames "ECitadelMatchMode m_eMatchMode"
// MNetworkVarNames "ECitadelGameMode m_eGameMode"
// MNetworkVarNames "uint32 m_unSpectatorCount"
// MNetworkVarNames "CHandle<CCitadelTrooperMinimap> m_hTrooperMinimap"
// MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterRebels"
// MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterCombine"
// MNetworkVarNames "bool m_bServerPaused"
// MNetworkVarNames "int m_iPauseTeam"
// MNetworkVarNames "int m_nMatchClockUpdateTick"
// MNetworkVarNames "float m_flMatchClockAtLastUpdate"
// MNetworkVarNames "bool m_bRequiresReportCardDismissal"
// MNetworkVarNames "int m_eGGTeam"
// MNetworkVarNames "GameTime_t m_flGGEndsAtTime"
// MNetworkVarNames "MatchID_t m_unMatchID"
// MNetworkVarNames "CUtlString m_sGameplayExperiment"
// MNetworkVarNames "GameTime_t m_flHeroDiedTime"
class CCitadelGameRules : public CTeamplayRules
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x10]; // 0xc0
public:
	// MNetworkEnable
	bool m_bFreezePeriod; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d1[0x3]; // 0xd1
public:
	// MNetworkEnable
	GameTime_t m_fLevelStartTime; // 0xd4	
	// MNetworkEnable
	GameTime_t m_flGameStartTime; // 0xd8	
	// MNetworkEnable
	GameTime_t m_flRoundStartTime; // 0xdc	
	// MNetworkEnable
	EGameState m_eGameState; // 0xe0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTowerAmber; // 0xe4	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTowerSapphire; // 0xe8	
	// MNetworkEnable
	bool m_bEnemyInAmberBase; // 0xec	
	// MNetworkEnable
	bool m_bEnemyInSapphireBase; // 0xed	
	// MNetworkEnable
	bool m_bEnemyPlayersInAmberBase; // 0xee	
	// MNetworkEnable
	bool m_bEnemyPlayersInSapphireBase; // 0xef	
	// MNetworkEnable
	Vector m_vMinimapMins; // 0xf0	
	// MNetworkEnable
	Vector m_vMinimapMaxs; // 0xfc	
	// MNetworkEnable
	bool m_bMatchSafeToAbandon; // 0x108	
	// MNetworkEnable
	bool m_bMatchNotScored; // 0x109	
	// MNetworkEnable
	bool m_bNoDeathEnabled; // 0x10a	
	// MNetworkEnable
	bool m_bFastCooldownsEnabled; // 0x10b	
	// MNetworkEnable
	bool m_bStaminaCooldownsEnabled; // 0x10c	
	// MNetworkEnable
	bool m_bUnlimitedAmmoEnabled; // 0x10d	
	// MNetworkEnable
	bool m_bInfiniteResourcesEnabled; // 0x10e	
	// MNetworkEnable
	bool m_bFlexSlotsForcedUnlocked; // 0x10f	
	// MNetworkEnable
	ECitadelMatchMode m_eMatchMode; // 0x110	
	// MNetworkEnable
	ECitadelGameMode m_eGameMode; // 0x114	
	// MNetworkEnable
	uint32_t m_unSpectatorCount; // 0x118	
	// MNetworkEnable
	CHandle< CCitadelTrooperMinimap > m_hTrooperMinimap; // 0x11c	
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< CBaseEntity > m_hCurrentHeroDrafterRebels; // 0x120	
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< CBaseEntity > m_hCurrentHeroDrafterCombine; // 0x124	
	bool m_bDontUploadStats; // 0x128	
private:
	[[maybe_unused]] uint8_t __pad0129[0x3]; // 0x129
public:
	int32_t m_iWinningTeam; // 0x12c	
private:
	[[maybe_unused]] uint8_t __pad0130[0x70]; // 0x130
public:
	bool m_bSpawnedBots; // 0x1a0	
	bool m_bGuideBotAssigned; // 0x1a1	
private:
	[[maybe_unused]] uint8_t __pad01a2[0x2]; // 0x1a2
public:
	float m_timeLastSpawnCrates; // 0x1a4	
	bool m_bNotifiedClientsOfNextCrateSpawn; // 0x1a8	
	bool m_bEarlyCratesSpawned; // 0x1a9	
	bool m_bIsEarlyCrateGamestate; // 0x1aa	
private:
	[[maybe_unused]] uint8_t __pad01ab[0x2a5]; // 0x1ab
public:
	GameTime_t m_flGameTimeAllPlayersDisconnected; // 0x450	
	int32_t m_nNextHeroDraftPosition; // 0x454	
private:
	[[maybe_unused]] uint8_t __pad0458[0x1250]; // 0x458
public:
	CountdownTimer m_CheckIdleTimer; // 0x16a8	
	CountdownTimer m_CheckCheatersTimer; // 0x16c0	
private:
	[[maybe_unused]] uint8_t __pad16d8[0x10c0]; // 0x16d8
public:
	// MNetworkEnable
	bool m_bServerPaused; // 0x2798	
private:
	[[maybe_unused]] uint8_t __pad2799[0x3]; // 0x2799
public:
	// MNetworkEnable
	int32_t m_iPauseTeam; // 0x279c	
	// MNetworkEnable
	int32_t m_nMatchClockUpdateTick; // 0x27a0	
	// MNetworkEnable
	float m_flMatchClockAtLastUpdate; // 0x27a4	
	double m_flPauseTime; // 0x27a8	
	CPlayerSlot m_pausingPlayerId; // 0x27b0	
	CPlayerSlot m_unpausingPlayerId; // 0x27b4	
	float m_fPauseRawTime; // 0x27b8	
	float m_fPauseCurTime; // 0x27bc	
	float m_fUnpauseRawTime; // 0x27c0	
	float m_fUnpauseCurTime; // 0x27c4	
private:
	[[maybe_unused]] uint8_t __pad27c8[0x50]; // 0x27c8
public:
	// MNetworkEnable
	bool m_bRequiresReportCardDismissal; // 0x2818	
private:
	[[maybe_unused]] uint8_t __pad2819[0x3]; // 0x2819
public:
	GameTime_t m_flPreGameWaitEndTime; // 0x281c	
	GameTime_t m_flReportCardDismissalWaitStart; // 0x2820	
	int32_t m_nLastPreGameCount; // 0x2824	
	// MNetworkEnable
	int32_t m_eGGTeam; // 0x2828	
	// MNetworkEnable
	GameTime_t m_flGGEndsAtTime; // 0x282c	
	// MNetworkEnable
	MatchID_t m_unMatchID; // 0x2830	
	// MNetworkEnable
	CUtlString m_sGameplayExperiment; // 0x2838	
	int32_t m_nPlayerDeathEventID; // 0x2840	
	int32_t m_nReplayChangedEvent; // 0x2844	
	int32_t m_nGameOverEvent; // 0x2848	
private:
	[[maybe_unused]] uint8_t __pad284c[0x24]; // 0x284c
public:
	// MNetworkEnable
	GameTime_t m_flHeroDiedTime; // 0x2870	
};

