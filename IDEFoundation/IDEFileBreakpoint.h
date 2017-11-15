//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBreakpoint.h>

@class DVTFilePath, DVTTextDocumentLocation, NSString;

@interface IDEFileBreakpoint : IDEBreakpoint
{
    DVTFilePath *_dvtFilePath;
    NSString *_filePath;
    NSString *_timestampString;
    long long _startingColumnNumber;
    long long _endingColumnNumber;
    long long _startingLineNumber;
    long long _endingLineNumber;
    NSString *_characterRangeString;
    NSString *_landmarkName;
    unsigned long long _landmarkType;
    DVTTextDocumentLocation *_location;
}

+ (id)keyPathsForValuesAffectingDisplayName;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (id)propertiesAffectingPersistenceState;
@property unsigned long long landmarkType; // @synthesize landmarkType=_landmarkType;
@property(copy) NSString *landmarkName; // @synthesize landmarkName=_landmarkName;
@property(copy, nonatomic) DVTTextDocumentLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)ideModelObjectTypeIdentifier;
- (id)zeroBasedLocation;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
@property(readonly) NSString *filePathStringForArchiving;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)accessibilityDescription;
- (id)description;
- (void)setLocationFromZeroBasedLocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)displayName;
@property(readonly) BOOL associatedFileExists;
- (void)_createDVTFilePathFromLocationAndWatchIt;
- (void)primitiveInvalidate;
- (id)initWithDocumentTextLocation:(id)arg1;

@end

