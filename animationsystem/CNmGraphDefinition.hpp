#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 8
// Size: 0x190
// 
// MGetKV3ClassDefaults
class CNmGraphDefinition
{
public:
	CGlobalSymbol m_variationID; // 0x0	
	CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton; // 0x8	
	V_uuid_t m_runtimeVersionID; // 0x10	
	CUtlVector< int16 > m_persistentNodeIndices; // 0x20	
	int16_t m_nRootNodeIdx; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003a[0x6]; // 0x3a
public:
	CUtlVector< CGlobalSymbol > m_controlParameterIDs; // 0x40	
	CUtlVector< CGlobalSymbol > m_virtualParameterIDs; // 0x58	
	CUtlVector< int16 > m_virtualParameterNodeIndices; // 0x70	
	CUtlVector< CNmGraphDefinition::ReferencedGraphSlot_t > m_referencedGraphSlots; // 0x88	
	CUtlVector< CNmGraphDefinition::ExternalGraphSlot_t > m_externalGraphSlots; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00b8[0x70]; // 0xb8
public:
	CUtlVector< CUtlString > m_nodePaths; // 0x128	
	CUtlVector< CStrongHandleVoid > m_resources; // 0x140	
};

