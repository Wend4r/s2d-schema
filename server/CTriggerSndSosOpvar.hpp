#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CTriggerSndSosOpvar : public CBaseTrigger
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // 0x8e0	
	Vector m_flPosition; // 0x8f8	
	float m_flCenterSize; // 0x904	
	float m_flMinVal; // 0x908	
	float m_flMaxVal; // 0x90c	
	CUtlSymbolLarge m_opvarName; // 0x910	
	CUtlSymbolLarge m_stackName; // 0x918	
	CUtlSymbolLarge m_operatorName; // 0x920	
	bool m_bVolIs2D; // 0x928	
	char m_opvarNameChar[256]; // 0x929	
	char m_stackNameChar[256]; // 0xa29	
	char m_operatorNameChar[256]; // 0xb29	
private:
	[[maybe_unused]] uint8_t __pad0c29[0x3]; // 0xc29
public:
	Vector m_VecNormPos; // 0xc2c	
	float m_flNormCenterSize; // 0xc38	
	
	// Datamap fields:
	// void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
	// void m_opvarNameChar; // 0x929
	// void m_stackNameChar; // 0xa29
	// void m_operatorNameChar; // 0xb29
};

