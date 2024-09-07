#pragma once

#include <cstdint>

struct C_PointClientUIWorldPanel;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xaa0
// Has VTable
class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel
{
public:
	bool m_bBeenEnabled; // 0xa90	
	bool m_bHide; // 0xa91	
private:
	[[maybe_unused]] uint8_t __pad0a92[0x2]; // 0xa92
public:
	float m_flSeenTargetTime; // 0xa94	
	C_PointClientUIWorldPanel* m_pTargetPanel; // 0xa98	
};

