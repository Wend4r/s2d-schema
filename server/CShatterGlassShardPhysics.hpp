#pragma once

#include <cstdint>

struct shard_model_desc_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd18
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
class CShatterGlassShardPhysics : public CPhysicsProp
{
public:
	bool m_bDebris; // 0xcb0	
private:
	[[maybe_unused]] uint8_t __pad0cb1[0x3]; // 0xcb1
public:
	uint32_t m_hParentShard; // 0xcb4	
	// MNetworkEnable
	// -> m_nModelID - 0xcc0
	// -> m_hMaterial - 0xcc8
	// -> m_solid - 0xcd0
	// -> m_vecPanelSize - 0xcd4
	// -> m_vecStressPositionA - 0xcdc
	// -> m_vecStressPositionB - 0xce4
	// -> m_vecPanelVertices - 0xcf0
	// -> m_flGlassHalfThickness - 0xd08
	// -> m_bHasParent - 0xd0c
	// -> m_bParentFrozen - 0xd0d
	// -> m_SurfacePropStringToken - 0xd10
	shard_model_desc_t m_ShardDesc; // 0xcb8	
};

