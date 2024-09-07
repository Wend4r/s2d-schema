#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 8
// Size: 0x130
// 
// MGetKV3ClassDefaults
class CNmGraphDefinition
{
public:
	CUtlVector< int16 > m_persistentNodeIndices; // 0x0	
	int16_t m_nRootNodeIdx; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001a[0x6]; // 0x1a
public:
	CUtlVector< CGlobalSymbol > m_controlParameterIDs; // 0x20	
	CUtlVector< CGlobalSymbol > m_virtualParameterIDs; // 0x38	
	CUtlVector< int16 > m_virtualParameterNodeIndices; // 0x50	
	CUtlVector< CNmGraphDefinition::ChildGraphSlot_t > m_childGraphSlots; // 0x68	
	CUtlVector< CNmGraphDefinition::ExternalGraphSlot_t > m_externalGraphSlots; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0098[0x70]; // 0x98
public:
	CUtlVector< CUtlString > m_nodePaths; // 0x108	
	V_uuid_t m_runtimeVersionID; // 0x120	
};

