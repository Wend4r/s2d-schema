#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'pulsedoc_lib')
// Alignment: 8
// Size: 0x348
// 
// MGetKV3ClassDefaults
class CPulseEditorSettings
{
public:
	Color m_colCanvasBackground; // 0x0	
	Color m_colCanvasBackgroundWhenDebugging; // 0x4	
	// MPropertyStartGroup "+Grid"
	float m_flGridSnap; // 0x8	
	bool m_bSnapAbsToGrid; // 0xc	
	bool m_bSnapSizeToGrid; // 0xd	
	bool m_bGridMinorPoints; // 0xe	
private:
	[[maybe_unused]] uint8_t __pad000f[0x1]; // 0xf
public:
	float m_flGridMinorSpacing; // 0x10	
	float m_flSuppressMinorGridFurtherThan; // 0x14	
	Color m_colGridMinorColor; // 0x18	
	float m_flGridMinorWidth; // 0x1c	
	// MPropertyAttributeRange "1 25"
	int32_t m_nGridMajorMultiple; // 0x20	
	Color m_colGridMajorColor; // 0x24	
	float m_flGridMajorWidth; // 0x28	
	Color m_colGridOriginColor; // 0x2c	
	float m_flGridOriginWidth; // 0x30	
	// MPropertyStartGroup "+Ports"
	// MPropertyAttributeRange "0 32"
	float m_flFlowPortBorder; // 0x34	
	// MPropertyAttributeRange "0 32"
	float m_flFlowTooltipOffset; // 0x38	
	// MPropertyAttributeRange "0 32"
	float m_nFlowTooltipBoxMargin; // 0x3c	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontSequencePoint; // 0x40	
	// MPropertyAttributeRange "0 32"
	float m_flSequencePointRadius; // 0x48	
	// MPropertyAttributeRange "0 32"
	float m_flSequencePointLinkWidth; // 0x4c	
	// MPropertyColorPlusAlpha
	Color m_colSequencePointFadeOverlay; // 0x50	
	Color m_colSequencePointSpontaneous; // 0x54	
	Color m_colSequencePointYield; // 0x58	
	Color m_colSequencePoint; // 0x5c	
	Color m_colSequencePointLink; // 0x60	
	Color m_colSequencePointLinkYield; // 0x64	
	Color m_colSequencePointName; // 0x68	
	Color m_colFlowTooltipBorder; // 0x6c	
	Color m_colFlowTooltipBackground; // 0x70	
	Color m_colFlowTooltipForeground; // 0x74	
	Color m_colFlowPortLinked; // 0x78	
	Color m_colFlowPortUnlinked; // 0x7c	
	CUtlString m_ParamPortIconImg; // 0x80	
	CUtlString m_ParamPortBrokenImg; // 0x88	
	CUtlString m_SetValueIconImg; // 0x90	
	CUtlString m_GetValueIconImg; // 0x98	
	// MPropertyAttributeRange "0 32"
	float m_flParamPortIconSize; // 0xa0	
	// MPropertyAttributeRange "0 32"
	float m_flParamPortBGSize; // 0xa4	
	CUtlString m_ResultPortIconImg; // 0xa8	
	CUtlString m_ResultPortIconLeftImg; // 0xb0	
	// MPropertyAttributeRange "0 32"
	float m_flResultPortIconSize; // 0xb8	
	// MPropertyAttributeRange "0 32"
	float m_flPortBGCornerRadius; // 0xbc	
	// MPropertyGroupName "+X"
	Color m_colValuePortBG; // 0xc0	
	Color m_colValuePortBGHover; // 0xc4	
	Color m_colFlowPortBorder; // 0xc8	
	Color m_colFlowPortBorderHover; // 0xcc	
	Color m_colUnreachableFlowBorder; // 0xd0	
	float m_flUnreachableFlowBorderWidth; // 0xd4	
	Color m_colUnreachableFlowOverlay; // 0xd8	
	// MPropertyAttributeRange "-1 128"
	float m_flPortDragOffCreateThreshold; // 0xdc	
	// MPropertyStartGroup "+Types"
	Color m_colBool; // 0xe0	
	Color m_colNumber; // 0xe4	
	Color m_colString; // 0xe8	
	Color m_colOther; // 0xec	
	Color m_colCursorFlow; // 0xf0	
	// MPropertyStartGroup "+Comments"
	Color m_colComments; // 0xf4	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontNodeComment; // 0xf8	
	// MPropertyStartGroup "+Fonts"
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontFlowTooltip; // 0x100	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontLiteral; // 0x108	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontDomainName; // 0x110	
	Vector2D m_vDomainNameOffsetPX; // 0x118	
	Color m_colDomainName; // 0x120	
	Color m_colDomainNameWhenDebugging; // 0x124	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontParentAssets; // 0x128	
	Color m_colParentAssets; // 0x130	
	// MPropertyStartGroup "+Literals"
	// MPropertyAttributeRange "0 32"
	float m_flLiteralLabelSpacing; // 0x134	
	// MPropertyStartGroup "+Debugger"
	Color m_colDebuggerBrokenBorder; // 0x138	
	// MPropertyAttributeRange "0 32"
	float m_flDebuggerBrokenBorderWidth; // 0x13c	
	CUtlString m_DebuggerBrokenImg; // 0x140	
	CUtlString m_DebuggerBrokenOtherImg; // 0x148	
	// MPropertyAttributeRange "0 32"
	float m_flDebuggerBrokenMarkerOffset; // 0x150	
	// MPropertyAttributeRange "0 32"
	float m_flDebuggerBrokenMarkerSize; // 0x154	
	CUtlString m_DebuggerBreakpointImg; // 0x158	
	CUtlString m_DebuggerBreakpointDisabledImg; // 0x160	
	// MPropertyAttributeRange "0 32"
	float m_flDebuggerBreakpointOffset; // 0x168	
	// MPropertyAttributeRange "0 32"
	float m_flDebuggerBreakpointSize; // 0x16c	
	CUtlString m_YieldedCursorImg; // 0x170	
	CUtlString m_YieldedCursorOtherImg; // 0x178	
	CUtlString m_DeadCursorImg; // 0x180	
	// MPropertyAttributeRange "0 32"
	float m_flYieldedCursorOffset; // 0x188	
	// MPropertyAttributeRange "0 32"
	float m_flYieldedCursorStackOffset; // 0x18c	
	// MPropertyAttributeRange "0 64"
	float m_flYieldedCursorSize; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0194[0x4]; // 0x194
public:
	CUtlString m_GraphInstanceImg; // 0x198	
	// MPropertyAttributeRange "0 32"
	float m_flRecentExecTimeoutSec; // 0x1a0	
	// MPropertyAttributeRange "0 32"
	float m_flRecentExecStartOffset; // 0x1a4	
	// MPropertyAttributeRange "0 64"
	float m_flRecentExecEndOffset; // 0x1a8	
	// MPropertyAttributeRange "0 8"
	float m_flRecentExecLineWidth; // 0x1ac	
	// MPropertyColorPlusAlpha
	Color m_colRecentExecStartColor; // 0x1b0	
	// MPropertyColorPlusAlpha
	Color m_colRecentExecEndColor; // 0x1b4	
	// MPropertyColorPlusAlpha
	Color m_colRecentExecRequirementFailStartColor; // 0x1b8	
	// MPropertyColorPlusAlpha
	Color m_colRecentExecRequirementFailEndColor; // 0x1bc	
	bool m_bBreakOnExceptions; // 0x1c0	
	bool m_bShowExecutionHistory; // 0x1c1	
	bool m_bBoxSelectRequiresFullyContained; // 0x1c2	
private:
	[[maybe_unused]] uint8_t __pad01c3[0x1]; // 0x1c3
public:
	// MPropertyStartGroup "+Group Layout"
	float m_flFlowMinWidth; // 0x1c4	
	Color m_colHoverBorder; // 0x1c8	
	// MPropertyAttributeRange "0 32"
	float m_flHoverBorderWidth; // 0x1cc	
	Color m_colVarHighlightBorder; // 0x1d0	
	// MPropertyAttributeRange "0 32"
	float m_flVarHighlightWidth; // 0x1d4	
	Color m_colSelectedBorder; // 0x1d8	
	// MPropertyAttributeRange "0 32"
	float m_flSelectionOverlayWidth; // 0x1dc	
	// MPropertyAttributeRange "0 32"
	float m_flSelectedBorderWidth; // 0x1e0	
	Color m_colValueBorder; // 0x1e4	
	// MPropertyAttributeRange "0 32"
	float m_flHighPriorityOutflowArrowHalfWidth; // 0x1e8	
	// MPropertyAttributeRange "0 32"
	float m_flMediumPriorityOutflowArrowHalfWidth; // 0x1ec	
	// MPropertyAttributeRange "0 32"
	float m_flMediumPriorityOutflowArrowHeight; // 0x1f0	
	// MPropertyAttributeRange "0 64"
	float m_flAppendButtonSize; // 0x1f4	
	Color m_colAppendHover; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x4]; // 0x1fc
public:
	CUtlString m_AppendImg; // 0x200	
	// MPropertyAttributeRange "0 32"
	float m_flMoveChildArrowOffset; // 0x208	
	// MPropertyAttributeRange "0 32"
	float m_flMoveChildArrowSize; // 0x20c	
	CUtlString m_MoveChildArrowImg; // 0x210	
	Color m_colMoveChildArrow; // 0x218	
	// MPropertyStartGroup "+Steps"
	// MPropertyAttributeRange "0 32"
	float m_flStepCornerRadius; // 0x21c	
	// MPropertyAttributeRange "0 32"
	float m_flStepPadding; // 0x220	
	Color m_colStepBG_Input; // 0x224	
	// MPropertyAttributeRange "0 32"
	float m_flStepHandleWidth; // 0x228	
	Color m_colStepHandleBG; // 0x22c	
	Color m_colStepHandleHoverBG; // 0x230	
	// MPropertyAttributeRange "0 32"
	float m_flStepHandleLineWidth; // 0x234	
	// MPropertyAttributeRange "0 32"
	float m_flStepHandleLineMargin; // 0x238	
	// MPropertyAttributeRange "0 32"
	float m_flStepHandleLine1X; // 0x23c	
	// MPropertyAttributeRange "0 32"
	float m_flStepHandleLine2X; // 0x240	
	Color m_colExitBG_Default; // 0x244	
	// MPropertyStartGroup "+Generic Nodes"
	// MPropertyAttributeRange "0 32"
	float m_flNodeIconSize; // 0x248	
	// MPropertyAttributeRange "0 32"
	float m_flNodeIconPadding; // 0x24c	
	// MPropertyAttributeRange "0 32"
	float m_flHeaderTextPadding; // 0x250	
	// MPropertyStartGroup "+Connections"
	// MPropertyAttributeRange "0 32"
	float m_flLinearConnectionOffset; // 0x254	
	// MPropertyAttributeRange "0 500"
	float m_flConnectionTangentStrength; // 0x258	
	// MPropertyAttributeRange "1 50"
	float m_flConnectionCurveSpacing; // 0x25c	
	// MPropertyAttributeRange "0 2"
	float m_flConnectionDeltaLimitScale; // 0x260	
	bool m_bLimitByDelta; // 0x264	
private:
	[[maybe_unused]] uint8_t __pad0265[0x3]; // 0x265
public:
	// MPropertyAttributeRange "0 32"
	float m_flBrokenConnectionOffset; // 0x268	
	// MPropertyAttributeRange "0 32"
	float m_flInparamConnectionWidth; // 0x26c	
	// MPropertyAttributeRange "0 32"
	float m_flOutflowConnectionWidth; // 0x270	
	Color m_colConnectionHover; // 0x274	
	Color m_colConnectionSelected; // 0x278	
	Color m_colConnectionBroken; // 0x27c	
	Color m_colInparamDefault; // 0x280	
	Color m_colOutflowDefault; // 0x284	
	// MPropertyAttributeRange "0 32"
	float m_flConnectionCapInflowSize; // 0x288	
	// MPropertyAttributeRange "0 32"
	float m_flConnectionInflowOffset; // 0x28c	
	// MPropertyAttributeEditor "AssetBrowse( png )"
	CUtlString m_ConnectionCapInflowImg; // 0x290	
	// MPropertyAttributeRange "0 32"
	float m_flConnectionCapInparamSize; // 0x298	
	// MPropertyAttributeRange "0 32"
	float m_flConnectionInparamOffset; // 0x29c	
	CUtlString m_ConnectionCapInparamImg; // 0x2a0	
	// MPropertyAttributeRange "0 32"
	float m_flConnectionCapBrokenSize; // 0x2a8	
private:
	[[maybe_unused]] uint8_t __pad02ac[0x4]; // 0x2ac
public:
	CUtlString m_ConnectionCapBrokenImg; // 0x2b0	
	// MPropertyStartGroup "+Notes"
	Vector2D m_vecBlockCommentDefaultSize; // 0x2b8	
	Vector2D m_vecBlockCommentMinSize; // 0x2c0	
	Color m_colBlockCommentDefault; // 0x2c8	
	Color m_colBlockCommentTextLight; // 0x2cc	
	Color m_colBlockCommentTextDark; // 0x2d0	
	Color m_colBlockCommentHeaderOutline; // 0x2d4	
	float m_flBlockCommentHeaderRadius; // 0x2d8	
	float m_flBlockCommentOutlineRadius; // 0x2dc	
	float m_flBlockCommentRegionAlpha; // 0x2e0	
	float m_flBlockCommentResizeHorizontalWidth; // 0x2e4	
	float m_flBlockCommentHeaderTextPadding; // 0x2e8	
	bool m_bBlockCommentShowZoomBubbles; // 0x2ec	
	bool m_bBlockCommentZoomBubblesSortToTop; // 0x2ed	
private:
	[[maybe_unused]] uint8_t __pad02ee[0x2]; // 0x2ee
public:
	float m_flBlockCommentZoomBubbleMaxScale; // 0x2f0	
	bool m_bBlockCommentZoomBubbleBottomAlign; // 0x2f4	
private:
	[[maybe_unused]] uint8_t __pad02f5[0x3]; // 0x2f5
public:
	Vector2D m_vecBlockCommentZoomBubbleCanvasOffset; // 0x2f8	
	Vector2D m_vecBlockCommentZoomBubblePixelOffset; // 0x300	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontBlockComment; // 0x308	
	// MPropertyStartGroup "+Timelines"
	float m_flTimelineSeekBarHeight; // 0x310	
	float m_flTimelinePauseIconSize; // 0x314	
	float m_flTimelineCallModeIconSize; // 0x318	
private:
	[[maybe_unused]] uint8_t __pad031c[0x4]; // 0x31c
public:
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontTimelineTime; // 0x320	
	Color m_colTimelineLabel; // 0x328	
	Vector2D m_vecTimelineIconFromPort; // 0x32c	
	Vector2D m_vecTimelinePauseIconOffset; // 0x334	
	float m_flTimelineCursorHeight; // 0x33c	
	float m_flTimelineCursorTextHeight; // 0x340	
};

