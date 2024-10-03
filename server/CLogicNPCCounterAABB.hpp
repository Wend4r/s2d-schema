#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x850
// Has VTable
class CLogicNPCCounterAABB : public CLogicNPCCounter
{
public:
	Vector m_vDistanceOuterMins; // 0x820	
	Vector m_vDistanceOuterMaxs; // 0x82c	
	Vector m_vOuterMins; // 0x838	
	Vector m_vOuterMaxs; // 0x844	
};

