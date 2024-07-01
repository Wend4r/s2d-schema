#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MovementMaintainOffset : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "desired offset"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1b8	
	// MPropertyFriendlyName "local space CP"
	int32_t m_nCP; // 0x1c4	
	// MPropertyFriendlyName "scale by radius"
	bool m_bRadiusScale; // 0x1c8	
};

