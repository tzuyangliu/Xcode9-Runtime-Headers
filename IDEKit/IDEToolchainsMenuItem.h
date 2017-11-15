//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSMenuItem.h>

@class DVTToolchainOverrideOptionProvider, NSArray;

@interface IDEToolchainsMenuItem : NSMenuItem
{
    NSArray *_observingTokens;
    DVTToolchainOverrideOptionProvider *_optionProvider;
}

- (void).cxx_destruct;
- (void)_selectOption:(id)arg1;
- (void)_manage:(id)arg1;
- (void)_update;
- (id)_menuItemForOption:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3;
- (id)initWithOptionProvider:(id)arg1;

@end

