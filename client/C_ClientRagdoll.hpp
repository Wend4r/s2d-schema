#pragma once

#include <cstdint>

struct GameTime_t;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1018
// Has VTable
class C_ClientRagdoll : public CBaseAnimGraph
{
public:
	bool m_bFadeOut; // 0xf80	
	bool m_bImportant; // 0xf81	
private:
	[[maybe_unused]] uint8_t __pad0f82[0x2]; // 0xf82
public:
	GameTime_t m_flEffectTime; // 0xf84	
	GameTime_t m_gibDespawnTime; // 0xf88	
	int32_t m_iCurrentFriction; // 0xf8c	
	int32_t m_iMinFriction; // 0xf90	
	int32_t m_iMaxFriction; // 0xf94	
	int32_t m_iFrictionAnimState; // 0xf98	
	bool m_bReleaseRagdoll; // 0xf9c	
	AttachmentHandle_t m_iEyeAttachment; // 0xf9d	
	bool m_bFadingOut; // 0xf9e	
private:
	[[maybe_unused]] uint8_t __pad0f9f[0x1]; // 0xf9f
public:
	float m_flScaleEnd[10]; // 0xfa0	
	GameTime_t m_flScaleTimeStart[10]; // 0xfc8	
	GameTime_t m_flScaleTimeEnd[10]; // 0xff0	
	
	// Datamap fields:
	// Color m_clrRender; // 0xad0
};

