#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1b8	
	// MPropertyFriendlyName "offset"
	Vector m_vecOffset; // 0x1bc	
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x1c8	
};

