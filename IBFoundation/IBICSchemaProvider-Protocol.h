//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/NSObject-Protocol.h>

@class IBICSchema, NSString;

@protocol IBICSchemaProvider <NSObject>
- (void)registerSchemaComponents:(IBICSchema *)arg1;
- (void)captureExistingSlotComponents:(IBICSchema *)arg1;
- (void)registerSlotComponents:(IBICSchema *)arg1;
- (void)registerClasses:(IBICSchema *)arg1;
- (double)precedence;

@optional
+ (void)setContextDataFromCallingHost:(id)arg1;
+ (id)contextDataForRemoteTool;
+ (BOOL)supportsRemoteToolsTargetingPlatformNamed:(NSString *)arg1;
- (void)registerSuggestionSets:(IBICSchema *)arg1;
- (void)registerFileTypes:(IBICSchema *)arg1;
@end

