#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xe8
// Has VTable
// 
// MPulseLibraryBindings
// MPulseInternal_IsCursor
class CPulseTurtleGraphicsCursor : public CPulseExecCursor
{
public:
	Color m_Color; // 0xd0	
	Vector2D m_vPos; // 0xd4	
	float m_flHeadingDeg; // 0xdc	
	bool m_bPenUp; // 0xe0	
};

