#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// Has Trivial Destructor
class CAI_MotorGroundAnimGraph_State_Stop : public CAI_MotorGroundAnimGraph_State
{
public:
	Vector m_vGoalPosition; // 0x20	
	Vector m_vArrivalDirection; // 0x2c	
	bool m_bPathChanged; // 0x38	
};

