#pragma once

#include <cstdint>

struct locksound_t;
struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e0
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseModelEntity> m_glowEntity"
// MNetworkVarNames "bool m_usable"
// MNetworkVarNames "string_t m_szDisplayText"
class CBaseButton : public CBaseToggle
{
public:
	QAngle m_angMoveEntitySpace; // 0x790	
	bool m_fStayPushed; // 0x79c	
	bool m_fRotating; // 0x79d	
private:
	[[maybe_unused]] uint8_t __pad079e[0x2]; // 0x79e
public:
	locksound_t m_ls; // 0x7a0	
	CUtlSymbolLarge m_sUseSound; // 0x7c0	
	CUtlSymbolLarge m_sLockedSound; // 0x7c8	
	CUtlSymbolLarge m_sUnlockedSound; // 0x7d0	
	CUtlSymbolLarge m_sOverrideAnticipationName; // 0x7d8	
	bool m_bLocked; // 0x7e0	
	bool m_bDisabled; // 0x7e1	
private:
	[[maybe_unused]] uint8_t __pad07e2[0x2]; // 0x7e2
public:
	GameTime_t m_flUseLockedTime; // 0x7e4	
	bool m_bSolidBsp; // 0x7e8	
private:
	[[maybe_unused]] uint8_t __pad07e9[0x7]; // 0x7e9
public:
	CEntityIOOutput m_OnDamaged; // 0x7f0	
	CEntityIOOutput m_OnPressed; // 0x818	
	CEntityIOOutput m_OnUseLocked; // 0x840	
	CEntityIOOutput m_OnIn; // 0x868	
	CEntityIOOutput m_OnOut; // 0x890	
	int32_t m_nState; // 0x8b8	
	CEntityHandle m_hConstraint; // 0x8bc	
	CEntityHandle m_hConstraintParent; // 0x8c0	
	bool m_bForceNpcExclude; // 0x8c4	
private:
	[[maybe_unused]] uint8_t __pad08c5[0x3]; // 0x8c5
public:
	CUtlSymbolLarge m_sGlowEntity; // 0x8c8	
	// MNetworkEnable
	CHandle< CBaseModelEntity > m_glowEntity; // 0x8d0	
	// MNetworkEnable
	bool m_usable; // 0x8d4	
private:
	[[maybe_unused]] uint8_t __pad08d5[0x3]; // 0x8d5
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x8d8	
	
	// Datamap fields:
	//  m_ls.sLockedSound; // 0x7a8
	//  m_ls.sUnlockedSound; // 0x7b0
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

