#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x988
// Has VTable
class CTriggerItemShopSafeZone : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0918[0x20]; // 0x918
public:
	CEntityIOOutput m_OnContested; // 0x938	
	CEntityIOOutput m_OnNotContested; // 0x960	
};

