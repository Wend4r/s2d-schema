#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x260
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RtEnvCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "test direction"
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x1b8	
	// MPropertyFriendlyName "cull normal"
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x1c4	
	// MPropertyFriendlyName "cull on miss"
	bool m_bCullOnMiss; // 0x1d0	
	// MPropertyFriendlyName "stick instead of cull"
	bool m_bStickInsteadOfCull; // 0x1d1	
	// MPropertyFriendlyName "ray trace environment name"
	char m_RtEnvName[128]; // 0x1d2	
private:
	[[maybe_unused]] uint8_t __pad0252[0x2]; // 0x252
public:
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x254	
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x258	
};

