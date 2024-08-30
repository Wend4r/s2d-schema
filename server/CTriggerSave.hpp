#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x948
// Has VTable
class CTriggerSave : public CBaseTrigger
{
public:
	bool m_bForceNewLevelUnit; // 0x938	
private:
	[[maybe_unused]] uint8_t __pad0939[0x3]; // 0x939
public:
	float m_fDangerousTimer; // 0x93c	
	int32_t m_minHitPoints; // 0x940	
};

