#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPropertyFriendlyName "Limit Count"
// MPropertyDescription "Skip this node after the limit. Check Type does not apply, the limit will always be checked."
// MPulseRequirementPass
class CPulseCell_LimitCount : public CPulseCell_BaseRequirement
{
public:
	// MPropertyFlattenIntoParentRow
	int32_t m_nLimitCount; // 0x48	
};

