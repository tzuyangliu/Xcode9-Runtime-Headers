//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEKit/NSCollectionViewElement-Protocol.h>

@class NSString, NSTextField;

@interface IDETemplateChooserCategoryView : NSView <NSCollectionViewElement>
{
    NSString *_categoryName;
    NSTextField *_categoryTextField;
}

@property(nonatomic) __weak NSTextField *categoryTextField; // @synthesize categoryTextField=_categoryTextField;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property(readonly) Class superclass;

@end

