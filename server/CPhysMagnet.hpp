#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb20
// Has VTable
class CPhysMagnet : public CBaseAnimGraph
{
public:
	CEntityIOOutput m_OnMagnetAttach; // 0xa90	
	CEntityIOOutput m_OnMagnetDetach; // 0xab8	
	float m_massScale; // 0xae0	
	float m_forceLimit; // 0xae4	
	float m_torqueLimit; // 0xae8	
private:
	[[maybe_unused]] uint8_t __pad0aec[0x4]; // 0xaec
public:
	CUtlVector< magnetted_objects_t > m_MagnettedEntities; // 0xaf0	
	bool m_bActive; // 0xb08	
	bool m_bHasHitSomething; // 0xb09	
private:
	[[maybe_unused]] uint8_t __pad0b0a[0x2]; // 0xb0a
public:
	float m_flTotalMass; // 0xb0c	
	float m_flRadius; // 0xb10	
	GameTime_t m_flNextSuckTime; // 0xb14	
	int32_t m_iMaxObjectsAttached; // 0xb18	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
};

