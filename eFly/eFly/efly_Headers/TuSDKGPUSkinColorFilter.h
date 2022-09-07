//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

#import "TuSDKFilterParameterProtocol-Protocol.h"
#import "TuSDKFilterStickerProtocol-Protocol.h"
#import "TuSDKFilterTexturesProtocol-Protocol.h"

@class NSString, TuSDKFilter, TuSDKFilterParameter, TuSDKGPUColorMixedFilter, TuSDKGPUImageFilter, TuSDKGPUSkinColorMixedFilter, TuSDKGPUSurfaceBlurFilter, _TuSDKGPUFaceBeautyFilter;

@interface TuSDKGPUSkinColorFilter : GPUImageFilterGroup <TuSDKFilterParameterProtocol, TuSDKFilterTexturesProtocol, TuSDKFilterStickerProtocol>
{
    TuSDKGPUColorMixedFilter *_colorFilter;
    TuSDKGPUSurfaceBlurFilter *_blurFilter;
    TuSDKFilter *_gaussianFilter;
    TuSDKGPUSkinColorMixedFilter *_skinFilter;
    _TuSDKGPUFaceBeautyFilter *_faceBeautyFilter;
    TuSDKGPUImageFilter *_terminalFilter;
    _Bool _enableFaceBeauty;
    TuSDKFilterParameter *_parameter;
    double _smoothing;
    double _mixed;
    double _blurSize;
    double _thresholdLevel;
    double _lightLevel;
    double _detailLevel;
}

@property(nonatomic) double detailLevel; // @synthesize detailLevel=_detailLevel;
@property(nonatomic) double lightLevel; // @synthesize lightLevel=_lightLevel;
@property(nonatomic) double thresholdLevel; // @synthesize thresholdLevel=_thresholdLevel;
@property(nonatomic) double blurSize; // @synthesize blurSize=_blurSize;
@property(readonly, nonatomic) _Bool enableFaceBeauty; // @synthesize enableFaceBeauty=_enableFaceBeauty;
@property(nonatomic) double mixed; // @synthesize mixed=_mixed;
@property(nonatomic) double smoothing; // @synthesize smoothing=_smoothing;
- (void).cxx_destruct;
- (void)submitParameter:(id)arg1;
- (void)submitParameter;
@property(retain, nonatomic) TuSDKFilterParameter *parameter; // @synthesize parameter=_parameter;
- (void)submitFilterArg:(id)arg1;
- (id)configParams:(id)arg1;
- (void)setStickerShowTime:(CDStruct_1b6d18a9)arg1;
- (void)setAutoplayStickers:(_Bool)arg1;
- (void)setStickerVisibility:(_Bool)arg1;
- (void)setDisplayRect:(struct CGRect)arg1 withRatio:(double)arg2;
- (void)setLiveStickers:(id)arg1;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)updateFaceFeatures:(id)arg1 angle:(float)arg2;
- (void)appendTextures:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

