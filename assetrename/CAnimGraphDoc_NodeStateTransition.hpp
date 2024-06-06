#pragma once

#include <cstdint>

struct CFloatAnimValue;
struct CBlendCurve;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xc0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_NodeStateTransition : public CAnimGraphDoc_StateTransition
{
public:
	// MPropertyFriendlyName "Blend Duration"
	CFloatAnimValue m_blendDuration; // 0x70	
	// MPropertyFriendlyName "Reset Destination"
	bool m_bReset; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0091[0x3]; // 0x91
public:
	// MPropertyFriendlyName "Start Cycle At"
	ResetCycleOption m_resetCycleOption; // 0x94	
	// MPropertyFriendlyName "Fixed Start Cycle Value"
	CFloatAnimValue m_flFixedCycleValue; // 0x98	
	// MPropertyHideField
	CBlendCurve m_blendCurve; // 0xb8	
};

