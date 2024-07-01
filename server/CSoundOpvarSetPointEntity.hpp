#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x640
// Has VTable
class CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase
{
public:
	CEntityIOOutput m_OnEnter; // 0x550	
	CEntityIOOutput m_OnExit; // 0x578	
	bool m_bAutoDisable; // 0x5a0	
private:
	[[maybe_unused]] uint8_t __pad05a1[0x23]; // 0x5a1
public:
	float m_flDistanceMin; // 0x5c4	
	float m_flDistanceMax; // 0x5c8	
	float m_flDistanceMapMin; // 0x5cc	
	float m_flDistanceMapMax; // 0x5d0	
	float m_flOcclusionRadius; // 0x5d4	
	float m_flOcclusionMin; // 0x5d8	
	float m_flOcclusionMax; // 0x5dc	
	float m_flValSetOnDisable; // 0x5e0	
	bool m_bSetValueOnDisable; // 0x5e4	
private:
	[[maybe_unused]] uint8_t __pad05e5[0x3]; // 0x5e5
public:
	int32_t m_nSimulationMode; // 0x5e8	
	int32_t m_nVisibilitySamples; // 0x5ec	
	Vector m_vDynamicProxyPoint; // 0x5f0	
	float m_flDynamicMaximumOcclusion; // 0x5fc	
	CEntityHandle m_hDynamicEntity; // 0x600	
private:
	[[maybe_unused]] uint8_t __pad0604[0x4]; // 0x604
public:
	CUtlSymbolLarge m_iszDynamicEntityName; // 0x608	
	float m_flPathingDistanceNormFactor; // 0x610	
	Vector m_vPathingSourcePos; // 0x614	
	Vector m_vPathingListenerPos; // 0x620	
	Vector m_vPathingDirection; // 0x62c	
	int32_t m_nPathingSourceIndex; // 0x638	
	
	// Datamap fields:
	// void InputSetDisabledValue; // 0x0
	// void CSoundOpvarSetPointEntitySetOpvarThink; // 0x0
};

