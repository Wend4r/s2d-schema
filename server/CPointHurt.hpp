#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e0
// Has VTable
class CPointHurt : public CPointEntity
{
public:
	int32_t m_nDamage; // 0x4c0	
	int32_t m_bitsDamageType; // 0x4c4	
	float m_flRadius; // 0x4c8	
	float m_flDelay; // 0x4cc	
	CUtlSymbolLarge m_strTarget; // 0x4d0	
	CHandle< CBaseEntity > m_pActivator; // 0x4d8	
	
	// Datamap fields:
	// void CPointHurtHurtThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// void InputHurt; // 0x0
};

