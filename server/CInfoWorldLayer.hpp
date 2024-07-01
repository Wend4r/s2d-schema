#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
// 
// MNetworkVarNames "string_t m_worldName"
// MNetworkVarNames "string_t m_layerName"
// MNetworkVarNames "bool m_bWorldLayerVisible"
// MNetworkVarNames "bool m_bEntitiesSpawned"
class CInfoWorldLayer : public CBaseEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x4b8	
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x4e0	
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x4e8	
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x4f0	
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x4f1	
	bool m_bCreateAsChildSpawnGroup; // 0x4f2	
private:
	[[maybe_unused]] uint8_t __pad04f3[0x1]; // 0x4f3
public:
	uint32_t m_hLayerSpawnGroup; // 0x4f4	
	
	// Datamap fields:
	// void ShowWorldLayer; // 0x0
	// void HideWorldLayer; // 0x0
	// void SpawnEntities; // 0x0
	// void DestroyEntities; // 0x0
	// void ShowWorldLayerAndSpawnEntities; // 0x0
	// void HideWorldLayerAndDestroyEntities; // 0x0
};

