//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDELaunchActionOptionViewController.h>

@class NSButton;

@interface IDETestAttachmentsLifetimeOptionsController : IDELaunchActionOptionViewController
{
    // Error parsing type: , name: systemAttachmentsCheckbox
    // Error parsing type: , name: removeSystemAttachmentsOnSuccessCheckbox
    // Error parsing type: , name: removeUserAttachmentsCheckbox
}

+ (BOOL)availableForScheme:(id)arg1;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithScheme:(id)arg1;
- (void)attachmentsCheckboxHasChanged:(id)arg1;
- (void)loadView;
@property(nonatomic) long long userAttachment;
@property(nonatomic) long long systemAttachment;
@property(nonatomic) __weak NSButton *removeUserAttachmentsCheckbox; // @synthesize removeUserAttachmentsCheckbox;
@property(nonatomic) __weak NSButton *removeSystemAttachmentsOnSuccessCheckbox; // @synthesize removeSystemAttachmentsOnSuccessCheckbox;
@property(nonatomic) __weak NSButton *systemAttachmentsCheckbox; // @synthesize systemAttachmentsCheckbox;

@end

