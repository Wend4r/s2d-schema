#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class CompMatPropertyMutatorConditionType_t : uint32_t
{
	// MPropertyFriendlyName "Input Container Exists"
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
	// MPropertyFriendlyName "Input Container Variable Exists"
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
	// MPropertyFriendlyName "Input Container Variable Exists and Equals"
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2,
};

