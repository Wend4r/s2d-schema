#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba8
// Has VTable
class CItemGeneric : public CItem
{
private:
	[[maybe_unused]] uint8_t __pad0a38[0x8]; // 0xa38
public:
	bool m_bHasTriggerRadius; // 0xa40	
	bool m_bHasPickupRadius; // 0xa41	
private:
	[[maybe_unused]] uint8_t __pad0a42[0x2]; // 0xa42
public:
	float m_flPickupRadiusSqr; // 0xa44	
	float m_flTriggerRadiusSqr; // 0xa48	
	GameTime_t m_flLastPickupCheck; // 0xa4c	
	bool m_bPlayerCounterListenerAdded; // 0xa50	
	bool m_bPlayerInTriggerRadius; // 0xa51	
private:
	[[maybe_unused]] uint8_t __pad0a52[0x6]; // 0xa52
public:
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // 0xa58	
	CUtlSymbolLarge m_pAmbientSoundEffect; // 0xa60	
	bool m_bAutoStartAmbientSound; // 0xa68	
private:
	[[maybe_unused]] uint8_t __pad0a69[0x7]; // 0xa69
public:
	CUtlSymbolLarge m_pSpawnScriptFunction; // 0xa70	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // 0xa78	
	CUtlSymbolLarge m_pPickupSoundEffect; // 0xa80	
	CUtlSymbolLarge m_pPickupScriptFunction; // 0xa88	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // 0xa90	
	CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xa98	
	CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xaa0	
	CUtlSymbolLarge m_pPickupFilterName; // 0xaa8	
	CHandle< CBaseFilter > m_hPickupFilter; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab4[0x4]; // 0xab4
public:
	CEntityIOOutput m_OnPickup; // 0xab8	
	CEntityIOOutput m_OnTimeout; // 0xae0	
	CEntityIOOutput m_OnTriggerStartTouch; // 0xb08	
	CEntityIOOutput m_OnTriggerTouch; // 0xb30	
	CEntityIOOutput m_OnTriggerEndTouch; // 0xb58	
	CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xb80	
	float m_flPickupRadius; // 0xb88	
	float m_flTriggerRadius; // 0xb8c	
	CUtlSymbolLarge m_pTriggerSoundEffect; // 0xb90	
	bool m_bGlowWhenInTrigger; // 0xb98	
	Color m_glowColor; // 0xb99	
	bool m_bUseable; // 0xb9d	
private:
	[[maybe_unused]] uint8_t __pad0b9e[0x2]; // 0xb9e
public:
	CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // 0xba0	
	
	// Datamap fields:
	// void CItemGenericItemGenericTouch; // 0x0
	// void InputStartAmbientSound; // 0x0
	// void InputStopAmbientSound; // 0x0
	// void InputToggleAmbientSound; // 0x0
	// void m_hAmbientSound; // 0xa38
	// float auto_remove_timeout; // 0x7fffffff
	// float drag_override; // 0x7fffffff
	// float damping_override; // 0x7fffffff
};

