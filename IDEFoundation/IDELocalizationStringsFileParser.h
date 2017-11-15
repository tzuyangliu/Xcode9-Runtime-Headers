//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSString;

@interface IDELocalizationStringsFileParser : NSObject
{
    NSMutableArray *_parsedStringListElements;
    unsigned long long _length;
    NSData *_parseData;
    const unsigned short *_parseRaw;
    NSArray *_lineStarts;
    NSString *_stringToParse;
    unsigned long long _currentPosition;
}

@property(readonly, nonatomic) unsigned long long currentPosition; // @synthesize currentPosition=_currentPosition;
@property(readonly, copy, nonatomic) NSArray *parsedStringListElements; // @synthesize parsedStringListElements=_parsedStringListElements;
@property(readonly, copy, nonatomic) NSString *stringToParse; // @synthesize stringToParse=_stringToParse;
- (void).cxx_destruct;
- (void)getParseResultStrings:(id *)arg1 comments:(id *)arg2;
- (BOOL)parseAndReturnError:(id *)arg1;
- (void)_configureInitialState;
- (BOOL)_parseDictionaryEnd:(char *)arg1 error:(id *)arg2;
- (BOOL)_parseDictionaryStart:(char *)arg1 error:(id *)arg2;
- (BOOL)_parseSemicolonAndReturnError:(id *)arg1;
- (BOOL)_parseEqualsOrSemicolonCharacter:(unsigned short *)arg1 error:(id *)arg2;
- (BOOL)_parseWhitespaceAndComments:(id *)arg1 error:(id *)arg2;
- (id)_parseStringAndReturnError:(id *)arg1;
- (id)_parseNonQuotedStringAndReturnError:(id *)arg1;
- (id)_parseQuotedStringWithQuoteCharacter:(unsigned short)arg1 error:(id *)arg2;
- (id)_parseUpToBackslashOrQuoteCharacter:(unsigned short)arg1 stopCharacter:(unsigned short *)arg2 error:(id *)arg3;
- (id)_parseEscapeSequenceAndReturnError:(id *)arg1;
- (id)_parseHexDigitsAndReturnError:(id *)arg1;
- (id)_parseOctalDigitsAndReturnError:(id *)arg1;
- (void)_unreadCharacter:(unsigned short)arg1;
- (BOOL)_readCharacter:(unsigned short *)arg1 error:(id *)arg2;
- (id)_composeParseError:(long long)arg1 parameters:(id)arg2;
- (id)_composeParseError:(long long)arg1;
- (void)_translateOffset:(unsigned long long)arg1 line:(unsigned long long *)arg2 column:(unsigned long long *)arg3;
- (void)_computeLineStarts;
@property(readonly, nonatomic, getter=isAtEnd) BOOL atEnd;
- (id)init;
- (id)initWithStringToParse:(id)arg1;

@end

