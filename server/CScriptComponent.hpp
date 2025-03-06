#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
class CScriptComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x28]; // 0x8
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30	
};

