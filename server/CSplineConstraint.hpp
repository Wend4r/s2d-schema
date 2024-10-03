#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5b0
// Has VTable
class CSplineConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0558[0x48]; // 0x558
public:
	Vector m_vAnchorOffsetRestore; // 0x5a0	
	
	// Datamap fields:
	// void CSplineConstraintUpdateThink; // 0x0
};

