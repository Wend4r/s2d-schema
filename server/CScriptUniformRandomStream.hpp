#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa0
// Has VTable
class CScriptUniformRandomStream
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	HSCRIPT m_hScriptScope; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0010[0x8c]; // 0x10
public:
	int32_t m_nInitialSeed; // 0x9c	
	
	// Static fields:
	static CUtlVector< CScriptUniformRandomStream* > &Get_sm_UniformStreams(){return *reinterpret_cast<CUtlVector< CScriptUniformRandomStream* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CScriptUniformRandomStream")->m_static_fields[0]->m_instance);};
};

