#pragma once

#include <cstdint>

struct GameTick_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MNetworkVarNames "GameTick_t nTagTick"
// MNetworkVarNames "float flFlinchModSmall"
// MNetworkVarNames "float flFlinchModLarge"
// MNetworkVarNames "float flFriendlyFireDamageReductionRatio"
struct PredictedDamageTag_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	GameTick_t nTagTick; // 0x30	
	// MNetworkEnable
	float flFlinchModSmall; // 0x34	
	// MNetworkEnable
	float flFlinchModLarge; // 0x38	
	// MNetworkEnable
	float flFriendlyFireDamageReductionRatio; // 0x3c	
};

