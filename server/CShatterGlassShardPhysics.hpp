#pragma once

#include <cstdint>

struct shard_model_desc_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd58
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
class CShatterGlassShardPhysics : public CPhysicsProp
{
public:
	bool m_bDebris; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd1[0x3]; // 0xcd1
public:
	uint32_t m_hParentShard; // 0xcd4	
	// MNetworkEnable
	shard_model_desc_t m_ShardDesc; // 0xcd8	
};

