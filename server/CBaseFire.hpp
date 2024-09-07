#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
// 
// MNetworkVarNames "float32 m_flScale"
// MNetworkVarNames "float32 m_flStartScale"
// MNetworkVarNames "float32 m_flScaleTime"
// MNetworkVarNames "uint32 m_nFlags"
class CBaseFire : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flScale; // 0x4d8	
	// MNetworkEnable
	float m_flStartScale; // 0x4dc	
	// MNetworkEnable
	float m_flScaleTime; // 0x4e0	
	// MNetworkEnable
	uint32_t m_nFlags; // 0x4e4	
};

