#pragma once

#include <cstdint>

struct fogparams_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x948
// Has VTable
class CFogTrigger : public CBaseTrigger
{
public:
	fogparams_t m_fog; // 0x8e0	
	
	// Datamap fields:
	// Color m_fog.colorPrimary; // 0x8f4
	// Color m_fog.colorSecondary; // 0x8f8
	// Vector m_fog.dirPrimary; // 0x8e8
	// bool m_fog.enable; // 0x944
	// bool m_fog.blend; // 0x945
	// float m_fog.start; // 0x904
	// float m_fog.end; // 0x908
	// float m_fog.farz; // 0x90c
};

