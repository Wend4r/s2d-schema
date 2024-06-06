#pragma once

#include <cstdint>

struct SignatureOutflow_Resume;
struct CPulse_ResumePoint;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc0
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Listen for Entity Output"
// MPropertyDescription "Waits for the entity to fire a specific output. By default, this listens once, but can be configured to listen until canceled."
// MPulseEditorSubHeaderText
// MPulseEditorHeaderIcon
class CPulseCell_Outflow_ListenForEntityOutput : public CPulseCell_BaseYieldingInflow
{
public:
	// MPulseCellOutflow_IsDefault
	SignatureOutflow_Resume m_OnFired; // 0x48	
	CPulse_ResumePoint m_OnCanceled; // 0x78	
	// MPulseDocCustomAttr
	CGlobalSymbol m_strEntityOutput; // 0xa8	
	// MPropertyDescription "Optional output value to match if applicable. Leave empty to match any possible value for the output param."
	CUtlString m_strEntityOutputParam; // 0xb0	
	// MPropertyDescription "Continue listening for the output until canceled."
	bool m_bListenUntilCanceled; // 0xb8	
};

