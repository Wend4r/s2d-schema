#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x928
// Has VTable
class CTriggerSave : public CBaseTrigger
{
public:
	bool m_bForceNewLevelUnit; // 0x918	
private:
	[[maybe_unused]] uint8_t __pad0919[0x3]; // 0x919
public:
	float m_fDangerousTimer; // 0x91c	
	int32_t m_minHitPoints; // 0x920	
};

