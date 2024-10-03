#pragma once

#include <cstdint>

struct dynpitchvol_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x578
// Has VTable
class CAmbientGeneric : public CPointEntity
{
public:
	float m_radius; // 0x4e0	
	float m_flMaxRadius; // 0x4e4	
	soundlevel_t m_iSoundLevel; // 0x4e8	
	dynpitchvol_t m_dpv; // 0x4ec	
	bool m_fActive; // 0x550	
	bool m_fLooping; // 0x551	
private:
	[[maybe_unused]] uint8_t __pad0552[0x6]; // 0x552
public:
	CUtlSymbolLarge m_iszSound; // 0x558	
	CUtlSymbolLarge m_sSourceEntName; // 0x560	
	CHandle< CBaseEntity > m_hSoundSource; // 0x568	
	CEntityIndex m_nSoundSourceEntIndex; // 0x56c	
	
	// Datamap fields:
	// void m_nGUID; // 0x570
	// void CAmbientGenericRampThink; // 0x0
	// void InputPlaySound; // 0x0
	// void InputStopSound; // 0x0
	// void InputToggleSound; // 0x0
	// float InputPitch; // 0x0
	// float InputVolume; // 0x0
	// float InputFadeIn; // 0x0
	// float InputFadeOut; // 0x0
	// int32_t fadein; // 0x7fffffff
	// int32_t fadeout; // 0x7fffffff
	// int32_t fadeinsecs; // 0x7fffffff
	// int32_t fadeoutsecs; // 0x7fffffff
};

