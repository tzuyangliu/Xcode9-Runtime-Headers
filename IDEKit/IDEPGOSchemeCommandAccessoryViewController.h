//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSAlert, NSMatrix;

@interface IDEPGOSchemeCommandAccessoryViewController : NSViewController
{
    NSMatrix *_runOrTestMatrix;
    int _selectedMatrixTag;
    NSAlert *_alert;
}

@property __weak NSAlert *alert; // @synthesize alert=_alert;
- (void).cxx_destruct;
- (void)chooseWhatToRunAction:(id)arg1;
- (void)setTestRadioButtonEnabled:(BOOL)arg1;
- (void)setRunRadioButtonEnabled:(BOOL)arg1;
@property int selectedMatrixTag;
- (void)viewDidLoad;

@end

