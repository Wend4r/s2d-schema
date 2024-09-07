#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5b0
// Has VTable
class CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase
{
public:
	Vector m_vMins; // 0x570	
	Vector m_vMaxs; // 0x57c	
	Vector m_vDistanceMins; // 0x588	
	Vector m_vDistanceMaxs; // 0x594	
	float m_flWindMin; // 0x5a0	
	float m_flWindMax; // 0x5a4	
	float m_flWindMapMin; // 0x5a8	
	float m_flWindMapMax; // 0x5ac	
	
	// Datamap fields:
	// void CSoundOpvarSetOBBWindEntitySetOpvarThink; // 0x0
};

