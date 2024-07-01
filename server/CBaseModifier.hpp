#pragma once

#include <cstdint>

struct ModifierSerialNumber_t;
struct GameTime_t;
struct CModifierHandleBase;
struct ModifierQueuedRefreshHandle_t;
struct ModifierRuntimeHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x90
// Has VTable
// Is Abstract
class CBaseModifier
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	ModifierSerialNumber_t m_nSerialNumber; // 0x28	
	GameTime_t m_flLastAppliedTime; // 0x2c	
	GameTime_t m_flCreationTime; // 0x30	
	float m_flDuration; // 0x34	
	CHandle< CBaseEntity > m_hCaster; // 0x38	
	CHandle< CBaseEntity > m_hAbility; // 0x3c	
	CModifierHandleBase m_hAuraProvider; // 0x40	
	ModifierQueuedRefreshHandle_t m_nQueuedModifierRefreshHandle; // 0x58	
	uint8_t m_iAttributes; // 0x5a	
	uint8_t m_iTeam; // 0x5b	
	int16_t m_iStackCount; // 0x5c	
	int16_t m_iMaxStackCount; // 0x5e	
	CUtlVector< GameTime_t >* m_pVecStackDecayTimes; // 0x60	
	uint8_t m_eDestroyReason; // 0x68	
	bool m_bDisabled; // 0x69	
	bool m_bSuppressSendModifier; // 0x6a	
private:
	[[maybe_unused]] uint8_t __pad006b[0x1]; // 0x6b
public:
	float m_flThinkInterval; // 0x6c	
	GameTime_t m_flThinkIntervalStartTime; // 0x70	
	float m_flTimeScale; // 0x74	
	CUtlVector< IModifierTrackedObject* >* m_pVecTrackedObjects; // 0x78	
	ModifierRuntimeHandle_t m_hModifierListHandle; // 0x80	
	int32_t m_iStringIndex; // 0x84	
	uint8_t m_nDebugHelperFlags; // 0x88	
	
	// Datamap fields:
	// void m_pModifierProp; // 0x20
	// void m_pSubclassVData; // 0x10
};

