#pragma once

#include <cstdint>

struct CDestructiblePartsSystemData_PartRuntimeData;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
// 
// MGetKV3ClassDefaults
class CDestructiblePartsSystemData_PartData
{
public:
	// MPropertyDescription "Name for this destructible part."
	CUtlString m_sName; // 0x0	
	// MPropertyStartGroup "+Model Setup"
	// MPropertyDescription "Name of the breakable part to trigger breaking on when health reaches zero."
	// MPropertyAttributeEditor "VDataModelBreakPiece( m_sModelName )"
	CGlobalSymbol m_sBreakablePieceName; // 0x8	
	// MPropertyStartGroup "+Model Setup/+Body Group"
	// MPropertyDescription "Body group to set when this part is broken."
	// MPropertyAttributeEditor "VDataModelBodyGroup( m_sModelName )"
	CGlobalSymbol m_sBodyGroupName; // 0x10	
	// MPropertyDescription "Value to set for the body group when the part is broken."
	int32_t m_nBodyGroupValue; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	// MPropertyStartGroup "+Model Setup/+Animgraph"
	// MPropertyDescription "Animgraph parameter (boolean) to set when this part is destroyed."
	// MPropertyAttributeEditor "VDataAnimGraphParamBool( m_sModelName )"
	CGlobalSymbol m_sAnimGraphParamName_PartDestroyed; // 0x20	
	// MPropertyStartGroup
	// MPropertyDescription "Default runtime data for this part - can be overriden in npc_units.vdata if such file exists."
	CDestructiblePartsSystemData_PartRuntimeData m_DefaultRuntimeData; // 0x28	
};

