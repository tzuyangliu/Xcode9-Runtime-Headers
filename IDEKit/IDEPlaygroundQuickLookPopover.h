//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSPopover;

@interface IDEPlaygroundQuickLookPopover : NSViewController
{
    NSPopover *_popover;
}

@property(retain) NSPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (struct CGRect)_maxContentSizeForQuickLookOnScreen:(id)arg1;
- (void)showQuickLookContentView:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)showQuickLookContentView:(id)arg1 relativeToView:(id)arg2;
- (void)showToyHostingViewController:(id)arg1 relativeToView:(id)arg2;
- (id)init;

@end
