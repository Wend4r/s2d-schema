#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8f0
// Has VTable
class CTriggerSave : public CBaseTrigger
{
public:
	bool m_bForceNewLevelUnit; // 0x8e0	
private:
	[[maybe_unused]] uint8_t __pad08e1[0x3]; // 0x8e1
public:
	float m_fDangerousTimer; // 0x8e4	
	int32_t m_minHitPoints; // 0x8e8	
};

