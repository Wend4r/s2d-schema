#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x578
// Has VTable
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x510	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x518	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x520	
	float m_flTimeoutInterval; // 0x528	
	bool m_bAsynchronouslySpawnEntities; // 0x52c	
private:
	[[maybe_unused]] uint8_t __pad052d[0x3]; // 0x52d
public:
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x530	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x534	
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x538	
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x550	
	HSCRIPT m_ScriptSpawnCallback; // 0x568	
	HSCRIPT m_ScriptCallbackScope; // 0x570	
};

