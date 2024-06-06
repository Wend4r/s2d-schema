#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x910
// Has VTable
class CTriggerDetectBulletFire : public CBaseTrigger
{
public:
	bool m_bPlayerFireOnly; // 0x8e0	
private:
	[[maybe_unused]] uint8_t __pad08e1[0x7]; // 0x8e1
public:
	CEntityIOOutput m_OnDetectedBulletFire; // 0x8e8	
};

