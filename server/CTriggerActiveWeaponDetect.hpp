#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x948
// Has VTable
class CTriggerActiveWeaponDetect : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnTouchedActiveWeapon; // 0x918	
	CUtlSymbolLarge m_iszWeaponClassName; // 0x940	
	
	// Datamap fields:
	// void CTriggerActiveWeaponDetectActiveWeaponThink; // 0x0
};

