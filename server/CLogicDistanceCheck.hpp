#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CLogicDistanceCheck : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszEntityA; // 0x4c0	
	CUtlSymbolLarge m_iszEntityB; // 0x4c8	
	float m_flZone1Distance; // 0x4d0	
	float m_flZone2Distance; // 0x4d4	
	CEntityIOOutput m_InZone1; // 0x4d8	
	CEntityIOOutput m_InZone2; // 0x500	
	CEntityIOOutput m_InZone3; // 0x528	
	
	// Datamap fields:
	// void InputCheckDistance; // 0x0
};

