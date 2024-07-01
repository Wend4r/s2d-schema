#pragma once

#include <cstdint>

struct ModifierTrackedGraphParameter_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
class CTrackedObject_MODIFIER_TRACKED_GRAPH_PARAMETER : public IModifierTrackedObject
{
public:
	// -> m_sParamName - 0x8
	// -> m_restoreValue - 0x10
	ModifierTrackedGraphParameter_t m_objectData; // 0x8	
};

