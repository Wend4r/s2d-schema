#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc58
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hDummyForCamera"
class CCitadel_Ability_Mirage_Teleport : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x8]; // 0xb00
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hDummyForCamera; // 0xb08	
	CHandle< CBaseEntity > m_hTarget; // 0xb0c	
	Vector m_vCastStartPosition; // 0xb10	
	Vector m_vTargetPosition; // 0xb1c	
	QAngle m_vTargetAngles; // 0xb28	
};

