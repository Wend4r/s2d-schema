#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2a8
// 
// MGetKV3ClassDefaults
struct IdolParams_t
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_IdolModel; // 0x0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ParachuteModel; // 0xe0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_CrateModel; // 0x1c0	
	CUtlString m_strLoopingSequenceName; // 0x2a0	
};

