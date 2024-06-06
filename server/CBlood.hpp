#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e0
// Has VTable
class CBlood : public CPointEntity
{
public:
	QAngle m_vecSprayAngles; // 0x4c0	
	Vector m_vecSprayDir; // 0x4cc	
	float m_flAmount; // 0x4d8	
	BloodType m_Color; // 0x4dc	
	
	// Datamap fields:
	// void InputEmitBlood; // 0x0
	// int32_t color; // 0x7fffffff
};

