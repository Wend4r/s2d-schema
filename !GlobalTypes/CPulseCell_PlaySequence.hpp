#pragma once

#include <cstdint>

struct PulseNodeDynamicOutflows_t;
struct CPulse_ResumePoint;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseDomainOptInFeatureTag
// MPropertyFriendlyName "Play Sequence"
// MPropertyDescription "Play the specified animation sequence on a NON-ANIMGRAPH entity, and wait for it to complete."
class CPulseCell_PlaySequence : public CPulseCell_BaseYieldingInflow
{
public:
	// MPropertyAttributeSuggestionName
	CUtlString m_SequenceName; // 0x48	
	// MPulseDocCustomAttr
	PulseNodeDynamicOutflows_t m_PulseAnimEvents; // 0x50	
	// MPulseCellOutflow_IsDefault
	CPulse_ResumePoint m_OnFinished; // 0x68	
	CPulse_ResumePoint m_OnCanceled; // 0x98	
};

