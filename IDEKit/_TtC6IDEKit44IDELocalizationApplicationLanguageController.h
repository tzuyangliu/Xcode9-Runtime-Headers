//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDELocalizationPopUpController.h>

@class NSString;
@protocol _TtP6IDEKit42IDELocalizationApplicationLanguageDelegate_;

@interface _TtC6IDEKit44IDELocalizationApplicationLanguageController : IDELocalizationPopUpController
{
    // Error parsing type: , name: selectedLanguage
    // Error parsing type: , name: delegate
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithScheme:(id)arg1;
- (void)menuNeedsUpdateWithMenu:(id)arg1;
- (id)localesIn:(id)arg1;
- (void)updateMenu:(id)arg1;
- (void)buildLocaleMenu;
- (void)selectLanguage:(id)arg1;
- (void)selectLocaleItemWithSender:(id)arg1;
- (void)viewDidInstall;
@property(nonatomic) __weak id <_TtP6IDEKit42IDELocalizationApplicationLanguageDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, copy) NSString *selectedLanguage; // @synthesize selectedLanguage;

@end

