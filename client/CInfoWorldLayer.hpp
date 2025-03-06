#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
// 
// MNetworkVarNames "string_t m_worldName"
// MNetworkVarNames "string_t m_layerName"
// MNetworkVarNames "bool m_bWorldLayerVisible"
// MNetworkVarNames "bool m_bEntitiesSpawned"
class CInfoWorldLayer : public C_BaseEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x510	
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x538	
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x540	
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x548	
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x549	
	bool m_bCreateAsChildSpawnGroup; // 0x54a	
private:
	[[maybe_unused]] uint8_t __pad054b[0x1]; // 0x54b
public:
	uint32_t m_hLayerSpawnGroup; // 0x54c	
	bool m_bWorldLayerActuallyVisible; // 0x550	
	
	// Datamap fields:
	// void ShowWorldLayer; // 0x0
	// void HideWorldLayer; // 0x0
	// void SpawnEntities; // 0x0
	// void DestroyEntities; // 0x0
	// void ShowWorldLayerAndSpawnEntities; // 0x0
	// void HideWorldLayerAndDestroyEntities; // 0x0
};

