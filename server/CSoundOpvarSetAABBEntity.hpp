#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6a8
// Has VTable
class CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity
{
public:
	Vector m_vDistanceInnerMins; // 0x640	
	Vector m_vDistanceInnerMaxs; // 0x64c	
	Vector m_vDistanceOuterMins; // 0x658	
	Vector m_vDistanceOuterMaxs; // 0x664	
	int32_t m_nAABBDirection; // 0x670	
	Vector m_vInnerMins; // 0x674	
	Vector m_vInnerMaxs; // 0x680	
	Vector m_vOuterMins; // 0x68c	
	Vector m_vOuterMaxs; // 0x698	
	
	// Datamap fields:
	// void CSoundOpvarSetAABBEntitySetOpvarThink; // 0x0
};

