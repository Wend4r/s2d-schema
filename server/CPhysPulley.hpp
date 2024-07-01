#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x560
// Has VTable
class CPhysPulley : public CPhysConstraint
{
public:
	Vector m_position2; // 0x530	
	Vector m_offset[2]; // 0x53c	
	float m_addLength; // 0x554	
	float m_gearRatio; // 0x558	
};

