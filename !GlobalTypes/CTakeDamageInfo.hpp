#pragma once

#include <cstdint>

struct AmmoIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb8
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
	float m_flTotalledDamageAbsorbed; // 0x4c	
	DamageTypes_t m_bitsDamageType; // 0x50	
	int32_t m_iDamageCustom; // 0x54	
	AmmoIndex_t m_iAmmoType; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0xf]; // 0x59
public:
	float m_flOriginalDamage; // 0x68	
	bool m_bShouldBleed; // 0x6c	
	bool m_bShouldSpark; // 0x6d	
private:
	[[maybe_unused]] uint8_t __pad006e[0x2]; // 0x6e
public:
	float m_flDamageAbsorbed; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0074[0xc]; // 0x74
public:
	TakeDamageFlags_t m_nDamageFlags; // 0x80	
	int32_t m_nNumObjectsPenetrated; // 0x88	
	float m_flFriendlyFireDamageReductionRatio; // 0x8c	
	HSCRIPT m_hScriptInstance; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0098[0x14]; // 0x98
public:
	bool m_bInTakeDamageFlow; // 0xac	
	
	// Static fields:
	static CTakeDamageInfo &Get_EmptyInfo(){return *reinterpret_cast<CTakeDamageInfo*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageInfo")->m_static_fields[0]->m_instance);};
};

