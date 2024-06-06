#pragma once

#include <cstdint>

struct EntitySpottedState_t;
struct GameTime_t;
struct CBasePlayerController;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf70
// Has VTable
// 
// MNetworkVarNames "bool m_bBombTicking"
// MNetworkVarNames "int m_nBombSite"
// MNetworkVarNames "int m_nSourceSoundscapeHash"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
// MNetworkVarNames "GameTime_t m_flC4Blow"
// MNetworkVarNames "bool m_bCannotBeDefused"
// MNetworkVarNames "bool m_bHasExploded"
// MNetworkVarNames "float m_flTimerLength"
// MNetworkVarNames "bool m_bBeingDefused"
// MNetworkVarNames "float m_flDefuseLength"
// MNetworkVarNames "GameTime_t m_flDefuseCountDown"
// MNetworkVarNames "bool m_bBombDefused"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hBombDefuser"
// MNetworkVarNames "CHandle< CBaseEntity> m_hControlPanel"
class C_PlantedC4 : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	bool m_bBombTicking; // 0xed0	
private:
	[[maybe_unused]] uint8_t __pad0ed1[0x3]; // 0xed1
public:
	// MNetworkEnable
	int32_t m_nBombSite; // 0xed4	
	// MNetworkEnable
	int32_t m_nSourceSoundscapeHash; // 0xed8	
private:
	[[maybe_unused]] uint8_t __pad0edc[0x4]; // 0xedc
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xee0	
	GameTime_t m_flNextGlow; // 0xef8	
	GameTime_t m_flNextBeep; // 0xefc	
	// MNetworkEnable
	GameTime_t m_flC4Blow; // 0xf00	
	// MNetworkEnable
	bool m_bCannotBeDefused; // 0xf04	
	// MNetworkEnable
	bool m_bHasExploded; // 0xf05	
private:
	[[maybe_unused]] uint8_t __pad0f06[0x2]; // 0xf06
public:
	// MNetworkEnable
	float m_flTimerLength; // 0xf08	
	// MNetworkEnable
	bool m_bBeingDefused; // 0xf0c	
private:
	[[maybe_unused]] uint8_t __pad0f0d[0x3]; // 0xf0d
public:
	float m_bTriggerWarning; // 0xf10	
	float m_bExplodeWarning; // 0xf14	
	bool m_bC4Activated; // 0xf18	
	bool m_bTenSecWarning; // 0xf19	
private:
	[[maybe_unused]] uint8_t __pad0f1a[0x2]; // 0xf1a
public:
	// MNetworkEnable
	float m_flDefuseLength; // 0xf1c	
	// MNetworkEnable
	GameTime_t m_flDefuseCountDown; // 0xf20	
	// MNetworkEnable
	bool m_bBombDefused; // 0xf24	
private:
	[[maybe_unused]] uint8_t __pad0f25[0x3]; // 0xf25
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDefuserChanged"
	CHandle< C_CSPlayerPawn > m_hBombDefuser; // 0xf28	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPanel; // 0xf2c	
	CHandle< C_Multimeter > m_hDefuserMultimeter; // 0xf30	
	GameTime_t m_flNextRadarFlashTime; // 0xf34	
	bool m_bRadarFlash; // 0xf38	
private:
	[[maybe_unused]] uint8_t __pad0f39[0x3]; // 0xf39
public:
	CHandle< C_CSPlayerPawn > m_pBombDefuser; // 0xf3c	
	GameTime_t m_fLastDefuseTime; // 0xf40	
private:
	[[maybe_unused]] uint8_t __pad0f44[0x4]; // 0xf44
public:
	CBasePlayerController* m_pPredictionOwner; // 0xf48	
	Vector m_vecC4ExplodeSpectatePos; // 0xf50	
	QAngle m_vecC4ExplodeSpectateAng; // 0xf5c	
	float m_flC4ExplodeSpectateDuration; // 0xf68	
};

