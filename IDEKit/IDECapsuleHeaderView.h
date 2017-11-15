//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTDisclosureHeaderView.h>

@class IDECapsuleView, NSView;

@interface IDECapsuleHeaderView : DVTDisclosureHeaderView
{
    struct CGPoint _lastMouseDownLoc;
    NSView *_capsuleHeaderContentView;
    IDECapsuleView *_capsuleView;
}

@property IDECapsuleView *capsuleView; // @synthesize capsuleView=_capsuleView;
@property(retain, nonatomic) NSView *capsuleHeaderContentView; // @synthesize capsuleHeaderContentView=_capsuleHeaderContentView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)defaultCloseButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)_endEditingTitleField;
- (void)_startEditingTitleFieldWithTitle:(id)arg1;
- (void)_updateTitleFrame;
- (double)preferredHeight;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_isRenameEvent:(id)arg1;

@end

