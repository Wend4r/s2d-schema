#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x968
// Has VTable
class CTriggerActiveWeaponDetect : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnTouchedActiveWeapon; // 0x938	
	CUtlSymbolLarge m_iszWeaponClassName; // 0x960	
	
	// Datamap fields:
	// void CTriggerActiveWeaponDetectActiveWeaponThink; // 0x0
};

