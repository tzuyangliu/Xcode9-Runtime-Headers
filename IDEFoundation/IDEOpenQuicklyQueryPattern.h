//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IDEOpenQuicklyQueryPattern : NSObject <NSCopying>
{
    char *_patternCharacters;
    char *_lowercasePatternCharacters;
    long long _patternLength;
    unsigned int _mask;
    struct IDEOpenQuicklyQueryCandidate *_patternAsCandidate;
    BOOL _containsPathSeparator;
    NSString *_patternText;
}

+ (void)invokeWithTokenizedCandidateUTF8Bytes:(const char *)arg1 length:(long long)arg2 isFileName:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
@property(readonly) BOOL containsPathSeparator; // @synthesize containsPathSeparator=_containsPathSeparator;
@property(readonly) NSString *patternText; // @synthesize patternText=_patternText;
- (void).cxx_destruct;
- (BOOL)rejectsEverything;
- (BOOL)matchesASubsetOfMatchesFromPattern:(id)arg1;
- (BOOL)matchesEverythingMatchedBy:(id)arg1;
- (id)matchedRangesForCandidate:(struct IDEOpenQuicklyQueryCandidate *)arg1;
- (double)scoreCandidate:(struct IDEOpenQuicklyQueryCandidate *)arg1 isFileName:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPattern:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invokeWithRangesMatchingCandidate:(struct IDEOpenQuicklyQueryCandidate *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)matchesCandidate:(struct IDEOpenQuicklyQueryCandidate *)arg1;
- (BOOL)mightMatchCandidate:(struct IDEOpenQuicklyQueryCandidate *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithPatternText:(id)arg1;

@end

