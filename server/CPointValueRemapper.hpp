#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bUpdateOnClient"
// MNetworkVarNames "ValueRemapperInputType_t m_nInputType"
// MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineStart"
// MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineEnd"
// MNetworkVarNames "float m_flMaximumChangePerSecond"
// MNetworkVarNames "float m_flDisengageDistance"
// MNetworkVarNames "float m_flEngageDistance"
// MNetworkVarNames "bool m_bRequiresUseKey"
// MNetworkVarNames "ValueRemapperOutputType_t m_nOutputType"
// MNetworkVarNames "CHandle< CBaseEntity > m_hOutputEntities"
// MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
// MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
// MNetworkVarNames "float m_flMomentumModifier"
// MNetworkVarNames "float m_flSnapValue"
// MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
// MNetworkVarNames "float m_flInputOffset"
class CPointValueRemapper : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x4d8	
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x4d9	
private:
	[[maybe_unused]] uint8_t __pad04da[0x2]; // 0x4da
public:
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x4dc	
	CUtlSymbolLarge m_iszRemapLineStartName; // 0x4e0	
	CUtlSymbolLarge m_iszRemapLineEndName; // 0x4e8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineStart; // 0x4f0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineEnd; // 0x4f4	
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x4f8	
	// MNetworkEnable
	float m_flDisengageDistance; // 0x4fc	
	// MNetworkEnable
	float m_flEngageDistance; // 0x500	
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x504	
private:
	[[maybe_unused]] uint8_t __pad0505[0x3]; // 0x505
public:
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0x4]; // 0x50c
public:
	CUtlSymbolLarge m_iszOutputEntityName; // 0x510	
	CUtlSymbolLarge m_iszOutputEntity2Name; // 0x518	
	CUtlSymbolLarge m_iszOutputEntity3Name; // 0x520	
	CUtlSymbolLarge m_iszOutputEntity4Name; // 0x528	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hOutputEntities; // 0x530	
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x548	
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x54c	
	// MNetworkEnable
	float m_flMomentumModifier; // 0x550	
	// MNetworkEnable
	float m_flSnapValue; // 0x554	
	float m_flCurrentMomentum; // 0x558	
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x55c	
	float m_flRatchetOffset; // 0x560	
	// MNetworkEnable
	float m_flInputOffset; // 0x564	
	bool m_bEngaged; // 0x568	
	bool m_bFirstUpdate; // 0x569	
private:
	[[maybe_unused]] uint8_t __pad056a[0x2]; // 0x56a
public:
	float m_flPreviousValue; // 0x56c	
	GameTime_t m_flPreviousUpdateTickTime; // 0x570	
	Vector m_vecPreviousTestPoint; // 0x574	
	CHandle< CBasePlayerPawn > m_hUsingPlayer; // 0x580	
	float m_flCustomOutputValue; // 0x584	
	CUtlSymbolLarge m_iszSoundEngage; // 0x588	
	CUtlSymbolLarge m_iszSoundDisengage; // 0x590	
	CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x598	
	CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x5a0	
	CUtlSymbolLarge m_iszSoundMovingLoop; // 0x5a8	
private:
	[[maybe_unused]] uint8_t __pad05b0[0x8]; // 0x5b0
public:
	CEntityOutputTemplate< float32 > m_Position; // 0x5b8	
	CEntityOutputTemplate< float32 > m_PositionDelta; // 0x5e0	
	CEntityIOOutput m_OnReachedValueZero; // 0x608	
	CEntityIOOutput m_OnReachedValueOne; // 0x630	
	CEntityIOOutput m_OnReachedValueCustom; // 0x658	
	CEntityIOOutput m_OnEngage; // 0x680	
	CEntityIOOutput m_OnDisengage; // 0x6a8	
	
	// Datamap fields:
	// void CPointValueRemapperUpdateThink; // 0x0
};

