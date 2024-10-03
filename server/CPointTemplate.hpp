#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x570
// Has VTable
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x4e0	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x4e8	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x4f0	
	float m_flTimeoutInterval; // 0x4f8	
	bool m_bAsynchronouslySpawnEntities; // 0x4fc	
private:
	[[maybe_unused]] uint8_t __pad04fd[0x3]; // 0x4fd
public:
	CEntityIOOutput m_pOutputOnSpawned; // 0x500	
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x528	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x52c	
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x530	
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x548	
	HSCRIPT m_ScriptSpawnCallback; // 0x560	
	HSCRIPT m_ScriptCallbackScope; // 0x568	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// void InputDeleteCreatedSpawnGroups; // 0x0
};

