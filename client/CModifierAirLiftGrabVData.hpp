#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x730
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierAirLiftGrabVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GrabEffect; // 0x638	
	// MPropertyStartGroup "Gameplay"
	float m_flLiftHorizontal; // 0x718	
	float m_flLiftHeight; // 0x71c	
	float m_flFollowDampingFactor; // 0x720	
	float m_flFollowDistance; // 0x724	
	float m_flAllyGrabCancelTime; // 0x728	
	float m_flAllyPossibleStuckDistance; // 0x72c	
};

