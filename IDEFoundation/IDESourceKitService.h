//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTNotificationToken, NSMutableArray;

@interface IDESourceKitService : NSObject
{
    NSMutableArray *_initializationBlocks;
    NSMutableArray *_notificationDocumentUpdateBlocks;
    NSMutableArray *_notificationSemanticsDisabledBlocks;
    DVTNotificationToken *_connectionInterruptedNotificationToken;
    DVTNotificationToken *_connectionRestoredNotificationToken;
    int _serviceStatus;
}

+ (void)handleSourceKitError:(struct _sourcekit_response_s *)arg1 logAspect:(id)arg2 crashed:(char *)arg3;
+ (id)sharedSourceKitService;
+ (void)initialize;
@property int serviceStatus; // @synthesize serviceStatus=_serviceStatus;
- (void).cxx_destruct;
- (void)handleNotification:(struct _sourcekit_response_s *)arg1;
- (void)handleConnectionRestored;
- (void)removeSemanticsDisabledNotificationBlock:(id)arg1;
- (id)addSemanticsDisabledNotificationBlock:(CDUnknownBlockType)arg1;
- (void)removeDocumentUpdateNotificationBlock:(id)arg1;
- (id)addDocumentUpdateNotificationBlock:(CDUnknownBlockType)arg1;
- (void)removeInitializationBlock:(id)arg1;
- (id)addInitializationBlock:(CDUnknownBlockType)arg1;
- (id)sendRequestAsync:(struct _sourcekit_object_s *)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)sendRequestSync:(struct _sourcekit_object_s *)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)sendRequestSyncWithName:(id)arg1 parameters:(id)arg2 error:(id *)arg3;
- (id)init;

@end

