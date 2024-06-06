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
class C_INIT_CreateSequentialPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1c0	
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x1c4	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x1c8	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1c9	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x1ca	
private:
	[[maybe_unused]] uint8_t __pad01cb[0x5]; // 0x1cb
public:
	CPathParameters m_PathParams; // 0x1d0	
};

