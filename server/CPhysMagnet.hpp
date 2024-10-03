#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9f0
// Has VTable
class CPhysMagnet : public CBaseAnimGraph
{
public:
	CEntityIOOutput m_OnMagnetAttach; // 0x960	
	CEntityIOOutput m_OnMagnetDetach; // 0x988	
	float m_massScale; // 0x9b0	
	float m_forceLimit; // 0x9b4	
	float m_torqueLimit; // 0x9b8	
private:
	[[maybe_unused]] uint8_t __pad09bc[0x4]; // 0x9bc
public:
	CUtlVector< magnetted_objects_t > m_MagnettedEntities; // 0x9c0	
	bool m_bActive; // 0x9d8	
	bool m_bHasHitSomething; // 0x9d9	
private:
	[[maybe_unused]] uint8_t __pad09da[0x2]; // 0x9da
public:
	float m_flTotalMass; // 0x9dc	
	float m_flRadius; // 0x9e0	
	GameTime_t m_flNextSuckTime; // 0x9e4	
	int32_t m_iMaxObjectsAttached; // 0x9e8	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
};

