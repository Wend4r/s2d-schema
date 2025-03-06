#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcd8
// Has VTable
class CItemGeneric : public CItem
{
private:
	[[maybe_unused]] uint8_t __pad0b68[0x8]; // 0xb68
public:
	bool m_bHasTriggerRadius; // 0xb70	
	bool m_bHasPickupRadius; // 0xb71	
private:
	[[maybe_unused]] uint8_t __pad0b72[0x2]; // 0xb72
public:
	float m_flPickupRadiusSqr; // 0xb74	
	float m_flTriggerRadiusSqr; // 0xb78	
	GameTime_t m_flLastPickupCheck; // 0xb7c	
	bool m_bPlayerCounterListenerAdded; // 0xb80	
	bool m_bPlayerInTriggerRadius; // 0xb81	
private:
	[[maybe_unused]] uint8_t __pad0b82[0x6]; // 0xb82
public:
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // 0xb88	
	CUtlSymbolLarge m_pAmbientSoundEffect; // 0xb90	
	bool m_bAutoStartAmbientSound; // 0xb98	
private:
	[[maybe_unused]] uint8_t __pad0b99[0x7]; // 0xb99
public:
	CUtlSymbolLarge m_pSpawnScriptFunction; // 0xba0	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // 0xba8	
	CUtlSymbolLarge m_pPickupSoundEffect; // 0xbb0	
	CUtlSymbolLarge m_pPickupScriptFunction; // 0xbb8	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // 0xbc0	
	CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xbc8	
	CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xbd0	
	CUtlSymbolLarge m_pPickupFilterName; // 0xbd8	
	CHandle< CBaseFilter > m_hPickupFilter; // 0xbe0	
private:
	[[maybe_unused]] uint8_t __pad0be4[0x4]; // 0xbe4
public:
	CEntityIOOutput m_OnPickup; // 0xbe8	
	CEntityIOOutput m_OnTimeout; // 0xc10	
	CEntityIOOutput m_OnTriggerStartTouch; // 0xc38	
	CEntityIOOutput m_OnTriggerTouch; // 0xc60	
	CEntityIOOutput m_OnTriggerEndTouch; // 0xc88	
	CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xcb0	
	float m_flPickupRadius; // 0xcb8	
	float m_flTriggerRadius; // 0xcbc	
	CUtlSymbolLarge m_pTriggerSoundEffect; // 0xcc0	
	bool m_bGlowWhenInTrigger; // 0xcc8	
	Color m_glowColor; // 0xcc9	
	bool m_bUseable; // 0xccd	
private:
	[[maybe_unused]] uint8_t __pad0cce[0x2]; // 0xcce
public:
	CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // 0xcd0	
	
	// Datamap fields:
	// void CItemGenericItemGenericTouch; // 0x0
	// void InputStartAmbientSound; // 0x0
	// void InputStopAmbientSound; // 0x0
	// void InputToggleAmbientSound; // 0x0
	// void m_hAmbientSound; // 0xb68
	// float auto_remove_timeout; // 0x7fffffff
	// float drag_override; // 0x7fffffff
	// float damping_override; // 0x7fffffff
};

