#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x588
// Has VTable
class CPhysLength : public CPhysConstraint
{
public:
	Vector m_offset[2]; // 0x550	
	Vector m_vecAttach; // 0x568	
	float m_addLength; // 0x574	
	float m_minLength; // 0x578	
	float m_totalLength; // 0x57c	
	bool m_bEnableCollision; // 0x580	
};

