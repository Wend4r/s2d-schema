#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xda0
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "EHANDLE m_hCurrentTarget"
// MNetworkVarNames "EHANDLE m_hLastCastTarget"
// MNetworkVarNames "Vector m_vStartPosition"
// MNetworkVarNames "Vector m_vDeparturePosition"
// MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
// MNetworkVarNames "bool m_bIsFirstCastCompleted"
// MNetworkVarNames "GameTime_t m_tDoubleCastWindow"
class CCitadel_Ability_Nano_Pounce_Instant : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x230]; // 0xb00
public:
	// MNetworkEnable
	bool m_bActive; // 0xd30	
private:
	[[maybe_unused]] uint8_t __pad0d31[0x3]; // 0xd31
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hCurrentTarget; // 0xd34	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hLastCastTarget; // 0xd38	
	// MNetworkEnable
	Vector m_vStartPosition; // 0xd3c	
	// MNetworkEnable
	Vector m_vDeparturePosition; // 0xd48	
private:
	[[maybe_unused]] uint8_t __pad0d54[0x4]; // 0xd54
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime; // 0xd58	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime; // 0xd70	
	Vector m_vLastKnownSafePos; // 0xd88	
private:
	[[maybe_unused]] uint8_t __pad0d94[0x2]; // 0xd94
public:
	// MNetworkEnable
	bool m_bIsFirstCastCompleted; // 0xd96	
private:
	[[maybe_unused]] uint8_t __pad0d97[0x1]; // 0xd97
public:
	// MNetworkEnable
	GameTime_t m_tDoubleCastWindow; // 0xd98	
	ParticleIndex_t m_CastStartParticle; // 0xd9c	
};

