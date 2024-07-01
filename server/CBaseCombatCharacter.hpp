#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa78
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
class CBaseCombatCharacter : public CBaseFlex
{
public:
	bool m_bForceServerRagdoll; // 0x9e8	
private:
	[[maybe_unused]] uint8_t __pad09e9[0x7]; // 0x9e9
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // 0x9f0	
	float m_impactEnergyScale; // 0xa08	
	HitGroup_t m_LastHitGroup; // 0xa0c	
	bool m_bApplyStressDamage; // 0xa10	
private:
	[[maybe_unused]] uint8_t __pad0a11[0x47]; // 0xa11
public:
	int32_t m_iDamageCount; // 0xa58	
private:
	[[maybe_unused]] uint8_t __pad0a5c[0x4]; // 0xa5c
public:
	CUtlVector< RelationshipOverride_t >* m_pVecRelationships; // 0xa60	
	CUtlSymbolLarge m_strRelationships; // 0xa68	
	Hull_t m_eHull; // 0xa70	
	uint32_t m_nNavHullIdx; // 0xa74	
	
	// Static fields:
	static int32_t &Get_sm_lastInteraction(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputBecomeServerRagdoll; // 0x0
	// CUtlSymbolLarge InputSetRelationship; // 0x0
};

