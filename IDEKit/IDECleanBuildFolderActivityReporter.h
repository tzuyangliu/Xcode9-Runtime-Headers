//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class DVTObservingToken;

@interface IDECleanBuildFolderActivityReporter : IDEActivityReporter
{
    DVTObservingToken *_isCleaningObserver;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;
- (void)updateActivityReports;
- (id)completionSummaryStringSegments;

@end

