#pragma once

#include <cstdint>

struct IntervalTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc00
// Has VTable
// 
// MNetworkVarNames "bool m_bIsIncGrenade"
class CMolotovProjectile : public CBaseCSGrenadeProjectile
{
public:
	// MNetworkEnable
	bool m_bIsIncGrenade; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b09[0xb]; // 0xb09
public:
	bool m_bDetonated; // 0xb14	
private:
	[[maybe_unused]] uint8_t __pad0b15[0x3]; // 0xb15
public:
	IntervalTimer m_stillTimer; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b28[0xd0]; // 0xb28
public:
	bool m_bHasBouncedOffPlayer; // 0xbf8	
};

