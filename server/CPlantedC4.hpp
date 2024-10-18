#pragma once

#include <cstdint>

struct GameTime_t;
struct CAttributeContainer;
struct CEntityIOOutput;
struct EntitySpottedState_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd78
// Has VTable
// 
// MNetworkVarNames "bool m_bBombTicking"
// MNetworkVarNames "GameTime_t m_flC4Blow"
// MNetworkVarNames "int m_nBombSite"
// MNetworkVarNames "int m_nSourceSoundscapeHash"
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
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
private:
	[[maybe_unused]] uint8_t __pad09a8[0x8]; // 0x9a8
public:
	// MNetworkEnable
	bool m_bBombTicking; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b1[0x3]; // 0x9b1
public:
	// MNetworkEnable
	GameTime_t m_flC4Blow; // 0x9b4	
	// MNetworkEnable
	int32_t m_nBombSite; // 0x9b8	
	// MNetworkEnable
	int32_t m_nSourceSoundscapeHash; // 0x9bc	
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0x9c0	
	CEntityIOOutput m_OnBombDefused; // 0xc88	
	CEntityIOOutput m_OnBombBeginDefuse; // 0xcb0	
	CEntityIOOutput m_OnBombDefuseAborted; // 0xcd8	
	// MNetworkEnable
	bool m_bCannotBeDefused; // 0xd00	
private:
	[[maybe_unused]] uint8_t __pad0d01[0x7]; // 0xd01
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xd08	
	int32_t m_nSpotRules; // 0xd20	
	bool m_bTrainingPlacedByPlayer; // 0xd24	
	// MNetworkEnable
	bool m_bHasExploded; // 0xd25	
private:
	[[maybe_unused]] uint8_t __pad0d26[0x2]; // 0xd26
public:
	// MNetworkEnable
	float m_flTimerLength; // 0xd28	
	// MNetworkEnable
	bool m_bBeingDefused; // 0xd2c	
private:
	[[maybe_unused]] uint8_t __pad0d2d[0x7]; // 0xd2d
public:
	GameTime_t m_fLastDefuseTime; // 0xd34	
private:
	[[maybe_unused]] uint8_t __pad0d38[0x4]; // 0xd38
public:
	// MNetworkEnable
	float m_flDefuseLength; // 0xd3c	
	// MNetworkEnable
	GameTime_t m_flDefuseCountDown; // 0xd40	
	// MNetworkEnable
	bool m_bBombDefused; // 0xd44	
private:
	[[maybe_unused]] uint8_t __pad0d45[0x3]; // 0xd45
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hBombDefuser; // 0xd48	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hControlPanel; // 0xd4c	
	int32_t m_iProgressBarTime; // 0xd50	
	bool m_bVoiceAlertFired; // 0xd54	
	bool m_bVoiceAlertPlayed[4]; // 0xd55	
private:
	[[maybe_unused]] uint8_t __pad0d59[0x3]; // 0xd59
public:
	GameTime_t m_flNextBotBeepTime; // 0xd5c	
private:
	[[maybe_unused]] uint8_t __pad0d60[0x4]; // 0xd60
public:
	QAngle m_angCatchUpToPlayerEye; // 0xd64	
	GameTime_t m_flLastSpinDetectionTime; // 0xd70	
	
	// Datamap fields:
	// void CPlantedC4C4Think; // 0x0
};

