#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocCommentNode : public CNmGraphDocNode
{
public:
	Vector2D m_size; // 0x48	
	CUtlString m_comment; // 0x50	
	Color m_nodeColor; // 0x58	
	
	// Static fields:
	static Vector2D &Get_s_minSize(){return *reinterpret_cast<Vector2D*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNmGraphDocCommentNode")->m_static_fields[0]->m_instance);};
};

