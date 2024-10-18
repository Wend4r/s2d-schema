#pragma once

#include <cstdint>

struct Extent;
struct CountdownTimer;
struct IntervalTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1418
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
	[[maybe_unused]] uint8_t __pad0790[0x10]; // 0x790
public:
	// MNetworkEnable
	Vector m_firePositions[64]; // 0x7a0	
	// MNetworkEnable
	Vector m_fireParentPositions[64]; // 0xaa0	
	// MNetworkEnable
	bool m_bFireIsBurning[64]; // 0xda0	
	// MNetworkEnable
	Vector m_BurnNormal[64]; // 0xde0	
	// MNetworkEnable
	int32_t m_fireCount; // 0x10e0	
	// MNetworkEnable
	int32_t m_nInfernoType; // 0x10e4	
	// MNetworkEnable
	int32_t m_nFireEffectTickBegin; // 0x10e8	
	// MNetworkEnable
	float m_nFireLifetime; // 0x10ec	
	// MNetworkEnable
	bool m_bInPostEffectTime; // 0x10f0	
private:
	[[maybe_unused]] uint8_t __pad10f1[0x3]; // 0x10f1
public:
	int32_t m_nFiresExtinguishCount; // 0x10f4	
	bool m_bWasCreatedInSmoke; // 0x10f8	
private:
	[[maybe_unused]] uint8_t __pad10f9[0x207]; // 0x10f9
public:
	Extent m_extent; // 0x1300	
	CountdownTimer m_damageTimer; // 0x1318	
	CountdownTimer m_damageRampTimer; // 0x1330	
	Vector m_splashVelocity; // 0x1348	
	Vector m_InitialSplashVelocity; // 0x1354	
	Vector m_startPos; // 0x1360	
	Vector m_vecOriginalSpawnLocation; // 0x136c	
	IntervalTimer m_activeTimer; // 0x1378	
	int32_t m_fireSpawnOffset; // 0x1388	
	int32_t m_nMaxFlames; // 0x138c	
	int32_t m_nSpreadCount; // 0x1390	
private:
	[[maybe_unused]] uint8_t __pad1394[0x4]; // 0x1394
public:
	CountdownTimer m_BookkeepingTimer; // 0x1398	
	CountdownTimer m_NextSpreadTimer; // 0x13b0	
	uint16_t m_nSourceItemDefIndex; // 0x13c8	
	
	// Static fields:
	static float &Get_InfernoFire_Radius(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[0]->m_instance);};
	static float &Get_InfernoFire_LOSHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[1]->m_instance);};
	static float &Get_InfernoFire_CylinderHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[2]->m_instance);};
	static float &Get_InfernoFire_FullHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInferno")->m_static_fields[3]->m_instance);};
};

