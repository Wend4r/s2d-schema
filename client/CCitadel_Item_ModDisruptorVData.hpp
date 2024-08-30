#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_ModDisruptorVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DetonateParticle; // 0x1538	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DisruptModifier; // 0x1618	
	// MPropertyStartGroup "Gameplay"
	float m_flWaveSpeed; // 0x1628	
};

