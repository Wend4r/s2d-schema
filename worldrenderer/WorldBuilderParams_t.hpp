#pragma once

#include <cstdint>

struct BakedLightingInfo_t;
// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x48
// 
// MGetKV3ClassDefaults
struct WorldBuilderParams_t
{
public:
	float m_flMinDrawVolumeSize; // 0x0	
	bool m_bBuildBakedLighting; // 0x4	
	bool m_bAggregateInstanceStreams; // 0x5	
private:
	[[maybe_unused]] uint8_t __pad0006[0x2]; // 0x6
public:
	BakedLightingInfo_t m_bakedLightingInfo; // 0x8	
	uint64_t m_nCompileTimestamp; // 0x38	
	uint64_t m_nCompileFingerprint; // 0x40	
};

