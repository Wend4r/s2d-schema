#pragma once

#include <cstdint>

struct hudtextparms_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c0
// Has VTable
class CGameText : public CRulePointEntity
{
public:
	CUtlSymbolLarge m_iszMessage; // 0x7a0	
	hudtextparms_t m_textParms; // 0x7a8	
	
	// Datamap fields:
	// void InputDisplay; // 0x0
	// CUtlSymbolLarge InputSetText; // 0x0
	// Color color; // 0x7fffffff
	// Color color2; // 0x7fffffff
};

