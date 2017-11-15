//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPopUpButtonCell.h>

@class NSString;

@interface IDEProcessActionPopUpCell : NSPopUpButtonCell
{
    struct CGSize _cellSize;
    BOOL _mouseEntered;
    BOOL _arrowIsVisible;
    NSString *_toolTip;
}

@property(nonatomic) BOOL arrowIsVisible; // @synthesize arrowIsVisible=_arrowIsVisible;
@property(copy) NSString *toolTip; // @synthesize toolTip=_toolTip;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)addTrackingAreasForView:(id)arg1 inFrame:(struct CGRect)arg2 withUserInfo:(id)arg3 mouseLocation:(struct CGPoint)arg4;
- (void)_updatePopUpButtonImageForSelectedMenuItem;
- (void)selectItemAtIndex:(long long)arg1;
- (BOOL)isHighlighted;
- (struct NSEdgeInsets)_popupBezelInsets;
- (id)init;

@end

