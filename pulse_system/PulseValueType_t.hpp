#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Enumerator count: 20
// Alignment: 4
// Size: 0x4
enum class PulseValueType_t : uint32_t
{
	// MPropertyFriendlyName "Void"
	PVAL_INVALID = 0xffffffffffffffff,
	// MPropertyFriendlyName "Boolean"
	PVAL_BOOL = 0x0,
	// MPropertyFriendlyName "Integer"
	PVAL_INT = 0x1,
	// MPropertyFriendlyName "Float"
	PVAL_FLOAT = 0x2,
	// MPropertyFriendlyName "String"
	PVAL_STRING = 0x3,
	// MPropertyFriendlyName "Vector3"
	PVAL_VEC3 = 0x4,
	// MPropertyFriendlyName "Transform"
	PVAL_TRANSFORM = 0x5,
	// MPropertyFriendlyName "Color"
	PVAL_COLOR_RGB = 0x6,
	// MPropertyFriendlyName "Entity Handle"
	PVAL_EHANDLE = 0x7,
	// MPropertyFriendlyName "Resource"
	PVAL_RESOURCE = 0x8,
	// MPropertyFriendlyName "SoundEvent Handle"
	PVAL_SNDEVT_GUID = 0x9,
	// MPropertyFriendlyName "Entity Name"
	PVAL_ENTITY_NAME = 0xa,
	// MPropertyFriendlyName "Opaque Handle"
	PVAL_OPAQUE_HANDLE = 0xb,
	// MPropertyFriendlyName "Typesafe Int"
	PVAL_TYPESAFE_INT = 0xc,
	// MPropertySuppressEnumerator
	PVAL_CURSOR_FLOW = 0xd,
	// MPropertyFriendlyName "Any"
	PVAL_ANY = 0xe,
	// MPropertyFriendlyName "Schema Enum"
	PVAL_SCHEMA_ENUM = 0xf,
	// MPropertyFriendlyName "Panorama Panel Handle"
	PVAL_PANORAMA_PANEL_HANDLE = 0x10,
	// MPropertyFriendlyName "Test Handle"
	PVAL_TEST_HANDLE = 0x11,
	// MPropertySuppressEnumerator
	PVAL_COUNT = 0x12,
};

