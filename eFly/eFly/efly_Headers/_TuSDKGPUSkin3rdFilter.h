//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKTwoInputFilter.h"

@interface _TuSDKGPUSkin3rdFilter : TuSDKTwoInputFilter
{
    int lightLevelUniform;
    int detailLevelUniform;
    int intensityUniform;
    double _lightLevel;
    double _detailLevel;
    double _intensity;
}

@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
@property(nonatomic) double detailLevel; // @synthesize detailLevel=_detailLevel;
@property(nonatomic) double lightLevel; // @synthesize lightLevel=_lightLevel;
- (id)init;

@end

