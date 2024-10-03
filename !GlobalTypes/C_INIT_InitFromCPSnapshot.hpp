#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CParticleCollectionFloatInput;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4a8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x1cc	
	// MPropertyFriendlyName "field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1d0	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1d4	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1d8	
	// MPropertyFriendlyName "reverse order"
	bool m_bReverse; // 0x1d9	
private:
	[[maybe_unused]] uint8_t __pad01da[0x6]; // 0x1da
public:
	// MPropertyFriendlyName "Snapshot increment amount"
	CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x1e0	
	// MPropertyFriendlyName "Manual Snapshot Index"
	CPerParticleFloatInput m_nManualSnapshotIndex; // 0x340	
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x4a0	
	// MPropertyFriendlyName "local space angles"
	bool m_bLocalSpaceAngles; // 0x4a4	
};

