//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IDECoverage_Device;

@interface _IDECoverageAggregatedDevice : NSObject
{
    id <IDECoverage_Device> _device;
    unsigned long long _aggregatedCoveragePct;
}

@property unsigned long long aggregatedCoveragePct; // @synthesize aggregatedCoveragePct=_aggregatedCoveragePct;
@property(retain) id <IDECoverage_Device> device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)description;

@end
