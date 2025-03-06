#pragma once

#include <cstdint>

struct AI_MovePerformance_DynamicSettings_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// Has VTable
// Has Trivial Destructor
class CAI_MotorGroundAnimGraph_State_MovePerformance : public CAI_MotorGroundAnimGraph_State
{
public:
	bool m_bWasMovingOffPath; // 0x20	
	bool m_bRepathed; // 0x21	
private:
	[[maybe_unused]] uint8_t __pad0022[0x6]; // 0x22
public:
	CGlobalSymbol m_sHandshake; // 0x28	
	AI_MovePerformance_DynamicSettings_t m_dynamicSettings; // 0x30	
};

