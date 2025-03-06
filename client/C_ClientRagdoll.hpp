#pragma once

#include <cstdint>

struct GameTime_t;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb98
// Has VTable
class C_ClientRagdoll : public CBaseAnimGraph
{
public:
	bool m_bFadeOut; // 0xb00	
	bool m_bImportant; // 0xb01	
private:
	[[maybe_unused]] uint8_t __pad0b02[0x2]; // 0xb02
public:
	GameTime_t m_flEffectTime; // 0xb04	
	GameTime_t m_gibDespawnTime; // 0xb08	
	int32_t m_iCurrentFriction; // 0xb0c	
	int32_t m_iMinFriction; // 0xb10	
	int32_t m_iMaxFriction; // 0xb14	
	int32_t m_iFrictionAnimState; // 0xb18	
	bool m_bReleaseRagdoll; // 0xb1c	
	AttachmentHandle_t m_iEyeAttachment; // 0xb1d	
	bool m_bFadingOut; // 0xb1e	
private:
	[[maybe_unused]] uint8_t __pad0b1f[0x1]; // 0xb1f
public:
	float m_flScaleEnd[10]; // 0xb20	
	GameTime_t m_flScaleTimeStart[10]; // 0xb48	
	GameTime_t m_flScaleTimeEnd[10]; // 0xb70	
	
	// Datamap fields:
	// Color m_clrRender; // 0x5b8
};

