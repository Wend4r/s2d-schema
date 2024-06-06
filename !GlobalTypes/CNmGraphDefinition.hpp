#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 8
// Size: 0x120
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
};

