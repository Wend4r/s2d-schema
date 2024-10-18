#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf98
// Has VTable
class C_Multimeter : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0f88[0x8]; // 0xf88
public:
	CHandle< C_PlantedC4 > m_hTargetC4; // 0xf90	
};

