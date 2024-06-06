#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Comment"
class CAnimGraphDoc_CommentNode : public CAnimGraphDoc_Node
{
public:
	// MPropertySuppressField
	CUtlString m_commentText; // 0x40	
	// MPropertySuppressField
	Vector2D m_size; // 0x48	
	// MPropertyFriendlyName "Color"
	Color m_color; // 0x50	
};

