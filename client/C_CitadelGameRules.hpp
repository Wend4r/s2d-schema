#pragma once

#include <cstdint>

struct GameTime_t;
struct MatchID_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9eb8
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
// MNetworkVarNames "ECitadelGameMode m_eGameMode"
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
class C_CitadelGameRules : public C_TeamplayRules
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x18]; // 0x40
public:
	// MNetworkEnable
	bool m_bFreezePeriod; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	// MNetworkEnable
	GameTime_t m_fLevelStartTime; // 0x5c	
	// MNetworkEnable
	GameTime_t m_flGameStartTime; // 0x60	
	// MNetworkEnable
	GameTime_t m_flRoundStartTime; // 0x64	
	// MNetworkEnable
	EGameState m_eGameState; // 0x68	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTowerAmber; // 0x6c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTowerSapphire; // 0x70	
	// MNetworkEnable
	bool m_bEnemyInAmberBase; // 0x74	
	// MNetworkEnable
	bool m_bEnemyInSapphireBase; // 0x75	
private:
	[[maybe_unused]] uint8_t __pad0076[0x2]; // 0x76
public:
	// MNetworkEnable
	float m_flCombineZiplineSpeedMultiplier; // 0x78	
	// MNetworkEnable
	float m_flRebelZiplineSpeedMultiplier; // 0x7c	
	// MNetworkEnable
	Vector m_vMinimapMins; // 0x80	
	// MNetworkEnable
	Vector m_vMinimapMaxs; // 0x8c	
	// MNetworkEnable
	bool m_bMatchSafeToAbandon; // 0x98	
	// MNetworkEnable
	bool m_bNoDeathEnabled; // 0x99	
	// MNetworkEnable
	bool m_bFastCooldownsEnabled; // 0x9a	
	// MNetworkEnable
	bool m_bStaminaCooldownsEnabled; // 0x9b	
	// MNetworkEnable
	bool m_bInfiniteResourcesEnabled; // 0x9c	
	// MNetworkEnable
	bool m_bFlexSlotsForcedUnlocked; // 0x9d	
private:
	[[maybe_unused]] uint8_t __pad009e[0x2]; // 0x9e
public:
	// MNetworkEnable
	ECitadelMatchMode m_eMatchMode; // 0xa0	
	// MNetworkEnable
	ECitadelGameMode m_eGameMode; // 0xa4	
	// MNetworkEnable
	CHandle< CCitadelTrooperMinimap > m_hTrooperMinimap; // 0xa8	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "playerDraftingChanged"
	CHandle< C_BaseEntity > m_hCurrentHeroDrafterRebels; // 0xac	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "playerDraftingChanged"
	CHandle< C_BaseEntity > m_hCurrentHeroDrafterCombine; // 0xb0	
	bool m_bDontUploadStats; // 0xb4	
private:
	[[maybe_unused]] uint8_t __pad00b5[0x9d5b]; // 0xb5
public:
	// MNetworkEnable
	bool m_bServerPaused; // 0x9e10	
private:
	[[maybe_unused]] uint8_t __pad9e11[0x3]; // 0x9e11
public:
	// MNetworkEnable
	int32_t m_iPauseTeam; // 0x9e14	
	double m_flPauseTime; // 0x9e18	
	CPlayerSlot m_pausingPlayerId; // 0x9e20	
	CPlayerSlot m_unpausingPlayerId; // 0x9e24	
	float m_fPauseRawTime; // 0x9e28	
	float m_fPauseCurTime; // 0x9e2c	
	float m_fUnpauseRawTime; // 0x9e30	
	float m_fUnpauseCurTime; // 0x9e34	
private:
	[[maybe_unused]] uint8_t __pad9e38[0x28]; // 0x9e38
public:
	// MNetworkEnable
	bool m_bRequiresReportCardDismissal; // 0x9e60	
private:
	[[maybe_unused]] uint8_t __pad9e61[0x3]; // 0x9e61
public:
	GameTime_t m_flPreGameWaitEndTime; // 0x9e64	
	GameTime_t m_flReportCardDismissalWaitStart; // 0x9e68	
	int32_t m_nLastPreGameCount; // 0x9e6c	
	// MNetworkEnable
	int32_t m_eGGTeam; // 0x9e70	
	// MNetworkEnable
	GameTime_t m_flGGEndsAtTime; // 0x9e74	
	// MNetworkEnable
	MatchID_t m_unMatchID; // 0x9e78	
	// MNetworkEnable
	int32_t m_nExperimentalGameplayState; // 0x9e80	
	int32_t m_nPlayerDeathEventID; // 0x9e84	
	int32_t m_nReplayChangedEvent; // 0x9e88	
	int32_t m_nGameOverEvent; // 0x9e8c	
private:
	[[maybe_unused]] uint8_t __pad9e90[0x20]; // 0x9e90
public:
	// MNetworkEnable
	GameTime_t m_flHeroDiedTime; // 0x9eb0	
};

