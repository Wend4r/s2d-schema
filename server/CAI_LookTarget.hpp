#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CAI_LookTarget : public CPointEntity
{
public:
	int32_t m_iContext; // 0x4d8	
	int32_t m_iPriority; // 0x4dc	
	bool m_bDisabled; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	GameTime_t m_flTimeNextAvailable; // 0x4e4	
	float m_flMaxDist; // 0x4e8	
};

