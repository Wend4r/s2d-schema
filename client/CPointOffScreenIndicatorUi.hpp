#pragma once

#include <cstdint>

struct C_PointClientUIWorldPanel;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xf90
// Has VTable
class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel
{
public:
	bool m_bBeenEnabled; // 0xf80	
	bool m_bHide; // 0xf81	
private:
	[[maybe_unused]] uint8_t __pad0f82[0x2]; // 0xf82
public:
	float m_flSeenTargetTime; // 0xf84	
	C_PointClientUIWorldPanel* m_pTargetPanel; // 0xf88	
};

