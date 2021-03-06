//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/NSObject-Protocol.h>

@class IBMessageReceiveChannel, NSError, NSException, NSObject;
@protocol OS_dispatch_queue;

@protocol IBMessageReceiveChannelTarget <NSObject>
- (void)messageReceiveChannel:(IBMessageReceiveChannel *)arg1 didDeliverMessage:(SEL)arg2;
- (void)messageReceiveChannel:(IBMessageReceiveChannel *)arg1 willDeliverMessage:(SEL)arg2;
- (NSException *)messageReceiveChannel:(IBMessageReceiveChannel *)arg1 preprocessException:(NSException *)arg2;
- (void)messageReceiveChannel:(IBMessageReceiveChannel *)arg1 shutdownWithError:(NSError *)arg2;
- (void)messageReceiveChannelShutdown:(IBMessageReceiveChannel *)arg1;

@optional
- (NSObject<OS_dispatch_queue> *)messageReceiveChannelQueueForShutdownNotification:(IBMessageReceiveChannel *)arg1;
- (NSObject<OS_dispatch_queue> *)messageReceiveChannel:(IBMessageReceiveChannel *)arg1 queueForReceivingMessage:(SEL)arg2;
@end

