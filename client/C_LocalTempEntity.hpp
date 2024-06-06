#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf78
// Has VTable
class C_LocalTempEntity : public CBaseAnimGraph
{
public:
	int32_t flags; // 0xed0	
	GameTime_t die; // 0xed4	
	float m_flFrameMax; // 0xed8	
	float x; // 0xedc	
	float y; // 0xee0	
	float fadeSpeed; // 0xee4	
	float bounceFactor; // 0xee8	
	int32_t hitSound; // 0xeec	
	int32_t priority; // 0xef0	
	Vector tentOffset; // 0xef4	
	QAngle m_vecTempEntAngVelocity; // 0xf00	
	int32_t tempent_renderamt; // 0xf0c	
	Vector m_vecNormal; // 0xf10	
	float m_flSpriteScale; // 0xf1c	
	int32_t m_nFlickerFrame; // 0xf20	
	float m_flFrameRate; // 0xf24	
	float m_flFrame; // 0xf28	
private:
	[[maybe_unused]] uint8_t __pad0f2c[0x4]; // 0xf2c
public:
	char* m_pszImpactEffect; // 0xf30	
	char* m_pszParticleEffect; // 0xf38	
	bool m_bParticleCollision; // 0xf40	
private:
	[[maybe_unused]] uint8_t __pad0f41[0x3]; // 0xf41
public:
	int32_t m_iLastCollisionFrame; // 0xf44	
	Vector m_vLastCollisionOrigin; // 0xf48	
	Vector m_vecTempEntVelocity; // 0xf54	
	Vector m_vecPrevAbsOrigin; // 0xf60	
	Vector m_vecTempEntAcceleration; // 0xf6c	
};

