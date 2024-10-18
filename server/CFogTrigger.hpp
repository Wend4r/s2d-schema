#pragma once

#include <cstdint>

struct fogparams_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c8
// Has VTable
class CFogTrigger : public CBaseTrigger
{
public:
	fogparams_t m_fog; // 0x960	
	
	// Datamap fields:
	// Color m_fog.colorPrimary; // 0x974
	// Color m_fog.colorSecondary; // 0x978
	// Vector m_fog.dirPrimary; // 0x968
	// bool m_fog.enable; // 0x9c4
	// bool m_fog.blend; // 0x9c5
	// float m_fog.start; // 0x984
	// float m_fog.end; // 0x988
	// float m_fog.farz; // 0x98c
};

