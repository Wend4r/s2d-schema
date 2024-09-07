#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a8
// Has VTable
class CTriggerItemShopSafeZone : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0938[0x20]; // 0x938
public:
	CEntityIOOutput m_OnContested; // 0x958	
	CEntityIOOutput m_OnNotContested; // 0x980	
};

