//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTCoverageDataContainer.h>

@class DVTSourceCodeSymbolKind, IDESchemeActionCodeCoverageFile;

@interface IDESchemeActionCodeCoverageFunction : DVTCoverageDataContainer
{
    int _executionCount;
    int _lineNumber;
    DVTSourceCodeSymbolKind *_symbolKind;
    IDESchemeActionCodeCoverageFile *_sourceFile;
}

@property(nonatomic) __weak IDESchemeActionCodeCoverageFile *sourceFile; // @synthesize sourceFile=_sourceFile;
@property(readonly, nonatomic) DVTSourceCodeSymbolKind *symbolKind; // @synthesize symbolKind=_symbolKind;
@property(readonly, nonatomic) int lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, nonatomic) int executionCount; // @synthesize executionCount=_executionCount;
- (void).cxx_destruct;
- (id)description;
- (id)wrappedContainer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 symbolKind:(id)arg2 lineNumber:(int)arg3 executionCount:(int)arg4 lineCoverage:(id)arg5;

@end
