#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Enumerator count: 10
// Alignment: 4
// Size: 0x4
enum class CompMatPropertyMutatorType_t : uint32_t
{
	// MPropertyFriendlyName "Init With"
	COMP_MAT_PROPERTY_MUTATOR_INIT = 0x0,
	// MPropertyFriendlyName "Copy Matching Keys From"
	COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 0x1,
	// MPropertyFriendlyName "Copy Keys with Suffix"
	COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 0x2,
	// MPropertyFriendlyName "Copy Property From"
	COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 0x3,
	// MPropertyFriendlyName "Set Value"
	COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 0x4,
	// MPropertyFriendlyName "Generate Texture"
	COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 0x5,
	// MPropertyFriendlyName "Mutators"
	COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 0x6,
	// MPropertyFriendlyName "Pop Input Variable Queue"
	COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 0x7,
	// MPropertyFriendlyName "Draw Text"
	COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 0x8,
	// MPropertyFriendlyName "Random Roll Input Variables"
	COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9,
};

