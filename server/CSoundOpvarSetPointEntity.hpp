#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x688
// Has VTable
class CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase
{
public:
	CEntityIOOutput m_OnEnter; // 0x578	
	CEntityIOOutput m_OnExit; // 0x5a0	
	bool m_bAutoDisable; // 0x5c8	
private:
	[[maybe_unused]] uint8_t __pad05c9[0x43]; // 0x5c9
public:
	float m_flDistanceMin; // 0x60c	
	float m_flDistanceMax; // 0x610	
	float m_flDistanceMapMin; // 0x614	
	float m_flDistanceMapMax; // 0x618	
	float m_flOcclusionRadius; // 0x61c	
	float m_flOcclusionMin; // 0x620	
	float m_flOcclusionMax; // 0x624	
	float m_flValSetOnDisable; // 0x628	
	bool m_bSetValueOnDisable; // 0x62c	
	bool m_bReloading; // 0x62d	
private:
	[[maybe_unused]] uint8_t __pad062e[0x2]; // 0x62e
public:
	int32_t m_nSimulationMode; // 0x630	
	int32_t m_nVisibilitySamples; // 0x634	
	Vector m_vDynamicProxyPoint; // 0x638	
	float m_flDynamicMaximumOcclusion; // 0x644	
	CEntityHandle m_hDynamicEntity; // 0x648	
private:
	[[maybe_unused]] uint8_t __pad064c[0x4]; // 0x64c
public:
	CUtlSymbolLarge m_iszDynamicEntityName; // 0x650	
	float m_flPathingDistanceNormFactor; // 0x658	
	Vector m_vPathingSourcePos; // 0x65c	
	Vector m_vPathingListenerPos; // 0x668	
	Vector m_vPathingDirection; // 0x674	
	int32_t m_nPathingSourceIndex; // 0x680	
	
	// Datamap fields:
	// void InputSetDisabledValue; // 0x0
	// void CSoundOpvarSetPointEntitySetOpvarThink; // 0x0
};

