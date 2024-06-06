#pragma once

#include <cstdint>

struct AnimParamID;
struct CAnimInputDamping;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x48
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Damped Value"
class CDampedValueItem
{
public:
	// MPropertyFriendlyName "Value Type"
	// MPropertyAttrChangeCallback
	DampedValueType m_valueType; // 0x0	
	// MPropertyHideField
	CUtlString m_floatParamNameIn; // 0x8	
	// MPropertyHideField
	CUtlString m_floatParamNameOut; // 0x10	
	// MPropertyHideField
	CUtlString m_vectorParamNameIn; // 0x18	
	// MPropertyHideField
	CUtlString m_vectorParamNameOut; // 0x20	
	// MPropertyFriendlyName "Parameter In"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_floatParamIn; // 0x28	
	// MPropertyFriendlyName "Parameter Out"
	// MPropertyAttributeChoiceName "PrivateFloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_floatParamOut; // 0x2c	
	// MPropertyFriendlyName "Parameter In"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_vectorParamIn; // 0x30	
	// MPropertyFriendlyName "Parameter Out"
	// MPropertyAttributeChoiceName "PrivateVectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_vectorParamOut; // 0x34	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x38	
};

