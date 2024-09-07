#pragma once

#include <cstdint>

struct ParticlePreviewState_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x88
// 
// MGetKV3ClassDefaults
struct ParticleControlPointConfiguration_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< ParticleControlPointDriver_t > m_drivers; // 0x8	
	ParticlePreviewState_t m_previewState; // 0x20	
};

