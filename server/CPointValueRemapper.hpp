#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6b0
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
	bool m_bDisabled; // 0x4b8	
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x4b9	
private:
	[[maybe_unused]] uint8_t __pad04ba[0x2]; // 0x4ba
public:
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x4bc	
	CUtlSymbolLarge m_iszRemapLineStartName; // 0x4c0	
	CUtlSymbolLarge m_iszRemapLineEndName; // 0x4c8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineStart; // 0x4d0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineEnd; // 0x4d4	
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x4d8	
	// MNetworkEnable
	float m_flDisengageDistance; // 0x4dc	
	// MNetworkEnable
	float m_flEngageDistance; // 0x4e0	
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x4e4	
private:
	[[maybe_unused]] uint8_t __pad04e5[0x3]; // 0x4e5
public:
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CUtlSymbolLarge m_iszOutputEntityName; // 0x4f0	
	CUtlSymbolLarge m_iszOutputEntity2Name; // 0x4f8	
	CUtlSymbolLarge m_iszOutputEntity3Name; // 0x500	
	CUtlSymbolLarge m_iszOutputEntity4Name; // 0x508	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hOutputEntities; // 0x510	
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x528	
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x52c	
	// MNetworkEnable
	float m_flMomentumModifier; // 0x530	
	// MNetworkEnable
	float m_flSnapValue; // 0x534	
	float m_flCurrentMomentum; // 0x538	
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x53c	
	float m_flRatchetOffset; // 0x540	
	// MNetworkEnable
	float m_flInputOffset; // 0x544	
	bool m_bEngaged; // 0x548	
	bool m_bFirstUpdate; // 0x549	
private:
	[[maybe_unused]] uint8_t __pad054a[0x2]; // 0x54a
public:
	float m_flPreviousValue; // 0x54c	
	GameTime_t m_flPreviousUpdateTickTime; // 0x550	
	Vector m_vecPreviousTestPoint; // 0x554	
	CHandle< CBasePlayerPawn > m_hUsingPlayer; // 0x560	
	float m_flCustomOutputValue; // 0x564	
	CUtlSymbolLarge m_iszSoundEngage; // 0x568	
	CUtlSymbolLarge m_iszSoundDisengage; // 0x570	
	CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x578	
	CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x580	
	CUtlSymbolLarge m_iszSoundMovingLoop; // 0x588	
private:
	[[maybe_unused]] uint8_t __pad0590[0x8]; // 0x590
public:
	CEntityOutputTemplate< float32 > m_Position; // 0x598	
	CEntityOutputTemplate< float32 > m_PositionDelta; // 0x5c0	
	CEntityIOOutput m_OnReachedValueZero; // 0x5e8	
	CEntityIOOutput m_OnReachedValueOne; // 0x610	
	CEntityIOOutput m_OnReachedValueCustom; // 0x638	
	CEntityIOOutput m_OnEngage; // 0x660	
	CEntityIOOutput m_OnDisengage; // 0x688	
	
	// Datamap fields:
	// void CPointValueRemapperUpdateThink; // 0x0
};

