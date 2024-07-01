#pragma once

#include <cstdint>

struct CEnvWindShared;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MNetworkVarNames "CEnvWindShared m_EnvWindShared"
class CEnvWind : public CBaseEntity
{
public:
	// MNetworkEnable
	CEnvWindShared m_EnvWindShared; // 0x4b8	
	
	// Datamap fields:
	// int16_t m_EnvWindShared.m_iMinWind; // 0x4c8
	// int16_t m_EnvWindShared.m_iMaxWind; // 0x4ca
	// int32_t m_EnvWindShared.m_windRadius; // 0x4cc
	// int16_t m_EnvWindShared.m_iMinGust; // 0x4d0
	// int16_t m_EnvWindShared.m_iMaxGust; // 0x4d2
	// float m_EnvWindShared.m_flMinGustDelay; // 0x4d4
	// float m_EnvWindShared.m_flMaxGustDelay; // 0x4d8
	// int16_t m_EnvWindShared.m_iGustDirChange; // 0x4e0
	// float m_EnvWindShared.m_flGustDuration; // 0x4dc
	// int32_t m_EnvWindShared.m_iWindDir; // 0x4f4
	// float m_EnvWindShared.m_flWindSpeed; // 0x4f8
	// void CEnvWindWindThink; // 0x0
};

