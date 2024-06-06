#pragma once

#include <cstdint>

struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_SetParameterAction : public CAnimGraphDoc_Action
{
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x28	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "Parameter"
	AnimParamID m_param; // 0x30	
	// MPropertyFriendlyName "Value"
	CAnimVariant m_value; // 0x34	
};

