#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x848
// Has VTable
class CLogicNPCCounterAABB : public CLogicNPCCounter
{
public:
	Vector m_vDistanceOuterMins; // 0x818	
	Vector m_vDistanceOuterMaxs; // 0x824	
	Vector m_vOuterMins; // 0x830	
	Vector m_vOuterMaxs; // 0x83c	
};

