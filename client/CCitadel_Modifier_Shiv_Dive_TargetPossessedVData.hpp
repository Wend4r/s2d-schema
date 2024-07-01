#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x750
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Shiv_Dive_TargetPossessedVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x5e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strPossessEndExplodeSound; // 0x6c0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequencePossessEnd; // 0x6d0	
};

