#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x80
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CConcreteAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Preview Button"
	AnimParamButton_t m_previewButton; // 0x70	
	// MPropertyFriendlyName "Network"
	AnimParamNetworkSetting m_eNetworkSetting; // 0x74	
	// MPropertyFriendlyName "Force Latest Value"
	bool m_bUseMostRecentValue; // 0x78	
	// MPropertyFriendlyName "Auto Reset"
	bool m_bAutoReset; // 0x79	
	// MPropertyFriendlyName "Game Writable"
	// MPropertyGroupName "+Permissions"
	// MPropertyAttrStateCallback
	bool m_bGameWritable; // 0x7a	
	// MPropertyFriendlyName "Graph Writable"
	// MPropertyGroupName "+Permissions"
	// MPropertyAttrStateCallback
	bool m_bGraphWritable; // 0x7b	
};

