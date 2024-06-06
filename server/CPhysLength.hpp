#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x570
// Has VTable
class CPhysLength : public CPhysConstraint
{
public:
	Vector m_offset[2]; // 0x538	
	Vector m_vecAttach; // 0x550	
	float m_addLength; // 0x55c	
	float m_minLength; // 0x560	
	float m_totalLength; // 0x564	
	bool m_bEnableCollision; // 0x568	
};

