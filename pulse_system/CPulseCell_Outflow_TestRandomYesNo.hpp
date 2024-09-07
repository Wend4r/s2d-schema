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
// MPropertyFriendlyName "[Test] Random Yes/No Outflow"
// MPropertyDescription "Test node that randomly picks between two outflows."
class CPulseCell_Outflow_TestRandomYesNo : public CPulseCell_BaseFlow
{
public:
	// MPropertyFriendlyName "Yes"
	// MPropertyDescription "Randomly taken half of the time"
	CPulse_OutflowConnection m_Yes; // 0x48	
	// MPropertyFriendlyName "No"
	// MPropertyDescription "Randomly taken half of the time"
	CPulse_OutflowConnection m_No; // 0x78	
};

