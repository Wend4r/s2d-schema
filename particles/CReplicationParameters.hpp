#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x10c0
// 
// MGetKV3ClassDefaults
class CReplicationParameters
{
public:
	// MPropertyFriendlyName "Replication mode"
	ParticleReplicationMode_t m_nReplicationMode; // 0x0	
	// MPropertyFriendlyName "Scale child particle radius based on parent radius"
	bool m_bScaleChildParticleRadii; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	// MPropertyFriendlyName "Minimum random scale for radius"
	CParticleCollectionFloatInput m_flMinRandomRadiusScale; // 0x8	
	// MPropertyFriendlyName "Maximum random scale for radius"
	CParticleCollectionFloatInput m_flMaxRandomRadiusScale; // 0x160	
	// MPropertyFriendlyName "min random displacement for child particles"
	CParticleCollectionVecInput m_vMinRandomDisplacement; // 0x2b8	
	// MPropertyFriendlyName "max random displacement for child particles"
	CParticleCollectionVecInput m_vMaxRandomDisplacement; // 0x910	
	// MPropertyFriendlyName "Modelling scale"
	CParticleCollectionFloatInput m_flModellingScale; // 0xf68	
};

