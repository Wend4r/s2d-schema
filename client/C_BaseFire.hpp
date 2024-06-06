#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
// 
// MNetworkVarNames "float32 m_flScale"
// MNetworkVarNames "float32 m_flStartScale"
// MNetworkVarNames "float m_flScaleTime"
// MNetworkVarNames "uint32 m_nFlags"
class C_BaseFire : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flScale; // 0x548	
	// MNetworkEnable
	float m_flStartScale; // 0x54c	
	// MNetworkEnable
	float m_flScaleTime; // 0x550	
	// MNetworkEnable
	uint32_t m_nFlags; // 0x554	
};

