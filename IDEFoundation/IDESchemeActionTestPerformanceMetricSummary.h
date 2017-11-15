//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface IDESchemeActionTestPerformanceMetricSummary : NSObject
{
    NSString *_identifier;
    NSString *_displayName;
    NSString *_unitOfMeasurement;
    NSArray *_measurements;
    NSString *_baselineName;
    NSNumber *_baselineAverage;
    NSNumber *_maxPercentRegression;
    NSNumber *_maxPercentRelativeStandardDeviation;
    NSNumber *_maxRegression;
    NSNumber *_maxStandardDeviation;
}

+ (id)missingBaselineDescriptionForPerformanceMetricWithName:(id)arg1;
@property(readonly) NSNumber *maxStandardDeviation; // @synthesize maxStandardDeviation=_maxStandardDeviation;
@property(readonly) NSNumber *maxRegression; // @synthesize maxRegression=_maxRegression;
@property(readonly) NSNumber *maxPercentRelativeStandardDeviation; // @synthesize maxPercentRelativeStandardDeviation=_maxPercentRelativeStandardDeviation;
@property(readonly) NSNumber *maxPercentRegression; // @synthesize maxPercentRegression=_maxPercentRegression;
@property(readonly) NSNumber *baselineAverage; // @synthesize baselineAverage=_baselineAverage;
@property(readonly) NSString *baselineName; // @synthesize baselineName=_baselineName;
@property(readonly, copy) NSArray *measurements; // @synthesize measurements=_measurements;
@property(readonly, copy) NSString *unitOfMeasurement; // @synthesize unitOfMeasurement=_unitOfMeasurement;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)isEqualToTestPerformanceMetricSummary:(id)arg1;
@property(readonly) double relativeStandardDeviationOfMeasurements;
@property(readonly) double meanAverageOfMeasurements;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithPerformanceMetricName:(id)arg1 unitOfMeasurement:(id)arg2 measurements:(id)arg3 identifier:(id)arg4 baselineName:(id)arg5 baselineAverage:(id)arg6 maxPercentRegression:(id)arg7 maxPercentRelativeStandardDeviation:(id)arg8 maxRegression:(id)arg9 maxStandardDeviation:(id)arg10;

@end

