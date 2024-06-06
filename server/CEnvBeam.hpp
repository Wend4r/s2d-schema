#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x858
// Has VTable
class CEnvBeam : public CBeam
{
public:
	int32_t m_active; // 0x7b0	
private:
	[[maybe_unused]] uint8_t __pad07b4[0x4]; // 0x7b4
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // 0x7b8	
	CUtlSymbolLarge m_iszStartEntity; // 0x7c0	
	CUtlSymbolLarge m_iszEndEntity; // 0x7c8	
	float m_life; // 0x7d0	
	float m_boltWidth; // 0x7d4	
	float m_noiseAmplitude; // 0x7d8	
	int32_t m_speed; // 0x7dc	
	float m_restrike; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; // 0x7e4
public:
	CUtlSymbolLarge m_iszSpriteName; // 0x7e8	
	int32_t m_frameStart; // 0x7f0	
	Vector m_vEndPointWorld; // 0x7f4	
	Vector m_vEndPointRelative; // 0x800	
	float m_radius; // 0x80c	
	Touch_t m_TouchType; // 0x810	
private:
	[[maybe_unused]] uint8_t __pad0814[0x4]; // 0x814
public:
	CUtlSymbolLarge m_iFilterName; // 0x818	
	CHandle< CBaseEntity > m_hFilter; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0824[0x4]; // 0x824
public:
	CUtlSymbolLarge m_iszDecal; // 0x828	
	CEntityIOOutput m_OnTouchedByEntity; // 0x830	
	
	// Datamap fields:
	// int32_t m_nClipStyle; // 0x794
	// void CEnvBeamStrikeThink; // 0x0
	// void CEnvBeamUpdateThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// void InputStrikeOnce; // 0x0
};

