#pragma once

#include <cstdint>

struct GameTick_t;
struct fogplayerparams_t;
struct audioparams_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x170
// Has VTable
// 
// MNetworkVarNames "QAngle m_vecCsViewPunchAngle"
// MNetworkVarNames "GameTick_t m_nCsViewPunchAngleTick"
// MNetworkVarNames "float32 m_flCsViewPunchAngleTickRatio"
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
	// MNetworkEncoder "qangle_precise"
	QAngle m_vecCsViewPunchAngle; // 0x40	
	// MNetworkEnable
	GameTick_t m_nCsViewPunchAngleTick; // 0x4c	
	// MNetworkEnable
	float m_flCsViewPunchAngleTickRatio; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	// MNetworkEnable
	fogplayerparams_t m_PlayerFog; // 0x58	
	// MNetworkEnable
	CHandle< CColorCorrection > m_hColorCorrectionCtrl; // 0x98	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hViewEntity; // 0x9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CHandle< CTonemapController2 > m_hTonemapController; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	audioparams_t m_audio; // 0xa8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > > m_PostProcessingVolumes; // 0x120	
	float m_flOldPlayerZ; // 0x138	
	float m_flOldPlayerViewOffsetZ; // 0x13c	
private:
	[[maybe_unused]] uint8_t __pad0140[0x18]; // 0x140
public:
	CUtlVector< CHandle< CEnvSoundscapeTriggerable > > m_hTriggerSoundscapeList; // 0x158	
};

