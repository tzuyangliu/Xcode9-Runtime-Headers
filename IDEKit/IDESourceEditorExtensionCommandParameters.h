//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface IDESourceEditorExtensionCommandParameters : NSObject
{
    BOOL _usesTabsForIndentation;
    NSString *_contentUTI;
    unsigned long long _tabWidth;
    unsigned long long _indentationWidth;
    NSString *_textBuffer;
    NSData *_rawSelectionTextRanges;
}

@property(retain) NSData *rawSelectionTextRanges; // @synthesize rawSelectionTextRanges=_rawSelectionTextRanges;
@property(retain) NSString *textBuffer; // @synthesize textBuffer=_textBuffer;
@property BOOL usesTabsForIndentation; // @synthesize usesTabsForIndentation=_usesTabsForIndentation;
@property unsigned long long indentationWidth; // @synthesize indentationWidth=_indentationWidth;
@property unsigned long long tabWidth; // @synthesize tabWidth=_tabWidth;
@property(copy) NSString *contentUTI; // @synthesize contentUTI=_contentUTI;
- (void).cxx_destruct;
- (id)init;

@end

