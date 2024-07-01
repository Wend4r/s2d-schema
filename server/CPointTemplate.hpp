#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x548
// Has VTable
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x4b8	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x4c0	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x4c8	
	float m_flTimeoutInterval; // 0x4d0	
	bool m_bAsynchronouslySpawnEntities; // 0x4d4	
private:
	[[maybe_unused]] uint8_t __pad04d5[0x3]; // 0x4d5
public:
	CEntityIOOutput m_pOutputOnSpawned; // 0x4d8	
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x500	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x504	
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x508	
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x520	
	HSCRIPT m_ScriptSpawnCallback; // 0x538	
	HSCRIPT m_ScriptCallbackScope; // 0x540	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// void InputDeleteCreatedSpawnGroups; // 0x0
};

