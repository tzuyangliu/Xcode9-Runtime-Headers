//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, NSPopUpButton;
@protocol IDEProvisioningBasicTeam;

@interface IDETeamPicker : IDEViewController
{
    DVTObservingToken *_teamObserver;
    id <IDEProvisioningBasicTeam> _team;
    NSPopUpButton *_teamPopUp;
}

@property(retain, nonatomic) NSPopUpButton *teamPopUp; // @synthesize teamPopUp=_teamPopUp;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
- (void).cxx_destruct;
- (void)select:(id)arg1;
- (void)cancel:(id)arg1;
- (void)beginSheetModalForWindow:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addAccount:(id)arg1;
- (void)selectTeam:(id)arg1;
- (void)_reloadTeams;
- (void)viewDidLoad;
- (void)primitiveInvalidate;

@end
