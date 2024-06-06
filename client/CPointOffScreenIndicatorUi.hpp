#pragma once

#include <cstdint>

struct C_PointClientUIWorldPanel;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xf40
// Has VTable
class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel
{
public:
	bool m_bBeenEnabled; // 0xf30	
	bool m_bHide; // 0xf31	
private:
	[[maybe_unused]] uint8_t __pad0f32[0x2]; // 0xf32
public:
	float m_flSeenTargetTime; // 0xf34	
	C_PointClientUIWorldPanel* m_pTargetPanel; // 0xf38	
};

