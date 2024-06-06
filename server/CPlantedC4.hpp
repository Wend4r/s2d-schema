#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
struct EntitySpottedState_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e8
// Has VTable
// 
// MNetworkVarNames "bool m_bBombTicking"
// MNetworkVarNames "GameTime_t m_flC4Blow"
// MNetworkVarNames "int m_nBombSite"
// MNetworkVarNames "int m_nSourceSoundscapeHash"
// MNetworkVarNames "bool m_bCannotBeDefused"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
// MNetworkVarNames "bool m_bHasExploded"
// MNetworkVarNames "float m_flTimerLength"
// MNetworkVarNames "bool m_bBeingDefused"
// MNetworkVarNames "float m_flDefuseLength"
// MNetworkVarNames "GameTime_t m_flDefuseCountDown"
// MNetworkVarNames "bool m_bBombDefused"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hBombDefuser"
// MNetworkVarNames "CHandle< CBaseEntity> m_hControlPanel"
class CPlantedC4 : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	bool m_bBombTicking; // 0x8e8	
private:
	[[maybe_unused]] uint8_t __pad08e9[0x3]; // 0x8e9
public:
	// MNetworkEnable
	GameTime_t m_flC4Blow; // 0x8ec	
	// MNetworkEnable
	int32_t m_nBombSite; // 0x8f0	
	// MNetworkEnable
	int32_t m_nSourceSoundscapeHash; // 0x8f4	
	CEntityIOOutput m_OnBombDefused; // 0x8f8	
	CEntityIOOutput m_OnBombBeginDefuse; // 0x920	
	CEntityIOOutput m_OnBombDefuseAborted; // 0x948	
	// MNetworkEnable
	bool m_bCannotBeDefused; // 0x970	
private:
	[[maybe_unused]] uint8_t __pad0971[0x7]; // 0x971
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x978	
	int32_t m_nSpotRules; // 0x990	
	bool m_bTrainingPlacedByPlayer; // 0x994	
	// MNetworkEnable
	bool m_bHasExploded; // 0x995	
private:
	[[maybe_unused]] uint8_t __pad0996[0x2]; // 0x996
public:
	// MNetworkEnable
	float m_flTimerLength; // 0x998	
	// MNetworkEnable
	bool m_bBeingDefused; // 0x99c	
private:
	[[maybe_unused]] uint8_t __pad099d[0x7]; // 0x99d
public:
	GameTime_t m_fLastDefuseTime; // 0x9a4	
private:
	[[maybe_unused]] uint8_t __pad09a8[0x4]; // 0x9a8
public:
	// MNetworkEnable
	float m_flDefuseLength; // 0x9ac	
	// MNetworkEnable
	GameTime_t m_flDefuseCountDown; // 0x9b0	
	// MNetworkEnable
	bool m_bBombDefused; // 0x9b4	
private:
	[[maybe_unused]] uint8_t __pad09b5[0x3]; // 0x9b5
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hBombDefuser; // 0x9b8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hControlPanel; // 0x9bc	
	int32_t m_iProgressBarTime; // 0x9c0	
	bool m_bVoiceAlertFired; // 0x9c4	
	bool m_bVoiceAlertPlayed[4]; // 0x9c5	
private:
	[[maybe_unused]] uint8_t __pad09c9[0x3]; // 0x9c9
public:
	GameTime_t m_flNextBotBeepTime; // 0x9cc	
private:
	[[maybe_unused]] uint8_t __pad09d0[0x4]; // 0x9d0
public:
	QAngle m_angCatchUpToPlayerEye; // 0x9d4	
	GameTime_t m_flLastSpinDetectionTime; // 0x9e0	
	
	// Datamap fields:
	// void CPlantedC4C4Think; // 0x0
};

