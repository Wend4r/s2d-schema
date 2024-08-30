#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa08
// Has VTable
class CPhysMagnet : public CBaseAnimGraph
{
public:
	CEntityIOOutput m_OnMagnetAttach; // 0x978	
	CEntityIOOutput m_OnMagnetDetach; // 0x9a0	
	float m_massScale; // 0x9c8	
	float m_forceLimit; // 0x9cc	
	float m_torqueLimit; // 0x9d0	
private:
	[[maybe_unused]] uint8_t __pad09d4[0x4]; // 0x9d4
public:
	CUtlVector< magnetted_objects_t > m_MagnettedEntities; // 0x9d8	
	bool m_bActive; // 0x9f0	
	bool m_bHasHitSomething; // 0x9f1	
private:
	[[maybe_unused]] uint8_t __pad09f2[0x2]; // 0x9f2
public:
	float m_flTotalMass; // 0x9f4	
	float m_flRadius; // 0x9f8	
	GameTime_t m_flNextSuckTime; // 0x9fc	
	int32_t m_iMaxObjectsAttached; // 0xa00	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
};

