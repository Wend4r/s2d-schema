#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
struct CCitadelModifierResponseRules_t
{
public:
	CitadelConcept_t m_nConcept; // 0x0	
	CUtlOrderedMap< CUtlString, CUtlString > m_Criteria; // 0x8	
	CCitadelModifierResponseRulesFilterType_t m_nFilterType; // 0x30	
	CCitadelModifierSpeaker_t m_nSpeakerType; // 0x34	
};

