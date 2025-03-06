#pragma once

#include <cstdint>

struct CMovementStatsProperty;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbe8
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
class CBaseCombatCharacter : public CBaseFlex
{
public:
	bool m_bForceServerRagdoll; // 0xb20	
private:
	[[maybe_unused]] uint8_t __pad0b21[0x7]; // 0xb21
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // 0xb28	
	float m_impactEnergyScale; // 0xb40	
	bool m_bApplyStressDamage; // 0xb44	
	bool m_bDeathEventsDispatched; // 0xb45	
private:
	[[maybe_unused]] uint8_t __pad0b46[0x42]; // 0xb46
public:
	int32_t m_iDamageCount; // 0xb88	
private:
	[[maybe_unused]] uint8_t __pad0b8c[0x4]; // 0xb8c
public:
	CUtlVector< RelationshipOverride_t >* m_pVecRelationships; // 0xb90	
	CUtlSymbolLarge m_strRelationships; // 0xb98	
	Hull_t m_eHull; // 0xba0	
	uint32_t m_nNavHullIdx; // 0xba4	
	CMovementStatsProperty m_movementStats; // 0xba8	
	
	// Datamap fields:
	// int32_t m_LastHitGroup; // 0x540
	// void InputBecomeServerRagdoll; // 0x0
	// CUtlSymbolLarge InputSetRelationship; // 0x0
};

