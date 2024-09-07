#pragma once

#include <cstdint>

struct ModifierRenderAttribute_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
class CTrackedObject_MODIFIER_TRACKED_RENDER_ATTRIBUTE : public IModifierTrackedObject
{
public:
	// -> m_sAttribute - 0x8
	// -> m_vValues - 0x10
	ModifierRenderAttribute_t m_objectData; // 0x8	
};

