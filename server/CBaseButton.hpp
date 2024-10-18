#pragma once

#include <cstdint>

struct locksound_t;
struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x960
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseModelEntity> m_glowEntity"
// MNetworkVarNames "bool m_usable"
// MNetworkVarNames "string_t m_szDisplayText"
class CBaseButton : public CBaseToggle
{
public:
	QAngle m_angMoveEntitySpace; // 0x810	
	bool m_fStayPushed; // 0x81c	
	bool m_fRotating; // 0x81d	
private:
	[[maybe_unused]] uint8_t __pad081e[0x2]; // 0x81e
public:
	locksound_t m_ls; // 0x820	
	CUtlSymbolLarge m_sUseSound; // 0x840	
	CUtlSymbolLarge m_sLockedSound; // 0x848	
	CUtlSymbolLarge m_sUnlockedSound; // 0x850	
	CUtlSymbolLarge m_sOverrideAnticipationName; // 0x858	
	bool m_bLocked; // 0x860	
	bool m_bDisabled; // 0x861	
private:
	[[maybe_unused]] uint8_t __pad0862[0x2]; // 0x862
public:
	GameTime_t m_flUseLockedTime; // 0x864	
	bool m_bSolidBsp; // 0x868	
private:
	[[maybe_unused]] uint8_t __pad0869[0x7]; // 0x869
public:
	CEntityIOOutput m_OnDamaged; // 0x870	
	CEntityIOOutput m_OnPressed; // 0x898	
	CEntityIOOutput m_OnUseLocked; // 0x8c0	
	CEntityIOOutput m_OnIn; // 0x8e8	
	CEntityIOOutput m_OnOut; // 0x910	
	int32_t m_nState; // 0x938	
	CEntityHandle m_hConstraint; // 0x93c	
	CEntityHandle m_hConstraintParent; // 0x940	
	bool m_bForceNpcExclude; // 0x944	
private:
	[[maybe_unused]] uint8_t __pad0945[0x3]; // 0x945
public:
	CUtlSymbolLarge m_sGlowEntity; // 0x948	
	// MNetworkEnable
	CHandle< CBaseModelEntity > m_glowEntity; // 0x950	
	// MNetworkEnable
	bool m_usable; // 0x954	
private:
	[[maybe_unused]] uint8_t __pad0955[0x3]; // 0x955
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x958	
	
	// Datamap fields:
	//  m_ls.sLockedSound; // 0x828
	//  m_ls.sUnlockedSound; // 0x830
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

