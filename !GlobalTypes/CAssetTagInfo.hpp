#pragma once

#include <cstdint>

struct AutoTagVDataCondition_t;
// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x1e0
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataOutlinerDetailExpr
// MVDataOutlinerIconExpr
class CAssetTagInfo
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MPropertyDescription "User-facing tag name"
	CUtlString m_TagName; // 0x30	
	// MPropertyDescription "User-facing description of the tag"
	// MPropertyAttributeEditor "TextBlock()"
	CUtlString m_TagDescription; // 0x38	
	// MPropertyDescription "Icon associated with the tag"
	// MPropertyAttributeEditor "ToolImage( 16 )"
	CUtlString m_TagIcon; // 0x40	
	// MPropertyDescription "Color for the tag badge"
	Color m_TagColor; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyDescription "Alternate strings this tag will match when searching for assets by name."
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_TagAliases; // 0x50	
	// MPropertyDescription "If set, draw this as an overlay image on the asset preview"
	// MPropertyAttributeEditor "ToolImage( 64 )"
	CUtlString m_ThumbnailOverlayImage; // 0x68	
	// MPropertyDescription "If set, the presence of this tag will cause the tools to suppress or dissuade use in several ways (and draw a red X over the asset preview)"
	bool m_bTagIndicatesRejectedAsset; // 0x70	
	// MPropertyDescription "If set, the presence of this tag will cause the tools to hide the asset from users by default. NOTE: This means if an asset gets tagged with this it might 'dissapear' from the UI!"
	bool m_bTagHidesAssetByDefault; // 0x71	
private:
	[[maybe_unused]] uint8_t __pad0072[0x6]; // 0x72
public:
	// MPropertyStartGroup "+Auto Tags"
	// MPropertyDescription "Required for any auto-tag. Restricts the auto-application of this tag to a specific asset type (string from assettypes_common.txt like 'material_asset' or 'model_asset')"
	CUtlString m_RestrictAutoTagToAssetType; // 0x78	
	// MPropertyDescription "Set this to automatically apply this tag based on an asset filter string. (NOTE: Auto tag names MUST start with an '@' character!)"
	// MPropertyAutoExpandSelf
	// MPropertySuppressExpr "m_RestrictAutoTagToAssetType == """
	CUtlString m_AutoFilterTag; // 0x80	
	// MPropertyDescription "Set this to automatically apply this tag to assets based on references from a VData file. (NOTE: Auto tag names MUST start with an '@' character!)"
	// MPropertyAutoExpandSelf
	// MPropertySuppressExpr "m_RestrictAutoTagToAssetType == """
	AutoTagVDataCondition_t m_AutoDataTag; // 0x88	
};

