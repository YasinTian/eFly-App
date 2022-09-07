//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKGPUImageThreeInputFilter.h"

@interface _TuSDKGPUSkinFilter : TuSDKGPUImageThreeInputFilter
{
    int intensityUniform;
    int temperatureUniform;
    int enableSkinColorDetectionUniform;
    int lightLevelUniform;
    int detailLevelUniform;
    double _intensity;
    double _temperature;
    double _lightLevel;
    double _detailLevel;
}

@property(nonatomic) double detailLevel; // @synthesize detailLevel=_detailLevel;
@property(nonatomic) double lightLevel; // @synthesize lightLevel=_lightLevel;
@property(nonatomic) double temperature; // @synthesize temperature=_temperature;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
- (void)setEnableSkinColorDetection:(double)arg1;
- (id)init;

@end

