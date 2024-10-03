#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x610
// Has VTable
class CTestEffect : public CBaseEntity
{
public:
	int32_t m_iLoop; // 0x4e0	
	int32_t m_iBeam; // 0x4e4	
	CBeam* m_pBeam[24]; // 0x4e8	
	GameTime_t m_flBeamTime[24]; // 0x5a8	
	GameTime_t m_flStartTime; // 0x608	
};

