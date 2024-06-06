#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Enumerator count: 23
// Alignment: 4
// Size: 0x4
enum class AssetEditInfoFilterFunc_t : uint32_t
{
	// MPropertyFriendlyName "=="
	ASSET_FILTER_EQUAL = 0x0,
	// MPropertyFriendlyName "!="
	ASSET_FILTER_NOT_EQUAL = 0x1,
	// MPropertyFriendlyName "== (or missing)"
	ASSET_FILTER_EQUAL_OR_MISSING = 0x2,
	// MPropertyFriendlyName "!= (or missing)"
	ASSET_FILTER_NOT_EQUAL_OR_MISSING = 0x3,
	// MPropertyFriendlyName "<"
	ASSET_FILTER_LESS = 0x4,
	// MPropertyFriendlyName "<="
	ASSET_FILTER_LESS_EQUAL = 0x5,
	// MPropertyFriendlyName ">"
	ASSET_FILTER_GREATER = 0x6,
	// MPropertyFriendlyName ">="
	ASSET_FILTER_GREATER_EQUAL = 0x7,
	// MPropertyFriendlyName "contains"
	ASSET_FILTER_CONTAINS = 0x8,
	// MPropertyFriendlyName "doesn't contain"
	ASSET_FILTER_DOES_NOT_CONTAIN = 0x9,
	// MPropertyFriendlyName "references or depends on asset"
	ASSET_FILTER_DEPREF_ASSET = 0xa,
	// MPropertyFriendlyName "referenced or depended-on by asset"
	ASSET_FILTER_DEPREF_BY_ASSET = 0xb,
	// MPropertyFriendlyName "parents asset"
	ASSET_FILTER_PARENTS_ASSET = 0xc,
	// MPropertyFriendlyName "parented by asset"
	ASSET_FILTER_PARENTED_BY_ASSET = 0xd,
	// MPropertyFriendlyName "references subasset"
	ASSET_FILTER_REF_SUBASSET = 0xe,
	// MPropertyFriendlyName "defines subasset"
	ASSET_FILTER_DEF_SUBASSET = 0xf,
	// MPropertyFriendlyName "references or depends on asset (exact)"
	ASSET_FILTER_EXACT_DEPREF_ASSET = 0x10,
	// MPropertyFriendlyName "referenced or depended-on by asset (exact)"
	ASSET_FILTER_EXACT_DEPREF_BY_ASSET = 0x11,
	// MPropertyFriendlyName "parents asset (exact)"
	ASSET_FILTER_EXACT_PARENTS_ASSET = 0x12,
	// MPropertyFriendlyName "parented by asset (exact)"
	ASSET_FILTER_EXACT_PARENTED_BY_ASSET = 0x13,
	// MPropertyFriendlyName "references subasset (exact)"
	ASSET_FILTER_EXACT_REF_SUBASSET = 0x14,
	// MPropertyFriendlyName "defines subasset (exact)"
	ASSET_FILTER_EXACT_DEF_SUBASSET = 0x15,
	ASSET_FILTER_FUNC_COUNT = 0x16,
};

