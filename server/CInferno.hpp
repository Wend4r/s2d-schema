#pragma once

#include <cstdint>

struct Extent;
struct CountdownTimer;
struct IntervalTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x13d8
// Has VTable
// 
// MNetworkVarNames "Vector m_firePositions"
// MNetworkVarNames "Vector m_fireParentPositions"
// MNetworkVarNames "bool m_bFireIsBurning"
// MNetworkVarNames "Vector m_BurnNormal"
// MNetworkVarNames "int m_fireCount"
// MNetworkVarNames "int m_nInfernoType"
// MNetworkVarNames "int m_nFireEffectTickBegin"
// MNetworkVarNames "float m_nFireLifetime"
// MNetworkVarNames "bool m_bInPostEffectTime"
class CInferno : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0750[0x10]; // 0x750
public:
	// MNetworkEnable
	Vector m_firePositions[64]; // 0x760	
	// MNetworkEnable
	Vector m_fireParentPositions[64]; // 0xa60	
	// MNetworkEnable
	bool m_bFireIsBurning[64]; // 0xd60	
	// MNetworkEnable
	Vector m_BurnNormal[64]; // 0xda0	
	// MNetworkEnable
	int32_t m_fireCount; // 0x10a0	
	// MNetworkEnable
	int32_t m_nInfernoType; // 0x10a4	
	// MNetworkEnable
	int32_t m_nFireEffectTickBegin; // 0x10a8	
	// MNetworkEnable
	float m_nFireLifetime; // 0x10ac	
	// MNetworkEnable
	bool m_bInPostEffectTime; // 0x10b0	
private:
	[[maybe_unused]] uint8_t __pad10b1[0x3]; // 0x10b1
public:
	int32_t m_nFiresExtinguishCount; // 0x10b4	
	bool m_bWasCreatedInSmoke; // 0x10b8	
private:
	[[maybe_unused]] uint8_t __pad10b9[0x207]; // 0x10b9
public:
	Extent m_extent; // 0x12c0	
	CountdownTimer m_damageTimer; // 0x12d8	
	CountdownTimer m_damageRampTimer; // 0x12f0	
	Vector m_splashVelocity; // 0x1308	
	Vector m_InitialSplashVelocity; // 0x1314	
	Vector m_startPos; // 0x1320	
	Vector m_vecOriginalSpawnLocation; // 0x132c	
	IntervalTimer m_activeTimer; // 0x1338	
	int32_t m_fireSpawnOffset; // 0x1348	
	int32_t m_nMaxFlames; // 0x134c	
	int32_t m_nSpreadCount; // 0x1350	
private:
	[[maybe_unused]] uint8_t __pad1354[0x4]; // 0x1354
public:
	CountdownTimer m_BookkeepingTimer; // 0x1358	
	CountdownTimer m_NextSpreadTimer; // 0x1370	
	uint16_t m_nSourceItemDefIndex; // 0x1388	
	
	// Static fields:
	static float &Get_InfernoFire_Radius(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[0]->m_instance);};
	static float &Get_InfernoFire_LOSHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[1]->m_instance);};
	static float &Get_InfernoFire_CylinderHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[2]->m_instance);};
	static float &Get_InfernoFire_FullHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[3]->m_instance);};
};

