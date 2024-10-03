#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc80
// Has VTable
class CTriggerSndSosOpvar : public CBaseTrigger
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // 0x920	
	Vector m_flPosition; // 0x938	
	float m_flCenterSize; // 0x944	
	float m_flMinVal; // 0x948	
	float m_flMaxVal; // 0x94c	
	CUtlSymbolLarge m_opvarName; // 0x950	
	CUtlSymbolLarge m_stackName; // 0x958	
	CUtlSymbolLarge m_operatorName; // 0x960	
	bool m_bVolIs2D; // 0x968	
	char m_opvarNameChar[256]; // 0x969	
	char m_stackNameChar[256]; // 0xa69	
	char m_operatorNameChar[256]; // 0xb69	
private:
	[[maybe_unused]] uint8_t __pad0c69[0x3]; // 0xc69
public:
	Vector m_VecNormPos; // 0xc6c	
	float m_flNormCenterSize; // 0xc78	
	
	// Datamap fields:
	// void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
	// void m_opvarNameChar; // 0x969
	// void m_stackNameChar; // 0xa69
	// void m_operatorNameChar; // 0xb69
};

