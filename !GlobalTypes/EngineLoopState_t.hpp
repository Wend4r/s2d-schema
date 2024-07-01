#pragma once

#include <cstdint>

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x28
// Has Trivial Constructor
// Has Trivial Destructor
struct EngineLoopState_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	int32_t m_nPlatWindowWidth; // 0x18	
	int32_t m_nPlatWindowHeight; // 0x1c	
	int32_t m_nRenderWidth; // 0x20	
	int32_t m_nRenderHeight; // 0x24	
};

