#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec0
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "EHANDLE m_hCurrentTarget"
// MNetworkVarNames "Vector m_vStartPosition"
// MNetworkVarNames "Vector m_vDeparturePosition"
// MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
// MNetworkVarNames "GameTime_t m_flDrainSuppressEndTime"
class CCitadel_Ability_Shiv_KillingBlow : public CCitadelBaseShivAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x1c0]; // 0xab0
public:
	// MNetworkEnable
	bool m_bActive; // 0xc70	
private:
	[[maybe_unused]] uint8_t __pad0c71[0x3]; // 0xc71
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hCurrentTarget; // 0xc74	
	// MNetworkEnable
	Vector m_vStartPosition; // 0xc78	
	// MNetworkEnable
	Vector m_vDeparturePosition; // 0xc84	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime; // 0xc90	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime; // 0xca8	
	Vector m_vLastKnownSafePos; // 0xcc0	
private:
	[[maybe_unused]] uint8_t __pad0ccc[0x4]; // 0xccc
public:
	ParticleIndex_t m_ChannelParticle; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd4[0xc]; // 0xcd4
public:
	// MNetworkEnable
	GameTime_t m_flDrainSuppressEndTime; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0ce4[0x1c4]; // 0xce4
public:
	CModifierHandleTyped< CCitadelModifier > m_BuffModifier; // 0xea8	
};

