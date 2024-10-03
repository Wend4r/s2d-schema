#pragma once

#include <cstdint>

struct CEnvWindShared;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x738
// Has VTable
// 
// MNetworkVarNames "CEnvWindShared m_EnvWindShared"
class CEnvWind : public CBaseEntity
{
public:
	// MNetworkEnable
	CEnvWindShared m_EnvWindShared; // 0x4e0	
	
	// Datamap fields:
	// int16_t m_EnvWindShared.m_iMinWind; // 0x4f0
	// int16_t m_EnvWindShared.m_iMaxWind; // 0x4f2
	// int32_t m_EnvWindShared.m_windRadius; // 0x4f4
	// int16_t m_EnvWindShared.m_iMinGust; // 0x4f8
	// int16_t m_EnvWindShared.m_iMaxGust; // 0x4fa
	// float m_EnvWindShared.m_flMinGustDelay; // 0x4fc
	// float m_EnvWindShared.m_flMaxGustDelay; // 0x500
	// int16_t m_EnvWindShared.m_iGustDirChange; // 0x508
	// float m_EnvWindShared.m_flGustDuration; // 0x504
	// int32_t m_EnvWindShared.m_iWindDir; // 0x51c
	// float m_EnvWindShared.m_flWindSpeed; // 0x520
	// void CEnvWindWindThink; // 0x0
};

