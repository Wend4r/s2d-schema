#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1608
// Has VTable
class CNPC_SurveillanceDrone : public CNPC_FlyingDrone
{
public:
	int32_t m_iMinionHealth; // 0x15a8	
	float m_flLifetime; // 0x15ac	
private:
	[[maybe_unused]] uint8_t __pad15b0[0xc]; // 0x15b0
public:
	Vector m_vecHome; // 0x15bc	
private:
	[[maybe_unused]] uint8_t __pad15c8[0x10]; // 0x15c8
public:
	int32_t m_nAbilityLevel; // 0x15d8	
};

