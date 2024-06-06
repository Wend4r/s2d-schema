#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xb8
// Has VTable
// 
// MPulseLibraryBindings
// MPulseInternal_IsCursor
class CPulseTurtleGraphicsCursor : public CPulseExecCursor
{
public:
	Color m_Color; // 0xa0	
	Vector2D m_vPos; // 0xa4	
	float m_flHeadingDeg; // 0xac	
	bool m_bPenUp; // 0xb0	
};

