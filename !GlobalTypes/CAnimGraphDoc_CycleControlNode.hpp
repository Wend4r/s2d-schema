#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Cycle Control"
class CAnimGraphDoc_CycleControlNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_valueSource; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x50	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x58	
};

