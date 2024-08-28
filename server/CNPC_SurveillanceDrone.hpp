#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1630
// Has VTable
class CNPC_SurveillanceDrone : public CNPC_FlyingDrone
{
public:
	int32_t m_iMinionHealth; // 0x15d0	
	float m_flLifetime; // 0x15d4	
private:
	[[maybe_unused]] uint8_t __pad15d8[0xc]; // 0x15d8
public:
	Vector m_vecHome; // 0x15e4	
private:
	[[maybe_unused]] uint8_t __pad15f0[0x10]; // 0x15f0
public:
	int32_t m_nAbilityLevel; // 0x1600	
};

