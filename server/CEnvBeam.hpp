#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8d8
// Has VTable
class CEnvBeam : public CBeam
{
public:
	int32_t m_active; // 0x830	
private:
	[[maybe_unused]] uint8_t __pad0834[0x4]; // 0x834
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // 0x838	
	CUtlSymbolLarge m_iszStartEntity; // 0x840	
	CUtlSymbolLarge m_iszEndEntity; // 0x848	
	float m_life; // 0x850	
	float m_boltWidth; // 0x854	
	float m_noiseAmplitude; // 0x858	
	int32_t m_speed; // 0x85c	
	float m_restrike; // 0x860	
private:
	[[maybe_unused]] uint8_t __pad0864[0x4]; // 0x864
public:
	CUtlSymbolLarge m_iszSpriteName; // 0x868	
	int32_t m_frameStart; // 0x870	
	Vector m_vEndPointWorld; // 0x874	
	Vector m_vEndPointRelative; // 0x880	
	float m_radius; // 0x88c	
	Touch_t m_TouchType; // 0x890	
private:
	[[maybe_unused]] uint8_t __pad0894[0x4]; // 0x894
public:
	CUtlSymbolLarge m_iFilterName; // 0x898	
	CHandle< CBaseEntity > m_hFilter; // 0x8a0	
private:
	[[maybe_unused]] uint8_t __pad08a4[0x4]; // 0x8a4
public:
	CUtlSymbolLarge m_iszDecal; // 0x8a8	
	CEntityIOOutput m_OnTouchedByEntity; // 0x8b0	
	
	// Datamap fields:
	// int32_t m_nClipStyle; // 0x814
	// void CEnvBeamStrikeThink; // 0x0
	// void CEnvBeamUpdateThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// void InputStrikeOnce; // 0x0
};

