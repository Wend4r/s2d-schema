#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseViewModel > m_hViewModel"
class CCSPlayer_ViewModelServices : public CPlayer_ViewModelServices
{
public:
	// MNetworkEnable
	CHandle< CBaseViewModel > m_hViewModel[3]; // 0x40	
};

