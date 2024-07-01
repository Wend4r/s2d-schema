#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CTriggerSndSosOpvar : public CBaseTrigger
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // 0x918	
	Vector m_flPosition; // 0x930	
	float m_flCenterSize; // 0x93c	
	float m_flMinVal; // 0x940	
	float m_flMaxVal; // 0x944	
	CUtlSymbolLarge m_opvarName; // 0x948	
	CUtlSymbolLarge m_stackName; // 0x950	
	CUtlSymbolLarge m_operatorName; // 0x958	
	bool m_bVolIs2D; // 0x960	
	char m_opvarNameChar[256]; // 0x961	
	char m_stackNameChar[256]; // 0xa61	
	char m_operatorNameChar[256]; // 0xb61	
private:
	[[maybe_unused]] uint8_t __pad0c61[0x3]; // 0xc61
public:
	Vector m_VecNormPos; // 0xc64	
	float m_flNormCenterSize; // 0xc70	
	
	// Datamap fields:
	// void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
	// void m_opvarNameChar; // 0x961
	// void m_stackNameChar; // 0xa61
	// void m_operatorNameChar; // 0xb61
};

