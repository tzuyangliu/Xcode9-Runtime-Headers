//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>

@class DVTWeakInterposer, NSString;
@protocol NSMenuDelegate><DVTInvalidation;

@interface _IDEApplicationControllerMenuDelegateForwarder : NSObject <NSMenuDelegate>
{
    DVTWeakInterposer *_menuDelegate_dvtWeakInterposer;
    struct {
        unsigned int _delegateRespondsToNeedsUpdate:1;
        unsigned int _delegateRespondsToWillOpen:1;
        unsigned int _delegateRespondsToDidClose:1;
    } _delegateFlags;
}

- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithMenuDelegate:(id)arg1;
@property __weak id <NSMenuDelegate><DVTInvalidation> menuDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

