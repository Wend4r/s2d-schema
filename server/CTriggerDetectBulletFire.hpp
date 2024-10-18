#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x990
// Has VTable
class CTriggerDetectBulletFire : public CBaseTrigger
{
public:
	bool m_bPlayerFireOnly; // 0x960	
private:
	[[maybe_unused]] uint8_t __pad0961[0x7]; // 0x961
public:
	CEntityIOOutput m_OnDetectedBulletFire; // 0x968	
};

