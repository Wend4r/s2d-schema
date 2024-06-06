#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseViewModel > m_hViewModel"
class CCSPlayer_ViewModelServices : public CPlayer_ViewModelServices
{
public:
	// MNetworkEnable
	CHandle< C_BaseViewModel > m_hViewModel[3]; // 0x40	
};

