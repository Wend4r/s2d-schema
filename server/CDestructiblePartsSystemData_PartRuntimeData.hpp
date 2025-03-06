#pragma once

#include <cstdint>

struct CSkillInt;
struct CRangeFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// 
// MGetKV3ClassDefaults
class CDestructiblePartsSystemData_PartRuntimeData
{
public:
	// MPropertyStartGroup "+Damage"
	// MPropertyDescription "Total health of this part. When it reaches 0, the part is 'broken' using the breakable prop system."
	CSkillInt m_nHealth; // 0x0	
	// MPropertyDescription "How damage to this part is handled."
	EDestructiblePartDamagePassThroughType m_nDamagePassthroughType; // 0x10	
	// MPropertyStartGroup "+Death"
	// MPropertyDescription "Should the entity die when this part is destroyed?"
	bool m_bKillEntityOnDestruction; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	// MPropertyDescription "Custom death handshake to set when this part is destroyed."
	// MPropertySuppressExpr "m_bKillEntityOnDestruction == false"
	CGlobalSymbol m_sCustomDeathHandshake; // 0x18	
	// MPropertyDescription "Whether the part should be destroyed when the entity dies."
	bool m_bShouldDestroyOnDeath; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	// MPropertyDescription "Time after death the part should be destroyed"
	// MPropertySuppressExpr "m_bShouldDestroyOnDeath == false"
	CRangeFloat m_flDeathDestroyTime; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// MPropertyStartGroup "+Conditions"
	// MPropertyDescription "Conditions to remove when this part is destroyed."
	CUtlVector< ConditionId_t > m_nConditionsToRemove; // 0x30	
	// MPropertyDescription "Conditions to add when this part is destroyed."
	CUtlVector< ConditionId_t > m_nConditionsToAdd; // 0x48	
};

