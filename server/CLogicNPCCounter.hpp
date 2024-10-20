#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x820
// Has VTable
class CLogicNPCCounter : public CBaseEntity
{
public:
	CEntityIOOutput m_OnMinCountAll; // 0x4e0	
	CEntityIOOutput m_OnMaxCountAll; // 0x508	
	CEntityOutputTemplate< float32 > m_OnFactorAll; // 0x530	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDistAll; // 0x558	
	CEntityIOOutput m_OnMinCount_1; // 0x580	
	CEntityIOOutput m_OnMaxCount_1; // 0x5a8	
	CEntityOutputTemplate< float32 > m_OnFactor_1; // 0x5d0	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDist_1; // 0x5f8	
	CEntityIOOutput m_OnMinCount_2; // 0x620	
	CEntityIOOutput m_OnMaxCount_2; // 0x648	
	CEntityOutputTemplate< float32 > m_OnFactor_2; // 0x670	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDist_2; // 0x698	
	CEntityIOOutput m_OnMinCount_3; // 0x6c0	
	CEntityIOOutput m_OnMaxCount_3; // 0x6e8	
	CEntityOutputTemplate< float32 > m_OnFactor_3; // 0x710	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDist_3; // 0x738	
	CEntityHandle m_hSource; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad0764[0x4]; // 0x764
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x768	
	float m_flDistanceMax; // 0x770	
	bool m_bDisabled; // 0x774	
private:
	[[maybe_unused]] uint8_t __pad0775[0x3]; // 0x775
public:
	int32_t m_nMinCountAll; // 0x778	
	int32_t m_nMaxCountAll; // 0x77c	
	int32_t m_nMinFactorAll; // 0x780	
	int32_t m_nMaxFactorAll; // 0x784	
private:
	[[maybe_unused]] uint8_t __pad0788[0x8]; // 0x788
public:
	CUtlSymbolLarge m_iszNPCClassname_1; // 0x790	
	int32_t m_nNPCState_1; // 0x798	
	bool m_bInvertState_1; // 0x79c	
private:
	[[maybe_unused]] uint8_t __pad079d[0x3]; // 0x79d
public:
	int32_t m_nMinCount_1; // 0x7a0	
	int32_t m_nMaxCount_1; // 0x7a4	
	int32_t m_nMinFactor_1; // 0x7a8	
	int32_t m_nMaxFactor_1; // 0x7ac	
private:
	[[maybe_unused]] uint8_t __pad07b0[0x4]; // 0x7b0
public:
	float m_flDefaultDist_1; // 0x7b4	
	CUtlSymbolLarge m_iszNPCClassname_2; // 0x7b8	
	int32_t m_nNPCState_2; // 0x7c0	
	bool m_bInvertState_2; // 0x7c4	
private:
	[[maybe_unused]] uint8_t __pad07c5[0x3]; // 0x7c5
public:
	int32_t m_nMinCount_2; // 0x7c8	
	int32_t m_nMaxCount_2; // 0x7cc	
	int32_t m_nMinFactor_2; // 0x7d0	
	int32_t m_nMaxFactor_2; // 0x7d4	
private:
	[[maybe_unused]] uint8_t __pad07d8[0x4]; // 0x7d8
public:
	float m_flDefaultDist_2; // 0x7dc	
	CUtlSymbolLarge m_iszNPCClassname_3; // 0x7e0	
	int32_t m_nNPCState_3; // 0x7e8	
	bool m_bInvertState_3; // 0x7ec	
private:
	[[maybe_unused]] uint8_t __pad07ed[0x3]; // 0x7ed
public:
	int32_t m_nMinCount_3; // 0x7f0	
	int32_t m_nMaxCount_3; // 0x7f4	
	int32_t m_nMinFactor_3; // 0x7f8	
	int32_t m_nMaxFactor_3; // 0x7fc	
private:
	[[maybe_unused]] uint8_t __pad0800[0x4]; // 0x800
public:
	float m_flDefaultDist_3; // 0x804	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetSourceEntity; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void CLogicNPCCounterSetNPCCounterThink; // 0x0
};

