//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKTwoInputFilter.h"

@class UIColor;

@interface TuSDKGPUSelectiveCircleFilter : TuSDKTwoInputFilter
{
    int radiusUniform;
    int centerUniform;
    int aspectRatioUniform;
    int excessiveUniform;
    int maskAlphaUniform;
    int maskColorUniform;
    int degreeUniform;
    int selectiveUniform;
    double _radius;
    double _excessive;
    double _maskAlpha;
    UIColor *_maskColor;
    double _degree;
    double _selective;
    double _aspectRatio;
    struct CGPoint _center;
}

@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) double selective; // @synthesize selective=_selective;
@property(nonatomic) double degree; // @synthesize degree=_degree;
@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
@property(nonatomic) double maskAlpha; // @synthesize maskAlpha=_maskAlpha;
@property(nonatomic) double excessive; // @synthesize excessive=_excessive;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (void).cxx_destruct;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)adjustAspectRatio;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)init;

@end

