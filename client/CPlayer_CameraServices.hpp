#pragma once

#include <cstdint>

struct GameTick_t;
struct C_fogplayerparams_t;
struct audioparams_t;
struct fogparams_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x210
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
// MNetworkVarNames "CHandle<C_PostProcessingVolume> m_PostProcessingVolumes"
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
	C_fogplayerparams_t m_PlayerFog; // 0x58	
	// MNetworkEnable
	CHandle< C_ColorCorrection > m_hColorCorrectionCtrl; // 0x98	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewEntity; // 0x9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CHandle< C_TonemapController2 > m_hTonemapController; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	audioparams_t m_audio; // 0xa8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes; // 0x120	
	float m_flOldPlayerZ; // 0x138	
	float m_flOldPlayerViewOffsetZ; // 0x13c	
	fogparams_t m_CurrentFog; // 0x140	
	CHandle< C_FogController > m_hOldFogController; // 0x1a8	
	bool m_bOverrideFogColor[5]; // 0x1ac	
	Color m_OverrideFogColor[5]; // 0x1b1	
	bool m_bOverrideFogStartEnd[5]; // 0x1c5	
private:
	[[maybe_unused]] uint8_t __pad01ca[0x2]; // 0x1ca
public:
	float m_fOverrideFogStart[5]; // 0x1cc	
	float m_fOverrideFogEnd[5]; // 0x1e0	
	CHandle< C_PostProcessingVolume > m_hActivePostProcessingVolume; // 0x1f4	
	QAngle m_angDemoViewAngles; // 0x1f8	
};

