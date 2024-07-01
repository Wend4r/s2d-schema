#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x950
// Has VTable
class CProjectile_Mirage_Tornado : public CCitadelProjectile
{
public:
	int32_t m_cTicksNoMovement; // 0x7f8	
	CHandle< CAbility_Mirage_Tornado > m_TornadoAbility; // 0x7fc	
};

