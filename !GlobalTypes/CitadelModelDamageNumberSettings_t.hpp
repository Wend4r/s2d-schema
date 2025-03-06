#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
// 
// MModelGameData
// MGetKV3ClassDefaults
struct CitadelModelDamageNumberSettings_t
{
public:
	// MPropertyDescription "How far offset to the left and right will damage numbers be when this model takes damage and is near the camera"
	// MPropertyFriendlyName "Side Offset (near)"
	float m_flSideOffsetNear; // 0x0	
	// MPropertyDescription "How far offset to the left and right will damage numbers be when this model takes damage and is far from the camera"
	// MPropertyFriendlyName "Side Offset (far)"
	float m_flSideOffsetFar; // 0x4	
	// MPropertyDescription "How far vertically will damage numbers be when this model takes damage when the model is near"
	// MPropertyFriendlyName "Height Offset (near)"
	float m_flHeightOffsetNear; // 0x8	
	// MPropertyDescription "How far vertically will damage numbers be when this model takes damage when the model is far"
	// MPropertyFriendlyName "Height Offset (far)"
	float m_flHeightOffsetFar; // 0xc	
};

