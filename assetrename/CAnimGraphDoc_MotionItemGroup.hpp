#pragma once

#include <cstdint>

struct CAnimGraphDoc_ConditionContainer;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Motion Clip Group"
class CAnimGraphDoc_MotionItemGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_MotionItem > > m_motions; // 0x20	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x38	
	CAnimGraphDoc_ConditionContainer m_conditions; // 0x40	
};

