#pragma once

#include <cstdint>

struct CPathParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
// 
// MParticleMinVersion
// MGetKV3ClassDefaults
class C_OP_LockToSavedSequentialPathV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x1c0	
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x1c4	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x7]; // 0x1c9
public:
	CPathParameters m_PathParams; // 0x1d0	
};

