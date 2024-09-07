#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0x80
// Has VTable
class CNavVolumeSphere : public CNavVolume
{
public:
	Vector m_vCenter; // 0x70	
	float m_flRadius; // 0x7c	
};

