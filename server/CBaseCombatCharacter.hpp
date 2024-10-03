#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa80
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
class CBaseCombatCharacter : public CBaseFlex
{
public:
	bool m_bForceServerRagdoll; // 0x9f0	
private:
	[[maybe_unused]] uint8_t __pad09f1[0x7]; // 0x9f1
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // 0x9f8	
	float m_impactEnergyScale; // 0xa10	
	HitGroup_t m_LastHitGroup; // 0xa14	
	bool m_bApplyStressDamage; // 0xa18	
private:
	[[maybe_unused]] uint8_t __pad0a19[0x47]; // 0xa19
public:
	int32_t m_iDamageCount; // 0xa60	
private:
	[[maybe_unused]] uint8_t __pad0a64[0x4]; // 0xa64
public:
	CUtlVector< RelationshipOverride_t >* m_pVecRelationships; // 0xa68	
	CUtlSymbolLarge m_strRelationships; // 0xa70	
	Hull_t m_eHull; // 0xa78	
	uint32_t m_nNavHullIdx; // 0xa7c	
	
	// Static fields:
	static int32_t &Get_sm_lastInteraction(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputBecomeServerRagdoll; // 0x0
	// CUtlSymbolLarge InputSetRelationship; // 0x0
};

