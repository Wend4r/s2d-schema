#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_TeleportBeam : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Position Control Point"
	int32_t m_nCPPosition; // 0x1b8	
	// MPropertyFriendlyName "Velocity Control Point"
	int32_t m_nCPVelocity; // 0x1bc	
	// MPropertyFriendlyName "Misc Control Point"
	int32_t m_nCPMisc; // 0x1c0	
	// MPropertyFriendlyName "Color Control Point"
	int32_t m_nCPColor; // 0x1c4	
	// MPropertyFriendlyName "Invalid Color Control Point"
	int32_t m_nCPInvalidColor; // 0x1c8	
	// MPropertyFriendlyName "Extra Arc Data Point"
	int32_t m_nCPExtraArcData; // 0x1cc	
	// MPropertyFriendlyName "Gravity"
	Vector m_vGravity; // 0x1d0	
	// MPropertyFriendlyName "Arc Duration Maximum"
	float m_flArcMaxDuration; // 0x1dc	
	// MPropertyFriendlyName "Segment Break"
	float m_flSegmentBreak; // 0x1e0	
	// MPropertyFriendlyName "Arc Speed"
	float m_flArcSpeed; // 0x1e4	
	// MPropertyFriendlyName "Alpha"
	float m_flAlpha; // 0x1e8	
};

