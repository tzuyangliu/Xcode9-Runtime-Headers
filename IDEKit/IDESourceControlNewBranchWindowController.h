//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSString, NSTextField;

@interface IDESourceControlNewBranchWindowController : NSWindowController
{
    NSButton *_chooseButton;
    NSTextField *_messageTextField;
    NSTextField *_informationTextField;
    NSTextField *_newBranchNameTextField;
    NSString *_userNewBranchName;
}

+ (id)keyPathsForValuesAffectingCanContinue;
@property(retain) NSString *userNewBranchName; // @synthesize userNewBranchName=_userNewBranchName;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)choose:(id)arg1;
- (id)windowNibName;
@property(readonly) BOOL canContinue;

@end
