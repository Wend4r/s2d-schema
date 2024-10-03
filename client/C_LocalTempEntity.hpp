#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1028
// Has VTable
class C_LocalTempEntity : public CBaseAnimGraph
{
public:
	int32_t flags; // 0xf80	
	GameTime_t die; // 0xf84	
	float m_flFrameMax; // 0xf88	
	float x; // 0xf8c	
	float y; // 0xf90	
	float fadeSpeed; // 0xf94	
	float bounceFactor; // 0xf98	
	int32_t hitSound; // 0xf9c	
	int32_t priority; // 0xfa0	
	Vector tentOffset; // 0xfa4	
	QAngle m_vecTempEntAngVelocity; // 0xfb0	
	int32_t tempent_renderamt; // 0xfbc	
	Vector m_vecNormal; // 0xfc0	
	float m_flSpriteScale; // 0xfcc	
	int32_t m_nFlickerFrame; // 0xfd0	
	float m_flFrameRate; // 0xfd4	
	float m_flFrame; // 0xfd8	
private:
	[[maybe_unused]] uint8_t __pad0fdc[0x4]; // 0xfdc
public:
	char* m_pszImpactEffect; // 0xfe0	
	char* m_pszParticleEffect; // 0xfe8	
	bool m_bParticleCollision; // 0xff0	
private:
	[[maybe_unused]] uint8_t __pad0ff1[0x3]; // 0xff1
public:
	int32_t m_iLastCollisionFrame; // 0xff4	
	Vector m_vLastCollisionOrigin; // 0xff8	
	Vector m_vecTempEntVelocity; // 0x1004	
	Vector m_vecPrevAbsOrigin; // 0x1010	
	Vector m_vecTempEntAcceleration; // 0x101c	
};

