#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x668
// Has VTable
class CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase
{
public:
	CEntityIOOutput m_OnEnter; // 0x558	
	CEntityIOOutput m_OnExit; // 0x580	
	bool m_bAutoDisable; // 0x5a8	
private:
	[[maybe_unused]] uint8_t __pad05a9[0x43]; // 0x5a9
public:
	float m_flDistanceMin; // 0x5ec	
	float m_flDistanceMax; // 0x5f0	
	float m_flDistanceMapMin; // 0x5f4	
	float m_flDistanceMapMax; // 0x5f8	
	float m_flOcclusionRadius; // 0x5fc	
	float m_flOcclusionMin; // 0x600	
	float m_flOcclusionMax; // 0x604	
	float m_flValSetOnDisable; // 0x608	
	bool m_bSetValueOnDisable; // 0x60c	
private:
	[[maybe_unused]] uint8_t __pad060d[0x3]; // 0x60d
public:
	int32_t m_nSimulationMode; // 0x610	
	int32_t m_nVisibilitySamples; // 0x614	
	Vector m_vDynamicProxyPoint; // 0x618	
	float m_flDynamicMaximumOcclusion; // 0x624	
	CEntityHandle m_hDynamicEntity; // 0x628	
private:
	[[maybe_unused]] uint8_t __pad062c[0x4]; // 0x62c
public:
	CUtlSymbolLarge m_iszDynamicEntityName; // 0x630	
	float m_flPathingDistanceNormFactor; // 0x638	
	Vector m_vPathingSourcePos; // 0x63c	
	Vector m_vPathingListenerPos; // 0x648	
	Vector m_vPathingDirection; // 0x654	
	int32_t m_nPathingSourceIndex; // 0x660	
	
	// Datamap fields:
	// void InputSetDisabledValue; // 0x0
	// void CSoundOpvarSetPointEntitySetOpvarThink; // 0x0
};

