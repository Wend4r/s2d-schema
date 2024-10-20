#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
// Has VTable
// 
// MNetworkVarNames "string_t m_worldName"
// MNetworkVarNames "string_t m_layerName"
// MNetworkVarNames "bool m_bWorldLayerVisible"
// MNetworkVarNames "bool m_bEntitiesSpawned"
class CInfoWorldLayer : public C_BaseEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x568	
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x590	
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x598	
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x5a0	
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x5a1	
	bool m_bCreateAsChildSpawnGroup; // 0x5a2	
private:
	[[maybe_unused]] uint8_t __pad05a3[0x1]; // 0x5a3
public:
	uint32_t m_hLayerSpawnGroup; // 0x5a4	
	bool m_bWorldLayerActuallyVisible; // 0x5a8	
	
	// Datamap fields:
	// void ShowWorldLayer; // 0x0
	// void HideWorldLayer; // 0x0
	// void SpawnEntities; // 0x0
	// void DestroyEntities; // 0x0
	// void ShowWorldLayerAndSpawnEntities; // 0x0
	// void HideWorldLayerAndDestroyEntities; // 0x0
};

