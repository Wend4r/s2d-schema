#pragma once

#include <cstdint>

struct shard_model_desc_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc68
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
class C_ShatterGlassShardPhysics : public C_PhysicsProp
{
private:
	[[maybe_unused]] uint8_t __pad0c00[0x8]; // 0xc00
public:
	// MNetworkEnable
	// -> m_nModelID - 0xc10
	// -> m_hMaterial - 0xc18
	// -> m_solid - 0xc20
	// -> m_vecPanelSize - 0xc24
	// -> m_vecStressPositionA - 0xc2c
	// -> m_vecStressPositionB - 0xc34
	// -> m_vecPanelVertices - 0xc40
	// -> m_flGlassHalfThickness - 0xc58
	// -> m_bHasParent - 0xc5c
	// -> m_bParentFrozen - 0xc5d
	// -> m_SurfacePropStringToken - 0xc60
	shard_model_desc_t m_ShardDesc; // 0xc08	
};

