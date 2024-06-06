#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Steam Audio Pathing Node"
// MPropertyDescription "Applies steam audio model for pathing audio through space.  This pans the audio based on the openings that the audio is audible through by traversing a path through space from the source to the listener."
class CMixSteamAudioPathing : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Pathing Mix Level"
	// MPropertyAttributeRange "0 1"
	float m_flPathingMixLevel; // 0x20	
	// MPropertyFriendlyName "Pathing EQ"
	// MPropertyAttributeRange "0 1"
	float m_vPathingEQ[3]; // 0x24	
	// MPropertyFriendlyName "Pathing Coefficients"
	// MPropertyAttributeRange "-1 1"
	CUtlVector< float32 > m_vPathingCoeffs; // 0x30	
};

