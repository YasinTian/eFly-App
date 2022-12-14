//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKFilter.h"

#import "TuSDKFilterParameterProtocol-Protocol.h"

@class NSString, TuSDKFilterParameter;

@interface TuSDKGPULightVignetteFilter : TuSDKFilter <TuSDKFilterParameterProtocol>
{
    int vignetteCenterUniform;
    int vignetteColorUniform;
    int vignetteStartUniform;
    int vignetteEndUniform;
    TuSDKFilterParameter *_parameter;
    double _vignetteStart;
    double _vignetteEnd;
    struct GPUVector3 _vignetteColor;
    struct CGPoint _vignetteCenter;
}

@property(nonatomic) double vignetteEnd; // @synthesize vignetteEnd=_vignetteEnd;
@property(nonatomic) double vignetteStart; // @synthesize vignetteStart=_vignetteStart;
@property(nonatomic) struct GPUVector3 vignetteColor; // @synthesize vignetteColor=_vignetteColor;
@property(nonatomic) struct CGPoint vignetteCenter; // @synthesize vignetteCenter=_vignetteCenter;
- (void).cxx_destruct;
- (void)submitParameter:(id)arg1;
- (void)submitParameter;
@property(retain, nonatomic) TuSDKFilterParameter *parameter; // @synthesize parameter=_parameter;
- (void)submitFilterArg:(id)arg1;
- (id)configParams:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

