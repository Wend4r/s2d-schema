#pragma once

#include <cstdint>

struct ModifierSerialNumber_t;
struct GameTime_t;
struct CModifierHandleBase;
struct ModifierRuntimeHandle_t;
// Registered binary: client.dll (project 'client')
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
	CHandle< C_BaseEntity > m_hCaster; // 0x38	
	CHandle< C_BaseEntity > m_hAbility; // 0x3c	
	CModifierHandleBase m_hAuraProvider; // 0x40	
	CUtlStringToken m_nAbilitySubclassID; // 0x58	
	uint8_t m_iAttributes; // 0x5c	
	uint8_t m_iTeam; // 0x5d	
	int16_t m_iStackCount; // 0x5e	
	int16_t m_iMaxStackCount; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0062[0x6]; // 0x62
public:
	CUtlVector< GameTime_t >* m_pVecStackDecayTimes; // 0x68	
	uint8_t m_eDestroyReason; // 0x70	
	bool m_bDisabled; // 0x71	
	bool m_bSuppressSendModifier; // 0x72	
private:
	[[maybe_unused]] uint8_t __pad0073[0x1]; // 0x73
public:
	float m_flThinkInterval; // 0x74	
	GameTime_t m_flThinkIntervalStartTime; // 0x78	
	float m_flTimeScale; // 0x7c	
	CUtlVector< IModifierTrackedObject* >* m_pVecTrackedObjects; // 0x80	
	ModifierRuntimeHandle_t m_hModifierListHandle; // 0x88	
	uint8_t m_nDebugHelperFlags; // 0x8c	
	
	// Datamap fields:
	// void m_pModifierProp; // 0x20
	// void m_pSubclassVData; // 0x10
};

