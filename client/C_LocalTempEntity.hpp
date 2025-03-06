#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xba8
// Has VTable
class C_LocalTempEntity : public CBaseAnimGraph
{
public:
	int32_t flags; // 0xb00	
	GameTime_t die; // 0xb04	
	float m_flFrameMax; // 0xb08	
	float x; // 0xb0c	
	float y; // 0xb10	
	float fadeSpeed; // 0xb14	
	float bounceFactor; // 0xb18	
	int32_t hitSound; // 0xb1c	
	int32_t priority; // 0xb20	
	Vector tentOffset; // 0xb24	
	QAngle m_vecTempEntAngVelocity; // 0xb30	
	int32_t tempent_renderamt; // 0xb3c	
	Vector m_vecNormal; // 0xb40	
	float m_flSpriteScale; // 0xb4c	
	int32_t m_nFlickerFrame; // 0xb50	
	float m_flFrameRate; // 0xb54	
	float m_flFrame; // 0xb58	
private:
	[[maybe_unused]] uint8_t __pad0b5c[0x4]; // 0xb5c
public:
	char* m_pszImpactEffect; // 0xb60	
	char* m_pszParticleEffect; // 0xb68	
	bool m_bParticleCollision; // 0xb70	
private:
	[[maybe_unused]] uint8_t __pad0b71[0x3]; // 0xb71
public:
	int32_t m_iLastCollisionFrame; // 0xb74	
	Vector m_vLastCollisionOrigin; // 0xb78	
	Vector m_vecTempEntVelocity; // 0xb84	
	Vector m_vecPrevAbsOrigin; // 0xb90	
	Vector m_vecTempEntAcceleration; // 0xb9c	
};

