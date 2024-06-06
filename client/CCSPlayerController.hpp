#pragma once

#include <cstdint>

struct CCSPlayerController_InGameMoneyServices;
struct CCSPlayerController_InventoryServices;
struct CCSPlayerController_ActionTrackingServices;
struct CCSPlayerController_DamageServices;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x838
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
	[[maybe_unused]] uint8_t __pad06e0[0x10]; // 0x6e0
public:
	// MNetworkEnable
	CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x6f0	
	// MNetworkEnable
	CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x6f8	
	// MNetworkEnable
	CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x700	
	// MNetworkEnable
	CCSPlayerController_DamageServices* m_pDamageServices; // 0x708	
	// MNetworkEnable
	uint32_t m_iPing; // 0x710	
	// MNetworkEnable
	bool m_bHasCommunicationAbuseMute; // 0x714	
private:
	[[maybe_unused]] uint8_t __pad0715[0x3]; // 0x715
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szCrosshairCodes; // 0x718	
	// MNetworkEnable
	uint8_t m_iPendingTeamNum; // 0x720	
private:
	[[maybe_unused]] uint8_t __pad0721[0x3]; // 0x721
public:
	// MNetworkEnable
	GameTime_t m_flForceTeamTime; // 0x724	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCompTeammateColorChanged"
	int32_t m_iCompTeammateColor; // 0x728	
	// MNetworkEnable
	bool m_bEverPlayedOnTeam; // 0x72c	
private:
	[[maybe_unused]] uint8_t __pad072d[0x3]; // 0x72d
public:
	GameTime_t m_flPreviousForceJoinTeamTime; // 0x730	
private:
	[[maybe_unused]] uint8_t __pad0734[0x4]; // 0x734
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szClan; // 0x738	
	CUtlString m_sSanitizedPlayerName; // 0x740	
	// MNetworkEnable
	int32_t m_iCoachingTeam; // 0x748	
private:
	[[maybe_unused]] uint8_t __pad074c[0x4]; // 0x74c
public:
	// MNetworkEnable
	uint64_t m_nPlayerDominated; // 0x750	
	// MNetworkEnable
	uint64_t m_nPlayerDominatingMe; // 0x758	
	// MNetworkEnable
	int32_t m_iCompetitiveRanking; // 0x760	
	// MNetworkEnable
	int32_t m_iCompetitiveWins; // 0x764	
	// MNetworkEnable
	int8_t m_iCompetitiveRankType; // 0x768	
private:
	[[maybe_unused]] uint8_t __pad0769[0x3]; // 0x769
public:
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Win; // 0x76c	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Loss; // 0x770	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Tie; // 0x774	
	// MNetworkEnable
	int32_t m_nEndMatchNextMapVote; // 0x778	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint16_t m_unActiveQuestId; // 0x77c	
private:
	[[maybe_unused]] uint8_t __pad077e[0x2]; // 0x77e
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QuestProgress::Reason m_nQuestProgressReason; // 0x780	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_unPlayerTvControlFlags; // 0x784	
private:
	[[maybe_unused]] uint8_t __pad0788[0x28]; // 0x788
public:
	int32_t m_iDraftIndex; // 0x7b0	
	uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7b4	
	uint32_t m_uiAbandonRecordedReason; // 0x7b8	
	bool m_bCannotBeKicked; // 0x7bc	
	bool m_bEverFullyConnected; // 0x7bd	
	bool m_bAbandonAllowsSurrender; // 0x7be	
	bool m_bAbandonOffersInstantSurrender; // 0x7bf	
	bool m_bDisconnection1MinWarningPrinted; // 0x7c0	
	bool m_bScoreReported; // 0x7c1	
private:
	[[maybe_unused]] uint8_t __pad07c2[0x2]; // 0x7c2
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nDisconnectionTick; // 0x7c4	
private:
	[[maybe_unused]] uint8_t __pad07c8[0x8]; // 0x7c8
public:
	// MNetworkEnable
	bool m_bControllingBot; // 0x7d0	
	// MNetworkEnable
	bool m_bHasControlledBotThisRound; // 0x7d1	
	bool m_bHasBeenControlledByPlayerThisRound; // 0x7d2	
private:
	[[maybe_unused]] uint8_t __pad07d3[0x1]; // 0x7d3
public:
	int32_t m_nBotsControlledThisRound; // 0x7d4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bCanControlObservedBot; // 0x7d8	
private:
	[[maybe_unused]] uint8_t __pad07d9[0x3]; // 0x7d9
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_hPlayerPawn; // 0x7dc	
	// MNetworkEnable
	CHandle< C_CSObserverPawn > m_hObserverPawn; // 0x7e0	
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
	// MNetworkEnable
	C_NetworkUtlVectorBase< EKillTypes_t > m_vecKills; // 0x808	
	// MNetworkEnable
	bool m_bMvpNoMusic; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0821[0x3]; // 0x821
public:
	// MNetworkEnable
	int32_t m_eMvpReason; // 0x824	
	// MNetworkEnable
	int32_t m_iMusicKitID; // 0x828	
	// MNetworkEnable
	int32_t m_iMusicKitMVPs; // 0x82c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMVPCountChanged"
	int32_t m_iMVPs; // 0x830	
	bool m_bIsPlayerNameDirty; // 0x834	
};

