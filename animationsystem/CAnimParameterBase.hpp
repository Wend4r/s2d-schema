#pragma once

#include <cstdint>

struct AnimParamID;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x70
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimParameterBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CGlobalSymbol m_name; // 0x18	
	// MPropertyFriendlyName "Comment"
	// MPropertyAttributeEditor "TextBlock()"
	// MPropertySortPriority "-100"
	CUtlString m_sComment; // 0x20	
	// MPropertyHideField
	CUtlString m_group; // 0x28	
	// MPropertyHideField
	AnimParamID m_id; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x14]; // 0x34
public:
	// MPropertyHideField
	// MPropertyAttrChangeCallback
	CUtlString m_componentName; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0050[0x18]; // 0x50
public:
	// MPropertyHideField
	bool m_bNetworkingRequested; // 0x68	
	// MPropertyHideField
	bool m_bIsReferenced; // 0x69	
};

