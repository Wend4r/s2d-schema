#pragma once

#include <cstdint>

struct EntitySpottedState_t;
struct GameTime_t;
struct C_AttributeContainer;
struct CBasePlayerController;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14d0
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
	[[maybe_unused]] uint8_t __pad0f80[0x8]; // 0xf80
public:
	// MNetworkEnable
	bool m_bBombTicking; // 0xf88	
private:
	[[maybe_unused]] uint8_t __pad0f89[0x3]; // 0xf89
public:
	// MNetworkEnable
	int32_t m_nBombSite; // 0xf8c	
	// MNetworkEnable
	int32_t m_nSourceSoundscapeHash; // 0xf90	
private:
	[[maybe_unused]] uint8_t __pad0f94[0x4]; // 0xf94
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xf98	
	GameTime_t m_flNextGlow; // 0xfb0	
	GameTime_t m_flNextBeep; // 0xfb4	
	// MNetworkEnable
	GameTime_t m_flC4Blow; // 0xfb8	
	// MNetworkEnable
	bool m_bCannotBeDefused; // 0xfbc	
	// MNetworkEnable
	bool m_bHasExploded; // 0xfbd	
private:
	[[maybe_unused]] uint8_t __pad0fbe[0x2]; // 0xfbe
public:
	// MNetworkEnable
	float m_flTimerLength; // 0xfc0	
	// MNetworkEnable
	bool m_bBeingDefused; // 0xfc4	
private:
	[[maybe_unused]] uint8_t __pad0fc5[0x3]; // 0xfc5
public:
	float m_bTriggerWarning; // 0xfc8	
	float m_bExplodeWarning; // 0xfcc	
	bool m_bC4Activated; // 0xfd0	
	bool m_bTenSecWarning; // 0xfd1	
private:
	[[maybe_unused]] uint8_t __pad0fd2[0x2]; // 0xfd2
public:
	// MNetworkEnable
	float m_flDefuseLength; // 0xfd4	
	// MNetworkEnable
	GameTime_t m_flDefuseCountDown; // 0xfd8	
	// MNetworkEnable
	bool m_bBombDefused; // 0xfdc	
private:
	[[maybe_unused]] uint8_t __pad0fdd[0x3]; // 0xfdd
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDefuserChanged"
	CHandle< C_CSPlayerPawn > m_hBombDefuser; // 0xfe0	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPanel; // 0xfe4	
	// MNetworkEnable
	C_AttributeContainer m_AttributeManager; // 0xfe8	
	CHandle< C_Multimeter > m_hDefuserMultimeter; // 0x1490	
	GameTime_t m_flNextRadarFlashTime; // 0x1494	
	bool m_bRadarFlash; // 0x1498	
private:
	[[maybe_unused]] uint8_t __pad1499[0x3]; // 0x1499
public:
	CHandle< C_CSPlayerPawn > m_pBombDefuser; // 0x149c	
	GameTime_t m_fLastDefuseTime; // 0x14a0	
private:
	[[maybe_unused]] uint8_t __pad14a4[0x4]; // 0x14a4
public:
	CBasePlayerController* m_pPredictionOwner; // 0x14a8	
	Vector m_vecC4ExplodeSpectatePos; // 0x14b0	
	QAngle m_vecC4ExplodeSpectateAng; // 0x14bc	
	float m_flC4ExplodeSpectateDuration; // 0x14c8	
};

