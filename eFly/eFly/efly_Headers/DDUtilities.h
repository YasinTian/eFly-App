//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSessionDownloadTask, Reachability;

@interface DDUtilities : NSObject
{
    Reachability *_reach;
    NSURLSessionDownloadTask *_downloadTask;
}

+ (void)showAlertInView:(id)arg1 message:(id)arg2 dismissAfter:(double)arg3 withIconName:(id)arg4 backgroundColor:(id)arg5;
+ (void)showAlertInView:(id)arg1 message:(id)arg2 dismissAfter:(double)arg3 withIconName:(id)arg4;
+ (id)showHUDAddedTo:(id)arg1 mode:(long long)arg2 animated:(_Bool)arg3;
+ (void)hideProgressHUD:(id)arg1;
+ (void)showProgressHUD:(id)arg1 message:(id)arg2;
+ (void)showProgressHUD:(id)arg1 message:(id)arg2 detailsLabelText:(id)arg3;
+ (id)blurEffectForView:(id)arg1 effectWithStyle:(long long)arg2;
+ (void)deleteSandboxGalleryFile:(id)arg1;
+ (_Bool)isFileExist:(id)arg1 ofFilePath:(id)arg2;
+ (id)getFileName:(id)arg1;
+ (id)getThumbnailImage:(id)arg1;
+ (id)getLocalVideosPath;
+ (id)getLocalPhotosPath;
+ (_Bool)needUpdataeVersion:(id)arg1;
+ (long long)getIntegerVersion:(id)arg1;
+ (struct CGSize)getLabelSize:(id)arg1 width:(double)arg2;
+ (id)getAttributedString:(id)arg1 fontSize:(double)arg2;
+ (double)constraint:(double)arg1;
+ (id)stringWithSize:(unsigned long long)arg1;
+ (int)readInt:(unsigned char)arg1 value2:(unsigned char)arg2 value3:(unsigned char)arg3 value4:(unsigned char)arg4;
+ (short)readShort:(unsigned char)arg1 with:(unsigned char)arg2;
+ (int)andOperate:(int)arg1 with:(int)arg2;
+ (void)switchMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestHttpWithURL:(id)arg1 needAuthentication:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (void)requestHttpWithURL:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)requestHttpSynWithURL:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)gotoConnectWifi;
+ (id)getStr3;
+ (id)getStr2;
+ (id)getStr1;
+ (void)checkConectStatusAndNotify;
+ (_Bool)isConnectedDevice;
+ (id)currentWIFISSID;
+ (void)notifyControlButtonClicked;
+ (void)notifyName:(id)arg1 userInfo:(id)arg2;
+ (id)sharedInstance;
@property(nonatomic) __weak NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) Reachability *reach; // @synthesize reach=_reach;
- (void).cxx_destruct;
- (_Bool)isJapanese;
- (_Bool)isChinese;
- (void)clearCatcheWithDisk:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelDownloadFile;
- (void)downloadFileWithURL:(id)arg1 parameters:(id)arg2 savedPath:(id)arg3 downloadSuccess:(CDUnknownBlockType)arg4 downloadFailure:(CDUnknownBlockType)arg5 downloadProgress:(CDUnknownBlockType)arg6;
- (void)stopMotionNetwork;
- (void)reachabilityChanged:(id)arg1;
- (void)motionNetwork;

@end
