#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x580
// Has VTable
class CPhysPulley : public CPhysConstraint
{
public:
	Vector m_position2; // 0x550	
	Vector m_offset[2]; // 0x55c	
	float m_addLength; // 0x574	
	float m_gearRatio; // 0x578	
};

