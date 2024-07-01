#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb18
// Has VTable
class C_LocalTempEntity : public CBaseAnimGraph
{
public:
	int32_t flags; // 0xa70	
	GameTime_t die; // 0xa74	
	float m_flFrameMax; // 0xa78	
	float x; // 0xa7c	
	float y; // 0xa80	
	float fadeSpeed; // 0xa84	
	float bounceFactor; // 0xa88	
	int32_t hitSound; // 0xa8c	
	int32_t priority; // 0xa90	
	Vector tentOffset; // 0xa94	
	QAngle m_vecTempEntAngVelocity; // 0xaa0	
	int32_t tempent_renderamt; // 0xaac	
	Vector m_vecNormal; // 0xab0	
	float m_flSpriteScale; // 0xabc	
	int32_t m_nFlickerFrame; // 0xac0	
	float m_flFrameRate; // 0xac4	
	float m_flFrame; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0acc[0x4]; // 0xacc
public:
	char* m_pszImpactEffect; // 0xad0	
	char* m_pszParticleEffect; // 0xad8	
	bool m_bParticleCollision; // 0xae0	
private:
	[[maybe_unused]] uint8_t __pad0ae1[0x3]; // 0xae1
public:
	int32_t m_iLastCollisionFrame; // 0xae4	
	Vector m_vLastCollisionOrigin; // 0xae8	
	Vector m_vecTempEntVelocity; // 0xaf4	
	Vector m_vecPrevAbsOrigin; // 0xb00	
	Vector m_vecTempEntAcceleration; // 0xb0c	
};

