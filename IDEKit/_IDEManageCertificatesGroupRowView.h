//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class IDEManageCertificatesViewController, NSMutableArray, NSVisualEffectView, _IDEManageCertificatesLineView;

@interface _IDEManageCertificatesGroupRowView : NSTableRowView
{
    IDEManageCertificatesViewController *_controller;
    NSMutableArray *_cellViews;
    _IDEManageCertificatesLineView *_lineView;
    NSVisualEffectView *_backgroundView;
}

- (void).cxx_destruct;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (long long)interiorBackgroundStyle;
- (void)layout;
- (long long)groupRowStyle2;
- (void)updateLayer;
- (void)updateNextFloatingHeader;
- (void)setBackgroundColor:(id)arg1;
- (void)_updateBackgroundColor;
- (id)_backgroundColor;
- (void)setFloating:(BOOL)arg1;
- (id)_createBackgroundViewWithFrame:(struct CGRect)arg1;
- (BOOL)_showHeaderCells;
- (void)setName:(id)arg1;
- (id)_nameCellView;
- (id)cellViewAtIndex:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

@end

