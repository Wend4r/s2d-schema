#pragma once

#include <cstdint>

struct shard_model_desc_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd38
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
	shard_model_desc_t m_ShardDesc; // 0xcb8	
};

