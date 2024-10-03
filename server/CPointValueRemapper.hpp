#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6d8
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
	bool m_bDisabled; // 0x4e0	
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x4e1	
private:
	[[maybe_unused]] uint8_t __pad04e2[0x2]; // 0x4e2
public:
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x4e4	
	CUtlSymbolLarge m_iszRemapLineStartName; // 0x4e8	
	CUtlSymbolLarge m_iszRemapLineEndName; // 0x4f0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineStart; // 0x4f8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineEnd; // 0x4fc	
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x500	
	// MNetworkEnable
	float m_flDisengageDistance; // 0x504	
	// MNetworkEnable
	float m_flEngageDistance; // 0x508	
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x50c	
private:
	[[maybe_unused]] uint8_t __pad050d[0x3]; // 0x50d
public:
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0514[0x4]; // 0x514
public:
	CUtlSymbolLarge m_iszOutputEntityName; // 0x518	
	CUtlSymbolLarge m_iszOutputEntity2Name; // 0x520	
	CUtlSymbolLarge m_iszOutputEntity3Name; // 0x528	
	CUtlSymbolLarge m_iszOutputEntity4Name; // 0x530	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hOutputEntities; // 0x538	
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x550	
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x554	
	// MNetworkEnable
	float m_flMomentumModifier; // 0x558	
	// MNetworkEnable
	float m_flSnapValue; // 0x55c	
	float m_flCurrentMomentum; // 0x560	
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x564	
	float m_flRatchetOffset; // 0x568	
	// MNetworkEnable
	float m_flInputOffset; // 0x56c	
	bool m_bEngaged; // 0x570	
	bool m_bFirstUpdate; // 0x571	
private:
	[[maybe_unused]] uint8_t __pad0572[0x2]; // 0x572
public:
	float m_flPreviousValue; // 0x574	
	GameTime_t m_flPreviousUpdateTickTime; // 0x578	
	Vector m_vecPreviousTestPoint; // 0x57c	
	CHandle< CBasePlayerPawn > m_hUsingPlayer; // 0x588	
	float m_flCustomOutputValue; // 0x58c	
	CUtlSymbolLarge m_iszSoundEngage; // 0x590	
	CUtlSymbolLarge m_iszSoundDisengage; // 0x598	
	CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x5a0	
	CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x5a8	
	CUtlSymbolLarge m_iszSoundMovingLoop; // 0x5b0	
private:
	[[maybe_unused]] uint8_t __pad05b8[0x8]; // 0x5b8
public:
	CEntityOutputTemplate< float32 > m_Position; // 0x5c0	
	CEntityOutputTemplate< float32 > m_PositionDelta; // 0x5e8	
	CEntityIOOutput m_OnReachedValueZero; // 0x610	
	CEntityIOOutput m_OnReachedValueOne; // 0x638	
	CEntityIOOutput m_OnReachedValueCustom; // 0x660	
	CEntityIOOutput m_OnEngage; // 0x688	
	CEntityIOOutput m_OnDisengage; // 0x6b0	
	
	// Datamap fields:
	// void CPointValueRemapperUpdateThink; // 0x0
};

