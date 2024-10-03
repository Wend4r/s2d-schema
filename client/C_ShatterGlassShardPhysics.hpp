#pragma once

#include <cstdint>

struct shard_model_desc_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1198
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
class C_ShatterGlassShardPhysics : public C_PhysicsProp
{
private:
	[[maybe_unused]] uint8_t __pad1110[0x8]; // 0x1110
public:
	// MNetworkEnable
	shard_model_desc_t m_ShardDesc; // 0x1118	
};

