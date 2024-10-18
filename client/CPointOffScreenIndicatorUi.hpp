#pragma once

#include <cstdint>

struct C_PointClientUIWorldPanel;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xfa0
// Has VTable
class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel
{
public:
	bool m_bBeenEnabled; // 0xf90	
	bool m_bHide; // 0xf91	
private:
	[[maybe_unused]] uint8_t __pad0f92[0x2]; // 0xf92
public:
	float m_flSeenTargetTime; // 0xf94	
	C_PointClientUIWorldPanel* m_pTargetPanel; // 0xf98	
};

