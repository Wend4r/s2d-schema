#pragma once

#include <cstdint>

struct CSmartPropAttributeRadiusPlacementMode;
struct CSmartPropAttributeDistributionMode;
// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x4a0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Layout Circle (Test)"
// MPropertyDescription "An element which places multiple instances of its child elements within a radius."
// MVDataExperimentalNodeSet
class CSmartPropElement_Layout2DCircle_experimental : public CSmartPropElement_Group
{
public:
	// MPropertyDescription "Specifies how the positions are computed based on the radius."
	CSmartPropAttributeRadiusPlacementMode m_PlacementMode; // 0xa0	
	// MPropertyDescription "Specifies the method to be used to distribute."
	CSmartPropAttributeDistributionMode m_DistributionMode; // 0xe0	
	// MPropertySuppressExpr "m_DistributionMode == RANDOM"
	// MPropertyDescription "0 to 1 value indicating the amout of random offset that should be applied to the reguluarly spaced positions"
	CSmartPropAttributeFloat m_flRandomness; // 0x120	
	// MPropertySuppressExpr "m_PlacementMode == SPHERE"
	// MPropertyDescription "Vector up direction of the plane of the circle. This in the local space of the current element."
	CSmartPropAttributeVector m_vPlaneUpDirection; // 0x160	
	// MPropertyDescription "Minimum number of instances of this object and its children to be placed."
	CSmartPropAttributeInt m_nCountMin; // 0x1a0	
	// MPropertyDescription "Maximum number of instances of this object and its children to be placed."
	CSmartPropAttributeInt m_nCountMax; // 0x1e0	
	// MPropertyDescription "Inner radius from the placement position where the model can appear."
	CSmartPropAttributeFloat m_flPositionRadiusInner; // 0x220	
	// MPropertyDescription "Outer radius from the placement position where the model can appear."
	CSmartPropAttributeFloat m_flPositionRadiusOuter; // 0x260	
	// MPropertyDescription "Align the initial orientation of each placed object based on it position on the sphere or circle."
	CSmartPropAttributeBool m_bAlignOrientation; // 0x2a0	
	// MPropertyReadonlyExpr
	// MPropertyDescription "Vector in the local space of the child element to be aligned with sphere or circle"
	CSmartPropAttributeVector m_vAlignDirection; // 0x2e0	
	// MPropertyDescription "Trace outwards from center to prevent children from penetrating solid scene geometry."
	CSmartPropAttributeBool m_bTraceEnabled; // 0x320	
	// MPropertySuppressExpr "m_bTraceEnabled == false && m_PlacementMode == SPHERE"
	// MPropertyDescription "Distance along the PlaneUpDirection to offset the trace. (YM: Eliminate in favor of requiring xform on Node? Or keep it and make it a range? )"
	CSmartPropAttributeFloat m_flTraceHeightBias; // 0x360	
	// MPropertySuppressExpr "m_bTraceEnabled == false && m_PlacementMode == SPHERE"
	// MPropertyDescription "Jitter Spread the trace origin to make it look more natural."
	CSmartPropAttributeFloat m_flTraceOriginRadius; // 0x3a0	
	// MPropertySuppressExpr "m_bTraceEnabled == false"
	// MPropertyDescription "Apply a retro bias to accumulated, so that they fall away."
	CSmartPropAttributeBool m_bTraceAccumRetroFalloff; // 0x3e0	
	// MPropertySuppressExpr "m_bTraceAllowAccumulate == false && m_PlacementMode == SPHERE"
	// MPropertyDescription "Back off accumulated hits by at least this distance."
	CSmartPropAttributeFloat m_flTraceAccumulateRetroBiasMin; // 0x420	
	// MPropertySuppressExpr "m_bTraceAllowAccumulate == false && m_PlacementMode == SPHERE"
	// MPropertyDescription "Back off accumulated hits by at most this distance."
	CSmartPropAttributeFloat m_flTraceAccumulateRetroBiasMax; // 0x460	
};

