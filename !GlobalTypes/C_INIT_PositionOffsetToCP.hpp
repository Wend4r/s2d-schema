#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_PositionOffsetToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "creation control point number"
	int32_t m_nControlPointNumberStart; // 0x1c0	
	// MPropertyFriendlyName "offset control point number"
	int32_t m_nControlPointNumberEnd; // 0x1c4	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x1c8	
};

