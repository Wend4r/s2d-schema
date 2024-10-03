#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x580
// Has VTable
class CRagdollConstraint : public CPhysConstraint
{
public:
	float m_xmin; // 0x558	
	float m_xmax; // 0x55c	
	float m_ymin; // 0x560	
	float m_ymax; // 0x564	
	float m_zmin; // 0x568	
	float m_zmax; // 0x56c	
	float m_xfriction; // 0x570	
	float m_yfriction; // 0x574	
	float m_zfriction; // 0x578	
};

