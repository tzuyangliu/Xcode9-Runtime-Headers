//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class NSArray, NSMapTable;
@protocol DVTInvalidation;

@interface IDEFindNavigatorQueryActivityReporter : IDEActivityReporter
{
    id <DVTInvalidation> _observations;
    NSArray *_reports;
    NSMapTable *_entriesByQuery;
}

@property(copy, nonatomic) NSArray *activityReports; // @synthesize activityReports=_reports;
- (void).cxx_destruct;
- (void)queryCompleted:(id)arg1;
- (void)queryThrottled:(id)arg1;
- (void)queryStallStatusChanged:(id)arg1;
- (void)queryProgressed:(id)arg1;
- (void)queryStarted:(id)arg1;
- (id)entryForQueryFromNotificationCreatingIfNeeded:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end
