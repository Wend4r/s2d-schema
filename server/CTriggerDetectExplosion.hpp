#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x930
// Has VTable
class CTriggerDetectExplosion : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad08e0[0x28]; // 0x8e0
public:
	CEntityIOOutput m_OnDetectedExplosion; // 0x908	
};

