#pragma once

#include <cstdint>

struct IntervalTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
// 
// MNetworkVarNames "bool m_bIsIncGrenade"
class CMolotovProjectile : public CBaseCSGrenadeProjectile
{
public:
	// MNetworkEnable
	bool m_bIsIncGrenade; // 0xb50	
private:
	[[maybe_unused]] uint8_t __pad0b51[0xb]; // 0xb51
public:
	bool m_bDetonated; // 0xb5c	
private:
	[[maybe_unused]] uint8_t __pad0b5d[0x3]; // 0xb5d
public:
	IntervalTimer m_stillTimer; // 0xb60	
private:
	[[maybe_unused]] uint8_t __pad0b70[0xd0]; // 0xb70
public:
	bool m_bHasBouncedOffPlayer; // 0xc40	
};

