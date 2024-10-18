#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x970
// Has VTable
class CTriggerSave : public CBaseTrigger
{
public:
	bool m_bForceNewLevelUnit; // 0x960	
private:
	[[maybe_unused]] uint8_t __pad0961[0x3]; // 0x961
public:
	float m_fDangerousTimer; // 0x964	
	int32_t m_minHitPoints; // 0x968	
};

