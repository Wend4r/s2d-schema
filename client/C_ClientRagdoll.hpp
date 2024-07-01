#pragma once

#include <cstdint>

struct GameTime_t;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb08
// Has VTable
class C_ClientRagdoll : public CBaseAnimGraph
{
public:
	bool m_bFadeOut; // 0xa70	
	bool m_bImportant; // 0xa71	
private:
	[[maybe_unused]] uint8_t __pad0a72[0x2]; // 0xa72
public:
	GameTime_t m_flEffectTime; // 0xa74	
	GameTime_t m_gibDespawnTime; // 0xa78	
	int32_t m_iCurrentFriction; // 0xa7c	
	int32_t m_iMinFriction; // 0xa80	
	int32_t m_iMaxFriction; // 0xa84	
	int32_t m_iFrictionAnimState; // 0xa88	
	bool m_bReleaseRagdoll; // 0xa8c	
	AttachmentHandle_t m_iEyeAttachment; // 0xa8d	
	bool m_bFadingOut; // 0xa8e	
private:
	[[maybe_unused]] uint8_t __pad0a8f[0x1]; // 0xa8f
public:
	float m_flScaleEnd[10]; // 0xa90	
	GameTime_t m_flScaleTimeStart[10]; // 0xab8	
	GameTime_t m_flScaleTimeEnd[10]; // 0xae0	
	
	// Datamap fields:
	// Color m_clrRender; // 0x5d8
};

