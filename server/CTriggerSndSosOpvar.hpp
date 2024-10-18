#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcc0
// Has VTable
class CTriggerSndSosOpvar : public CBaseTrigger
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // 0x960	
	Vector m_flPosition; // 0x978	
	float m_flCenterSize; // 0x984	
	float m_flMinVal; // 0x988	
	float m_flMaxVal; // 0x98c	
	CUtlSymbolLarge m_opvarName; // 0x990	
	CUtlSymbolLarge m_stackName; // 0x998	
	CUtlSymbolLarge m_operatorName; // 0x9a0	
	bool m_bVolIs2D; // 0x9a8	
	char m_opvarNameChar[256]; // 0x9a9	
	char m_stackNameChar[256]; // 0xaa9	
	char m_operatorNameChar[256]; // 0xba9	
private:
	[[maybe_unused]] uint8_t __pad0ca9[0x3]; // 0xca9
public:
	Vector m_VecNormPos; // 0xcac	
	float m_flNormCenterSize; // 0xcb8	
	
	// Datamap fields:
	// void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
	// void m_opvarNameChar; // 0x9a9
	// void m_stackNameChar; // 0xaa9
	// void m_operatorNameChar; // 0xba9
};

