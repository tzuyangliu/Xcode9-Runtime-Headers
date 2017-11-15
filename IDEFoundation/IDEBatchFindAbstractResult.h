//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDocumentLocation, NSNumber, NSString;

@interface IDEBatchFindAbstractResult : NSObject
{
    id _cachedIcon;
    DVTDocumentLocation *_location;
    SEL _childOrderingSelector;
    IDEBatchFindAbstractResult *_parent;
    long long _depth;
    NSString *_text;
    NSNumber *_initialSuggestedNumberOfLines;
    long long _suggestedOrder;
    struct _NSRange _highlightedTextRange;
}

@property(readonly) long long suggestedOrder; // @synthesize suggestedOrder=_suggestedOrder;
@property(readonly) NSNumber *initialSuggestedNumberOfLines; // @synthesize initialSuggestedNumberOfLines=_initialSuggestedNumberOfLines;
@property(readonly) struct _NSRange highlightedTextRange; // @synthesize highlightedTextRange=_highlightedTextRange;
@property(readonly) NSString *text; // @synthesize text=_text;
@property(readonly) long long depth; // @synthesize depth=_depth;
@property(readonly) IDEBatchFindAbstractResult *parent; // @synthesize parent=_parent;
@property(readonly) SEL childOrderingSelector; // @synthesize childOrderingSelector=_childOrderingSelector;
@property(readonly) DVTDocumentLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (long long)compareSuggestedOrder:(id)arg1;
- (BOOL)textRepresentationForPasteboardIsFileName;
@property(readonly) NSString *contextualSuffix;
- (id)textRepresentationForPasteboard;
- (id)generateFindResult;
- (BOOL)allowsSummarization;
- (BOOL)contributesToResultCount;
- (BOOL)contributesToFileResultCount;
- (long long)compareDocumentLocations:(id)arg1;
- (long long)compareText:(id)arg1;
- (long long)compareFilePaths:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDocumentLocation:(id)arg1 text:(id)arg2 highlightedTextRange:(struct _NSRange)arg3 initialNumberOfLinesCalculator:(CDUnknownBlockType)arg4 parent:(id)arg5 suggestedOrder:(long long)arg6 childOrderingSelector:(SEL)arg7;

@end

