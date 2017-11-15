//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAbstractAutolayoutFrameDecisionDriver.h>

@class IBAutolayoutEngine, IBLayoutConstraint;

@interface IBAutolayoutFrameDecisionDriver : IBAbstractAutolayoutFrameDecisionDriver
{
    IBLayoutConstraint *_heightConstraint;
    IBLayoutConstraint *_widthConstraint;
    IBAutolayoutEngine *_engine;
}

+ (void)configureEngine:(id)arg1 forLiveResizingView:(id)arg2 layoutInfo:(id)arg3 returningWidthConstraint:(id *)arg4 returningHeightConstraint:(id *)arg5 options:(id)arg6;
+ (void)adjustContentReactionPrioritiesForConfiguringEngine:(id)arg1 forLiveResizingView:(id)arg2 layoutInfo:(id)arg3 options:(id)arg4;
+ (void)addTemporarySizingConstraintsForConfiguringEngine:(id)arg1 forLiveResizingView:(id)arg2 layoutInfo:(id)arg3 returningWidthConstraint:(id *)arg4 returningHeightConstraint:(id *)arg5 options:(id)arg6;
+ (void)removeExplicitSizingConstraintsForConfiguringEngine:(id)arg1 forLiveResizingView:(id)arg2 layoutInfo:(id)arg3 options:(id)arg4;
+ (void)stripOrAddAncestorAndDescendantAndSiblingConstraintsForConfiguringEngine:(id)arg1 forLiveResizingView:(id)arg2 layoutInfo:(id)arg3 options:(id)arg4;
+ (void)addConstraintsToFixAmbiguityForAncestorsOfItem:(id)arg1 whileConfiguringEngine:(id)arg2 layoutInfo:(id)arg3;
+ (BOOL)shouldRemoveAbsoluteInequalityConstraintsOnLiveResizingViewForMask:(unsigned long long)arg1;
+ (BOOL)shouldRemoveAbsoluteEqualityConstraintsOnLiveResizingViewForMask:(unsigned long long)arg1;
+ (BOOL)shouldRemoveAbsoluteConstraintsWhenBreakingConstraintsToAncestorsAndSiblingsForMask:(unsigned long long)arg1;
+ (BOOL)shouldRemoveAbsoluteConstraintsWhenBreakingConstraintsToDescendantsForMask:(unsigned long long)arg1;
@property(readonly) IBAutolayoutEngine *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (void)addConstraints:(id)arg1 replacingConstraints:(id)arg2 enforcingCurrentSizeOfViews:(id)arg3 mutuallyExclusiveConstraintBreakageStrategy:(unsigned long long)arg4 returningConstraintsAdded:(id *)arg5 returningConstraintsRemoved:(id *)arg6 framePropagationBlock:(CDUnknownBlockType)arg7;
- (void)updateAutolayoutStatus;
- (CDUnknownBlockType)sizeView:(id)arg1 toLayoutSize:(struct CGSize)arg2 suggestedLayoutOrigin:(struct CGPoint)arg3 mutuallyExclusiveConstraintBreakageStrategy:(unsigned long long)arg4 framePropagationBlock:(CDUnknownBlockType)arg5;
- (void)updateWidthConstraint:(id)arg1 andHeightConstraint:(id)arg2 toSize:(struct CGSize)arg3;
- (BOOL)shouldResizeViewByAddingRequiredSizingConstraints:(id)arg1;
- (BOOL)shouldLiveResizeViewUsingExplicitSizingConstraints:(id)arg1;
- (void)enumerateLayoutFramesForViews:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)layoutFrameOrBoundsForView:(id)arg1;
- (id)initWithArbitrationUnit:(id)arg1 initialStatus:(id)arg2 options:(id)arg3;

@end

