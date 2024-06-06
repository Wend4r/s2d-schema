#pragma once

#include <cstdint>

struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
class CSlopeComponent : public CAnimGraphDoc_Component
{
public:
	// MPropertyFriendlyName "Trace Distance"
	float m_flTraceDistance; // 0x38	
	// MPropertyHideField
	AnimParamID m_slopeAngleID; // 0x3c	
	// MPropertyHideField
	AnimParamID m_slopeHeadingID; // 0x40	
	// MPropertyHideField
	AnimParamID m_slopeAngleSideID; // 0x44	
	// MPropertyHideField
	AnimParamID m_slopeAngleFrontID; // 0x48	
	// MPropertyHideField
	AnimParamID m_slopeNormalID; // 0x4c	
	// MPropertyHideField
	AnimParamID m_slopeNormal_WorldSpaceID; // 0x50	
};

