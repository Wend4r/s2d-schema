#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x910
// Has VTable
class CTriggerActiveWeaponDetect : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnTouchedActiveWeapon; // 0x8e0	
	CUtlSymbolLarge m_iszWeaponClassName; // 0x908	
	
	// Datamap fields:
	// void CTriggerActiveWeaponDetectActiveWeaponThink; // 0x0
};

