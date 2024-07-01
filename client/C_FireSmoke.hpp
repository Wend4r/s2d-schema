#pragma once

#include <cstdint>

struct GameTime_t;
struct TimedEvent;
struct CFireOverlay;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
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
	int32_t m_nFlameModelIndex; // 0x548	
	// MNetworkEnable
	int32_t m_nFlameFromAboveModelIndex; // 0x54c	
	float m_flScaleRegister; // 0x550	
	float m_flScaleStart; // 0x554	
	float m_flScaleEnd; // 0x558	
	GameTime_t m_flScaleTimeStart; // 0x55c	
	GameTime_t m_flScaleTimeEnd; // 0x560	
	float m_flChildFlameSpread; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0568[0x10]; // 0x568
public:
	float m_flClipPerc; // 0x578	
	bool m_bClipTested; // 0x57c	
	bool m_bFadingOut; // 0x57d	
private:
	[[maybe_unused]] uint8_t __pad057e[0x2]; // 0x57e
public:
	TimedEvent m_tParticleSpawn; // 0x580	
	CFireOverlay* m_pFireOverlay; // 0x588	
};

