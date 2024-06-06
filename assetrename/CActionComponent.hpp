#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
class CActionComponent : public CAnimGraphDoc_Component
{
public:
	CUtlVector< CSmartPtr< CAnimGraphDoc_Action > > m_actions; // 0x38	
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x50	
};

