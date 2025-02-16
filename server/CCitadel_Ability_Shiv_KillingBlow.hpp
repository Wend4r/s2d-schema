#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf10
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
	[[maybe_unused]] uint8_t __pad0b00[0x1c0]; // 0xb00
public:
	// MNetworkEnable
	bool m_bActive; // 0xcc0	
private:
	[[maybe_unused]] uint8_t __pad0cc1[0x3]; // 0xcc1
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hCurrentTarget; // 0xcc4	
	// MNetworkEnable
	Vector m_vStartPosition; // 0xcc8	
	// MNetworkEnable
	Vector m_vDeparturePosition; // 0xcd4	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime; // 0xce0	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime; // 0xcf8	
	Vector m_vLastKnownSafePos; // 0xd10	
private:
	[[maybe_unused]] uint8_t __pad0d1c[0x4]; // 0xd1c
public:
	ParticleIndex_t m_ChannelParticle; // 0xd20	
private:
	[[maybe_unused]] uint8_t __pad0d24[0xc]; // 0xd24
public:
	// MNetworkEnable
	GameTime_t m_flDrainSuppressEndTime; // 0xd30	
private:
	[[maybe_unused]] uint8_t __pad0d34[0x1c4]; // 0xd34
public:
	CModifierHandleTyped< CCitadelModifier > m_BuffModifier; // 0xef8	
};

