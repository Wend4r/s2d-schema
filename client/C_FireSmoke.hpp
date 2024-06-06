#pragma once

#include <cstdint>

struct GameTime_t;
struct TimedEvent;
struct CFireOverlay;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5c0
// Has VTable
// 
// MNetworkOverride "m_flScale"
// MNetworkOverride "m_flScaleTime"
// MNetworkVarNames "int32 m_nFlameModelIndex"
// MNetworkVarNames "int32 m_nFlameFromAboveModelIndex"
class C_FireSmoke : public C_BaseFire
{
public:
	// MNetworkEnable
	int32_t m_nFlameModelIndex; // 0x558	
	// MNetworkEnable
	int32_t m_nFlameFromAboveModelIndex; // 0x55c	
	float m_flScaleRegister; // 0x560	
	float m_flScaleStart; // 0x564	
	float m_flScaleEnd; // 0x568	
	GameTime_t m_flScaleTimeStart; // 0x56c	
	GameTime_t m_flScaleTimeEnd; // 0x570	
	float m_flChildFlameSpread; // 0x574	
private:
	[[maybe_unused]] uint8_t __pad0578[0x10]; // 0x578
public:
	float m_flClipPerc; // 0x588	
	bool m_bClipTested; // 0x58c	
	bool m_bFadingOut; // 0x58d	
private:
	[[maybe_unused]] uint8_t __pad058e[0x2]; // 0x58e
public:
	TimedEvent m_tParticleSpawn; // 0x590	
	CFireOverlay* m_pFireOverlay; // 0x598	
};

