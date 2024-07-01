#pragma once

#include <cstdint>

struct GameTime_t;
struct CountdownTimer;
struct MatchID_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2718
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
// MNetworkVarNames "float m_flCombineZiplineSpeedMultiplier"
// MNetworkVarNames "float m_flRebelZiplineSpeedMultiplier"
// MNetworkVarNames "Vector m_vMinimapMins"
// MNetworkVarNames "Vector m_vMinimapMaxs"
// MNetworkVarNames "bool m_bMatchSafeToAbandon"
// MNetworkVarNames "bool m_bNoDeathEnabled"
// MNetworkVarNames "bool m_bFastCooldownsEnabled"
// MNetworkVarNames "bool m_bStaminaCooldownsEnabled"
// MNetworkVarNames "bool m_bInfiniteResourcesEnabled"
// MNetworkVarNames "bool m_bFlexSlotsForcedUnlocked"
// MNetworkVarNames "ECitadelMatchMode m_eMatchMode"
// MNetworkVarNames "CHandle<CCitadelTrooperMinimap> m_hTrooperMinimap"
// MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterRebels"
// MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterCombine"
// MNetworkVarNames "bool m_bServerPaused"
// MNetworkVarNames "int m_iPauseTeam"
// MNetworkVarNames "bool m_bRequiresReportCardDismissal"
// MNetworkVarNames "int m_eGGTeam"
// MNetworkVarNames "GameTime_t m_flGGEndsAtTime"
// MNetworkVarNames "MatchID_t m_unMatchID"
// MNetworkVarNames "int m_nExperimentalGameplayState"
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
private:
	[[maybe_unused]] uint8_t __pad00ee[0x2]; // 0xee
public:
	// MNetworkEnable
	float m_flCombineZiplineSpeedMultiplier; // 0xf0	
	// MNetworkEnable
	float m_flRebelZiplineSpeedMultiplier; // 0xf4	
	// MNetworkEnable
	Vector m_vMinimapMins; // 0xf8	
	// MNetworkEnable
	Vector m_vMinimapMaxs; // 0x104	
	// MNetworkEnable
	bool m_bMatchSafeToAbandon; // 0x110	
	// MNetworkEnable
	bool m_bNoDeathEnabled; // 0x111	
	// MNetworkEnable
	bool m_bFastCooldownsEnabled; // 0x112	
	// MNetworkEnable
	bool m_bStaminaCooldownsEnabled; // 0x113	
	// MNetworkEnable
	bool m_bInfiniteResourcesEnabled; // 0x114	
	// MNetworkEnable
	bool m_bFlexSlotsForcedUnlocked; // 0x115	
private:
	[[maybe_unused]] uint8_t __pad0116[0x2]; // 0x116
public:
	// MNetworkEnable
	ECitadelMatchMode m_eMatchMode; // 0x118	
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
	[[maybe_unused]] uint8_t __pad0458[0x11e0]; // 0x458
public:
	CountdownTimer m_CheckIdleTimer; // 0x1638	
private:
	[[maybe_unused]] uint8_t __pad1650[0x1020]; // 0x1650
public:
	// MNetworkEnable
	bool m_bServerPaused; // 0x2670	
private:
	[[maybe_unused]] uint8_t __pad2671[0x3]; // 0x2671
public:
	// MNetworkEnable
	int32_t m_iPauseTeam; // 0x2674	
	double m_flPauseTime; // 0x2678	
	CPlayerSlot m_pausingPlayerId; // 0x2680	
	CPlayerSlot m_unpausingPlayerId; // 0x2684	
	float m_fPauseRawTime; // 0x2688	
	float m_fPauseCurTime; // 0x268c	
	float m_fUnpauseRawTime; // 0x2690	
	float m_fUnpauseCurTime; // 0x2694	
private:
	[[maybe_unused]] uint8_t __pad2698[0x28]; // 0x2698
public:
	// MNetworkEnable
	bool m_bRequiresReportCardDismissal; // 0x26c0	
private:
	[[maybe_unused]] uint8_t __pad26c1[0x3]; // 0x26c1
public:
	GameTime_t m_flPreGameWaitEndTime; // 0x26c4	
	GameTime_t m_flReportCardDismissalWaitStart; // 0x26c8	
	int32_t m_nLastPreGameCount; // 0x26cc	
	// MNetworkEnable
	int32_t m_eGGTeam; // 0x26d0	
	// MNetworkEnable
	GameTime_t m_flGGEndsAtTime; // 0x26d4	
	// MNetworkEnable
	MatchID_t m_unMatchID; // 0x26d8	
	// MNetworkEnable
	int32_t m_nExperimentalGameplayState; // 0x26e0	
	int32_t m_nPlayerDeathEventID; // 0x26e4	
	int32_t m_nReplayChangedEvent; // 0x26e8	
	int32_t m_nGameOverEvent; // 0x26ec	
private:
	[[maybe_unused]] uint8_t __pad26f0[0x20]; // 0x26f0
public:
	// MNetworkEnable
	GameTime_t m_flHeroDiedTime; // 0x2710	
};

