#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e0
// Has VTable
class CCitadelObserver_MovementServices : public CPlayer_MovementServices
{
public:
	float m_flRoamingSpeed; // 0x1d8	
	bool m_bInExtraInfo; // 0x1dc	
	bool m_bInShowScoreboard; // 0x1dd	
};

