#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
// 
// MNetworkVarNames "EMiniMapMarkerType_t m_eType"
class CMiniMapMarker : public CPointEntity
{
public:
	// MNetworkEnable
	EMiniMapMarkerType_t m_eType; // 0x4b8	
};

