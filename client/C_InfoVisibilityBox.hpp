#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x580
// Has VTable
// 
// MNetworkVarNames "int m_nMode"
// MNetworkVarNames "Vector m_vBoxSize"
// MNetworkVarNames "bool m_bEnabled"
class C_InfoVisibilityBox : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0568[0x4]; // 0x568
public:
	// MNetworkEnable
	int32_t m_nMode; // 0x56c	
	// MNetworkEnable
	Vector m_vBoxSize; // 0x570	
	// MNetworkEnable
	bool m_bEnabled; // 0x57c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

