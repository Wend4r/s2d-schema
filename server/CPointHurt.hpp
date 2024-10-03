#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CPointHurt : public CPointEntity
{
public:
	int32_t m_nDamage; // 0x4e0	
	DamageTypes_t m_bitsDamageType; // 0x4e4	
	float m_flRadius; // 0x4e8	
	float m_flDelay; // 0x4ec	
	CUtlSymbolLarge m_strTarget; // 0x4f0	
	CHandle< CBaseEntity > m_pActivator; // 0x4f8	
	
	// Datamap fields:
	// void CPointHurtHurtThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// void InputHurt; // 0x0
};

