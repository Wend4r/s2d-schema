#pragma once

#include <cstdint>

struct CCSPlayerController;
struct CCSPlayerPawn;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x100
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
	[[maybe_unused]] uint8_t __pad0028[0x98]; // 0x28
public:
	bool m_isRunning; // 0xc0	
	bool m_isCrouching; // 0xc1	
private:
	[[maybe_unused]] uint8_t __pad00c2[0x2]; // 0xc2
public:
	float m_forwardSpeed; // 0xc4	
	float m_leftSpeed; // 0xc8	
	float m_verticalSpeed; // 0xcc	
	uint64_t m_buttonFlags; // 0xd0	
	float m_jumpTimestamp; // 0xd8	
	Vector m_viewForward; // 0xdc	
private:
	[[maybe_unused]] uint8_t __pad00e8[0x10]; // 0xe8
public:
	int32_t m_postureStackIndex; // 0xf8	
};

