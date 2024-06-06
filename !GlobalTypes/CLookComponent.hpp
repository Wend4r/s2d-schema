#pragma once

#include <cstdint>

struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
class CLookComponent : public CAnimGraphDoc_Component
{
public:
	// MPropertyFriendlyName "Network Look Target"
	bool m_bNetworkLookTarget; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0039[0x3]; // 0x39
public:
	// MPropertyHideField
	AnimParamID m_lookHeadingID; // 0x3c	
	// MPropertyHideField
	AnimParamID m_lookHeadingVelocityID; // 0x40	
	// MPropertyHideField
	AnimParamID m_lookPitchID; // 0x44	
	// MPropertyHideField
	AnimParamID m_lookDistanceID; // 0x48	
	// MPropertyHideField
	AnimParamID m_lookDirectionID; // 0x4c	
	// MPropertyHideField
	AnimParamID m_lookTargetID; // 0x50	
	// MPropertyHideField
	AnimParamID m_lookTargetWorldSpaceID; // 0x54	
};

