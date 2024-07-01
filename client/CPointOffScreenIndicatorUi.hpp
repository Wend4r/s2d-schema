#pragma once

#include <cstdint>

struct C_PointClientUIWorldPanel;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xa80
// Has VTable
class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel
{
public:
	bool m_bBeenEnabled; // 0xa70	
	bool m_bHide; // 0xa71	
private:
	[[maybe_unused]] uint8_t __pad0a72[0x2]; // 0xa72
public:
	float m_flSeenTargetTime; // 0xa74	
	C_PointClientUIWorldPanel* m_pTargetPanel; // 0xa78	
};

