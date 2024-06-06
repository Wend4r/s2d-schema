#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x10
// Has VTable
// Is Abstract
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataNodeType
// MVDataAnonymousNode
class CSmartPropParameter
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertySuppressField
	// MVDataUniqueMonotonicInt "_editor/next_element_id"
	int32_t m_nElementID; // 0x8	
};

