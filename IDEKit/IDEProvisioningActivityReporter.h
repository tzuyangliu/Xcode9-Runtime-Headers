//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class NSMutableDictionary;

@interface IDEProvisioningActivityReporter : IDEActivityReporter
{
    NSMutableDictionary *_entryToReportMap;
}

- (void).cxx_destruct;
- (void)_removeActivityReportForLedgerEntry:(id)arg1;
- (id)_activityReportForLedgerEntry:(id)arg1;
- (id)_reportTitleForLedgerEntry:(id)arg1;
- (void)provisioningWorkspaceMonitor:(id)arg1 didObserveCloseForLedgerEntry:(id)arg2;
- (void)provisioningWorkspaceMonitor:(id)arg1 didObserveOpenForLedgerEntry:(id)arg2;
- (id)initWithWorkspace:(id)arg1;

@end

