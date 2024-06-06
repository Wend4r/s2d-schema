#pragma once

#include <cstdint>

struct shard_model_desc_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc50
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
class CShatterGlassShardPhysics : public CPhysicsProp
{
public:
	bool m_bDebris; // 0xbe8	
private:
	[[maybe_unused]] uint8_t __pad0be9[0x3]; // 0xbe9
public:
	uint32_t m_hParentShard; // 0xbec	
	// MNetworkEnable
	// -> m_nModelID - 0xbf8
	// -> m_hMaterial - 0xc00
	// -> m_solid - 0xc08
	// -> m_ShatterPanelMode - 0xc09
	// -> m_vecPanelSize - 0xc0c
	// -> m_vecStressPositionA - 0xc14
	// -> m_vecStressPositionB - 0xc1c
	// -> m_vecPanelVertices - 0xc28
	// -> m_flGlassHalfThickness - 0xc40
	// -> m_bHasParent - 0xc44
	// -> m_bParentFrozen - 0xc45
	// -> m_SurfacePropStringToken - 0xc48
	shard_model_desc_t m_ShardDesc; // 0xbf0	
};

