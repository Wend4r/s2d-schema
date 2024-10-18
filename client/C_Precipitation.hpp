#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd80
// Has VTable
class C_Precipitation : public C_BaseTrigger
{
public:
	float m_flDensity; // 0xd30	
private:
	[[maybe_unused]] uint8_t __pad0d34[0xc]; // 0xd34
public:
	float m_flParticleInnerDist; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d44[0x4]; // 0xd44
public:
	char* m_pParticleDef; // 0xd48	
private:
	[[maybe_unused]] uint8_t __pad0d50[0x20]; // 0xd50
public:
	TimedEvent m_tParticlePrecipTraceTimer[1]; // 0xd70	
	bool m_bActiveParticlePrecipEmitter[1]; // 0xd78	
	bool m_bParticlePrecipInitialized; // 0xd79	
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xd7a	
private:
	[[maybe_unused]] uint8_t __pad0d7b[0x1]; // 0xd7b
public:
	int32_t m_nAvailableSheetSequencesMaxIndex; // 0xd7c	
};

