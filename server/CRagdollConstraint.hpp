#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x560
// Has VTable
class CRagdollConstraint : public CPhysConstraint
{
public:
	float m_xmin; // 0x538	
	float m_xmax; // 0x53c	
	float m_ymin; // 0x540	
	float m_ymax; // 0x544	
	float m_zmin; // 0x548	
	float m_zmax; // 0x54c	
	float m_xfriction; // 0x550	
	float m_yfriction; // 0x554	
	float m_zfriction; // 0x558	
};

