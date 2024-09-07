#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x988
// Has VTable
class CTriggerDetectExplosion : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0938[0x28]; // 0x938
public:
	CEntityIOOutput m_OnDetectedExplosion; // 0x960	
};

