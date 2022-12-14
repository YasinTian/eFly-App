//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKGPUBaseView.h"

@interface TuSDKGPUVRLeftRightView : TuSDKGPUBaseView
{
    int aspectRatioUniform;
    int asphericUniform;
    int aspectRegionUniform;
    double _radius;
    double _scale;
    struct CGPoint _central;
    struct CGRect _displayRect;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGPoint central; // @synthesize central=_central;
@property(nonatomic) struct CGRect displayRect; // @synthesize displayRect=_displayRect;
- (void)setAspheric;
- (void)recalculateViewGeometry;
- (void)lsqInitView;

@end

