//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSButton;

@interface IDEInspectorBooleanProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    BOOL _isBitfield;
    BOOL _allowsMixedState;
    long long _bits;
    long long _bitMask;
    NSButton *_checkbox;
}

@property(retain, nonatomic) NSButton *checkbox; // @synthesize checkbox=_checkbox;
- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)loadView;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (double)baseline;
- (BOOL)canTileIntoColumnsWithMinimumWidth:(double)arg1;

@end

