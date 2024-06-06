#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CEnvSpark : public CPointEntity
{
public:
	float m_flDelay; // 0x4c0	
	int32_t m_nMagnitude; // 0x4c4	
	int32_t m_nTrailLength; // 0x4c8	
	int32_t m_nType; // 0x4cc	
	CEntityIOOutput m_OnSpark; // 0x4d0	
	
	// Datamap fields:
	// void CEnvSparkSparkThink; // 0x0
	// void InputStartSpark; // 0x0
	// void InputStopSpark; // 0x0
	// void InputToggleSpark; // 0x0
	// void InputSparkOnce; // 0x0
};

