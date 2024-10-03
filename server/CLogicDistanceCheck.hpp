#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x570
// Has VTable
class CLogicDistanceCheck : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszEntityA; // 0x4e0	
	CUtlSymbolLarge m_iszEntityB; // 0x4e8	
	float m_flZone1Distance; // 0x4f0	
	float m_flZone2Distance; // 0x4f4	
	CEntityIOOutput m_InZone1; // 0x4f8	
	CEntityIOOutput m_InZone2; // 0x520	
	CEntityIOOutput m_InZone3; // 0x548	
	
	// Datamap fields:
	// void InputCheckDistance; // 0x0
};

