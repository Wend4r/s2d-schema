#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa08
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
// MNetworkVarNames "float m_flFieldOfView"
class CBaseCombatCharacter : public CBaseFlex
{
public:
	bool m_bForceServerRagdoll; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad0979[0x7]; // 0x979
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // 0x980	
	// MNetworkEnable
	float m_flFieldOfView; // 0x998	
	float m_impactEnergyScale; // 0x99c	
	HitGroup_t m_LastHitGroup; // 0x9a0	
	bool m_bApplyStressDamage; // 0x9a4	
private:
	[[maybe_unused]] uint8_t __pad09a5[0x43]; // 0x9a5
public:
	int32_t m_iDamageCount; // 0x9e8	
private:
	[[maybe_unused]] uint8_t __pad09ec[0x4]; // 0x9ec
public:
	CUtlVector< RelationshipOverride_t >* m_pVecRelationships; // 0x9f0	
	CUtlSymbolLarge m_strRelationships; // 0x9f8	
	Hull_t m_eHull; // 0xa00	
	uint32_t m_nNavHullIdx; // 0xa04	
	
	// Static fields:
	static int32_t &Get_sm_lastInteraction(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputBecomeServerRagdoll; // 0x0
	// CUtlSymbolLarge InputSetRelationship; // 0x0
};

