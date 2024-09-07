#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5e8
// Has VTable
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x558	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x560	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x568	
	float m_flTimeoutInterval; // 0x570	
	bool m_bAsynchronouslySpawnEntities; // 0x574	
private:
	[[maybe_unused]] uint8_t __pad0575[0x3]; // 0x575
public:
	CEntityIOOutput m_pOutputOnSpawned; // 0x578	
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x5a0	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x5a4	
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x5a8	
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x5c0	
	HSCRIPT m_ScriptSpawnCallback; // 0x5d8	
	HSCRIPT m_ScriptCallbackScope; // 0x5e0	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// void InputDeleteCreatedSpawnGroups; // 0x0
};

