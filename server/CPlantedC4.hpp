#pragma once

#include <cstdint>

struct GameTime_t;
struct CAttributeContainer;
struct CEntityIOOutput;
struct EntitySpottedState_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd30
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
	[[maybe_unused]] uint8_t __pad0960[0x8]; // 0x960
public:
	// MNetworkEnable
	bool m_bBombTicking; // 0x968	
private:
	[[maybe_unused]] uint8_t __pad0969[0x3]; // 0x969
public:
	// MNetworkEnable
	GameTime_t m_flC4Blow; // 0x96c	
	// MNetworkEnable
	int32_t m_nBombSite; // 0x970	
	// MNetworkEnable
	int32_t m_nSourceSoundscapeHash; // 0x974	
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0x978	
	CEntityIOOutput m_OnBombDefused; // 0xc40	
	CEntityIOOutput m_OnBombBeginDefuse; // 0xc68	
	CEntityIOOutput m_OnBombDefuseAborted; // 0xc90	
	// MNetworkEnable
	bool m_bCannotBeDefused; // 0xcb8	
private:
	[[maybe_unused]] uint8_t __pad0cb9[0x7]; // 0xcb9
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xcc0	
	int32_t m_nSpotRules; // 0xcd8	
	bool m_bTrainingPlacedByPlayer; // 0xcdc	
	// MNetworkEnable
	bool m_bHasExploded; // 0xcdd	
private:
	[[maybe_unused]] uint8_t __pad0cde[0x2]; // 0xcde
public:
	// MNetworkEnable
	float m_flTimerLength; // 0xce0	
	// MNetworkEnable
	bool m_bBeingDefused; // 0xce4	
private:
	[[maybe_unused]] uint8_t __pad0ce5[0x7]; // 0xce5
public:
	GameTime_t m_fLastDefuseTime; // 0xcec	
private:
	[[maybe_unused]] uint8_t __pad0cf0[0x4]; // 0xcf0
public:
	// MNetworkEnable
	float m_flDefuseLength; // 0xcf4	
	// MNetworkEnable
	GameTime_t m_flDefuseCountDown; // 0xcf8	
	// MNetworkEnable
	bool m_bBombDefused; // 0xcfc	
private:
	[[maybe_unused]] uint8_t __pad0cfd[0x3]; // 0xcfd
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hBombDefuser; // 0xd00	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hControlPanel; // 0xd04	
	int32_t m_iProgressBarTime; // 0xd08	
	bool m_bVoiceAlertFired; // 0xd0c	
	bool m_bVoiceAlertPlayed[4]; // 0xd0d	
private:
	[[maybe_unused]] uint8_t __pad0d11[0x3]; // 0xd11
public:
	GameTime_t m_flNextBotBeepTime; // 0xd14	
private:
	[[maybe_unused]] uint8_t __pad0d18[0x4]; // 0xd18
public:
	QAngle m_angCatchUpToPlayerEye; // 0xd1c	
	GameTime_t m_flLastSpinDetectionTime; // 0xd28	
	
	// Datamap fields:
	// void CPlantedC4C4Think; // 0x0
};

