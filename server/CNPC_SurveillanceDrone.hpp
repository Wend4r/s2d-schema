#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1618
// Has VTable
class CNPC_SurveillanceDrone : public CNPC_FlyingDrone
{
public:
	int32_t m_iMinionHealth; // 0x15b8	
	float m_flLifetime; // 0x15bc	
private:
	[[maybe_unused]] uint8_t __pad15c0[0xc]; // 0x15c0
public:
	Vector m_vecHome; // 0x15cc	
private:
	[[maybe_unused]] uint8_t __pad15d8[0x10]; // 0x15d8
public:
	int32_t m_nAbilityLevel; // 0x15e8	
};

