#pragma once

#include <cstdint>

struct GameTick_t;
struct fogplayerparams_t;
struct audioparams_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x178
// Has VTable
// 
// MNetworkVarNames "QAngle m_vecPunchAngle"
// MNetworkVarNames "QAngle m_vecPunchAngleVel"
// MNetworkVarNames "GameTick_t m_nPunchAngleJoltTick"
// MNetworkVarNames "fogplayerparams_t m_PlayerFog"
// MNetworkVarNames "CHandle< CColorCorrection> m_hColorCorrectionCtrl"
// MNetworkVarNames "CHandle< CBaseEntity> m_hViewEntity"
// MNetworkVarNames "CHandle< CTonemapController2> m_hTonemapController"
// MNetworkVarNames "audioparams_t m_audio"
// MNetworkVarNames "CHandle<CPostProcessingVolume> m_PostProcessingVolumes"
class CPlayer_CameraServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	// MNetworkEncoder "qangle_precise"
	QAngle m_vecPunchAngle; // 0x40	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkEncoder "qangle_precise"
	QAngle m_vecPunchAngleVel; // 0x4c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPunchJoltChanged"
	GameTick_t m_nPunchAngleJoltTick; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	// MNetworkEnable
	fogplayerparams_t m_PlayerFog; // 0x60	
	// MNetworkEnable
	CHandle< CColorCorrection > m_hColorCorrectionCtrl; // 0xa0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hViewEntity; // 0xa4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CHandle< CTonemapController2 > m_hTonemapController; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00ac[0x4]; // 0xac
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	audioparams_t m_audio; // 0xb0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > > m_PostProcessingVolumes; // 0x128	
	float m_flOldPlayerZ; // 0x140	
	float m_flOldPlayerViewOffsetZ; // 0x144	
private:
	[[maybe_unused]] uint8_t __pad0148[0x18]; // 0x148
public:
	CUtlVector< CHandle< CEnvSoundscapeTriggerable > > m_hTriggerSoundscapeList; // 0x160	
};

