#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x588
// Has VTable
class CSplineConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0530[0x48]; // 0x530
public:
	Vector m_vAnchorOffsetRestore; // 0x578	
	
	// Datamap fields:
	// void CSplineConstraintUpdateThink; // 0x0
};

