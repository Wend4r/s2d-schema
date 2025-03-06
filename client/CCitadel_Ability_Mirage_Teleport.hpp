#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xda8
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hDummyForCamera"
class CCitadel_Ability_Mirage_Teleport : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x8]; // 0xc50
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hDummyForCamera; // 0xc58	
	CHandle< C_BaseEntity > m_hTarget; // 0xc5c	
	Vector m_vCastStartPosition; // 0xc60	
	Vector m_vTargetPosition; // 0xc6c	
	QAngle m_vTargetAngles; // 0xc78	
};

