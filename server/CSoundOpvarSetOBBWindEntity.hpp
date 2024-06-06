#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x598
// Has VTable
class CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase
{
public:
	Vector m_vMins; // 0x558	
	Vector m_vMaxs; // 0x564	
	Vector m_vDistanceMins; // 0x570	
	Vector m_vDistanceMaxs; // 0x57c	
	float m_flWindMin; // 0x588	
	float m_flWindMax; // 0x58c	
	float m_flWindMapMin; // 0x590	
	float m_flWindMapMax; // 0x594	
	
	// Datamap fields:
	// void CSoundOpvarSetOBBWindEntitySetOpvarThink; // 0x0
};

