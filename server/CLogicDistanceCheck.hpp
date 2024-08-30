#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x568
// Has VTable
class CLogicDistanceCheck : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszEntityA; // 0x4d8	
	CUtlSymbolLarge m_iszEntityB; // 0x4e0	
	float m_flZone1Distance; // 0x4e8	
	float m_flZone2Distance; // 0x4ec	
	CEntityIOOutput m_InZone1; // 0x4f0	
	CEntityIOOutput m_InZone2; // 0x518	
	CEntityIOOutput m_InZone3; // 0x540	
	
	// Datamap fields:
	// void InputCheckDistance; // 0x0
};

