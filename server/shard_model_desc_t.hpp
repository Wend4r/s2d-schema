#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MNetworkVarNames "int32 m_nModelID"
// MNetworkVarNames "HMaterialStrong m_hMaterial"
// MNetworkVarNames "ShardSolid_t m_solid"
// MNetworkVarNames "Vector2D m_vecPanelSize"
// MNetworkVarNames "Vector2D m_vecStressPositionA"
// MNetworkVarNames "Vector2D m_vecStressPositionB"
// MNetworkVarNames "Vector2D m_vecPanelVertices"
// MNetworkVarNames "float m_flGlassHalfThickness"
// MNetworkVarNames "bool m_bHasParent"
// MNetworkVarNames "bool m_bParentFrozen"
// MNetworkVarNames "CUtlStringToken m_SurfacePropStringToken"
struct shard_model_desc_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	int32_t m_nModelID; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x10	
	// MNetworkEnable
	ShardSolid_t m_solid; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	// MNetworkEnable
	Vector2D m_vecPanelSize; // 0x1c	
	// MNetworkEnable
	Vector2D m_vecStressPositionA; // 0x24	
	// MNetworkEnable
	Vector2D m_vecStressPositionB; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector2D > m_vecPanelVertices; // 0x38	
	// MNetworkEnable
	float m_flGlassHalfThickness; // 0x50	
	// MNetworkEnable
	bool m_bHasParent; // 0x54	
	// MNetworkEnable
	bool m_bParentFrozen; // 0x55	
private:
	[[maybe_unused]] uint8_t __pad0056[0x2]; // 0x56
public:
	// MNetworkEnable
	CUtlStringToken m_SurfacePropStringToken; // 0x58	
};

