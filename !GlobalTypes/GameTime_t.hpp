#pragma once

#include <cstdint>

// Registered binary: engine2.dll (project 'entity2')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedFloatType
struct GameTime_t
{
public:
	float m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_FLOAT(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("GameTime_t")->m_static_fields[0]->m_instance);};
	static GameTime_t &Get_Zero(){return *reinterpret_cast<GameTime_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("GameTime_t")->m_static_fields[1]->m_instance);};
};

