//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKGPUBaseView.h"

@interface TuSDKGPUSmartView : TuSDKGPUBaseView
{
    int aspectRatioUniform;
    int aspectRegionUniform;
    int isVerticalCenterUniform;
    int backgroundColorUniform;
    struct CGRect _displayRect;
}

@property(nonatomic) struct CGRect displayRect; // @synthesize displayRect=_displayRect;
- (void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)recalculateViewGeometry;
- (void)lsqInitView;

@end

