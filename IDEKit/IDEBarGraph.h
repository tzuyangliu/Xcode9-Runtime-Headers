//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEGraph.h>

@class NSCache;

@interface IDEBarGraph : IDEGraph
{
    BOOL _modelDelegateRespondsToColorForEntryValue;
    BOOL _modelDelegateRespondsToGradientForColor;
    BOOL _modelDelegateResopndsToBorderColorForColor;
    BOOL _modelDelegateRespondsToUserClickedOnGraphEntry;
    BOOL _modelDelegateRespondsToUserMousedOverOnGraphEntry;
    BOOL _modelDelegateRespondsToUserMouseExitedGraph;
    NSCache *_imageCache;
    NSCache *_negativeImageCache;
    BOOL _showsNegativeValues;
    double _barWidth;
    double _barSpacing;
}

@property(nonatomic) double barSpacing; // @synthesize barSpacing=_barSpacing;
@property(nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
@property(nonatomic) BOOL showsNegativeValues; // @synthesize showsNegativeValues=_showsNegativeValues;
- (void).cxx_destruct;
- (id)imageForGraph:(id)arg1 entry:(id)arg2 inRect:(struct CGRect)arg3;
- (id)colorForGraph:(id)arg1 entry:(id)arg2;
- (void)userMouseExitedGraph:(id)arg1 event:(id)arg2;
- (void)userMousedOverInGraph:(id)arg1 onEntry:(id)arg2 event:(id)arg3;
- (void)userClickedInGraph:(id)arg1 onEntry:(id)arg2;
- (void)setModelDelegate:(id)arg1;
- (id)attributesForGraph;
- (Class)graphClass;
- (id)initWithFrame:(struct CGRect)arg1;

@end

