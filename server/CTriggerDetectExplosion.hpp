#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x968
// Has VTable
class CTriggerDetectExplosion : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0918[0x28]; // 0x918
public:
	CEntityIOOutput m_OnDetectedExplosion; // 0x940	
};

