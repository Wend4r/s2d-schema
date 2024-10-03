#pragma once

#include <cstdint>

struct CPathParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
// 
// MParticleMaxVersion
// MParticleReplacementOp
// MGetKV3ClassDefaults
class C_OP_LockToSavedSequentialPath : public CParticleFunctionOperator
{
private:
	[[maybe_unused]] uint8_t __pad01c0[0x4]; // 0x1c0
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x1c4	
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x1c8	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	CPathParameters m_PathParams; // 0x1d0	
};

