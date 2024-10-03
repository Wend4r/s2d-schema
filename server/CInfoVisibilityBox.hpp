#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
// 
// MNetworkVarNames "int m_nMode"
// MNetworkVarNames "Vector m_vBoxSize"
// MNetworkVarNames "bool m_bEnabled"
class CInfoVisibilityBox : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x4]; // 0x4e0
public:
	// MNetworkEnable
	int32_t m_nMode; // 0x4e4	
	// MNetworkEnable
	Vector m_vBoxSize; // 0x4e8	
	// MNetworkEnable
	bool m_bEnabled; // 0x4f4	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

