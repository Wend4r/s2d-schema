#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1ec8
// Has VTable
class CSoundEnt : public CPointEntity
{
public:
	int32_t m_iFreeSound; // 0x4b8	
	int32_t m_iActiveSound; // 0x4bc	
	int32_t m_cLastActiveSounds; // 0x4c0	
	CSound m_SoundPool[128]; // 0x4c4	
};

