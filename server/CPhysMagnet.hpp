#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e8
// Has VTable
class CPhysMagnet : public CBaseAnimGraph
{
public:
	CEntityIOOutput m_OnMagnetAttach; // 0x958	
	CEntityIOOutput m_OnMagnetDetach; // 0x980	
	float m_massScale; // 0x9a8	
	float m_forceLimit; // 0x9ac	
	float m_torqueLimit; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b4[0x4]; // 0x9b4
public:
	CUtlVector< magnetted_objects_t > m_MagnettedEntities; // 0x9b8	
	bool m_bActive; // 0x9d0	
	bool m_bHasHitSomething; // 0x9d1	
private:
	[[maybe_unused]] uint8_t __pad09d2[0x2]; // 0x9d2
public:
	float m_flTotalMass; // 0x9d4	
	float m_flRadius; // 0x9d8	
	GameTime_t m_flNextSuckTime; // 0x9dc	
	int32_t m_iMaxObjectsAttached; // 0x9e0	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
};

