#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a8
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
	uint32_t m_iFOV; // 0x170	
	// MNetworkEnable
	uint32_t m_iFOVStart; // 0x174	
	// MNetworkEnable
	GameTime_t m_flFOVTime; // 0x178	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFOVRate; // 0x17c	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hZoomOwner; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	CUtlVector< CHandle< CBaseEntity > > m_hTriggerFogList; // 0x188	
	CHandle< CBaseEntity > m_hLastFogTrigger; // 0x1a0	
};

