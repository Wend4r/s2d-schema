#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CParticleCollectionFloatInput;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x490
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x1c4	
	// MPropertyFriendlyName "field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1c8	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1cc	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1d0	
	// MPropertyFriendlyName "reverse order"
	bool m_bReverse; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0x6]; // 0x1d2
public:
	// MPropertyFriendlyName "Snapshot increment amount"
	CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x1d8	
	// MPropertyFriendlyName "Manual Snapshot Index"
	CPerParticleFloatInput m_nManualSnapshotIndex; // 0x330	
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x488	
	// MPropertyFriendlyName "local space angles"
	bool m_bLocalSpaceAngles; // 0x48c	
};

