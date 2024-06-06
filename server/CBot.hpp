#pragma once

#include <cstdint>

struct CCSPlayerController;
struct CCSPlayerPawn;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf0
// Has VTable
// Is Abstract
class CBot
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CCSPlayerController* m_pController; // 0x10	
	CCSPlayerPawn* m_pPlayer; // 0x18	
	bool m_bHasSpawned; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	uint32_t m_id; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x88]; // 0x28
public:
	bool m_isRunning; // 0xb0	
	bool m_isCrouching; // 0xb1	
private:
	[[maybe_unused]] uint8_t __pad00b2[0x2]; // 0xb2
public:
	float m_forwardSpeed; // 0xb4	
	float m_leftSpeed; // 0xb8	
	float m_verticalSpeed; // 0xbc	
	uint64_t m_buttonFlags; // 0xc0	
	float m_jumpTimestamp; // 0xc8	
	Vector m_viewForward; // 0xcc	
private:
	[[maybe_unused]] uint8_t __pad00d8[0x10]; // 0xd8
public:
	int32_t m_postureStackIndex; // 0xe8	
};

