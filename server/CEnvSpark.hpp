#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CEnvSpark : public CPointEntity
{
public:
	float m_flDelay; // 0x4e0	
	int32_t m_nMagnitude; // 0x4e4	
	int32_t m_nTrailLength; // 0x4e8	
	int32_t m_nType; // 0x4ec	
	CEntityIOOutput m_OnSpark; // 0x4f0	
	
	// Datamap fields:
	// void CEnvSparkSparkThink; // 0x0
	// void InputStartSpark; // 0x0
	// void InputStopSpark; // 0x0
	// void InputToggleSpark; // 0x0
	// void InputSparkOnce; // 0x0
};

