#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierAirLiftGrabVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GrabEffect; // 0x5f0	
	// MPropertyStartGroup "Gameplay"
	float m_flLiftHorizontal; // 0x6d0	
	float m_flLiftHeight; // 0x6d4	
	float m_flFollowDampingFactor; // 0x6d8	
	float m_flFollowDistance; // 0x6dc	
	float m_flAllyGrabCancelTime; // 0x6e0	
	float m_flAllyPossibleStuckDistance; // 0x6e4	
};

