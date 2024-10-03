#pragma once

#include <cstdint>

struct AnimTagID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Tag Condition"
class CAnimGraphDoc_TagCondition : public CAnimGraphDoc_Condition
{
public:
	// MPropertyFriendlyName "Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tagID; // 0x28	
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x2c	
	// MPropertyFriendlyName "Lastest Value"
	bool m_latestValue; // 0x2d	
};

