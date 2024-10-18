#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbf0
// Has VTable
class CItemGeneric : public CItem
{
private:
	[[maybe_unused]] uint8_t __pad0a80[0x8]; // 0xa80
public:
	bool m_bHasTriggerRadius; // 0xa88	
	bool m_bHasPickupRadius; // 0xa89	
private:
	[[maybe_unused]] uint8_t __pad0a8a[0x2]; // 0xa8a
public:
	float m_flPickupRadiusSqr; // 0xa8c	
	float m_flTriggerRadiusSqr; // 0xa90	
	GameTime_t m_flLastPickupCheck; // 0xa94	
	bool m_bPlayerCounterListenerAdded; // 0xa98	
	bool m_bPlayerInTriggerRadius; // 0xa99	
private:
	[[maybe_unused]] uint8_t __pad0a9a[0x6]; // 0xa9a
public:
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // 0xaa0	
	CUtlSymbolLarge m_pAmbientSoundEffect; // 0xaa8	
	bool m_bAutoStartAmbientSound; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab1[0x7]; // 0xab1
public:
	CUtlSymbolLarge m_pSpawnScriptFunction; // 0xab8	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // 0xac0	
	CUtlSymbolLarge m_pPickupSoundEffect; // 0xac8	
	CUtlSymbolLarge m_pPickupScriptFunction; // 0xad0	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // 0xad8	
	CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xae0	
	CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xae8	
	CUtlSymbolLarge m_pPickupFilterName; // 0xaf0	
	CHandle< CBaseFilter > m_hPickupFilter; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0afc[0x4]; // 0xafc
public:
	CEntityIOOutput m_OnPickup; // 0xb00	
	CEntityIOOutput m_OnTimeout; // 0xb28	
	CEntityIOOutput m_OnTriggerStartTouch; // 0xb50	
	CEntityIOOutput m_OnTriggerTouch; // 0xb78	
	CEntityIOOutput m_OnTriggerEndTouch; // 0xba0	
	CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xbc8	
	float m_flPickupRadius; // 0xbd0	
	float m_flTriggerRadius; // 0xbd4	
	CUtlSymbolLarge m_pTriggerSoundEffect; // 0xbd8	
	bool m_bGlowWhenInTrigger; // 0xbe0	
	Color m_glowColor; // 0xbe1	
	bool m_bUseable; // 0xbe5	
private:
	[[maybe_unused]] uint8_t __pad0be6[0x2]; // 0xbe6
public:
	CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // 0xbe8	
	
	// Datamap fields:
	// void CItemGenericItemGenericTouch; // 0x0
	// void InputStartAmbientSound; // 0x0
	// void InputStopAmbientSound; // 0x0
	// void InputToggleAmbientSound; // 0x0
	// void m_hAmbientSound; // 0xa80
	// float auto_remove_timeout; // 0x7fffffff
	// float drag_override; // 0x7fffffff
	// float damping_override; // 0x7fffffff
};

