//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDEOpenQuicklyResultGenerator, NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol IDEOpenQuicklyResultConsumer <NSObject>
- (void)resultGeneratorFinishedStarting:(IDEOpenQuicklyResultGenerator *)arg1;
- (void)resultGenerator:(IDEOpenQuicklyResultGenerator *)arg1 didGenerateOrderedResults:(NSArray *)arg2 generation:(long long)arg3;
- (NSObject<OS_dispatch_queue> *)resultConsumptionQueue;
@end
