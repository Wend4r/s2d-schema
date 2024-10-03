#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x590
// Has VTable
class CPhysLength : public CPhysConstraint
{
public:
	Vector m_offset[2]; // 0x558	
	Vector m_vecAttach; // 0x570	
	float m_addLength; // 0x57c	
	float m_minLength; // 0x580	
	float m_totalLength; // 0x584	
	bool m_bEnableCollision; // 0x588	
};

