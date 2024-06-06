#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0xe8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCurvesColorCorrectionLayer : public CColorCorrectionLayer
{
public:
	CUtlVector< Vector2D > m_curvePointsRGB; // 0x28	
	CUtlVector< Vector2D > m_curvePointsR; // 0x40	
	CUtlVector< Vector2D > m_curvePointsG; // 0x58	
	CUtlVector< Vector2D > m_curvePointsB; // 0x70	
};

