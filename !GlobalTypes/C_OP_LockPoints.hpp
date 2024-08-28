#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LockPoints : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "min column/particle index to affect"
	int32_t m_nMinCol; // 0x1c0	
	// MPropertyFriendlyName "max column/particle index to affect"
	int32_t m_nMaxCol; // 0x1c4	
	// MPropertyFriendlyName "min row/particle index to affect"
	int32_t m_nMinRow; // 0x1c8	
	// MPropertyFriendlyName "max row/particle index to affect"
	int32_t m_nMaxRow; // 0x1cc	
	// MPropertyFriendlyName "control point to lock to"
	int32_t m_nControlPoint; // 0x1d0	
	// MPropertyFriendlyName "amount of current position to preserve"
	float m_flBlendValue; // 0x1d4	
};

