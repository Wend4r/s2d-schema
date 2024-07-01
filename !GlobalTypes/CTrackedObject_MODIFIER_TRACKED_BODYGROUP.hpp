#pragma once

#include <cstdint>

struct ModifierTrackedBodyGroup_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MGetKV3ClassDefaults
class CTrackedObject_MODIFIER_TRACKED_BODYGROUP : public IModifierTrackedObject
{
public:
	// -> m_strBodygroupName - 0x8
	// -> m_nRestoreValue - 0x10
	ModifierTrackedBodyGroup_t m_objectData; // 0x8	
};

