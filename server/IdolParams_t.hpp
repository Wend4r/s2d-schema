#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x390
// 
// MGetKV3ClassDefaults
struct IdolParams_t
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_IdolModel; // 0x0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ParachuteModel; // 0xe0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_CrateModel; // 0x1c0	
	CUtlString m_strLoopingSequenceName; // 0x2a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdolReturnLocationParticle; // 0x2a8	
	float m_flIdolReturnLocationParticleScale; // 0x388	
};

