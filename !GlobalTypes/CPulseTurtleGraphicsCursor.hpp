#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xc0
// Has VTable
// 
// MPulseLibraryBindings
// MPulseInternal_IsCursor
class CPulseTurtleGraphicsCursor : public CPulseExecCursor
{
public:
	Color m_Color; // 0xa8	
	Vector2D m_vPos; // 0xac	
	float m_flHeadingDeg; // 0xb4	
	bool m_bPenUp; // 0xb8	
};

