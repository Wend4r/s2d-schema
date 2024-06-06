#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x888
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1b8	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1bc	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c1[0x3]; // 0x1c1
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1c4	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x1c8	
	// MPropertyFriendlyName "set radius"
	bool m_bSetRadius; // 0x1c9	
private:
	[[maybe_unused]] uint8_t __pad01ca[0x2]; // 0x1ca
public:
	// MPropertyFriendlyName "Snapshot Read Type"
	SnapshotIndexType_t m_nIndexType; // 0x1cc	
	// MPropertyFriendlyName "Snapshot Index"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_DIRECT"
	CPerParticleFloatInput m_flReadIndex; // 0x1d0	
	// MPropertyFriendlyName "particle increment amount"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	CParticleCollectionFloatInput m_flIncrement; // 0x328	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x480	
	// MPropertyFriendlyName "Snapshot start point"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x5d8	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x730	
};

