#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6d0
// Has VTable
class CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity
{
public:
	Vector m_vDistanceInnerMins; // 0x668	
	Vector m_vDistanceInnerMaxs; // 0x674	
	Vector m_vDistanceOuterMins; // 0x680	
	Vector m_vDistanceOuterMaxs; // 0x68c	
	int32_t m_nAABBDirection; // 0x698	
	Vector m_vInnerMins; // 0x69c	
	Vector m_vInnerMaxs; // 0x6a8	
	Vector m_vOuterMins; // 0x6b4	
	Vector m_vOuterMaxs; // 0x6c0	
	
	// Datamap fields:
	// void CSoundOpvarSetAABBEntitySetOpvarThink; // 0x0
};

