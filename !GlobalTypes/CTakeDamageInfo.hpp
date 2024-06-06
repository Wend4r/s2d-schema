#pragma once

#include <cstdint>

struct AmmoIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa8
// Has VTable
class CTakeDamageInfo
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_vecDamageForce; // 0x8	
	Vector m_vecDamagePosition; // 0x14	
	Vector m_vecReportedPosition; // 0x20	
	Vector m_vecDamageDirection; // 0x2c	
	CHandle< CBaseEntity > m_hInflictor; // 0x38	
	CHandle< CBaseEntity > m_hAttacker; // 0x3c	
	CHandle< CBaseEntity > m_hAbility; // 0x40	
	float m_flDamage; // 0x44	
	float m_flTotalledDamage; // 0x48	
	int32_t m_bitsDamageType; // 0x4c	
	int32_t m_iDamageCustom; // 0x50	
	AmmoIndex_t m_iAmmoType; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0055[0xb]; // 0x55
public:
	float m_flOriginalDamage; // 0x60	
	bool m_bShouldBleed; // 0x64	
	bool m_bShouldSpark; // 0x65	
private:
	[[maybe_unused]] uint8_t __pad0066[0xa]; // 0x66
public:
	TakeDamageFlags_t m_nDamageFlags; // 0x70	
	int32_t m_nNumObjectsPenetrated; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad007c[0x4]; // 0x7c
public:
	HSCRIPT m_hScriptInstance; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0088[0x14]; // 0x88
public:
	bool m_bInTakeDamageFlow; // 0x9c	
	
	// Static fields:
	static CTakeDamageInfo &Get_EmptyInfo(){return *reinterpret_cast<CTakeDamageInfo*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageInfo")->m_static_fields[0]->m_instance);};
};

