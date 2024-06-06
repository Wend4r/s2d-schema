#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6b8
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
	bool m_bDisabled; // 0x4c0	
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x4c1	
private:
	[[maybe_unused]] uint8_t __pad04c2[0x2]; // 0x4c2
public:
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x4c4	
	CUtlSymbolLarge m_iszRemapLineStartName; // 0x4c8	
	CUtlSymbolLarge m_iszRemapLineEndName; // 0x4d0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineStart; // 0x4d8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineEnd; // 0x4dc	
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x4e0	
	// MNetworkEnable
	float m_flDisengageDistance; // 0x4e4	
	// MNetworkEnable
	float m_flEngageDistance; // 0x4e8	
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x4ec	
private:
	[[maybe_unused]] uint8_t __pad04ed[0x3]; // 0x4ed
public:
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CUtlSymbolLarge m_iszOutputEntityName; // 0x4f8	
	CUtlSymbolLarge m_iszOutputEntity2Name; // 0x500	
	CUtlSymbolLarge m_iszOutputEntity3Name; // 0x508	
	CUtlSymbolLarge m_iszOutputEntity4Name; // 0x510	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hOutputEntities; // 0x518	
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x530	
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x534	
	// MNetworkEnable
	float m_flMomentumModifier; // 0x538	
	// MNetworkEnable
	float m_flSnapValue; // 0x53c	
	float m_flCurrentMomentum; // 0x540	
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x544	
	float m_flRatchetOffset; // 0x548	
	// MNetworkEnable
	float m_flInputOffset; // 0x54c	
	bool m_bEngaged; // 0x550	
	bool m_bFirstUpdate; // 0x551	
private:
	[[maybe_unused]] uint8_t __pad0552[0x2]; // 0x552
public:
	float m_flPreviousValue; // 0x554	
	GameTime_t m_flPreviousUpdateTickTime; // 0x558	
	Vector m_vecPreviousTestPoint; // 0x55c	
	CHandle< CBasePlayerPawn > m_hUsingPlayer; // 0x568	
	float m_flCustomOutputValue; // 0x56c	
	CUtlSymbolLarge m_iszSoundEngage; // 0x570	
	CUtlSymbolLarge m_iszSoundDisengage; // 0x578	
	CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x580	
	CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x588	
	CUtlSymbolLarge m_iszSoundMovingLoop; // 0x590	
private:
	[[maybe_unused]] uint8_t __pad0598[0x8]; // 0x598
public:
	CEntityOutputTemplate< float32 > m_Position; // 0x5a0	
	CEntityOutputTemplate< float32 > m_PositionDelta; // 0x5c8	
	CEntityIOOutput m_OnReachedValueZero; // 0x5f0	
	CEntityIOOutput m_OnReachedValueOne; // 0x618	
	CEntityIOOutput m_OnReachedValueCustom; // 0x640	
	CEntityIOOutput m_OnEngage; // 0x668	
	CEntityIOOutput m_OnDisengage; // 0x690	
	
	// Datamap fields:
	// void CPointValueRemapperUpdateThink; // 0x0
};

