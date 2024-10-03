#pragma once

#include <cstdint>

struct CPathParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x220
// Has VTable
// 
// MParticleMaxVersion
// MParticleReplacementOp
// MGetKV3ClassDefaults
class C_INIT_CreateSequentialPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1c8	
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x1cc	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x1d0	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1d1	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x1d2	
private:
	[[maybe_unused]] uint8_t __pad01d3[0xd]; // 0x1d3
public:
	CPathParameters m_PathParams; // 0x1e0	
};

