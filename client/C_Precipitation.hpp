#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd78
// Has VTable
class C_Precipitation : public C_BaseTrigger
{
public:
	float m_flDensity; // 0xd28	
private:
	[[maybe_unused]] uint8_t __pad0d2c[0xc]; // 0xd2c
public:
	float m_flParticleInnerDist; // 0xd38	
private:
	[[maybe_unused]] uint8_t __pad0d3c[0x4]; // 0xd3c
public:
	char* m_pParticleDef; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d48[0x20]; // 0xd48
public:
	TimedEvent m_tParticlePrecipTraceTimer[1]; // 0xd68	
	bool m_bActiveParticlePrecipEmitter[1]; // 0xd70	
	bool m_bParticlePrecipInitialized; // 0xd71	
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xd72	
private:
	[[maybe_unused]] uint8_t __pad0d73[0x1]; // 0xd73
public:
	int32_t m_nAvailableSheetSequencesMaxIndex; // 0xd74	
};

