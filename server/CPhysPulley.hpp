#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x568
// Has VTable
class CPhysPulley : public CPhysConstraint
{
public:
	Vector m_position2; // 0x538	
	Vector m_offset[2]; // 0x544	
	float m_addLength; // 0x55c	
	float m_gearRatio; // 0x560	
};

