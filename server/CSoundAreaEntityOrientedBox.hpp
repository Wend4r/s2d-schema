#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
// 
// MNetworkVarNames "Vector m_vMin"
// MNetworkVarNames "Vector m_vMax"
class CSoundAreaEntityOrientedBox : public CSoundAreaEntityBase
{
public:
	// MNetworkEnable
	Vector m_vMin; // 0x4f8	
	// MNetworkEnable
	Vector m_vMax; // 0x504	
};

