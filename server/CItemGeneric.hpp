#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba0
// Has VTable
class CItemGeneric : public CItem
{
private:
	[[maybe_unused]] uint8_t __pad0a30[0x8]; // 0xa30
public:
	bool m_bHasTriggerRadius; // 0xa38	
	bool m_bHasPickupRadius; // 0xa39	
private:
	[[maybe_unused]] uint8_t __pad0a3a[0x2]; // 0xa3a
public:
	float m_flPickupRadiusSqr; // 0xa3c	
	float m_flTriggerRadiusSqr; // 0xa40	
	GameTime_t m_flLastPickupCheck; // 0xa44	
	bool m_bPlayerCounterListenerAdded; // 0xa48	
	bool m_bPlayerInTriggerRadius; // 0xa49	
private:
	[[maybe_unused]] uint8_t __pad0a4a[0x6]; // 0xa4a
public:
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // 0xa50	
	CUtlSymbolLarge m_pAmbientSoundEffect; // 0xa58	
	bool m_bAutoStartAmbientSound; // 0xa60	
private:
	[[maybe_unused]] uint8_t __pad0a61[0x7]; // 0xa61
public:
	CUtlSymbolLarge m_pSpawnScriptFunction; // 0xa68	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // 0xa70	
	CUtlSymbolLarge m_pPickupSoundEffect; // 0xa78	
	CUtlSymbolLarge m_pPickupScriptFunction; // 0xa80	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // 0xa88	
	CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xa90	
	CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xa98	
	CUtlSymbolLarge m_pPickupFilterName; // 0xaa0	
	CHandle< CBaseFilter > m_hPickupFilter; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aac[0x4]; // 0xaac
public:
	CEntityIOOutput m_OnPickup; // 0xab0	
	CEntityIOOutput m_OnTimeout; // 0xad8	
	CEntityIOOutput m_OnTriggerStartTouch; // 0xb00	
	CEntityIOOutput m_OnTriggerTouch; // 0xb28	
	CEntityIOOutput m_OnTriggerEndTouch; // 0xb50	
	CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xb78	
	float m_flPickupRadius; // 0xb80	
	float m_flTriggerRadius; // 0xb84	
	CUtlSymbolLarge m_pTriggerSoundEffect; // 0xb88	
	bool m_bGlowWhenInTrigger; // 0xb90	
	Color m_glowColor; // 0xb91	
	bool m_bUseable; // 0xb95	
private:
	[[maybe_unused]] uint8_t __pad0b96[0x2]; // 0xb96
public:
	CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // 0xb98	
	
	// Datamap fields:
	// void CItemGenericItemGenericTouch; // 0x0
	// void InputStartAmbientSound; // 0x0
	// void InputStopAmbientSound; // 0x0
	// void InputToggleAmbientSound; // 0x0
	// void m_hAmbientSound; // 0xa30
	// float auto_remove_timeout; // 0x7fffffff
	// float drag_override; // 0x7fffffff
	// float damping_override; // 0x7fffffff
};

