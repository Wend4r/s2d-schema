#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x588
// Has VTable
class CLogicCompare : public CLogicalEntity
{
public:
	float m_flInValue; // 0x4e0	
	float m_flCompareValue; // 0x4e4	
	CEntityOutputTemplate< float32 > m_OnLessThan; // 0x4e8	
	CEntityOutputTemplate< float32 > m_OnEqualTo; // 0x510	
	CEntityOutputTemplate< float32 > m_OnNotEqualTo; // 0x538	
	CEntityOutputTemplate< float32 > m_OnGreaterThan; // 0x560	
	
	// Datamap fields:
	// float InputSetValue; // 0x0
	// float InputSetValueCompare; // 0x0
	// float InputSetCompareValue; // 0x0
	// void InputCompare; // 0x0
};

