#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1948
// Has VTable
class CNPC_SurveillanceDrone : public CNPC_FlyingDrone
{
public:
	int32_t m_iMinionHealth; // 0x18e8	
	float m_flLifetime; // 0x18ec	
private:
	[[maybe_unused]] uint8_t __pad18f0[0xc]; // 0x18f0
public:
	Vector m_vecHome; // 0x18fc	
private:
	[[maybe_unused]] uint8_t __pad1908[0x10]; // 0x1908
public:
	int32_t m_nAbilityLevel; // 0x1918	
};

