#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5b8
// Has VTable
class CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase
{
public:
	Vector m_vMins; // 0x578	
	Vector m_vMaxs; // 0x584	
	Vector m_vDistanceMins; // 0x590	
	Vector m_vDistanceMaxs; // 0x59c	
	float m_flWindMin; // 0x5a8	
	float m_flWindMax; // 0x5ac	
	float m_flWindMapMin; // 0x5b0	
	float m_flWindMapMax; // 0x5b4	
	
	// Datamap fields:
	// void CSoundOpvarSetOBBWindEntitySetOpvarThink; // 0x0
};

