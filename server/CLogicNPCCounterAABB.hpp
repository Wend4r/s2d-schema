#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x828
// Has VTable
class CLogicNPCCounterAABB : public CLogicNPCCounter
{
public:
	Vector m_vDistanceOuterMins; // 0x7f8	
	Vector m_vDistanceOuterMaxs; // 0x804	
	Vector m_vOuterMins; // 0x810	
	Vector m_vOuterMaxs; // 0x81c	
};

