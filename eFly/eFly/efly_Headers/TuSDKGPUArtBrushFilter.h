//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

#import "TuSDKFilterParameterProtocol-Protocol.h"
#import "TuSDKFilterTexturesProtocol-Protocol.h"

@class NSString, TuSDKFilterParameter, TuSDKGaussianBlurSevenRadiusFilter, _TuSDKGPUArtBrushFilter;

@interface TuSDKGPUArtBrushFilter : GPUImageFilterGroup <TuSDKFilterParameterProtocol, TuSDKFilterTexturesProtocol>
{
    TuSDKGaussianBlurSevenRadiusFilter *_blurFilter;
    _TuSDKGPUArtBrushFilter *_brushFilter;
    TuSDKFilterParameter *_parameter;
    double _mix;
}

@property(nonatomic) double mix; // @synthesize mix=_mix;
- (void).cxx_destruct;
- (void)submitParameter:(id)arg1;
- (void)submitParameter;
@property(retain, nonatomic) TuSDKFilterParameter *parameter; // @synthesize parameter=_parameter;
- (void)submitFilterArg:(id)arg1;
- (id)configParams:(id)arg1;
- (void)appendTextures:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
