//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogAnalyzerStepMessage.h>

@class DVTTextDocumentLocation, NSArray;

@interface IDEActivityLogAnalyzerControlFlowStepMessage : IDEActivityLogAnalyzerStepMessage
{
    DVTTextDocumentLocation *_endLocation;
    NSArray *_edges;
}

- (void).cxx_destruct;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (void)setEdges:(id)arg1;
- (id)edges;
- (id)endLocation;
- (id)startLocation;
- (unsigned long long)totalNumberOfWarnings;
- (BOOL)isAnalyzerControlFlowStepMessage;
- (id)initWithTitle:(id)arg1 startLocation:(id)arg2 endLocation:(id)arg3;

@end

