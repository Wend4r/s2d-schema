#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x208
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointPositions : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x1c0	
	// MPropertyFriendlyName "inherit CP orientation"
	bool m_bOrient; // 0x1c1	
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x1c2	
private:
	[[maybe_unused]] uint8_t __pad01c3[0x1]; // 0x1c3
public:
	// MPropertyFriendlyName "first control point number"
	int32_t m_nCP1; // 0x1c4	
	// MPropertyFriendlyName "second control point number"
	int32_t m_nCP2; // 0x1c8	
	// MPropertyFriendlyName "third control point number"
	int32_t m_nCP3; // 0x1cc	
	// MPropertyFriendlyName "fourth control point number"
	int32_t m_nCP4; // 0x1d0	
	// MPropertyFriendlyName "first control point location"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1d4	
	// MPropertyFriendlyName "second control point location"
	// MVectorIsCoordinate
	Vector m_vecCP2Pos; // 0x1e0	
	// MPropertyFriendlyName "third control point location"
	// MVectorIsCoordinate
	Vector m_vecCP3Pos; // 0x1ec	
	// MPropertyFriendlyName "fourth control point location"
	// MVectorIsCoordinate
	Vector m_vecCP4Pos; // 0x1f8	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x204	
};

