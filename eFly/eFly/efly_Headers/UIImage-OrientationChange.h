//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (OrientationChange)
+ (long long)lsqOrientationWithExif:(unsigned long long)arg1;
+ (long long)lsqOrientation:(long long)arg1 isMirror:(_Bool)arg2;
- (id)lsqTransformRotateWithRotateRadian:(double)arg1;
- (id)lsqChangeMirrorVertical;
- (id)lsqChangeMirrorHorizontal;
- (id)lsqChangeTurnRight;
- (id)lsqChangeTurnLeft;
@end

