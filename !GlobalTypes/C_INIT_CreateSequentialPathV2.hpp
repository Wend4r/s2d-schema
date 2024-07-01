#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
struct CParticleCollectionFloatInput;
struct CPathParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x4d0
// Has VTable
// 
// MParticleMinVersion
// MGetKV3ClassDefaults
class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_fMaxDistance; // 0x1c0	
	// MPropertyFriendlyName "particles to map from start to end"
	CParticleCollectionFloatInput m_flNumToAssign; // 0x318	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x470	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x471	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x472	
private:
	[[maybe_unused]] uint8_t __pad0473[0xd]; // 0x473
public:
	CPathParameters m_PathParams; // 0x480	
};

