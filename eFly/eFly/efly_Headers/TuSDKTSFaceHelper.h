//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TuSDKTSFaceHelper : NSObject
{
}

+ (int)getOriByGPURotation:(unsigned long long)arg1;
+ (long long)convertGPURotation:(unsigned long long)arg1;
+ (struct CGPoint)rotatePoint:(struct CGPoint)arg1 toOrientation:(unsigned long long)arg2;
+ (void)convertFace:(id)arg1 toOrientation:(unsigned long long)arg2;
+ (struct CGPoint)transforAreaPoint:(struct CGPoint)arg1 rect:(struct CGRect)arg2;
+ (id)transforFace:(id)arg1 rotation:(unsigned long long)arg2;
+ (id)transforFace:(id)arg1 rect:(struct CGRect)arg2 rotation:(unsigned long long)arg3;
+ (id)sortFaces:(id)arg1 withCenter:(struct CGPoint)arg2;
+ (id)transforAVFaces:(id)arg1 rotation:(unsigned long long)arg2;
+ (id)transforFaces:(id)arg1 rect:(struct CGRect)arg2 rotation:(unsigned long long)arg3;
+ (id)featuresImageOptionsWithDevicePosition:(long long)arg1 orien:(long long)arg2;

@end
