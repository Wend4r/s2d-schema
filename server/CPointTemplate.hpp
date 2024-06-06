#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x4c0	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x4c8	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x4d0	
	float m_flTimeoutInterval; // 0x4d8	
	bool m_bAsynchronouslySpawnEntities; // 0x4dc	
private:
	[[maybe_unused]] uint8_t __pad04dd[0x3]; // 0x4dd
public:
	CEntityIOOutput m_pOutputOnSpawned; // 0x4e0	
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x508	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x50c	
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x510	
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x528	
	HSCRIPT m_ScriptSpawnCallback; // 0x540	
	HSCRIPT m_ScriptCallbackScope; // 0x548	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// void InputDeleteCreatedSpawnGroups; // 0x0
};

