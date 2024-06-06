#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf0
// 
// MGetKV3ClassDefaults
struct NmVariation_t
{
public:
	CGlobalSymbol m_ID; // 0x0	
	CGlobalSymbol m_parentID; // 0x8	
	CResourceName m_skeleton; // 0x10	
	
	// Static fields:
	static CGlobalSymbol &Get_s_defaultVariationID(){return *reinterpret_cast<CGlobalSymbol*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("NmVariation_t")->m_static_fields[0]->m_instance);};
};

