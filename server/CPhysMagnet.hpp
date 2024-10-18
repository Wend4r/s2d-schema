#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa38
// Has VTable
class CPhysMagnet : public CBaseAnimGraph
{
public:
	CEntityIOOutput m_OnMagnetAttach; // 0x9a8	
	CEntityIOOutput m_OnMagnetDetach; // 0x9d0	
	float m_massScale; // 0x9f8	
	float m_forceLimit; // 0x9fc	
	float m_torqueLimit; // 0xa00	
private:
	[[maybe_unused]] uint8_t __pad0a04[0x4]; // 0xa04
public:
	CUtlVector< magnetted_objects_t > m_MagnettedEntities; // 0xa08	
	bool m_bActive; // 0xa20	
	bool m_bHasHitSomething; // 0xa21	
private:
	[[maybe_unused]] uint8_t __pad0a22[0x2]; // 0xa22
public:
	float m_flTotalMass; // 0xa24	
	float m_flRadius; // 0xa28	
	GameTime_t m_flNextSuckTime; // 0xa2c	
	int32_t m_iMaxObjectsAttached; // 0xa30	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
};

