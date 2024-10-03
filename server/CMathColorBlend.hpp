#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CMathColorBlend : public CLogicalEntity
{
public:
	float m_flInMin; // 0x4e0	
	float m_flInMax; // 0x4e4	
	Color m_OutColor1; // 0x4e8	
	Color m_OutColor2; // 0x4ec	
	CEntityOutputTemplate< Color > m_OutValue; // 0x4f0	
	
	// Datamap fields:
	// float InputValue; // 0x0
};

