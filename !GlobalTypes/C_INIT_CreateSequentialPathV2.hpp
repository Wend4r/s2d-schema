#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
struct CParticleCollectionFloatInput;
struct CPathParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x4e0
// Has VTable
// 
// MParticleMinVersion
// MGetKV3ClassDefaults
class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_fMaxDistance; // 0x1c8	
	// MPropertyFriendlyName "particles to map from start to end"
	CParticleCollectionFloatInput m_flNumToAssign; // 0x328	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x488	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x489	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x48a	
private:
	[[maybe_unused]] uint8_t __pad048b[0x5]; // 0x48b
public:
	CPathParameters m_PathParams; // 0x490	
};

