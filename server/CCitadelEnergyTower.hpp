#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CCitadelEnergyTower : public CServerOnlyEntity
{
public:
	bool m_bEnabled; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	float m_flDamage; // 0x4bc	
	float m_flRadius; // 0x4c0	
	
	// Datamap fields:
	//  InputEnable; // 0x0
	//  InputDisable; // 0x0
};

