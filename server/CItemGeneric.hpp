#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb30
// Has VTable
class CItemGeneric : public CItem
{
private:
	[[maybe_unused]] uint8_t __pad09c0[0x8]; // 0x9c0
public:
	bool m_bHasTriggerRadius; // 0x9c8	
	bool m_bHasPickupRadius; // 0x9c9	
private:
	[[maybe_unused]] uint8_t __pad09ca[0x2]; // 0x9ca
public:
	float m_flPickupRadiusSqr; // 0x9cc	
	float m_flTriggerRadiusSqr; // 0x9d0	
	GameTime_t m_flLastPickupCheck; // 0x9d4	
	bool m_bPlayerCounterListenerAdded; // 0x9d8	
	bool m_bPlayerInTriggerRadius; // 0x9d9	
private:
	[[maybe_unused]] uint8_t __pad09da[0x6]; // 0x9da
public:
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // 0x9e0	
	CUtlSymbolLarge m_pAmbientSoundEffect; // 0x9e8	
	bool m_bAutoStartAmbientSound; // 0x9f0	
private:
	[[maybe_unused]] uint8_t __pad09f1[0x7]; // 0x9f1
public:
	CUtlSymbolLarge m_pSpawnScriptFunction; // 0x9f8	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // 0xa00	
	CUtlSymbolLarge m_pPickupSoundEffect; // 0xa08	
	CUtlSymbolLarge m_pPickupScriptFunction; // 0xa10	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // 0xa18	
	CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xa20	
	CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xa28	
	CUtlSymbolLarge m_pPickupFilterName; // 0xa30	
	CHandle< CBaseFilter > m_hPickupFilter; // 0xa38	
private:
	[[maybe_unused]] uint8_t __pad0a3c[0x4]; // 0xa3c
public:
	CEntityIOOutput m_OnPickup; // 0xa40	
	CEntityIOOutput m_OnTimeout; // 0xa68	
	CEntityIOOutput m_OnTriggerStartTouch; // 0xa90	
	CEntityIOOutput m_OnTriggerTouch; // 0xab8	
	CEntityIOOutput m_OnTriggerEndTouch; // 0xae0	
	CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xb08	
	float m_flPickupRadius; // 0xb10	
	float m_flTriggerRadius; // 0xb14	
	CUtlSymbolLarge m_pTriggerSoundEffect; // 0xb18	
	bool m_bGlowWhenInTrigger; // 0xb20	
	Color m_glowColor; // 0xb21	
	bool m_bUseable; // 0xb25	
private:
	[[maybe_unused]] uint8_t __pad0b26[0x2]; // 0xb26
public:
	CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // 0xb28	
	
	// Datamap fields:
	// void CItemGenericItemGenericTouch; // 0x0
	// void InputStartAmbientSound; // 0x0
	// void InputStopAmbientSound; // 0x0
	// void InputToggleAmbientSound; // 0x0
	// void m_hAmbientSound; // 0x9c0
	// float auto_remove_timeout; // 0x7fffffff
	// float drag_override; // 0x7fffffff
	// float damping_override; // 0x7fffffff
};

