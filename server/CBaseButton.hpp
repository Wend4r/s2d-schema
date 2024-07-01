#pragma once

#include <cstdint>

struct locksound_t;
struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x918
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseModelEntity> m_glowEntity"
// MNetworkVarNames "bool m_usable"
// MNetworkVarNames "string_t m_szDisplayText"
class CBaseButton : public CBaseToggle
{
public:
	QAngle m_angMoveEntitySpace; // 0x7c8	
	bool m_fStayPushed; // 0x7d4	
	bool m_fRotating; // 0x7d5	
private:
	[[maybe_unused]] uint8_t __pad07d6[0x2]; // 0x7d6
public:
	locksound_t m_ls; // 0x7d8	
	CUtlSymbolLarge m_sUseSound; // 0x7f8	
	CUtlSymbolLarge m_sLockedSound; // 0x800	
	CUtlSymbolLarge m_sUnlockedSound; // 0x808	
	CUtlSymbolLarge m_sOverrideAnticipationName; // 0x810	
	bool m_bLocked; // 0x818	
	bool m_bDisabled; // 0x819	
private:
	[[maybe_unused]] uint8_t __pad081a[0x2]; // 0x81a
public:
	GameTime_t m_flUseLockedTime; // 0x81c	
	bool m_bSolidBsp; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0821[0x7]; // 0x821
public:
	CEntityIOOutput m_OnDamaged; // 0x828	
	CEntityIOOutput m_OnPressed; // 0x850	
	CEntityIOOutput m_OnUseLocked; // 0x878	
	CEntityIOOutput m_OnIn; // 0x8a0	
	CEntityIOOutput m_OnOut; // 0x8c8	
	int32_t m_nState; // 0x8f0	
	CEntityHandle m_hConstraint; // 0x8f4	
	CEntityHandle m_hConstraintParent; // 0x8f8	
	bool m_bForceNpcExclude; // 0x8fc	
private:
	[[maybe_unused]] uint8_t __pad08fd[0x3]; // 0x8fd
public:
	CUtlSymbolLarge m_sGlowEntity; // 0x900	
	// MNetworkEnable
	CHandle< CBaseModelEntity > m_glowEntity; // 0x908	
	// MNetworkEnable
	bool m_usable; // 0x90c	
private:
	[[maybe_unused]] uint8_t __pad090d[0x3]; // 0x90d
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x910	
	
	// Datamap fields:
	//  m_ls.sLockedSound; // 0x7e0
	//  m_ls.sUnlockedSound; // 0x7e8
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

