#pragma once

#include <cstdint>

struct CPulse_OutflowConnection;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "[Test] Explicit Yes/No Outflow"
// MPropertyDescription "Test node that picks between two outflows as specified in the test domain."
class CPulseCell_Outflow_TestExplicitYesNo : public CPulseCell_BaseFlow
{
public:
	// MPropertyFriendlyName "Yes"
	CPulse_OutflowConnection m_Yes; // 0x48	
	// MPropertyFriendlyName "No"
	CPulse_OutflowConnection m_No; // 0x78	
};

