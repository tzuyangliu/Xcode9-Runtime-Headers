//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTReplacementView;

@interface IDEDistributionResultStepViewController : IDEDistributionStepViewController
{
    DVTReplacementView *_replacementView;
}

@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void).cxx_destruct;
- (BOOL)canGoPrevious;
- (BOOL)canCancel;
- (void)takeAdditionalAction;
- (id)additionalActionTitle;
- (void)viewDidInstall;
- (id)title;
- (id)nibName;
- (void)primitiveInvalidate;
- (id)nextButtonTitle;

@end

