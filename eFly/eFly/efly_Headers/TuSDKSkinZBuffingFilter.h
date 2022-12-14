//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

#import "TuSDKFilterParameterProtocol-Protocol.h"

@class GPUImageSharpenFilter, NSString, TuSDKFilterParameter, TuSDKGaussianBilateralFilter, _TuSDKSkinZBuffingFilter;

@interface TuSDKSkinZBuffingFilter : GPUImageFilterGroup <TuSDKFilterParameterProtocol>
{
    TuSDKGaussianBilateralFilter *_blurFilter;
    _TuSDKSkinZBuffingFilter *_skinFilter;
    GPUImageSharpenFilter *_sharpenFilter;
    TuSDKFilterParameter *_parameter;
    double _blurSize;
    double _intensity;
    double _grinding;
    double _mix;
    double _contrast;
    double _sharpness;
    double _saturation;
    double _shadows;
    double _temperature;
}

@property(nonatomic) double temperature; // @synthesize temperature=_temperature;
@property(nonatomic) double shadows; // @synthesize shadows=_shadows;
@property(nonatomic) double saturation; // @synthesize saturation=_saturation;
@property(nonatomic) double sharpness; // @synthesize sharpness=_sharpness;
@property(nonatomic) double contrast; // @synthesize contrast=_contrast;
@property(nonatomic) double mix; // @synthesize mix=_mix;
@property(nonatomic) double grinding; // @synthesize grinding=_grinding;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
@property(nonatomic) double blurSize; // @synthesize blurSize=_blurSize;
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

