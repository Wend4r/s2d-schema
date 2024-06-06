#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Blend Item"
class CBlendNodeChild
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x8	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x10	
	// MPropertyFriendlyName "Blend Value"
	float m_blendValue; // 0x18	
};

