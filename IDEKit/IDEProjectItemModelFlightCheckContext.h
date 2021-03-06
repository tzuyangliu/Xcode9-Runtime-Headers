//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEFlightCheckingContext-Protocol.h>

@class NSString, NSWindow;
@protocol IDEPortalInfoDelegate, IDEProjectItem;

@interface IDEProjectItemModelFlightCheckContext : NSObject <IDEFlightCheckingContext>
{
    id <IDEPortalInfoDelegate> _portalInfoDelegate;
    id <IDEProjectItem> _item;
    NSWindow *_window;
}

@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) id <IDEProjectItem> item; // @synthesize item=_item;
@property(readonly, nonatomic) id <IDEPortalInfoDelegate> portalInfoDelegate; // @synthesize portalInfoDelegate=_portalInfoDelegate;
- (void).cxx_destruct;
- (BOOL)ensureValidAccount:(id)arg1 error:(id *)arg2;
- (void)handleError:(id)arg1;
- (void)performBlockRequiringAccountAndTeamSelection:(CDUnknownBlockType)arg1;
- (id)initWithPortalInfoDelegate:(id)arg1 item:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

