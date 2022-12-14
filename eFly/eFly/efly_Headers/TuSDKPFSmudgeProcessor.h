//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKPFSimpleProcessor.h"

@interface TuSDKPFSmudgeProcessor : TuSDKPFSimpleProcessor
{
    struct CGImage *_mosaicImageRef;
}

- (void)destroy;
- (id)getPreviewImage:(_Bool)arg1;
- (void)stampAt:(struct CGPoint)arg1 angle:(double)arg2 scaleFactor:(double)arg3 alphaFactor:(double)arg4;
- (void)drawStampAt:(struct CGPoint)arg1 orientation:(double)arg2 scale:(double)arg3 alpha:(double)arg4;
- (void)mosaicAt:(struct CGPoint)arg1 scaleFactor:(double)arg2;
- (void)eraseAt:(struct CGPoint)arg1 scaleFactor:(double)arg2;
- (void)paintWithClassicMode:(struct CGPoint)arg1 withScale:(float)arg2;
- (void)drawAtPoint:(struct CGPoint)arg1 withOrientation:(float)arg2 withScale:(float)arg3 withAlphaFactor:(float)arg4;
- (void)setCurrentBrush:(id)arg1;
- (struct CGImage *)generateMosaicImage;

@end

