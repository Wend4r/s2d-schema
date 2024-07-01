#pragma once

#include <cstdint>

struct CAnimCycle;
struct CFootCycle;
// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 4
// Size: 0x3c
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CFootCycleDefinition
{
public:
	Vector m_vStancePositionMS; // 0x0	
	Vector m_vMidpointPositionMS; // 0xc	
	float m_flStanceDirectionMS; // 0x18	
	Vector m_vToStrideStartPos; // 0x1c	
	CAnimCycle m_stanceCycle; // 0x28	
	CFootCycle m_footLiftCycle; // 0x2c	
	CFootCycle m_footOffCycle; // 0x30	
	CFootCycle m_footStrikeCycle; // 0x34	
	CFootCycle m_footLandCycle; // 0x38	
};

