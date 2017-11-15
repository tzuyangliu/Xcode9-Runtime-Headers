//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEToyViewController.h>

#import <IDEKit/IDEPlaygroundRemoteViewInteractionDelegate-Protocol.h>

@class DVTObservingToken, IDEPlaygroundRemoteViewController, IDEViewToy, NSArray, NSNumber, NSString, NSTimer, NSView;

@interface IDEViewToyViewController : IDEToyViewController <IDEPlaygroundRemoteViewInteractionDelegate>
{
    DVTObservingToken *_remoteViewStateObservingToken;
    DVTObservingToken *_remoteViewControllerObservingToken;
    DVTObservingToken *_iosurfaceObservingToken;
    NSView *_contentView;
    NSView *_simDisplayView;
    NSArray *_remoteViewConstraints;
    struct __IOSurface *_simulatorFramebufferSurface;
    NSTimer *_screenUpdateTimer;
    IDEPlaygroundRemoteViewController *_remoteViewController;
    NSNumber *_iosurfaceID;
}

@property(retain, nonatomic) NSNumber *iosurfaceID; // @synthesize iosurfaceID=_iosurfaceID;
@property(retain, nonatomic) IDEPlaygroundRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void).cxx_destruct;
- (void)handleRemoteKeyboardEvent:(id)arg1;
- (void)handleRemoteMouseEvent:(id)arg1;
- (BOOL)_handleKeyboardEvent:(id)arg1;
- (BOOL)_handleMouseEvent:(id)arg1;
- (BOOL)_toyStateReadyForDrawing;
- (BOOL)_handleInputEvent:(id)arg1;
- (void)updateScreen;
- (void)stopScreenUpdateTimer;
- (void)startScreenUpdateTimer;
- (void)stopLiveViewDisplay;
- (void)startLiveViewDisplayWithIOSurface:(struct __IOSurface *)arg1 screenScale:(double)arg2;
- (void)didChangeIOSurfaceID;
- (void)willChangeIOSurfaceID;
- (void)setContentHidden:(BOOL)arg1;
- (void)didChangeRemoteViewController;
- (void)willChangeRemoteViewController;
- (void)stopObservingLiveViewContent;
- (void)startObservingLiveViewContent;
- (void)configureForRemoteViewStateAvailable;
- (void)configureForRemoteViewStateUnavailable;
- (void)configureForRemoteViewStateUnknown;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)viewWillLayout;
- (void)loadView;
- (void)displayRecordedImageForDate:(id)arg1;
- (void)displayLastRecordedImage;
- (void)setResultDisplayDate:(id)arg1;
- (double)preferredVerticalInset;
- (double)preferredHorizontalInset;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (unsigned long long)representationType;
- (id)titleForDisplay;
@property(readonly) IDEViewToy *viewToy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

