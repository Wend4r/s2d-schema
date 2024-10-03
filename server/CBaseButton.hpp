#pragma once

#include <cstdint>

struct locksound_t;
struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x920
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseModelEntity> m_glowEntity"
// MNetworkVarNames "bool m_usable"
// MNetworkVarNames "string_t m_szDisplayText"
class CBaseButton : public CBaseToggle
{
public:
	QAngle m_angMoveEntitySpace; // 0x7d0	
	bool m_fStayPushed; // 0x7dc	
	bool m_fRotating; // 0x7dd	
private:
	[[maybe_unused]] uint8_t __pad07de[0x2]; // 0x7de
public:
	locksound_t m_ls; // 0x7e0	
	CUtlSymbolLarge m_sUseSound; // 0x800	
	CUtlSymbolLarge m_sLockedSound; // 0x808	
	CUtlSymbolLarge m_sUnlockedSound; // 0x810	
	CUtlSymbolLarge m_sOverrideAnticipationName; // 0x818	
	bool m_bLocked; // 0x820	
	bool m_bDisabled; // 0x821	
private:
	[[maybe_unused]] uint8_t __pad0822[0x2]; // 0x822
public:
	GameTime_t m_flUseLockedTime; // 0x824	
	bool m_bSolidBsp; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad0829[0x7]; // 0x829
public:
	CEntityIOOutput m_OnDamaged; // 0x830	
	CEntityIOOutput m_OnPressed; // 0x858	
	CEntityIOOutput m_OnUseLocked; // 0x880	
	CEntityIOOutput m_OnIn; // 0x8a8	
	CEntityIOOutput m_OnOut; // 0x8d0	
	int32_t m_nState; // 0x8f8	
	CEntityHandle m_hConstraint; // 0x8fc	
	CEntityHandle m_hConstraintParent; // 0x900	
	bool m_bForceNpcExclude; // 0x904	
private:
	[[maybe_unused]] uint8_t __pad0905[0x3]; // 0x905
public:
	CUtlSymbolLarge m_sGlowEntity; // 0x908	
	// MNetworkEnable
	CHandle< CBaseModelEntity > m_glowEntity; // 0x910	
	// MNetworkEnable
	bool m_usable; // 0x914	
private:
	[[maybe_unused]] uint8_t __pad0915[0x3]; // 0x915
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x918	
	
	// Datamap fields:
	//  m_ls.sLockedSound; // 0x7e8
	//  m_ls.sUnlockedSound; // 0x7f0
	// void CBaseButtonButtonTouch; // 0x0
	// void CBaseButtonButtonSpark; // 0x0
	// void CBaseButtonTriggerAndWait; // 0x0
	// void CBaseButtonButtonReturn; // 0x0
	// void CBaseButtonButtonBackHome; // 0x0
	// void CBaseButtonButtonUse; // 0x0
	// void CBaseButtonActivateTouch; // 0x0
	// void InputLock; // 0x0
	// void InputUnlock; // 0x0
	// void InputPress; // 0x0
	// void InputPressIn; // 0x0
	// void InputPressOut; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlString displaytext; // 0x7fffffff
};

