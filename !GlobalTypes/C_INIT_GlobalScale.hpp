#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_GlobalScale : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "scale amount"
	float m_flScale; // 0x1c8	
	// MPropertyFriendlyName "scale control point number"
	int32_t m_nScaleControlPointNumber; // 0x1cc	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1d0	
	// MPropertyFriendlyName "scale radius"
	bool m_bScaleRadius; // 0x1d4	
	// MPropertyFriendlyName "scale position"
	bool m_bScalePosition; // 0x1d5	
	// MPropertyFriendlyName "scale velocity"
	bool m_bScaleVelocity; // 0x1d6	
};

