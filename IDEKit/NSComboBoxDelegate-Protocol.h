//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSTextFieldDelegate-Protocol.h>

@class NSNotification;

@protocol NSComboBoxDelegate <NSTextFieldDelegate>

@optional
- (void)comboBoxSelectionIsChanging:(NSNotification *)arg1;
- (void)comboBoxSelectionDidChange:(NSNotification *)arg1;
- (void)comboBoxWillDismiss:(NSNotification *)arg1;
- (void)comboBoxWillPopUp:(NSNotification *)arg1;
@end

