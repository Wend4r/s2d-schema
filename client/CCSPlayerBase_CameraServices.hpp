#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x228
// Has VTable
// 
// MNetworkVarNames "uint32 m_iFOV"
// MNetworkVarNames "uint32 m_iFOVStart"
// MNetworkVarNames "GameTime_t m_flFOVTime"
// MNetworkVarNames "float32 m_flFOVRate"
// MNetworkVarNames "CHandle< CBaseEntity> m_hZoomOwner"
class CCSPlayerBase_CameraServices : public CPlayer_CameraServices
{
public:
	// MNetworkEnable
	uint32_t m_iFOV; // 0x210	
	// MNetworkEnable
	uint32_t m_iFOVStart; // 0x214	
	// MNetworkEnable
	GameTime_t m_flFOVTime; // 0x218	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFOVRate; // 0x21c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hZoomOwner; // 0x220	
	float m_flLastShotFOV; // 0x224	
};

