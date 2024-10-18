#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xac0
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
class CBaseCombatCharacter : public CBaseFlex
{
public:
	bool m_bForceServerRagdoll; // 0xa38	
private:
	[[maybe_unused]] uint8_t __pad0a39[0x7]; // 0xa39
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // 0xa40	
	float m_impactEnergyScale; // 0xa58	
	bool m_bApplyStressDamage; // 0xa5c	
private:
	[[maybe_unused]] uint8_t __pad0a5d[0x43]; // 0xa5d
public:
	int32_t m_iDamageCount; // 0xaa0	
private:
	[[maybe_unused]] uint8_t __pad0aa4[0x4]; // 0xaa4
public:
	CUtlVector< RelationshipOverride_t >* m_pVecRelationships; // 0xaa8	
	CUtlSymbolLarge m_strRelationships; // 0xab0	
	Hull_t m_eHull; // 0xab8	
	uint32_t m_nNavHullIdx; // 0xabc	
	
	// Static fields:
	static int32_t &Get_sm_lastInteraction(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// int32_t m_LastHitGroup; // 0x550
	// void InputBecomeServerRagdoll; // 0x0
	// CUtlSymbolLarge InputSetRelationship; // 0x0
};

