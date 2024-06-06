#pragma once

#include <cstdint>

struct shard_model_desc_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10b0
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
class C_ShatterGlassShardPhysics : public C_PhysicsProp
{
private:
	[[maybe_unused]] uint8_t __pad1048[0x8]; // 0x1048
public:
	// MNetworkEnable
	// -> m_nModelID - 0x1058
	// -> m_hMaterial - 0x1060
	// -> m_solid - 0x1068
	// -> m_ShatterPanelMode - 0x1069
	// -> m_vecPanelSize - 0x106c
	// -> m_vecStressPositionA - 0x1074
	// -> m_vecStressPositionB - 0x107c
	// -> m_vecPanelVertices - 0x1088
	// -> m_flGlassHalfThickness - 0x10a0
	// -> m_bHasParent - 0x10a4
	// -> m_bParentFrozen - 0x10a5
	// -> m_SurfacePropStringToken - 0x10a8
	shard_model_desc_t m_ShardDesc; // 0x1050	
};

