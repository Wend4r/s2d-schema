#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x750
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierAirLiftGrabVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GrabEffect; // 0x658	
	// MPropertyStartGroup "Gameplay"
	float m_flLiftHorizontal; // 0x738	
	float m_flLiftHeight; // 0x73c	
	float m_flFollowDampingFactor; // 0x740	
	float m_flFollowDistance; // 0x744	
	float m_flAllyGrabCancelTime; // 0x748	
	float m_flAllyPossibleStuckDistance; // 0x74c	
};

