#pragma once

#include <cstdint>

struct EntitySpottedState_t;
struct GameTime_t;
struct C_AttributeContainer;
struct CBasePlayerController;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14d8
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
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class C_PlantedC4 : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0f88[0x8]; // 0xf88
public:
	// MNetworkEnable
	bool m_bBombTicking; // 0xf90	
private:
	[[maybe_unused]] uint8_t __pad0f91[0x3]; // 0xf91
public:
	// MNetworkEnable
	int32_t m_nBombSite; // 0xf94	
	// MNetworkEnable
	int32_t m_nSourceSoundscapeHash; // 0xf98	
private:
	[[maybe_unused]] uint8_t __pad0f9c[0x4]; // 0xf9c
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xfa0	
	GameTime_t m_flNextGlow; // 0xfb8	
	GameTime_t m_flNextBeep; // 0xfbc	
	// MNetworkEnable
	GameTime_t m_flC4Blow; // 0xfc0	
	// MNetworkEnable
	bool m_bCannotBeDefused; // 0xfc4	
	// MNetworkEnable
	bool m_bHasExploded; // 0xfc5	
private:
	[[maybe_unused]] uint8_t __pad0fc6[0x2]; // 0xfc6
public:
	// MNetworkEnable
	float m_flTimerLength; // 0xfc8	
	// MNetworkEnable
	bool m_bBeingDefused; // 0xfcc	
private:
	[[maybe_unused]] uint8_t __pad0fcd[0x3]; // 0xfcd
public:
	float m_bTriggerWarning; // 0xfd0	
	float m_bExplodeWarning; // 0xfd4	
	bool m_bC4Activated; // 0xfd8	
	bool m_bTenSecWarning; // 0xfd9	
private:
	[[maybe_unused]] uint8_t __pad0fda[0x2]; // 0xfda
public:
	// MNetworkEnable
	float m_flDefuseLength; // 0xfdc	
	// MNetworkEnable
	GameTime_t m_flDefuseCountDown; // 0xfe0	
	// MNetworkEnable
	bool m_bBombDefused; // 0xfe4	
private:
	[[maybe_unused]] uint8_t __pad0fe5[0x3]; // 0xfe5
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDefuserChanged"
	CHandle< C_CSPlayerPawn > m_hBombDefuser; // 0xfe8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPanel; // 0xfec	
	// MNetworkEnable
	C_AttributeContainer m_AttributeManager; // 0xff0	
	CHandle< C_Multimeter > m_hDefuserMultimeter; // 0x1498	
	GameTime_t m_flNextRadarFlashTime; // 0x149c	
	bool m_bRadarFlash; // 0x14a0	
private:
	[[maybe_unused]] uint8_t __pad14a1[0x3]; // 0x14a1
public:
	CHandle< C_CSPlayerPawn > m_pBombDefuser; // 0x14a4	
	GameTime_t m_fLastDefuseTime; // 0x14a8	
private:
	[[maybe_unused]] uint8_t __pad14ac[0x4]; // 0x14ac
public:
	CBasePlayerController* m_pPredictionOwner; // 0x14b0	
	Vector m_vecC4ExplodeSpectatePos; // 0x14b8	
	QAngle m_vecC4ExplodeSpectateAng; // 0x14c4	
	float m_flC4ExplodeSpectateDuration; // 0x14d0	
};

