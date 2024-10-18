#pragma once

#include <cstdint>

struct GameTime_t;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1020
// Has VTable
class C_ClientRagdoll : public CBaseAnimGraph
{
public:
	bool m_bFadeOut; // 0xf88	
	bool m_bImportant; // 0xf89	
private:
	[[maybe_unused]] uint8_t __pad0f8a[0x2]; // 0xf8a
public:
	GameTime_t m_flEffectTime; // 0xf8c	
	GameTime_t m_gibDespawnTime; // 0xf90	
	int32_t m_iCurrentFriction; // 0xf94	
	int32_t m_iMinFriction; // 0xf98	
	int32_t m_iMaxFriction; // 0xf9c	
	int32_t m_iFrictionAnimState; // 0xfa0	
	bool m_bReleaseRagdoll; // 0xfa4	
	AttachmentHandle_t m_iEyeAttachment; // 0xfa5	
	bool m_bFadingOut; // 0xfa6	
private:
	[[maybe_unused]] uint8_t __pad0fa7[0x1]; // 0xfa7
public:
	float m_flScaleEnd[10]; // 0xfa8	
	GameTime_t m_flScaleTimeStart[10]; // 0xfd0	
	GameTime_t m_flScaleTimeEnd[10]; // 0xff8	
	
	// Datamap fields:
	// Color m_clrRender; // 0xad8
};

