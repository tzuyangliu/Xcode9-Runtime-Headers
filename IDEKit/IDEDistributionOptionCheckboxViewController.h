//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionOptionViewController.h>

@class IDEDistributionOption, NSLayoutConstraint, NSString;

@interface IDEDistributionOptionCheckboxViewController : IDEDistributionOptionViewController
{
    BOOL _checkboxValue;
    BOOL _checkboxEnabled;
    IDEDistributionOption *_checkboxOption;
    NSString *_checkboxTitle;
    NSString *_checkboxDescription;
    NSLayoutConstraint *_checkboxLeading;
    NSLayoutConstraint *_checkboxWidth;
}

+ (id)defaultViewNibName;
@property(retain, nonatomic) NSLayoutConstraint *checkboxWidth; // @synthesize checkboxWidth=_checkboxWidth;
@property(retain, nonatomic) NSLayoutConstraint *checkboxLeading; // @synthesize checkboxLeading=_checkboxLeading;
@property(nonatomic) BOOL checkboxEnabled; // @synthesize checkboxEnabled=_checkboxEnabled;
@property(nonatomic) BOOL checkboxValue; // @synthesize checkboxValue=_checkboxValue;
@property(retain, nonatomic) NSString *checkboxDescription; // @synthesize checkboxDescription=_checkboxDescription;
@property(retain, nonatomic) NSString *checkboxTitle; // @synthesize checkboxTitle=_checkboxTitle;
@property(readonly, nonatomic) IDEDistributionOption *checkboxOption; // @synthesize checkboxOption=_checkboxOption;
- (void).cxx_destruct;
- (BOOL)isInAdditionalOptionsGroup;
- (BOOL)needsInteraction;
- (void)viewDidLoad;
- (id)initWithOption:(id)arg1;

@end

