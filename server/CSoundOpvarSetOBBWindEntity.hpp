#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x590
// Has VTable
class CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase
{
public:
	Vector m_vMins; // 0x550	
	Vector m_vMaxs; // 0x55c	
	Vector m_vDistanceMins; // 0x568	
	Vector m_vDistanceMaxs; // 0x574	
	float m_flWindMin; // 0x580	
	float m_flWindMax; // 0x584	
	float m_flWindMapMin; // 0x588	
	float m_flWindMapMax; // 0x58c	
	
	// Datamap fields:
	// void CSoundOpvarSetOBBWindEntitySetOpvarThink; // 0x0
};

