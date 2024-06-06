#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d8
// Has VTable
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x548	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x550	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x558	
	float m_flTimeoutInterval; // 0x560	
	bool m_bAsynchronouslySpawnEntities; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	CEntityIOOutput m_pOutputOnSpawned; // 0x568	
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x590	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x594	
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x598	
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x5b0	
	HSCRIPT m_ScriptSpawnCallback; // 0x5c8	
	HSCRIPT m_ScriptCallbackScope; // 0x5d0	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// void InputDeleteCreatedSpawnGroups; // 0x0
};

