#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x1c0	
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance; // 0x1c4	
	// MPropertyFriendlyName "Time scale"
	float m_flTimeScale; // 0x1c8	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bLoopedPath; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	// MPropertyFriendlyName "path points"
	CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x1d0	
};

