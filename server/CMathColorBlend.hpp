#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CMathColorBlend : public CLogicalEntity
{
public:
	float m_flInMin; // 0x4c0	
	float m_flInMax; // 0x4c4	
	Color m_OutColor1; // 0x4c8	
	Color m_OutColor2; // 0x4cc	
	CEntityOutputTemplate< Color > m_OutValue; // 0x4d0	
	
	// Datamap fields:
	// float InputValue; // 0x0
};

