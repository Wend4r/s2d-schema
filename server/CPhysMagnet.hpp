#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x978
// Has VTable
class CPhysMagnet : public CBaseAnimGraph
{
public:
	CEntityIOOutput m_OnMagnetAttach; // 0x8e8	
	CEntityIOOutput m_OnMagnetDetach; // 0x910	
	float m_massScale; // 0x938	
	float m_forceLimit; // 0x93c	
	float m_torqueLimit; // 0x940	
private:
	[[maybe_unused]] uint8_t __pad0944[0x4]; // 0x944
public:
	CUtlVector< magnetted_objects_t > m_MagnettedEntities; // 0x948	
	bool m_bActive; // 0x960	
	bool m_bHasHitSomething; // 0x961	
private:
	[[maybe_unused]] uint8_t __pad0962[0x2]; // 0x962
public:
	float m_flTotalMass; // 0x964	
	float m_flRadius; // 0x968	
	GameTime_t m_flNextSuckTime; // 0x96c	
	int32_t m_iMaxObjectsAttached; // 0x970	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
};

