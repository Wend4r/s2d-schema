#pragma once

#include <cstdint>

struct CFootCycleDefinition;
struct CFootTrajectories;
// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x58
// 
// MGetKV3ClassDefaults
class CFootStride
{
public:
	// -> m_vStancePositionMS - 0x0
	// -> m_vMidpointPositionMS - 0xc
	// -> m_flStanceDirectionMS - 0x18
	// -> m_vToStrideStartPos - 0x1c
	// -> m_stanceCycle - 0x28
	// -> m_footLiftCycle - 0x2c
	// -> m_footOffCycle - 0x30
	// -> m_footStrikeCycle - 0x34
	// -> m_footLandCycle - 0x38
	CFootCycleDefinition m_definition; // 0x0	
	CFootTrajectories m_trajectories; // 0x40	
};

