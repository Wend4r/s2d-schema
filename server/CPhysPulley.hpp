#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x588
// Has VTable
class CPhysPulley : public CPhysConstraint
{
public:
	Vector m_position2; // 0x558	
	Vector m_offset[2]; // 0x564	
	float m_addLength; // 0x57c	
	float m_gearRatio; // 0x580	
};

