#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Enum Parameter"
class CEnumAnimParameter : public CConcreteAnimParameter
{
private:
	[[maybe_unused]] uint8_t __pad0080[0x8]; // 0x80
public:
	// MPropertyFriendlyName "Default Value"
	uint8_t m_defaultValue; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad0089[0x7]; // 0x89
public:
	// MPropertyFriendlyName "Values"
	// MPropertyAttrChangeCallback
	CUtlVector< CUtlString > m_enumOptions; // 0x90	
	// MPropertyHideField
	CUtlVector< uint64 > m_vecEnumReferenced; // 0xa8	
};

