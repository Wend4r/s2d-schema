#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x110
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTargetWarpNode : public CNmGraphDocFlowNode
{
public:
	bool m_bAllowTargetUpdate; // 0xf8	
	CNmRootMotionData::SamplingMode_t m_samplingMode; // 0xf9	
private:
	[[maybe_unused]] uint8_t __pad00fa[0x2]; // 0xfa
public:
	float m_flSamplingPositionErrorThreshold; // 0xfc	
	float m_flMaxTangentLength; // 0x100	
	float m_flLerpFallbackDistanceThreshold; // 0x104	
	float m_flTargetUpdateDistanceThresholdDegrees; // 0x108	
	float m_flTargetUpdateAngleThresholdDegrees; // 0x10c	
};

