#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_NormalOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	Vector m_OffsetMin; // 0x1c0	
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	Vector m_OffsetMax; // 0x1cc	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1d8	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x1dc	
	// MPropertyFriendlyName "normalize output 0/1"
	bool m_bNormalize; // 0x1dd	
};

