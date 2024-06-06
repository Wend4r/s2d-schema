#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
class CCSPlayer_UseServices : public CPlayer_UseServices
{
public:
	CHandle< CBaseEntity > m_hLastKnownUseEntity; // 0x40	
	GameTime_t m_flLastUseTimeStamp; // 0x44	
	GameTime_t m_flTimeLastUsedWindow; // 0x48	
};

