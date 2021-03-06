//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEWorkspaceWindow, NSAlert, NSButton, NSError, NSImageView, NSProgressIndicator, NSTextField, NSWindow;

@interface IDEExecutionHoldAlertHelper : NSObject
{
    IDEWorkspaceWindow *_window;
    NSError *_error;
    BOOL _alertShowing;
    NSWindow *_sheet;
    NSImageView *_appIconImageWell;
    NSTextField *_errMessageTextField;
    NSTextField *_errInformativeTextField;
    NSButton *_firstButton;
    NSProgressIndicator *_firstButtonSpinner;
    NSButton *_secondButton;
    NSProgressIndicator *_secondButtonSpinner;
    NSButton *_thirdButton;
    NSAlert *_alert;
}

@property(retain) NSAlert *alert; // @synthesize alert=_alert;
@property __weak NSButton *thirdButton; // @synthesize thirdButton=_thirdButton;
@property __weak NSProgressIndicator *secondButtonSpinner; // @synthesize secondButtonSpinner=_secondButtonSpinner;
@property __weak NSButton *secondButton; // @synthesize secondButton=_secondButton;
@property __weak NSProgressIndicator *firstButtonSpinner; // @synthesize firstButtonSpinner=_firstButtonSpinner;
@property __weak NSButton *firstButton; // @synthesize firstButton=_firstButton;
@property __weak NSTextField *errInformativeTextField; // @synthesize errInformativeTextField=_errInformativeTextField;
@property __weak NSTextField *errMessageTextField; // @synthesize errMessageTextField=_errMessageTextField;
@property __weak NSImageView *appIconImageWell; // @synthesize appIconImageWell=_appIconImageWell;
@property(retain) NSWindow *sheet; // @synthesize sheet=_sheet;
@property BOOL alertShowing; // @synthesize alertShowing=_alertShowing;
- (void).cxx_destruct;
- (void)dismissAlert:(id)arg1;
- (void)showAlert;
- (void)_showOnlyFirstButton;
- (id)initWithWindow:(id)arg1 error:(id)arg2;

@end

