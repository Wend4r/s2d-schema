#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x590
// Has VTable
class CSplineConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x48]; // 0x538
public:
	Vector m_vAnchorOffsetRestore; // 0x580	
	
	// Datamap fields:
	// void CSplineConstraintUpdateThink; // 0x0
};

