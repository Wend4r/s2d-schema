#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x350
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "random order"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	bool m_bRandom; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x3]; // 0x1c9
public:
	// MPropertyFriendlyName "random seed"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	int32_t m_nRandomSeed; // 0x1cc	
	// MPropertyFriendlyName "prepare for rigid lock"
	bool m_bRigid; // 0x1d0	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x1d1	
	// MPropertyFriendlyName "normal velocity ignore delta time"
	bool m_bIgnoreDt; // 0x1d2	
private:
	[[maybe_unused]] uint8_t __pad01d3[0x1]; // 0x1d3
public:
	// MPropertyFriendlyName "normal velocity min"
	float m_flMinNormalVelocity; // 0x1d4	
	// MPropertyFriendlyName "normal velocity max"
	float m_flMaxNormalVelocity; // 0x1d8	
	// MPropertyFriendlyName "Snapshot Read Type"
	SnapshotIndexType_t m_nIndexType; // 0x1dc	
	// MPropertyFriendlyName "Snapshot Index"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_DIRECT"
	CPerParticleFloatInput m_flReadIndex; // 0x1e0	
	// MPropertyFriendlyName "particle increment amount"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	float m_flIncrement; // 0x338	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	int32_t m_nFullLoopIncrement; // 0x33c	
	// MPropertyFriendlyName "Snapshot start point"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	int32_t m_nSnapShotStartPoint; // 0x340	
	// MPropertyFriendlyName "inherited bone velocity"
	float m_flBoneVelocity; // 0x344	
	// MPropertyFriendlyName "max inherited bone velocity"
	float m_flBoneVelocityMax; // 0x348	
	// MPropertyFriendlyName "Set Color"
	bool m_bCopyColor; // 0x34c	
	// MPropertyFriendlyName "Set Alpha"
	bool m_bCopyAlpha; // 0x34d	
	// MPropertyFriendlyName "Set Radius"
	bool m_bSetRadius; // 0x34e	
};

