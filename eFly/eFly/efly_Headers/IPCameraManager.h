//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IPCameraManager : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)initWithCamera;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)stopRSSIReport:(CDUnknownBlockType)arg1;
- (void)requestRSSIReport:(CDUnknownBlockType)arg1;
- (void)getLiveUrl:(CDUnknownBlockType)arg1;
- (void)updateRCandOFVersion:(CDUnknownBlockType)arg1;
- (void)gyroCalibration:(CDUnknownBlockType)arg1;
- (void)magnetometerCalibration:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSN:(CDUnknownBlockType)arg1;
- (void)repairVideoFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllFile:(CDUnknownBlockType)arg1;
- (void)deleteFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCurrentMode:(CDUnknownBlockType)arg1;
- (void)getFreeSpace:(CDUnknownBlockType)arg1;
- (void)getVideos:(CDUnknownBlockType)arg1;
- (void)getPhotos:(CDUnknownBlockType)arg1;
- (void)getMedias:(CDUnknownBlockType)arg1;
- (void)updateCameraVersion:(CDUnknownBlockType)arg1;
- (void)getVersion:(CDUnknownBlockType)arg1;
- (void)powerOff:(CDUnknownBlockType)arg1;
- (void)syncTime:(CDUnknownBlockType)arg1;
- (void)syncDate:(CDUnknownBlockType)arg1;
- (void)switchMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getRecordTime:(CDUnknownBlockType)arg1;
- (void)isRecording:(CDUnknownBlockType)arg1;
- (void)stopRecord:(CDUnknownBlockType)arg1;
- (void)startRecord:(CDUnknownBlockType)arg1;
- (void)takePhoto:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)closeCamera;
- (void)initCamera;
- (id)queue;
- (id)init;

@end
