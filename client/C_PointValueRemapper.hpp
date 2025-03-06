#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x588
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
// MNetworkVarNames "CHandle< C_BaseEntity > m_hOutputEntities"
// MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
// MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
// MNetworkVarNames "float m_flMomentumModifier"
// MNetworkVarNames "float m_flSnapValue"
// MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
// MNetworkVarNames "float m_flInputOffset"
class C_PointValueRemapper : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x510	
	bool m_bDisabledOld; // 0x511	
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x512	
private:
	[[maybe_unused]] uint8_t __pad0513[0x1]; // 0x513
public:
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x514	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineStart; // 0x518	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineEnd; // 0x51c	
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x520	
	// MNetworkEnable
	float m_flDisengageDistance; // 0x524	
	// MNetworkEnable
	float m_flEngageDistance; // 0x528	
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x52c	
private:
	[[maybe_unused]] uint8_t __pad052d[0x3]; // 0x52d
public:
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x530	
private:
	[[maybe_unused]] uint8_t __pad0534[0x4]; // 0x534
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hOutputEntities; // 0x538	
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
};

