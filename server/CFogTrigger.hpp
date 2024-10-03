#pragma once

#include <cstdint>

struct fogparams_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x988
// Has VTable
class CFogTrigger : public CBaseTrigger
{
public:
	fogparams_t m_fog; // 0x920	
	
	// Datamap fields:
	// Color m_fog.colorPrimary; // 0x934
	// Color m_fog.colorSecondary; // 0x938
	// Vector m_fog.dirPrimary; // 0x928
	// bool m_fog.enable; // 0x984
	// bool m_fog.blend; // 0x985
	// float m_fog.start; // 0x944
	// float m_fog.end; // 0x948
	// float m_fog.farz; // 0x94c
};

