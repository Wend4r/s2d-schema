#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x528
// Has VTable
class CInfoDynamicShadowHint : public C_PointEntity
{
public:
	bool m_bDisabled; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0511[0x3]; // 0x511
public:
	float m_flRange; // 0x514	
	int32_t m_nImportance; // 0x518	
	int32_t m_nLightChoice; // 0x51c	
	CHandle< C_BaseEntity > m_hLight; // 0x520	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

