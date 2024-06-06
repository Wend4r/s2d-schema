#pragma once

#include <cstdint>

struct IntervalTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb88
// Has VTable
// 
// MNetworkVarNames "bool m_bIsIncGrenade"
class CMolotovProjectile : public CBaseCSGrenadeProjectile
{
public:
	// MNetworkEnable
	bool m_bIsIncGrenade; // 0xa90	
private:
	[[maybe_unused]] uint8_t __pad0a91[0xb]; // 0xa91
public:
	bool m_bDetonated; // 0xa9c	
private:
	[[maybe_unused]] uint8_t __pad0a9d[0x3]; // 0xa9d
public:
	IntervalTimer m_stillTimer; // 0xaa0	
private:
	[[maybe_unused]] uint8_t __pad0ab0[0xd0]; // 0xab0
public:
	bool m_bHasBouncedOffPlayer; // 0xb80	
};

