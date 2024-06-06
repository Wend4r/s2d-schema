#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class StateValue : uint32_t
{
	// MPropertyFriendlyName "Total Translation (Source State)"
	TotalTranslation_SourceState = 0x0,
	// MPropertyFriendlyName "Total Translation (Target State)"
	TotalTranslation_TargetState = 0x1,
	// MPropertyFriendlyName "Source State Blend Weight"
	SourceStateBlendWeight = 0x2,
	// MPropertyFriendlyName "Target State Blend Weight"
	TargetStateBlendWeight = 0x3,
	Count = 0x4,
};

