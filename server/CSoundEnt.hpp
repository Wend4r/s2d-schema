#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1ed0
// Has VTable
class CSoundEnt : public CPointEntity
{
public:
	int32_t m_iFreeSound; // 0x4c0	
	int32_t m_iActiveSound; // 0x4c4	
	int32_t m_cLastActiveSounds; // 0x4c8	
	CSound m_SoundPool[128]; // 0x4cc	
};

