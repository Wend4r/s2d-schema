#pragma once

#include <cstdint>

struct fogparams_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x980
// Has VTable
class CFogTrigger : public CBaseTrigger
{
public:
	fogparams_t m_fog; // 0x918	
	
	// Datamap fields:
	// Color m_fog.colorPrimary; // 0x92c
	// Color m_fog.colorSecondary; // 0x930
	// Vector m_fog.dirPrimary; // 0x920
	// bool m_fog.enable; // 0x97c
	// bool m_fog.blend; // 0x97d
	// float m_fog.start; // 0x93c
	// float m_fog.end; // 0x940
	// float m_fog.farz; // 0x944
};

