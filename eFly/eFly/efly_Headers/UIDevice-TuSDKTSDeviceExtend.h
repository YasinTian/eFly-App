//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDevice.h>

@interface UIDevice (TuSDKTSDeviceExtend)
+ (unsigned char)lsqCNLanguage;
+ (id)lsqCurrentLanguage;
+ (double)lsqGetRotationByOrient:(long long)arg1;
+ (id)lsqUuid;
+ (double)lsqUsedMemory;
+ (double)lsqSpaceMemory;
+ (unsigned long long)lsqPerformance;
+ (void)lsqLogMemory:(id)arg1;
+ (long long)lsqFileSizeAtPath:(id)arg1;
+ (id)lsqGetWifiIpAddress;
+ (void)lsqOpenAppSettings;
+ (id)lsqAppIdentifier;
+ (id)lsqAppBuild;
+ (id)lsqAppVersion;
+ (id)lsqAppName;
+ (id)lsqLocalizedModel;
+ (id)lsqModel;
+ (id)lsqSystemVersion;
+ (double)lsqSystemFloatVersion;
+ (id)lsqSystemName;
+ (id)lsqName;
- (id)lsqMacaddress;
- (id)lsqFreeDiskSpace;
- (id)lsqTotalDiskSpace;
- (unsigned long long)lsqMaxSocketBufferSize;
- (unsigned long long)lsqSapceMemory;
- (unsigned long long)lsqUserMemory;
- (unsigned long long)lsqTotalMemory;
- (unsigned long long)lsqCpuCount;
- (unsigned long long)lsqBusFrequency;
- (unsigned long long)lsqCpuFrequency;
- (unsigned long long)lsqGetSysInfo:(unsigned int)arg1;
- (id)lsqHwmodel;
- (_Bool)lsqIsDevice:(id)arg1;
- (id)lsqPlatform;
- (id)lsqGetSysInfoByName:(char *)arg1;
@end

