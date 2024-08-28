#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x250
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitFromParentKilled : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "field to init"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToCopy; // 0x1c8	
	// MPropertyFriendlyName "event type"
	EventTypeSelection_t m_nEventType; // 0x1cc	
};

