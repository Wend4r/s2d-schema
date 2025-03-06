#pragma once

#include <cstdint>

struct MovementGaitId_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct AI_MovePerformance_Settings_t
{
public:
	CGlobalSymbol m_sHandshakeName; // 0x0	
	float m_flRequiredPathLength; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	MovementGaitId_t m_movementGaitId; // 0x10	
	bool m_bRequiresRightFootDown; // 0x18	
	bool m_bRequiresLeftFootDown; // 0x19	
	bool m_bCanInterruptOtherMovePerformance; // 0x1a	
};

