#pragma once

#include <cstdint>

struct CSkillInt;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
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
	// MPropertyStartGroup "+Model Setup/Body Group"
	// MPropertyDescription "Body group to set when this part is broken."
	// MPropertyAttributeEditor "VDataModelBodyGroup( m_sModelName )"
	CGlobalSymbol m_sBodyGroupName; // 0x10	
	// MPropertyDescription "Value to set for the body group when the part is broken."
	int32_t m_nBodyGroupValue; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	// MPropertyStartGroup "+Model Setup/Animgraph"
	// MPropertyDescription "Animgraph parameter (boolean) to set when this part is destroyed."
	// MPropertyAttributeEditor "VDataAnimGraphParamBool( m_sModelName )"
	CGlobalSymbol m_sAnimGraphParamName_PartDestroyed; // 0x20	
	// MPropertyDescription "Animgraph parameter (float) with the normalized (0-1) health of this part."
	// MPropertyAttributeEditor "VDataAnimGraphParamFloat( m_sModelName )"
	CGlobalSymbol m_sAnimGraphParamName_PartNormalizedHealth; // 0x28	
	// MPropertyStartGroup "+Runtime Data"
	// MPropertyDescription "Total health of this part. When it reaches 0, the part is 'broken' using the breakable prop system."
	CSkillInt m_nHealth; // 0x30	
	// MPropertyDescription "How damage to this part is handled."
	EDestructiblePartDamagePassThroughType m_nDamagePassthroughType; // 0x40	
	// MPropertyStartGroup "+Runtime Data/Death"
	// MPropertyDescription "Should the NPC die when this part is destroyed?"
	bool m_bKillNPCOnDestruction; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	// MPropertyDescription "Custom death handshake to set when this part is destroyed."
	// MPropertySuppressExpr "m_bKillNPCOnDestruction == false"
	CGlobalSymbol m_sCustomDeathHandshake; // 0x48	
};

