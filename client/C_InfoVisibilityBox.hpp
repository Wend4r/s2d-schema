#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
// 
// MNetworkVarNames "int m_nMode"
// MNetworkVarNames "Vector m_vBoxSize"
// MNetworkVarNames "bool m_bEnabled"
class C_InfoVisibilityBox : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x4]; // 0x538
public:
	// MNetworkEnable
	int32_t m_nMode; // 0x53c	
	// MNetworkEnable
	Vector m_vBoxSize; // 0x540	
	// MNetworkEnable
	bool m_bEnabled; // 0x54c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

