#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x568
// Has VTable
class CPhysLength : public CPhysConstraint
{
public:
	Vector m_offset[2]; // 0x530	
	Vector m_vecAttach; // 0x548	
	float m_addLength; // 0x554	
	float m_minLength; // 0x558	
	float m_totalLength; // 0x55c	
	bool m_bEnableCollision; // 0x560	
};

