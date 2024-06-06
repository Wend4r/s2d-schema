#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x830
// Has VTable
class CLogicNPCCounterAABB : public CLogicNPCCounter
{
public:
	Vector m_vDistanceOuterMins; // 0x800	
	Vector m_vDistanceOuterMaxs; // 0x80c	
	Vector m_vOuterMins; // 0x818	
	Vector m_vOuterMaxs; // 0x824	
};

