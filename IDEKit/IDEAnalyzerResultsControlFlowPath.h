//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEActivityLogAnalyzerControlFlowStepEdge, IDEAnalyzerResultsVisualization;

@interface IDEAnalyzerResultsControlFlowPath : NSObject
{
    struct CGSize _cachedCharacterSize;
    long long _indentWidth;
    IDEActivityLogAnalyzerControlFlowStepEdge *_edge;
    IDEAnalyzerResultsVisualization *_visualization;
}

@property(readonly) IDEAnalyzerResultsVisualization *visualization; // @synthesize visualization=_visualization;
@property(readonly) IDEActivityLogAnalyzerControlFlowStepEdge *edge; // @synthesize edge=_edge;
- (void).cxx_destruct;
- (id)drawableInRect:(struct CGRect)arg1 withUIHint:(int)arg2;
- (void)drawInRect:(struct CGRect)arg1 withUIHint:(int)arg2;
- (id)outgoingControlFlowPathsFromEndRange;
- (id)outgoingControlFlowPathsFromStartRange;
- (id)incommingControlFlowPathsToEndRange;
- (id)incommingControlFlowPathsToStartRange;
@property(readonly) struct CGRect endRect;
@property(readonly) struct CGRect startRect;
@property(readonly) struct _NSRange endRange;
@property(readonly) struct _NSRange startRange;
@property(readonly) int type;
- (id)initWithEdge:(id)arg1 visualization:(id)arg2;

@end
