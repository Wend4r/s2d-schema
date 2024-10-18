#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1030
// Has VTable
class C_LocalTempEntity : public CBaseAnimGraph
{
public:
	int32_t flags; // 0xf88	
	GameTime_t die; // 0xf8c	
	float m_flFrameMax; // 0xf90	
	float x; // 0xf94	
	float y; // 0xf98	
	float fadeSpeed; // 0xf9c	
	float bounceFactor; // 0xfa0	
	int32_t hitSound; // 0xfa4	
	int32_t priority; // 0xfa8	
	Vector tentOffset; // 0xfac	
	QAngle m_vecTempEntAngVelocity; // 0xfb8	
	int32_t tempent_renderamt; // 0xfc4	
	Vector m_vecNormal; // 0xfc8	
	float m_flSpriteScale; // 0xfd4	
	int32_t m_nFlickerFrame; // 0xfd8	
	float m_flFrameRate; // 0xfdc	
	float m_flFrame; // 0xfe0	
private:
	[[maybe_unused]] uint8_t __pad0fe4[0x4]; // 0xfe4
public:
	char* m_pszImpactEffect; // 0xfe8	
	char* m_pszParticleEffect; // 0xff0	
	bool m_bParticleCollision; // 0xff8	
private:
	[[maybe_unused]] uint8_t __pad0ff9[0x3]; // 0xff9
public:
	int32_t m_iLastCollisionFrame; // 0xffc	
	Vector m_vLastCollisionOrigin; // 0x1000	
	Vector m_vecTempEntVelocity; // 0x100c	
	Vector m_vecPrevAbsOrigin; // 0x1018	
	Vector m_vecTempEntAcceleration; // 0x1024	
};

