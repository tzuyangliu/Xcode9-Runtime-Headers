//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEScheme, IDEWorkspaceArenaSnapshot, NSArray;

@interface IDERunDestinationProfile : NSObject
{
    IDEWorkspaceArenaSnapshot *_workspaceArenaSnapshot;
    IDEScheme *_scheme;
    NSArray *_runDestinations;
    NSArray *_buildDestinations;
    double _timeTaken;
}

+ (void)generateProfileForWorkspaceArenaSnapshot:(id)arg1 scheme:(id)arg2 sortedRunDestinations:(id)arg3 buildDestinations:(id)arg4 timeTaken:(double)arg5;
- (void).cxx_destruct;
- (void)generateProfile;
- (id)_runDestinationDictionaryFor:(id)arg1;
- (id)initWithWorkspaceArenaSnapshot:(id)arg1 scheme:(id)arg2 sortedRunDestinations:(id)arg3 buildDestinations:(id)arg4 timeTaken:(double)arg5;

@end

