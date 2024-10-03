#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6f0
// Has VTable
class CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity
{
public:
	Vector m_vDistanceInnerMins; // 0x688	
	Vector m_vDistanceInnerMaxs; // 0x694	
	Vector m_vDistanceOuterMins; // 0x6a0	
	Vector m_vDistanceOuterMaxs; // 0x6ac	
	int32_t m_nAABBDirection; // 0x6b8	
	Vector m_vInnerMins; // 0x6bc	
	Vector m_vInnerMaxs; // 0x6c8	
	Vector m_vOuterMins; // 0x6d4	
	Vector m_vOuterMaxs; // 0x6e0	
	
	// Datamap fields:
	// void CSoundOpvarSetAABBEntitySetOpvarThink; // 0x0
};

