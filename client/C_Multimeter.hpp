#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xee0
// Has VTable
class C_Multimeter : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0ed0[0x8]; // 0xed0
public:
	CHandle< C_PlantedC4 > m_hTargetC4; // 0xed8	
};

